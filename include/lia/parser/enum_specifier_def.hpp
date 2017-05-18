/****************************************************************************
 *   enum_specifier_def.hpp    Wed May  17, 2017 10:28 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ENUM_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_ENUM_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "enum_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
enum_specifier<Iterator>::enum_specifier() :
  enum_specifier::base_type(enum_specifier_)
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

  enum_specifier_ =
    string_("enum_specifier")
    ;

  enum_specifier_.name("enum_specifier");

  debug(enum_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ENUM_SPECIFIER_DEF_HPP
