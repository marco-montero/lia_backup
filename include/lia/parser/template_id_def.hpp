/****************************************************************************
 *   template_id_def.hpp    Tue Jun  20, 2017 11:25 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_ID_DEF_HPP)
#define LIA_PARSER_CLIENT_TEMPLATE_ID_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "template_id.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
template_id<Iterator>::template_id() :
  template_id::base_type(template_id_)
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

  template_id_ =
    string_("template_id")
    ;

  template_id_.name("template_id");

  debug(template_id_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_ID_DEF_HPP
