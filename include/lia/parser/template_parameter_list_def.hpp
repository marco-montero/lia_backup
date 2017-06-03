/****************************************************************************
 *   template_parameter_list_def.hpp    Thu May  25, 2017 11:00 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_PARAMETER_LIST_DEF_HPP)
#define LIA_PARSER_CLIENT_TEMPLATE_PARAMETER_LIST_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "template_parameter_list.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
template_parameter_list<Iterator>::template_parameter_list() :
  template_parameter_list::base_type(template_parameter_list_)
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

  template_parameter_list_ =
    string_("template_parameter_list")
    ;

  template_parameter_list_.name("template_parameter_list");

  debug(template_parameter_list_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_PARAMETER_LIST_DEF_HPP
