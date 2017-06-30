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

#include "expression.hpp"
#include "relational_expression.hpp"
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

  qi::rule<Iterator, skipper<Iterator>> and_expression_;
  qi::rule<Iterator, skipper<Iterator>> assignment_expression_;
  qi::rule<Iterator, skipper<Iterator>> assignment_operator_;
  qi::rule<Iterator, skipper<Iterator>> braced_init_list_;
  qi::rule<Iterator, skipper<Iterator>> constant_expression_;
  qi::rule<Iterator, skipper<Iterator>> equality_expression_;
  qi::rule<Iterator, skipper<Iterator>> equality_expression_helper_;
  qi::rule<Iterator, skipper<Iterator>> exclusive_or_expression_;
  expression<Iterator> expression_;
  qi::rule<Iterator, skipper<Iterator>> inclusive_or_expression_;
  qi::rule<Iterator, skipper<Iterator>> initializer_clause_;
  qi::rule<Iterator, skipper<Iterator>> initializer_list_;
  qi::rule<Iterator, skipper<Iterator>> logical_and_expression_;
  qi::rule<Iterator, skipper<Iterator>> logical_or_expression_;
  relational_expression<Iterator> relational_expression_;
  qi::rule<Iterator, skipper<Iterator>> throw_expression_;
}; // struct constant_expression

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CONSTANT_EXPRESSION_HPP
