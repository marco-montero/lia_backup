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

#include "declaration.hpp"
#include "skipper.hpp"
#include "string_literal.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator> struct declaration;

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct linkage_specification : qi::grammar<Iterator, skipper<Iterator>>
{
  linkage_specification(declaration<Iterator> *d);

  declaration<Iterator> *declaration_;
  qi::rule<Iterator, skipper<Iterator>> declaration_seq_;
  qi::rule<Iterator, skipper<Iterator>> linkage_specification_;
  qi::rule<Iterator, skipper<Iterator>> linkage_specification_cont_;
  string_literal<Iterator> string_literal_;

}; // struct linkage_specification

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_HPP
