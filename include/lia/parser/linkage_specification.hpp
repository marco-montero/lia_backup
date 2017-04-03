/****************************************************************************
 *   linkage_specification.hpp     Mon Apr  03, 2017 07:52 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_HPP)
#define LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_HPP

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
struct linkage_specification : qi::grammar<Iterator, skipper<Iterator>>
{
  linkage_specification();

  qi::rule<Iterator, skipper<Iterator>> linkage_specification_;

}; // struct linkage_specification

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_HPP
