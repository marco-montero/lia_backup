/****************************************************************************
 *   declarator_def.hpp    Mon May  22, 2017 09:50 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECLARATOR_DEF_HPP)
#define LIA_PARSER_CLIENT_DECLARATOR_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "declarator.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
declarator<Iterator>::declarator() :
  declarator::base_type(declarator_)
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

  declarator_ =
    string_("declarator")
    ;

  declarator_.name("declarator");

  debug(declarator_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLARATOR_DEF_HPP
