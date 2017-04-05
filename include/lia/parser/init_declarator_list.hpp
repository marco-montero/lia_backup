/****************************************************************************
 *   init_declarator_list.hpp     Wed Apr  05, 2017 11:51 AM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_INIT_DECLARATOR_LIST_HPP)
#define LIA_PARSER_CLIENT_INIT_DECLARATOR_LIST_HPP

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
struct init_declarator_list : qi::grammar<Iterator, skipper<Iterator>>
{
  init_declarator_list();

  qi::rule<Iterator, skipper<Iterator>> init_declarator_list_;

}; // struct init_declarator_list

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_INIT_DECLARATOR_LIST_HPP
