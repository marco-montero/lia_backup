/****************************************************************************
 *   compound_statement.hpp     Sat Jun  24, 2017 06:38 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_COMPOUND_STATEMENT_HPP)
#define LIA_PARSER_CLIENT_COMPOUND_STATEMENT_HPP

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
struct compound_statement : qi::grammar<Iterator, skipper<Iterator>>
{
  compound_statement();

  qi::rule<Iterator, skipper<Iterator>> compound_statement_;

}; // struct compound_statement

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_COMPOUND_STATEMENT_HPP
