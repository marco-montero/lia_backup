/****************************************************************************
 *   namespace_definition_def.hpp     Mon Apr  03, 2017 07:55 PM            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NAMESPACE_DEFINITION_DEF_HPP)
#define LIA_PARSER_CLIENT_NAMESPACE_DEFINITION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "namespace_definition.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
namespace_definition<Iterator>::namespace_definition() :
  namespace_definition::base_type(namespace_definition_)
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

  namespace_definition_ =
    named_namespace_definition_
    | unnamed_namespace_definition_
    ;

  namespace_definition_.name("namespace_definition");

  debug(namespace_definition_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_NAMESPACE_DEFINITION_DEF_HPP
