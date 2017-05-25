/****************************************************************************
 *   class_specifier.hpp     Wed May  17, 2017 10:26 PM                     *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_SPECIFIER_HPP)
#define LIA_PARSER_CLIENT_CLASS_SPECIFIER_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "class_head.hpp"
#include "member_specification.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct class_specifier : qi::grammar<Iterator, skipper<Iterator>>
{
  class_specifier();

  class_head<Iterator> class_head_;
  qi::rule<Iterator, skipper<Iterator>> class_specifier_;
  member_specification<Iterator> member_specification_;

}; // struct class_specifier

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_SPECIFIER_HPP
