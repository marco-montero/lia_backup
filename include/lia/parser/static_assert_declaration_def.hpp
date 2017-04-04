/****************************************************************************
 *   static_assert_declaration_def.hpp    Mon Apr  03, 2017 10:41 PM        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STATIC_ASSERT_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_STATIC_ASSERT_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "static_assert_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
static_assert_declaration<Iterator>::static_assert_declaration() :
  static_assert_declaration::base_type(static_assert_declaration_)
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

  static_assert_declaration_ =
    string_("static_assert_declaration")
    ;

  static_assert_declaration_.name("static_assert_declaration");

  debug(static_assert_declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_STATIC_ASSERT_DECLARATION_DEF_HPP
