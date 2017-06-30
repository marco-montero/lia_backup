/****************************************************************************
 *   constant_expression_def.hpp    Sun May  14, 2017 04:56 PM              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_DEF_HPP)
#define LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "constant_expression.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
constant_expression<Iterator>::constant_expression() :
  constant_expression::base_type(constant_expression_)
{
  qi::char_type char_;
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  constant_expression_ =
    logical_or_expression_ >> *(char_('?') >> expression_
    >> char_(':') >> assignment_expression_)
    ;

  logical_or_expression_ =
    logical_and_expression_ >> *(string_("||") >> logical_and_expression_)
    ;

  logical_and_expression_ =
    inclusive_or_expression_ >> *(string_("&&") >> inclusive_or_expression_)
    ;

  inclusive_or_expression_ =
    exclusive_or_expression_ >> *(char_('|') >> exclusive_or_expression_)
    ;

  exclusive_or_expression_ =
    and_expression_ >> *(char_('^') >> and_expression_)
    ;

  and_expression_ =
    equality_expression_ >> *(char_('&') >> equality_expression_)
    ;

  equality_expression_ =
    relational_expression_ >> equality_expression_helper_
    ;

  equality_expression_helper_ =
    string_("==") >> relational_expression_
    | string_("!=") >> relational_expression_
    ;

  assignment_expression_ =
    constant_expression_
    | logical_or_expression_ >> assignment_operator_ >> initializer_clause_
    | throw_expression_
    ;

  assignment_operator_ =
    char_('=')
    | string_("*=")
    | string_("/=")
    | string_("%=")
    | string_("+=")
    | string_("-=")
    | string_(">>=")
    | string_("<<=")
    | string_("&=")
    | string_("^=")
    | string_("|=")
    ;

  initializer_clause_ =
    assignment_expression_
    | braced_init_list_
    ;

  braced_init_list_ =
    char_('{') >> -(initializer_list_ >> -char_(',')) >> char_('}')
    ;

  initializer_list_ =
    initializer_clause_ >> -string_("...") >> *(char_(',') >> initializer_clause_ >> -string_("..."))
    ;

  throw_expression_ =
    string_("throw") >> assignment_expression_
    ;

  constant_expression_.name("constant_expression");

  debug(constant_expression_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_DEF_HPP
