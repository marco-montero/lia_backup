/****************************************************************************
 *   template_declaration.hpp     Sun Apr  11, 2017 10:58 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_TEMPLATE_DECLARATION_HPP

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
struct template_declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  template_declaration();

  qi::rule<Iterator, skipper<Iterator>> template_declaration_;

}; // struct template_declaration

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_DECLARATION_HPP
