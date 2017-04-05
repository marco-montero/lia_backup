/****************************************************************************
 *   namespace_alias_definition.hpp     Mon Apr  03, 2017 10:36 PM          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NAMESPACE_ALIAS_DEFINITION_HPP)
#define LIA_PARSER_CLIENT_NAMESPACE_ALIAS_DEFINITION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "identifier.hpp"
#include "qualified_namespace_specifier.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct namespace_alias_definition : qi::grammar<Iterator, skipper<Iterator>>
{
  namespace_alias_definition();

  identifier<Iterator> identifier_;
  qi::rule<Iterator, skipper<Iterator>> namespace_alias_definition_;
  qualified_namespace_specifier<Iterator> qualified_namespace_specifier_;

}; // struct namespace_alias_definition

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_NAMESPACE_ALIAS_DEFINITION_HPP
