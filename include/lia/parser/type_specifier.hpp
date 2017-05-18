/****************************************************************************
 *   type_specifier.hpp     Sun May  14, 2017 07:31 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_TYPE_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "class_specifier.hpp"
#include "enum_specifier.hpp"
#include "skipper.hpp"
#include "trailing_type_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct type_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  type_specifier();

  class_specifier<Iterator> class_specifier_;
  enum_specifier<Iterator> enum_specifier_;
  trailing_type_specifier<Iterator> trailing_type_specifier_;
  qi::rule<Iterator, skipper<Iterator>> type_specifier_;

}; // struct type_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_SPECIFIER_HPP
