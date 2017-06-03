/****************************************************************************
 *   explicit_specialization_def.hpp     Sun Apr  02, 2017 11:24 PM         *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_EXPLICIT_SPECIALIZATION_DEF_HPP)
#define LIA_PARSER_CLIENT_EXPLICIT_SPECIALIZATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "explicit_specialization.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
explicit_specialization<Iterator>::explicit_specialization(declaration<Iterator> *d) :
  explicit_specialization::base_type(explicit_specialization_),
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

  explicit_specialization_ =
    string_("template") >> char_('<') >> char_('>') >> (*declaration_)
    ;

  explicit_specialization_.name("explicit_specialization");

  debug(explicit_specialization_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_EXPLICIT_SPECIALIZATION_DEF_HPP
