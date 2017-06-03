/****************************************************************************
 *   explicit_instantiation_def.hpp     Sun Apr  02, 2017 11:06 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_EXPLICIT_INSTANTIATION_DEF_HPP)
#define LIA_PARSER_CLIENT_EXPLICIT_INSTANTIATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "explicit_instantiation.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
explicit_instantiation<Iterator>::explicit_instantiation(declaration<Iterator> *d) :
  explicit_instantiation::base_type(explicit_instantiation_),
  declaration_(d)
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

  explicit_instantiation_ =
    -string_("extern") >> string_("template") >> (*declaration_)
    ;

  explicit_instantiation_.name("explicit_instantiation");

  debug(explicit_instantiation_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_EXPLICIT_INSTANTIATION_DEF_HPP
