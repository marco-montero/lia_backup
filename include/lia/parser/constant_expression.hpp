/****************************************************************************
 *   constant_expression.hpp     Sun May  14, 2017 05:53 PM                 *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_HPP)
#define LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_HPP

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
struct constant_expression : qi::grammar<Iterator, skipper<Iterator>>
{
  constant_expression();

  qi::rule<Iterator, skipper<Iterator>> constant_expression_;

}; // struct constant_expression

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_HPP
