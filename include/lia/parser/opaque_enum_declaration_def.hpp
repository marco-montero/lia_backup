/****************************************************************************
 *   opaque_enum_declaration_def.hpp    Mon Apr  03, 2017 10:38 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "opaque_enum_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
opaque_enum_declaration<Iterator>::opaque_enum_declaration() :
  opaque_enum_declaration::base_type(opaque_enum_declaration_)
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

  opaque_enum_declaration_ =
    enum_key_ >> -attribute_specifier_seq_ >> identifier_ >> -enum_base_
    ;

  enum_base_ =
    char_(':') >> type_specifier_seq_
    ;

  opaque_enum_declaration_.name("opaque_enum_declaration");

  debug(opaque_enum_declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_DEF_HPP
