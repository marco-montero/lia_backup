/****************************************************************************
 *   class_name.hpp     Sun May  21, 2017 12:28 PM                          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_NAME_HPP)
#define LIA_PARSER_CLIENT_CLASS_NAME_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "identifier.hpp"
#include "simple_template_id.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct class_name : qi::grammar<Iterator, skipper<Iterator>>
{
  class_name();

  identifier<Iterator> identifier_;
  simple_template_id<Iterator> simple_template_id_;
  qi::rule<Iterator, skipper<Iterator>> class_name_;

}; // struct class_name

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_NAME_HPP
