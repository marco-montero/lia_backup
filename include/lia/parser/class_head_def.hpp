/****************************************************************************
 *   class_head_def.hpp    Wed May  24, 2017 11:30 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_HEAD_DEF_HPP)
#define LIA_PARSER_CLIENT_CLASS_HEAD_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "class_head.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
class_head<Iterator>::class_head() :
  class_head::base_type(class_head_)
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

  class_head_ =
    string_("class_head")
    ;

  class_head_.name("class_head");

  debug(class_head_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_HEAD_DEF_HPP
