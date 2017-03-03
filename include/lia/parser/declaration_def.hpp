/****************************************************************************
 *   declaration_def.hpp        Thu Mar  02, 2017 11:41 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
declaration<Iterator>::declaration() :
  declaration::base_type(declaration_)
{
  qi::char_type char_;
  qi::eps_type eps_;
  qi::alpha_type alpha_;
  qi::digit_type digit_;
  qi::lexeme_type lexeme_;
  qi::raw_type raw_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  declaration_ =
    function_definition_
    | char_
    ;

  function_definition_ =
    -attribute_specifier_seq_ >> -decl_specifier_seq_ >> declarator_ >>
    -virt_specifier_seq_ >> function_body_
    ;

  attribute_specifier_seq_ =
    attribute_specifier_ >> *(attribute_specifier_)
    ;

  attribute_specifier_ =
    char_("[") >> "[" >> attribute_list_ >> "]" >> "]"
    | alignment_specifier_
    ;

  attribute_list_ =
    -attribute_
    | attribute_ >> *("," >> *attribute_)
    | attribute_ >> "..."
    | attribute_ >> *("," >> attribute_ >> "...")
    ;

  attribute_ =
    attribute_token_ >> -attribute_argument_clause_
    ;

  attribute_token_ =
    identifier_
    | attribute_scoped_token_
    ;

  attribute_scoped_token_ =
    attribute_namespace_ >> "::" >> identifier_
    ;

  attribute_namespace_ =
    identifier_
    ;

  attribute_argument_clause_ =
    char_("(") >> balanced_token_seq_ >> ")"
    ;

  balanced_token_seq_ =
    balanced_token_ >> *(balanced_token_)
    ;

  balanced_token_ =
    char_("(") >> balanced_token_seq_ >> ")"
    | char_("[") >> balanced_token_seq_ >> "]"
    | char_("{") >> balanced_token_seq_ >> "}"
    | token_
    ;

  token_ =
    identifier_
    | keyword_
    | literal_
    | operator_
    | punctuator_
    ;

  identifier_ =
    identifier_nondigit_ >> *(identifier_nondigit_ | digit_)
    ;

  identifier_nondigit_ =
    nondigit_
    | universal_character_name_
    ;

  nondigit_ =
    raw_[lexeme_[(alpha_ | '_')]]
    ;

  digit_ =
    raw_[lexeme_[digit_]]
    ;

  keyword_ =
    *char_
    ;

  literal_ =
    *char_
    ;

  operator_ =
    char_("new")
    | char_("delete")
    | char_("new[]")
    | char_("delete")
    | char_("+")
    | char_("-")
    | char_("*")
    | char_("%")
    | char_("^")
    | char_("&")
    | char_("|")
    | char_("~")
    | char_("!")
    | char_("=")
    | char_("<")
    | char_(">")
    | char_("+=")
    | char_("-=")
    | char_("*=")
    | char_("/=")
    | char_("%=")
    | char_("^=")
    | char_("&=")
    | char_("|=")
    | char_("<<")
    | char_(">>")
    | char_(">>=")
    | char_("<<=")
    | char_("==")
    | char_("!=")
    | char_("<=")
    | char_(">=")
    | char_("&&")
    | char_("||")
    | char_("++")
    | char_("--")
    | char_(",")
    | char_("->*")
    | char_("->")
    | char_("()")
    | char_("[]")
    ;

  punctuator_ =
    *char_
    ;

  declaration_.name("declaration");

  debug(declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLARATION_DEF_HPP
