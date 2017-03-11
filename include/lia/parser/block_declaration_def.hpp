/****************************************************************************
 *   block_declaration_def.hpp  Sat Mar  04, 2017 09:20 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_BLOCK_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_BLOCK_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "block_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
block_declaration<Iterator>::block_declaration() :
  block_declaration::base_type(block_declaration_)
{
  qi::char_type char_;
  qi::eps_type eps_;
  qi::alpha_type alpha_;
  qi::digit_type digit_;
  qi::lexeme_type lexeme_;
  qi::raw_type raw_;
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  block_declaration_ =
    *asm_definition_
    ;

  asm_definition_ =
    alpha_
    | digit_
    ;


    /*    string_("asm") >> "(" >> string_literal_ >> ")" >> ";"
    ;

  string_literal_ =
    !encoding_prefix_ >> string_literal_cont_
    ;

  string_literal_cont_ =
    char_('"') >> !s_char_sequence_ >> '"'
    | char_('R') >> raw_string_
    ;

  encoding_prefix_ =
    string_("u8")
    | char_("u")
    | char_("U")
    | char_("L")
    ;

  s_char_sequence_ =
    +char_
    ;

  raw_string_ =
    +char_
    ;
    */
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_BLOCK_DECLARATION_DEF_HPP
