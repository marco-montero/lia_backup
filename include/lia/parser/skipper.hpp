/****************************************************************************
 *   skipper.hpp            Sun Jan  29, 2017 04:58 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_SKIPPER_HPP)
#define LIA_PARSER_SKIPPER_HPP

#include <boost/spirit/include/qi.hpp>

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct skipper : qi::grammar<Iterator>
{
  skipper() : skipper::base_type(start)
  {
    qi::char_type char_;
    ascii::space_type space;

    start = space
      | "/*" >> *(char_ - "*/") >> "*/"
      ;
  }

  qi::rule<Iterator> start;
}; // struct skipper

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_SKIPPER_HPP
