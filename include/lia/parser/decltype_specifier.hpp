/****************************************************************************
 *   decltype_specifier.hpp     Thu May  18, 2017 09:48 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECLTYPE_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_DECLTYPE_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "expression.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct decltype_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  decltype_specifier();

  expression<Iterator> expression_;
  qi::rule<Iterator, skipper<Iterator>> decltype_specifier_;

}; // struct decltype_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLTYPE_SPECIFIER_HPP
