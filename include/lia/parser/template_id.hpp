/****************************************************************************
 *   template_id.hpp     Tue Jun  20, 2017 11:25 PM                         *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_TEMPLATE_ID_HPP)
#define LIA_PARSER_CLIENT_TEMPLATE_ID_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "constant_expression.hpp"
#include "identifier.hpp"
#include "id_expression.hpp"
#include "operator_key.hpp"
#include "skipper.hpp"
#include "type_id.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct template_id : qi::grammar<Iterator, skipper<Iterator>>
{
  template_id();

  constant_expression<Iterator> constant_expression_;
  identifier<Iterator> identifier_;
  id_expression<Iterator> id_expression_;
  qi::rule<Iterator, skipper<Iterator>> literal_operator_id_;
  operator_key<Iterator> operator_;
  qi::rule<Iterator, skipper<Iterator>> operator_function_id_;
  qi::rule<Iterator, skipper<Iterator>> simple_template_id_;
  qi::rule<Iterator, skipper<Iterator>> template_argument_;
  qi::rule<Iterator, skipper<Iterator>> template_argument_list_;
  qi::rule<Iterator, skipper<Iterator>> template_id_;
  type_id<Iterator> type_id_;

}; // struct template_id

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_TEMPLATE_ID_HPP
