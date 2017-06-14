/****************************************************************************
 *   attribute_specifier_def.hpp    Sun Jun  04, 2017 02:42 PM              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ATTRIBUTE_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_ATTRIBUTE_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "attribute_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
attribute_specifier<Iterator>::attribute_specifier() :
  attribute_specifier::base_type(attribute_specifier_)
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

  attribute_specifier_ =
    string_("const")
    | string_("volatile")
    ;

  attribute_specifier_.name("attribute_specifier");

  debug(attribute_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ATTRIBUTE_SPECIFIER_DEF_HPP
