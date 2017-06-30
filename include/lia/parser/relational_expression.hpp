/****************************************************************************
 *   relational_expression.hpp     Tue Jun  27, 2017 11:11 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_RELATIONAL_EXPRESSION_HPP)
#define LIA_PARSER_CLIENT_RELATIONAL_EXPRESSION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "expression.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct relational_expression : qi::grammar<Iterator, skipper<Iterator>>
{
  relational_expression();

  qi::rule<Iterator, skipper<Iterator>> relational_expression_;
}; // struct relational_expression

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_RELATIONAL_EXPRESSION_HPP
