/****************************************************************************
 *   id_expression_def.hpp    Mon Jun  26, 2017 04:10 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ID_EXPRESSION_DEF_HPP)
#define LIA_PARSER_CLIENT_ID_EXPRESSION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "id_expression.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
id_expression<Iterator>::id_expression() :
  id_expression::base_type(id_expression_)
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

  id_expression_ =
    string_("id_expression")
    ;

  id_expression_.name("id_expression");

  debug(id_expression_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ID_EXPRESSION_DEF_HPP
