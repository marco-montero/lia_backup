/****************************************************************************
 *   operator_key_def.hpp    Sun Jun  18, 2017 06:22 PM                     *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_OPERATOR_KEY_DEF_HPP)
#define LIA_PARSER_CLIENT_OPERATOR_KEY_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "operator_key.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
operator_key<Iterator>::operator_key() :
  operator_key::base_type(operator_key_)
{
  qi::char_type char_;
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  operator_key_ =
    new_operator_
    | delete_operator_
    | string_("+=")
    | string_("-=")
    | string_("*=")
    | string_("/=")
    | string_("%=")
    | string_("^=")
    | string_("&=")
    | string_("|=")
    | string_("<<")
    | string_(">>")
    | string_(">>=")
    | string_("<<=")
    | string_("==")
    | string_("!=")
    | string_("<=")
    | string_(">=")
    | string_("&&")
    | string_("||")
    | string_("++")
    | string_("--")
    | string_("->*")
    | string_("->")
    | string_("()")
    | string_("[]")
    | char_('+')
    | char_('-')
    | char_('*')
    | char_('/')
    | char_('%')
    | char_('^')
    | char_('&')
    | char_('|')
    | char_('~')
    | char_('!')
    | char_('=')
    | char_('<')
    | char_('>')
    | char_(',')
    ;

  operator_key_.name("operator_key");

  debug(operator_key_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_OPERATOR_KEY_DEF_HPP
