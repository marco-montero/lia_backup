/****************************************************************************
 *   trailing_type_specifier.hpp     Wed May  17, 2017 10:03 PM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TRAILING_TYPE_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_TRAILING_TYPE_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "cv_qualifier.hpp"
#include "elaborated_type_specifier.hpp"
#include "simple_type_specifier.hpp"
#include "skipper.hpp"
#include "typename_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct trailing_type_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  trailing_type_specifier();

  cv_qualifier<Iterator> cv_qualifier_;
  elaborated_type_specifier<Iterator> elaborated_type_specifier_;
  simple_type_specifier<Iterator> simple_type_specifier_;
  qi::rule<Iterator, skipper<Iterator>> trailing_type_specifier_;
  typename_specifier<Iterator> typename_specifier_;

}; // struct trailing_type_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TRAILING_TYPE_SPECIFIER_HPP
