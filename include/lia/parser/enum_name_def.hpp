/****************************************************************************
 *   enum_name_def.hpp    Sun May  21, 2017 12:33 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ENUM_NAME_DEF_HPP)
#define LIA_PARSER_CLIENT_ENUM_NAME_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "enum_name.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
enum_name<Iterator>::enum_name() :
  enum_name::base_type(enum_name_)
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

  enum_name_ =
    identifier_
    ;

  enum_name_.name("enum_name");

  debug(enum_name_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ENUM_NAME_DEF_HPP
