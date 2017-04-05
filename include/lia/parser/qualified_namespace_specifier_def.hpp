/****************************************************************************
 *   qualified_namespace_specifier_def.hpp    Wed Apr  05, 2017 03:49 PM    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_QUALIFIED_NAMESPACE_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_QUALIFIED_NAMESPACE_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "qualified_namespace_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
qualified_namespace_specifier<Iterator>::qualified_namespace_specifier() :
  qualified_namespace_specifier::base_type(qualified_namespace_specifier_)
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

  qualified_namespace_specifier_ =
    string_("qualified_namespace_specifier")
    ;

  qualified_namespace_specifier_.name("qualified_namespace_specifier");

  debug(qualified_namespace_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_QUALIFIED_NAMESPACE_SPECIFIER_DEF_HPP
