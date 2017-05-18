/****************************************************************************
 *   class_specifier_def.hpp    Wed May  17, 2017 10:23 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_CLASS_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "class_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
class_specifier<Iterator>::class_specifier() :
  class_specifier::base_type(class_specifier_)
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

  class_specifier_ =
    string_("class_specifier")
    ;

  class_specifier_.name("class_specifier");

  debug(class_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_SPECIFIER_DEF_HPP
