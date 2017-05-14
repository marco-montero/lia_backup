/****************************************************************************
 *   nested_name_specifier.hpp     Sun May  14, 2017 12:15 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_HPP

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
struct nested_name_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  nested_name_specifier();

  qi::rule<Iterator, skipper<Iterator>> nested_name_specifier_;

}; // struct nested_name_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_HPP
