/****************************************************************************
 *   type_id.hpp     Sun May  14, 2017 06:20 PM                             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_ID_HPP)
#define LIA_PARSER_CLIENT_TYPE_ID_HPP

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
struct type_id : qi::grammar<Iterator, skipper<Iterator>>
{
  type_id();

  qi::rule<Iterator, skipper<Iterator>> type_id_;

}; // struct type_id

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_ID_HPP
