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

#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct opaque_enum_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  opaque_enum_declaration();

  qi::rule<Iterator, skipper<Iterator>> opaque_enum_declaration_;

}; // struct opaque_enum_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_OPAQUE_ENUM_DECLARATION_HPP
