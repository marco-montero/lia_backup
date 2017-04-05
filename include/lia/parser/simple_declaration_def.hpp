/****************************************************************************
 *   simple_declaration_def.hpp    Sat Mar  11, 2017 02:53 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_SIMPLE_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_SIMPLE_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "simple_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
simple_declaration<Iterator>::simple_declaration() :
  simple_declaration::base_type(simple_declaration_)
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

  simple_declaration_ =
    !decl_specifier_seq_ >> init_declarator_list_ >> char_(';')
    | attribute_specifier_seq_ >> !decl_specifier_seq_ >> init_declarator_list_ >> char_(';')
    ;

  simple_declaration_.name("simple_declaration");

  debug(simple_declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_SIMPLE_DECLARATION_DEF_HPP
