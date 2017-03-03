/****************************************************************************
 *   translation_unit.hpp   Sun Jan  28, 2017 05:27 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_TRANSLATION_UNIT_HPP)
#define LIA_PARSER_TRANSLATION_UNIT_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "skipper.hpp"
#include "declaration.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct translation_unit : qi::grammar<Iterator, skipper<Iterator>>
{
  translation_unit();

  declaration<Iterator>                           declaration_;
  qi::rule<Iterator, skipper<Iterator>>           declaration_seq_;
  qi::rule<Iterator, skipper<Iterator>>           translation_unit_;
}; // struct translation_unit

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_TRANSLATION_UNIT_HPP
