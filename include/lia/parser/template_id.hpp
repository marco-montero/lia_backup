/****************************************************************************
 *   template_id.hpp     Tue Jun  20, 2017 11:25 PM                         *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_ID_HPP)
#define LIA_PARSER_CLIENT_USING_TEMPLATE_ID_HPP

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
struct template_id : qi::grammar<Iterator, skipper<Iterator>>
{
  template_id();

  qi::rule<Iterator, skipper<Iterator>> template_id_;

}; // struct template_id

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_ID_HPP
