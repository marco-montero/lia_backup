/****************************************************************************
 *   constant_expression_def.hpp    Sun May  14, 2017 04:56 PM              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_DEF_HPP)
#define LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "constant_expression.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
constant_expression<Iterator>::constant_expression() :
  constant_expression::base_type(constant_expression_)
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

  constant_expression_ =
    string_("constant_expression")
    ;

  constant_expression_.name("constant_expression");

  debug(constant_expression_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_DEF_HPP
