/****************************************************************************
 *   opaque_enum_declaration.hpp     Mon Apr  03, 2017 10:39 PM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "enum_key.hpp"
#include "identifier.hpp"
#include "skipper.hpp"
#include "type_specifier_seq.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct opaque_enum_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  opaque_enum_declaration();

  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  qi::rule<Iterator, skipper<Iterator>> enum_base_;
  enum_key<Iterator> enum_key_;
  identifier<Iterator> identifier_;
  qi::rule<Iterator, skipper<Iterator>> opaque_enum_declaration_;
  type_specifier_seq<Iterator> type_specifier_seq_;

}; // struct opaque_enum_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_HPP
