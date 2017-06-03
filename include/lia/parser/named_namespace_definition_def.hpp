/****************************************************************************
 *   named_namespace_definition_def.hpp    Sat Jun  03, 2017 03:25 PM       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NAMED_NAMESPACE_DEFINITION_DEF_HPP)
#define LIA_PARSER_CLIENT_NAMED_NAMESPACE_DEFINITION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "named_namespace_definition.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
named_namespace_definition<Iterator>::named_namespace_definition() :
  named_namespace_definition::base_type(named_namespace_definition_)
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

  named_namespace_definition_ =
    string_("const")
    | string_("volatile")
    ;

  named_namespace_definition_.name("named_namespace_definition");

  debug(named_namespace_definition_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_NAMED_NAMESPACE_DEFINITION_DEF_HPP
