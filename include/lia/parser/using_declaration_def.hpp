/****************************************************************************
 *   using_declaration_def.hpp    Mon Apr  03, 2017 10:47 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_USING_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_USING_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "using_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
using_declaration<Iterator>::using_declaration() :
  using_declaration::base_type(using_declaration_)
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

  using_declaration_ =
    string_("using") >> using_declaration_cont_
    ;

  using_declaration_cont_ =
    -string_("typename") >> nested_name_specifier_ >> unqualified_id_ >> char_(';')
    | string_("::") >> unqualified_id_ >> char_(';')
    ;

  using_declaration_.name("using_declaration");

  debug(using_declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_USING_DECLARATION_DEF_HPP
