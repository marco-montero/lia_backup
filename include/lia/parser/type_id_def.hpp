/****************************************************************************
 *   type_id_def.hpp    Sun May  14, 2017 06:18 PM                          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_ID_DEF_HPP)
#define LIA_PARSER_CLIENT_TYPE_ID_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "type_id.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
type_id<Iterator>::type_id() :
  type_id::base_type(type_id_)
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

  type_id_ =
    string_("type_id")
    ;

  type_id_.name("type_id");

  debug(type_id_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_ID_DEF_HPP
