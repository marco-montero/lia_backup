/****************************************************************************
 *   decl_specifier_seq_def.hpp    Sat Mar  11, 2017 04:29 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_DEF_HPP)
#define LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "decl_specifier_seq.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
decl_specifier_seq<Iterator>::decl_specifier_seq() :
  decl_specifier_seq::base_type(decl_specifier_seq_)
{
  qi::char_type char_;
  qi::eps_type eps_;
  qi::alpha_type alpha_;
  qi::digit_type digit_;
  qi::lexeme_type lexeme_;
  qi::raw_type raw_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  decl_specifier_seq_ =
    decl_specifier_ >> decl_specifier_cont_
    ;

  decl_specifier_ = 

  decl_specifier_seq_.name("decl_specifier_seq");

  debug(decl_specifier_seq_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_DEF_HPP
