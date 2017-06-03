/****************************************************************************
 *   template_parameter_list.hpp     Thu May  25, 2017 11:02 PM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_PARAMETER_LIST_HPP)
#define LIA_PARSER_CLIENT_TEMPLATE_PARAMETER_LIST_HPP

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
struct template_parameter_list : qi::grammar<Iterator, skipper<Iterator>>
{
  template_parameter_list();

  qi::rule<Iterator, skipper<Iterator>> template_parameter_list_;

}; // struct template_parameter_list

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_PARAMETER_LIST_HPP
