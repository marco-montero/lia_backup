/****************************************************************************
 *   static_assert_declaration.hpp     Mon Apr  03, 2017 10:42 PM           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STATIC_ASSERT_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_STATIC_ASSERT_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "constant_expression.hpp"
#include "skipper.hpp"
#include "string_literal.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct static_assert_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  static_assert_declaration();

  constant_expression<Iterator> constant_expression_;
  qi::rule<Iterator, skipper<Iterator>> static_assert_declaration_;
  string_literal<Iterator> string_literal_;

}; // struct static_assert_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_STATIC_ASSERT_DECLARATION_HPP
