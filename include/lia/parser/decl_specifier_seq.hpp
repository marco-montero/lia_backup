/****************************************************************************
 *   decl_specifier_seq.hpp     Sat Mar  1, 2017 04:31 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_HPP)
#define LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "function_specifier.hpp"
#include "skipper.hpp"
#include "storage_class_specifier.hpp"
#include "type_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct decl_specifier_seq : qi::grammar<Iterator, skipper<Iterator>>
{
  decl_specifier_seq();

  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  qi::rule<Iterator, skipper<Iterator>> decl_specifier_;
  qi::rule<Iterator, skipper<Iterator>> decl_specifier_seq_;
  qi::rule<Iterator, skipper<Iterator>> decl_specifier_seq_cont_;
  function_specifier<Iterator> function_specifier_;
  storage_class_specifier<Iterator> storage_class_specifier_;
  type_specifier<Iterator> type_specifier_;

}; // struct decl_specifier_seq

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_HPP
