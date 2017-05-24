/****************************************************************************
 *   class_key_def.hpp    Tue May  23, 2017 11:07 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_KEY_DEF_HPP)
#define LIA_PARSER_CLIENT_CLASS_KEY_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "class_key.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
class_key<Iterator>::class_key() :
  class_key::base_type(class_key_)
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

  class_key_ =
    string_("class_key")
    ;

  class_key_.name("class_key");

  debug(class_key_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_KEY_DEF_HPP
