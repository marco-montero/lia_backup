/****************************************************************************
 *   static__assert_def.hpp    Sun May  14, 2017 04:39 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STATIC__ASSERT_DEF_HPP)
#define LIA_PARSER_CLIENT_STATIC__ASSERT_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "static__assert.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
static__assert<Iterator>::static__assert() :
  static__assert::base_type(static__assert_)
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

  static__assert_ =
    string_("static_assert")
    ;

  static__assert_.name("static_assert");

  debug(static__assert_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_STATIC__ASSERT_DEF_HPP
