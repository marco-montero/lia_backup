/****************************************************************************
 *   unqualified_id.hpp     Sun May  14, 2017 12:22 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_UNQUALIFIED_ID_HPP)
#define LIA_PARSER_CLIENT_USING_UNQUALIFIED_ID_HPP

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
struct unqualified_id : qi::grammar<Iterator, skipper<Iterator>>
{
  unqualified_id();

  qi::rule<Iterator, skipper<Iterator>> unqualified_id_;

}; // struct unqualified_id

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_UNQUALIFIED_ID_HPP
