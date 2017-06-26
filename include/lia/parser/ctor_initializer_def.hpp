/****************************************************************************
 *   ctor_initializer_def.hpp    Thu Jun  22, 2017 11:56 PM                 *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CTOR_INITIALIZER_DEF_HPP)
#define LIA_PARSER_CLIENT_CTOR_INITIALIZER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "ctor_initializer.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
ctor_initializer<Iterator>::ctor_initializer() :
  ctor_initializer::base_type(ctor_initializer_)
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

  ctor_initializer_ =
    string_("ctor_initializer")
    ;

  ctor_initializer_.name("ctor_initializer");

  debug(ctor_initializer_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CTOR_INITIALIZER_DEF_HPP
