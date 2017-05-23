/****************************************************************************
 *   virt_specifier_seq_def.hpp    Mon May  22, 2017 10:04 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_VIRT_SPECIFIER_SEQ_DEF_HPP)
#define LIA_PARSER_CLIENT_VIRT_SPECIFIER_SEQ_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "virt_specifier_seq.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
virt_specifier_seq<Iterator>::virt_specifier_seq() :
  virt_specifier_seq::base_type(virt_specifier_seq_)
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

  virt_specifier_seq_ =
    string_("virt_specifier_seq")
    ;

  virt_specifier_seq_.name("virt_specifier_seq");

  debug(virt_specifier_seq_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_VIRT_SPECIFIER_SEQ_DEF_HPP
