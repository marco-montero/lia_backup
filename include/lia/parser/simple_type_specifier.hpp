/****************************************************************************
 *   simple_type_specifier.hpp     Thu May  18, 2017 08:14 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_SIMPLE_TYPE_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_SIMPLE_TYPE_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "decltype_specifier.hpp"
#include "nested_name_specifier.hpp"
#include "simple_template_id.hpp"
#include "skipper.hpp"
#include "type_name.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct simple_type_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  simple_type_specifier();

  decltype_specifier<Iterator> decltype_specifier_;
  nested_name_specifier<Iterator> nested_name_specifier_;
  simple_template_id<Iterator> simple_template_id_;
  qi::rule<Iterator, skipper<Iterator>> simple_type_specifier_;
  qi::rule<Iterator, skipper<Iterator>> simple_type_specifier_cont_;
  type_name<Iterator> type_name_;

}; // struct simple_type_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_SIMPLE_TYPE_SPECIFIER_HPP
