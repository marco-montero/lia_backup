/****************************************************************************
 *   enum_key_def.hpp    Sun May  14, 2017 06:45 PM                         *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ENUM_KEY_DEF_HPP)
#define LIA_PARSER_CLIENT_ENUM_KEY_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "enum_key.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
enum_key<Iterator>::enum_key() :
  enum_key::base_type(enum_key_)
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

  enum_key_ =
    string_("enum") >> -enum_key_cont_
    ;

  enum_key_cont_ =
    string_("class")
    | string_("struct")
    ;

  enum_key_.name("enum_key");

  debug(enum_key_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ENUM_KEY_DEF_HPP
