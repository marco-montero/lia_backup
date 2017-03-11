/****************************************************************************
 *   block_declaration.hpp  Sat Mar  04, 2017 09:25 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_BLOCK_DECLARATION_HPP)
#define LIA_PARSER_BLOCK_DECLARATION_HPP

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
struct block_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  block_declaration();

  qi::rule<Iterator, skipper<Iterator>> asm_definition_;
  qi::rule<Iterator, skipper<Iterator>> block_declaration_; /*
  qi::rule<Iterator, skipper<Iterator>> encoding_prefix_;
  qi::rule<Iterator, skipper<Iterator>> raw_string_;
  qi::rule<Iterator, skipper<Iterator>> s_char_sequence_;
  qi::rule<Iterator, skipper<Iterator>> string_literal_;
  qi::rule<Iterator, skipper<Iterator>> string_literal_cont_;  */
}; // struct block_declaration

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_BLOCK_DECLARATION_HPP
