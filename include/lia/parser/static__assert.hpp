/****************************************************************************
 *   static__assert.hpp     Sun May  14, 2017 04:44 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STATIC__ASSERT_HPP)
#define LIA_PARSER_CLIENT_USING_STATIC__ASSERT_HPP

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
struct static__assert : qi::grammar<Iterator, skipper<Iterator>>
{
  static__assert();

  qi::rule<Iterator, skipper<Iterator>> static__assert_;

}; // struct static__assert

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_STATIC__ASSERT_HPP
