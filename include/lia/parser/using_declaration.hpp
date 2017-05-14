/****************************************************************************
 *   using_declaration.hpp     Mon Apr  03, 2017 10:48 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_USING_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_USING_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "nested_name_specifier.hpp"
#include "skipper.hpp"
#include "unqualified_id.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct using_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  using_declaration();

  nested_name_specifier<Iterator> nested_name_specifier_;
  unqualified_id<Iterator> unqualified_id_;
  qi::rule<Iterator, skipper<Iterator>> using_declaration_;
  qi::rule<Iterator, skipper<Iterator>> using_declaration_cont_;

}; // struct using_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_USING_DECLARATION_HPP
