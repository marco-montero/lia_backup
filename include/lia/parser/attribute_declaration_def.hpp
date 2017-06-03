/****************************************************************************
 *   attribute_declaration_def.hpp     Sun Apr  02, 2017 11:13 PM           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ATTRIBUTE_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_ATTRIBUTE_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "attribute_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
attribute_declaration<Iterator>::attribute_declaration() :
  attribute_declaration::base_type(attribute_declaration_)
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

  attribute_declaration_ =
    attribute_specifier_seq_ >> char_(';')
    ;
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ATTRIBUTE_DECLARATION_DEF_HPP
