/****************************************************************************
 *   using_directive_def.hpp    Mon Apr  03, 2017 10:50 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_USING_DIRECTIVE_DEF_HPP)
#define LIA_PARSER_CLIENT_USING_DIRECTIVE_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "using_directive.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
using_directive<Iterator>::using_directive() :
  using_directive::base_type(using_directive_)
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

  using_directive_ =
    -attribute_specifier_seq_ >> string_("using") >> -string_("typename") >> -nested_name_specifier_ 
    >> namespace_name_ >> char_(';')
    ;

  using_directive_.name("using_directive");

  debug(using_directive_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_USING_DIRECTIVE_DEF_HPP
