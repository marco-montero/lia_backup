/****************************************************************************
 *   type_name.hpp     Thu May  18, 2017 09:38 PM                           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TYPE_NAME_HPP)
#define LIA_PARSER_CLIENT_TYPE_NAME_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "class_name.hpp"
#include "enum_name.hpp"
#include "simple_template_id.hpp"
#include "skipper.hpp"
#include "typedef_name.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct type_name : qi::grammar<Iterator, skipper<Iterator>>
{
  type_name();

  class_name<Iterator> class_name_;
  enum_name<Iterator> enum_name_;
  simple_template_id<Iterator> simple_template_id_;
  typedef_name<Iterator> typedef_name_;
  qi::rule<Iterator, skipper<Iterator>> type_name_;

}; // struct type_name

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TYPE_NAME_HPP
