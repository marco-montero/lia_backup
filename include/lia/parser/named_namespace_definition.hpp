/****************************************************************************
 *   named_namespace_definition.hpp     Sat Jun  03, 2017 03:26 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NAMED_NAMESPACE_DEFINITION_HPP)
#define LIA_PARSER_CLIENT_NAMED_NAMESPACE_DEFINITION_HPP

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
struct named_namespace_definition : qi::grammar<Iterator, skipper<Iterator>>
{
  named_namespace_definition();

  qi::rule<Iterator, skipper<Iterator>> named_namespace_definition_;

}; // struct named_namespace_definition

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_NAMED_NAMESPACE_DEFINITION_HPP
