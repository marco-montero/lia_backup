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

  translation_unit_ =
    *declaration_seq_
    ;

  declaration_seq_ =
    declaration_ >> *(declaration_)
    ;

  declaration_ =
    char_
    ;
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TRANSLATION_UNIT_DEF_HPP
