/****************************************************************************
 *   string_literal.hpp     Sat Mar  11, 2017 12:13 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_STRING_LITERAL_HPP)
#define LIA_PARSER_STRING_LITERAL_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct string_literal : qi::grammar<Iterator, skipper<Iterator>>
{
  string_literal();

  qi::rule<Iterator, skipper<Iterator>> encoding_prefix_;
  qi::rule<Iterator, skipper<Iterator>> raw_string_;
  qi::rule<Iterator, skipper<Iterator>> s_char_sequence_;
  qi::rule<Iterator, skipper<Iterator>> string_literal_;
  qi::rule<Iterator, skipper<Iterator>> string_literal_cont_;
}; // struct string_literal

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_STRING_LITERAL_HPP
