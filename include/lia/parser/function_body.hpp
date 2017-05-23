/****************************************************************************
 *   function_body.hpp     Mon May  22, 2017 09:54 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_FUNCTION_BODY_HPP)
#define LIA_PARSER_CLIENT_FUNCTION_BODY_HPP

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
struct function_body : qi::grammar<Iterator, skipper<Iterator>>
{
  function_body();

  qi::rule<Iterator, skipper<Iterator>> function_body_;

}; // struct function_body

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_FUNCTION_BODY_HPP
