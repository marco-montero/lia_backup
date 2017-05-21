/****************************************************************************
 *   class_name_def.hpp    Sun May  21, 2017 12:27 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_NAME_DEF_HPP)
#define LIA_PARSER_CLIENT_CLASS_NAME_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "class_name.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
class_name<Iterator>::class_name() :
  class_name::base_type(class_name_)
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

  class_name_ =
    identifier_
    | simple_template_id_
    ;

  class_name_.name("class_name");

  debug(class_name_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_NAME_DEF_HPP
