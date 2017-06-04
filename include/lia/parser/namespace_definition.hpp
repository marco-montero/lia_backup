/****************************************************************************
 *   namespace_definition.hpp     Mon Apr  03, 2017 07:56 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NAMESPACE_DEFINITION_HPP)
#define LIA_PARSER_CLIENT_NAMESPACE_DEFINITION_HPP

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
struct namespace_definition : qi::grammar<Iterator, skipper<Iterator>>
{
  namespace_definition(declaration<Iterator> *d);

  declaration<Iterator> *declaration_;
  // a compound between original-namespace-definition and 
  // extension-namespace-defintion, a subset named-namespace-definition
  qi::rule<Iterator, skipper<Iterator>> generic_namespace_definition_;
  qi::rule<Iterator, skipper<Iterator>> identifier_or_original_namespace_name_;
  qi::rule<Iterator, skipper<Iterator>> namespace_body_;
  qi::rule<Iterator, skipper<Iterator>> namespace_definition_;
  qi::rule<Iterator, skipper<Iterator>> named_namespace_definition_;
  qi::rule<Iterator, skipper<Iterator>> unnamed_namespace_definition_;

}; // struct namespace_definition

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_NAMESPACE_DEFINITION_HPP
