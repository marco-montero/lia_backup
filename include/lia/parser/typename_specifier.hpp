/****************************************************************************
 *   typename_specifier.hpp     Thu May  18, 2017 08:23 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPENAME_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_TYPENAME_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "identifier.hpp"
#include "nested_name_specifier.hpp"
#include "simple_template_id.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct typename_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  typename_specifier();

  identifier<Iterator> identifier_;
  nested_name_specifier<Iterator> nested_name_specifier_;
  simple_template_id<Iterator> simple_template_id_;
  qi::rule<Iterator, skipper<Iterator>> typename_specifier_;
  qi::rule<Iterator, skipper<Iterator>> typename_specifier_cont_;

}; // struct typename_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPENAME_SPECIFIER_HPP
