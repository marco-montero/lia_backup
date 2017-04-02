/****************************************************************************
 *   simple_declaration.hpp     Sat Mar  1, 2017 02:55 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_SIMPLE_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_SIMPLE_DECLARATION_HPP

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
struct simple_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  simple_declaration();

  qi::rule<Iterator, skipper<Iterator>> simple_declaration_;

}; // struct simple_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_SIMPLE_DECLARATION_HPP
