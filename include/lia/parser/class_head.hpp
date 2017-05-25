/****************************************************************************
 *   class_head.hpp     Wed May  24, 2017 11:30 PM                          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CLASS_HEAD_HPP)
#define LIA_PARSER_CLIENT_CLASS_HEAD_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "identifier.hpp"
#include "nested_name_specifier.hpp"
#include "simple_template_id.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct class_head : qi::grammar<Iterator, skipper<Iterator>>
{
  class_head();

  qi::rule<Iterator, skipper<Iterator>> class_head_;

}; // struct class_head

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_CLASS_HEAD_HPP
