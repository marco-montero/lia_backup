/****************************************************************************
 *   simple_declaration.hpp     Sat Mar  1, 2017 02:55 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_SIMPLE_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_SIMPLE_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "decl_specifier_seq.hpp"
#include "init_declarator_list.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct simple_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  simple_declaration();

  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  decl_specifier_seq<Iterator> decl_specifier_seq_;
  init_declarator_list<Iterator> init_declarator_list_;
  qi::rule<Iterator, skipper<Iterator>> simple_declaration_;

}; // struct simple_declaration

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_SIMPLE_DECLARATION_HPP
