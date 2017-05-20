/****************************************************************************
 *   expression_def.hpp    Thu May  18, 2017 09:51 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_EXPRESSION_DEF_HPP)
#define LIA_PARSER_CLIENT_EXPRESSION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "expression.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
expression<Iterator>::expression() :
  expression::base_type(expression_)
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

  expression_ =
    string_("expression")
    ;

  expression_.name("expression");

  debug(expression_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_EXPRESSION_DEF_HPP
