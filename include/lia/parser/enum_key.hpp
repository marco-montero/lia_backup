/****************************************************************************
 *   enum_key.hpp     Sun May  14, 2017 06:50 PM                            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ENUM_KEY_HPP)
#define LIA_PARSER_CLIENT_USING_ENUM_KEY_HPP

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
struct enum_key : qi::grammar<Iterator, skipper<Iterator>>
{
  enum_key();

  qi::rule<Iterator, skipper<Iterator>> enum_key_;
  qi::rule<Iterator, skipper<Iterator>> enum_key_cont_;

}; // struct enum_key

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_ENUM_KEY_HPP
