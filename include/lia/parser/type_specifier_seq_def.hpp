/****************************************************************************
 *   type_specifier_seq_def.hpp    Sun May  14, 2017 07:03 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_SPECIFIER_SEQ_DEF_HPP)
#define LIA_PARSER_CLIENT_TYPE_SPECIFIER_SEQ_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "type_specifier_seq.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
type_specifier_seq<Iterator>::type_specifier_seq() :
  type_specifier_seq::base_type(type_specifier_seq_)
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

  type_specifier_seq_ =
    string_("type_specifier_seq")
    ;

  type_specifier_seq_.name("type_specifier_seq");

  debug(type_specifier_seq_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_SPECIFIER_SEQ_DEF_HPP
