/****************************************************************************
 *   storage_class_specifier_def.hpp    Tue Jun  13, 2017 08:55 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STORAGE_CLASS_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_STORAGE_CLASS_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "storage_class_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
storage_class_specifier<Iterator>::storage_class_specifier() :
  storage_class_specifier::base_type(storage_class_specifier_)
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

  storage_class_specifier_ =
    string_("storage_class_specifier")
    ;

  storage_class_specifier_.name("storage_class_specifier");

  debug(storage_class_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_STORAGE_CLASS_SPECIFIER_DEF_HPP
