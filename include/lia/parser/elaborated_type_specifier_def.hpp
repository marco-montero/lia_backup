/****************************************************************************
 *   elaborated_type_specifier_def.hpp    Thu May  18, 2017 08:17 PM        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ELABORATED_TYPE_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_ELABORATED_TYPE_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "elaborated_type_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
elaborated_type_specifier<Iterator>::elaborated_type_specifier() :
  elaborated_type_specifier::base_type(elaborated_type_specifier_)
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

  elaborated_type_specifier_ =
    string_("elaborated_type_specifier")
    ;

  elaborated_type_specifier_.name("elaborated_type_specifier");

  debug(elaborated_type_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ELABORATED_TYPE_SPECIFIER_DEF_HPP
