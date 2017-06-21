/****************************************************************************
 *   unqualified_id.hpp     Sun May  14, 2017 12:22 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_UNQUALIFIED_ID_HPP)
#define LIA_PARSER_CLIENT_USING_UNQUALIFIED_ID_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "class_name.hpp"
#include "conversion_function_id.hpp"
#include "decltype_specifier.hpp"
#include "identifier.hpp"
#include "operator_key.hpp"
#include "skipper.hpp"
#include "template_id.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct unqualified_id : qi::grammar<Iterator, skipper<Iterator>>
{
  unqualified_id();

  class_name<Iterator> class_name_;
  decltype_specifier<Iterator> decltype_specifier_;
  identifier<Iterator> identifier_;
  qi::rule<Iterator, skipper<Iterator>> literal_operator_id_;
  operator_key<Iterator> operator_;
  qi::rule<Iterator, skipper<Iterator>> operator_helper_;
  template_id<Iterator> template_id_;
  qi::rule<Iterator, skipper<Iterator>> unqualified_id_;

}; // struct unqualified_id

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_UNQUALIFIED_ID_HPP
