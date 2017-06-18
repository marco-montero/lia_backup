/****************************************************************************
 *   virt_specifier_seq.hpp     Mon May  22, 2017 09:50 PM                          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_VIRT_SPECIFIER_SEQ_HPP)
#define LIA_PARSER_CLIENT_VIRT_SPECIFIER_SEQ_HPP

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
struct virt_specifier_seq : qi::grammar<Iterator, skipper<Iterator>>
{
  virt_specifier_seq();

  qi::rule<Iterator, skipper<Iterator>> virt_specifier_;
  qi::rule<Iterator, skipper<Iterator>> virt_specifier_seq_;

}; // struct virt_specifier_seq

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_VIRT_SPECIFIER_SEQ_HPP
