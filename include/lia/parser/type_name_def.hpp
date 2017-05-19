/****************************************************************************
 *   type_name_def.hpp    Thu May  18, 2017 09:31 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_NAME_DEF_HPP)
#define LIA_PARSER_CLIENT_TYPE_NAME_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "type_name.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
type_name<Iterator>::type_name() :
  type_name::base_type(type_name_)
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

  type_name_ =
    string_("type_name")
    ;

  type_name_.name("type_name");

  debug(type_name_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_NAME_DEF_HPP
