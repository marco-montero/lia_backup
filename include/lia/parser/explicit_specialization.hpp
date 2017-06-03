/****************************************************************************
 *   explicit_specialization.hpp     Sun Apr  11, 2017 11:29 PM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_EXPLICIT_SPECIALIZATION_HPP)
#define LIA_PARSER_CLIENT_EXPLICIT_SPECIALIZATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "declaration.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator> struct declaration;

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct explicit_specialization : qi::grammar<Iterator, skipper<Iterator>>
{
  explicit_specialization(declaration<Iterator> *d);

  declaration<Iterator> *declaration_;
  qi::rule<Iterator, skipper<Iterator>> explicit_specialization_;

}; // struct explicit_specialization

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_EXPLICIT_SPECIALIZATION_HPP
