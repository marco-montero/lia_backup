/****************************************************************************
 *   qualified_namespace_specifier.hpp     Wed Apr  05, 2017 03:51 PM       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_QUALIFIED_NAMESPACE_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_QUALIFIED_NAMESPACE_SPECIFIER_HPP

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
struct qualified_namespace_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  qualified_namespace_specifier();

  qi::rule<Iterator, skipper<Iterator>> qualified_namespace_specifier_;

}; // struct qualified_namespace_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_QUALIFIED_NAMESPACE_SPECIFIER_HPP
