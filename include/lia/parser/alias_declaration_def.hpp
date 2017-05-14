/****************************************************************************
 *   alias_declaration_def.hpp    Mon Apr  03, 2017 10:02 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ALIAS_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_ALIAS_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "alias_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
alias_declaration<Iterator>::alias_declaration() :
  alias_declaration::base_type(alias_declaration_)
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

  alias_declaration_ =
    string_("using") >> identifier_ >> -attribute_specifier_seq_ >> char_('=') >> type_id_ >> char_(';')
    ;

  alias_declaration_.name("alias_declaration");

  debug(alias_declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_ALIAS_DECLARATION_DEF_HPP
