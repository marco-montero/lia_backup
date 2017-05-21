/****************************************************************************
 *   typedef_name.hpp     Sun May  21, 2017 12:37 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPEDEF_NAME_HPP)
#define LIA_PARSER_CLIENT_TYPEDEF_NAME_HPP

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
struct typedef_name : qi::grammar<Iterator, skipper<Iterator>>
{
  typedef_name();

  qi::rule<Iterator, skipper<Iterator>> typedef_name_;

}; // struct typedef_name

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPEDEF_NAME_HPP
