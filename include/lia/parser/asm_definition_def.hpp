/****************************************************************************
 *   asm_definition_def.hpp     Sat Mar  11, 2017 02:32 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ASM_DEFINITION_DEF_HPP)
#define LIA_PARSER_CLIENT_ASM_DEFINITION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "asm_definition.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
asm_definition<Iterator>::asm_definition() :
  asm_definition::base_type(asm_definition_)
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

  asm_definition_ =
    string_("asm") >> "(" >> string_literal_ >> ")"
    ;
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ASM_DEFINITION_DEF_HPP
