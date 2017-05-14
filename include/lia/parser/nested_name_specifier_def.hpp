/****************************************************************************
 *   nested_name_specifier_def.hpp    Sun May  14, 2017 12:09 PM            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "nested_name_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
nested_name_specifier<Iterator>::nested_name_specifier() :
  nested_name_specifier::base_type(nested_name_specifier_)
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

  nested_name_specifier_ =
    string_("nested_name_specifier")
    ;

  nested_name_specifier_.name("nested_name_specifier");

  debug(nested_name_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_DEF_HPP
