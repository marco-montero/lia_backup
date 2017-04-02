/****************************************************************************
 *   declaration.hpp        Thu Mar  02, 2017 11:42 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "block_declaration.hpp"
#include "function_definition.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  declaration();

  block_declaration<Iterator> block_declaration_;
  qi::rule<Iterator, skipper<Iterator>> declaration_;
  qi::rule<Iterator, skipper<Iterator>> empty_declaration_;
  function_definition<Iterator> function_definition_;

}; // struct declaration

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLARATION_HPP
