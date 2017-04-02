/****************************************************************************
 *   asm_definition.hpp     Sat Mar  11, 2017 02:36 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_ASM_DEFINITION_HPP)
#define LIA_PARSER_ASM_DEFINITION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "skipper.hpp"
#include "string_literal.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct asm_definition : qi::grammar<Iterator, skipper<Iterator>>
{
  asm_definition();

  qi::rule<Iterator, skipper<Iterator>> asm_definition_;
  string_literal<Iterator> string_literal_;

}; // struct asm_definition

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_ASM_DEFINITION_HPP
