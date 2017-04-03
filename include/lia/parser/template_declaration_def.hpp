/****************************************************************************
 *   template_declaration_def.hpp     Sun Apr  02, 2017 10:57 PM            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_TEMPLATE_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "template_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
template_declaration<Iterator>::template_declaration() :
  template_declaration::base_type(template_declaration_)
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

  template_declaration_ =
    string_("template_declaration")
    ;
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_DECLARATION_DEF_HPP
