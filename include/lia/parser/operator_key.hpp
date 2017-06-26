/****************************************************************************
 *   operator_key.hpp     Sun Jun  18, 2017 06:32 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_OPERATOR_KEY_HPP)
#define LIA_PARSER_CLIENT_OPERATOR_KEY_HPP

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
struct operator_key : qi::grammar<Iterator, skipper<Iterator>>
{
  operator_key();

  qi::rule<Iterator, skipper<Iterator>> delete_operator_;
  qi::rule<Iterator, skipper<Iterator>> operator_key_;
  qi::rule<Iterator, skipper<Iterator>> new_operator_;

}; // struct operator_key

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_OPERATOR_KEY_HPP
