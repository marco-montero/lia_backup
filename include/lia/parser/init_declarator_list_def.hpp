/****************************************************************************
 *   init_declarator_list_def.hpp    Wed Apr  05, 2017 11:49 AM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_INIT_DECLARATOR_LIST_DEF_HPP)
#define LIA_PARSER_CLIENT_INIT_DECLARATOR_LIST_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "init_declarator_list.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
init_declarator_list<Iterator>::init_declarator_list() :
  init_declarator_list::base_type(init_declarator_list_)
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

  init_declarator_list_ =
    string_("init_declarator_list")
    ;

  init_declarator_list_.name("init_declarator_list");

  debug(init_declarator_list_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_INIT_DECLARATOR_LIST_DEF_HPP
