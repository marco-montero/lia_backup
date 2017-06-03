/****************************************************************************
 *   unnamed_namespace_definition_def.hpp    Sat Jun  03, 2017 03:30 PM     *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_UNNAMED_NAMESPACE_DEFINITION_DEF_HPP)
#define LIA_PARSER_CLIENT_UNNAMED_NAMESPACE_DEFINITION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "unnamed_namespace_definition.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
unnamed_namespace_definition<Iterator>::unnamed_namespace_definition() :
  unnamed_namespace_definition::base_type(unnamed_namespace_definition_)
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

  unnamed_namespace_definition_ =
    string_("unnamed_namespace_definition")
    ;

  unnamed_namespace_definition_.name("unnamed_namespace_definition");

  debug(unnamed_namespace_definition_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_UNNAMED_NAMESPACE_DEFINITION_DEF_HPP
