/****************************************************************************
 *   trailing_type_specifier_def.hpp    Wed May  17, 2017 10:00 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TRAILING_TYPE_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_TRAILING_TYPE_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "trailing_type_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
trailing_type_specifier<Iterator>::trailing_type_specifier() :
  trailing_type_specifier::base_type(trailing_type_specifier_)
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

  trailing_type_specifier_ =
    simple_type_specifier_
    | elaborated_type_specifier_
    | typename_specifier_
    | cv_qualifier_
    ;

  trailing_type_specifier_.name("trailing_type_specifier");

  debug(trailing_type_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TRAILING_TYPE_SPECIFIER_DEF_HPP
