/****************************************************************************
 *   translation_unit_def.hpp   Thu Jan  02, 2017 11:00 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TRANSLATION_UNIT_DEF_HPP)
#define LIA_PARSER_CLIENT_TRANSLATION_UNIT_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "translation_unit.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
translation_unit<Iterator>::translation_unit() :
  translation_unit::base_type(translation_unit_)
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

  translation_unit_ =
    *declaration_seq_
    ;

  declaration_seq_ =
    declaration_ >> *(declaration_)
    ;

  translation_unit_.name("translation_unit");
  declaration_seq_.name("declaration_seq");

  debug(translation_unit_);
  debug(declaration_seq_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TRANSLATION_UNIT_DEF_HPP
