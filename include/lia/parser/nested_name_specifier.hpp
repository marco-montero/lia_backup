/****************************************************************************
 *   nested_name_specifier.hpp     Sun May  14, 2017 12:15 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "decltype_specifier.hpp"
#include "identifier.hpp"
#include "namespace_name.hpp"
#include "simple_template_id.hpp"
#include "skipper.hpp"
#include "type_name.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct nested_name_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  nested_name_specifier();

  decltype_specifier<Iterator> decltype_specifier_;
  identifier<Iterator> identifier_;
  namespace_name<Iterator> namespace_name_;
  qi::rule<Iterator, skipper<Iterator>> nested_name_specifier_;
  qi::rule<Iterator, skipper<Iterator>> nested_name_specifier_cont_;
  qi::rule<Iterator, skipper<Iterator>> nested_name_specifier_cont2_;
  qi::rule<Iterator, skipper<Iterator>> nested_name_specifier_helper_;
  simple_template_id<Iterator> simple_template_id_;
  type_name<Iterator> type_name_;

}; // struct nested_name_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_NESTED_NAME_SPECIFIER_HPP
