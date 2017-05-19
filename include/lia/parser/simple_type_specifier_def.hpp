/****************************************************************************
 *   simple_type_specifier_def.hpp    Thu May  18, 2017 08:12 PM            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_SIMPLE_TYPE_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_SIMPLE_TYPE_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "simple_type_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
simple_type_specifier<Iterator>::simple_type_specifier() :
  simple_type_specifier::base_type(simple_type_specifier_)
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

  simple_type_specifier_ =
    string_("simple_type_specifier")
    ;

  simple_type_specifier_.name("simple_type_specifier");

  debug(simple_type_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_SIMPLE_TYPE_SPECIFIER_DEF_HPP
