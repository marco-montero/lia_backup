/****************************************************************************
 *   identifier_def.hpp    Wed Apr  05, 2017 03:43 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_IDENTIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_IDENTIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "identifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
identifier<Iterator>::identifier() :
  identifier::base_type(identifier_)
{
  qi::alpha_type alpha_;
  qi::alnum_type alnum_;
  qi::lexeme_type lexeme_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  identifier_ =
    lexeme_[(alpha_ | '_' | '$') >> *(alnum_ | '_' | '$')]
    ;

  identifier_.name("identifier");

  debug(identifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_IDENTIFIER_DEF_HPP
