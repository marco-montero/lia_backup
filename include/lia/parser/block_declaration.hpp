/****************************************************************************
 *   block_declaration.hpp  Sat Mar  04, 2017 09:25 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_BLOCK_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_BLOCK_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "alias_declaration.hpp"
#include "asm_definition.hpp"
#include "namespace_alias_definition.hpp"
#include "opaque_enum_declaration.hpp"
#include "simple_declaration.hpp"
#include "skipper.hpp"
#include "static_assert_declaration.hpp"
#include "using_declaration.hpp"
#include "using_directive.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct block_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  block_declaration();

  alias_declaration<Iterator> alias_declaration_;
  asm_definition<Iterator> asm_definition_;
  qi::rule<Iterator, skipper<Iterator>> block_declaration_;
  namespace_alias_definition<Iterator> namespace_alias_definition_;
  opaque_enum_declaration<Iterator> opaque_enum_declaration_;
  simple_declaration<Iterator> simple_declaration_;
  static_assert_declaration<Iterator> static_assert_declaration_;
  using_declaration<Iterator> using_declaration_;
  using_directive<Iterator> using_directive_;

}; // struct block_declaration

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_BLOCK_DECLARATION_HPP
