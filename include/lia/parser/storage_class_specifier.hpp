/****************************************************************************
 *   storage_class_specifier.hpp     Tue Jun  13, 2017 09:00 PM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_STORAGE_CLASS_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_STORAGE_CLASS_SPECIFIER_HPP

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
struct storage_class_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  storage_class_specifier();

  qi::rule<Iterator, skipper<Iterator>> storage_class_specifier_;

}; // struct storage_class_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_STORAGE_CLASS_SPECIFIER_HPP
