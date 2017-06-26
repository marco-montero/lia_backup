/****************************************************************************
 *   ctor_initializer.hpp     Thu Jun  22, 2017 11:58 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CTOR_INITIALIZER_HPP)
#define LIA_PARSER_CLIENT_CTOR_INITIALIZER_HPP

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
struct ctor_initializer : qi::grammar<Iterator, skipper<Iterator>>
{
  ctor_initializer();

  qi::rule<Iterator, skipper<Iterator>> ctor_initializer_;

}; // struct ctor_initializer

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CTOR_INITIALIZER_HPP
