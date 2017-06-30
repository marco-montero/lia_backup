/****************************************************************************
 *   relational_expression_def.hpp    Tue Jun  27, 2017 11:07 PM            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_RELATIONAL_EXPRESSION_DEF_HPP)
#define LIA_PARSER_CLIENT_RELATIONAL_EXPRESSION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "relational_expression.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
relational_expression<Iterator>::relational_expression() :
  relational_expression::base_type(relational_expression_)
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

  relational_expression_ =
    string_("relational_expression")
    ;

  relational_expression_.name("relational_expression");

  debug(relational_expression_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_RELATIONAL_EXPRESSION_DEF_HPP
