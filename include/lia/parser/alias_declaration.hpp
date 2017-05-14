/****************************************************************************
 *   alias_declaration.hpp     Mon Apr  03, 2017 10:05 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_ALIAS_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_ALIAS_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "identifier.hpp"
#include "skipper.hpp"
#include "type_id.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct alias_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  alias_declaration();

  qi::rule<Iterator, skipper<Iterator>> alias_declaration_;
  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  identifier<Iterator> identifier_;
  type_id<Iterator> type_id_;

}; // struct alias_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_ALIAS_DECLARATION_HPP
