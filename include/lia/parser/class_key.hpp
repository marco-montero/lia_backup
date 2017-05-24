/****************************************************************************
 *   class_key.hpp     Tue May  23, 2017 11:08 PM                           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_KEY_HPP)
#define LIA_PARSER_CLIENT_CLASS_KEY_HPP

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
struct class_key : qi::grammar<Iterator, skipper<Iterator>>
{
  class_key();

  qi::rule<Iterator, skipper<Iterator>> class_key_;

}; // struct class_key

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_KEY_HPP
