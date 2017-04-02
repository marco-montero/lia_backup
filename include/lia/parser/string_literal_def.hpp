/****************************************************************************
 *   string_literal_def.hpp     Sat Mar  11, 2017 12:10 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STRING_LITERAL_HPP)
#define LIA_PARSER_CLIENT_STRING_LITERAL_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "string_literal.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
string_literal<Iterator>::string_literal() :
  string_literal::base_type(string_literal_)
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

  string_literal_ =
    !encoding_prefix_ >> string_literal_cont_
    ;

  string_literal_cont_ =
    char_('"') >> !s_char_sequence_ >> '"'
    | char_('R') >> raw_string_
    ;

  encoding_prefix_ =
    string_("u8")
    | char_("u")
    | char_("U")
    | char_("L")
    ;

  s_char_sequence_ =
    +char_
    ;

  raw_string_ =
    +char_
    ;
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_STRING_LITERAL_HPP
