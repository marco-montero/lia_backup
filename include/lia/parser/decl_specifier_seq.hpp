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

#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct decl_specifier_seq : qi::grammar<Iterator, skipper<Iterator>>
{
  decl_specifier_seq();

  qi::rule<Iterator, skipper<Iterator>> decl_specifier_seq_;

}; // struct decl_specifier_seq

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECL_SPECIFIER_SEQ_HPP
