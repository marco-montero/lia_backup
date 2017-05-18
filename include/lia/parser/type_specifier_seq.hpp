/****************************************************************************
 *   type_specifier_seq.hpp     Sun May  14, 2017 07:06 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_SPECIFIER_SEQ_HPP)
#define LIA_PARSER_CLIENT_TYPE_SPECIFIER_SEQ_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "skipper.hpp"
#include "type_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct type_specifier_seq : qi::grammar<Iterator, skipper<Iterator>>
{
  type_specifier_seq();

  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  type_specifier<Iterator> type_specifier_;
  qi::rule<Iterator, skipper<Iterator>> type_specifier_seq_;
  qi::rule<Iterator, skipper<Iterator>> type_specifier_seq_cont_;

}; // struct type_specifier_seq

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_SPECIFIER_SEQ_HPP
