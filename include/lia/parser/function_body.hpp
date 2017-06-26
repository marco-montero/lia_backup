/****************************************************************************
 *   function_body.hpp     Mon May  22, 2017 09:54 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_FUNCTION_BODY_HPP)
#define LIA_PARSER_CLIENT_FUNCTION_BODY_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "compound_statement.hpp"
#include "ctor_initializer.hpp"
#include "exception_declaration.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct function_body : qi::grammar<Iterator, skipper<Iterator>>
{
  function_body();

  compound_statement<Iterator> compound_statement_;
  ctor_initializer<Iterator> ctor_initializer_;
  qi::rule<Iterator, skipper<Iterator>> exception_declaration_;
  qi::rule<Iterator, skipper<Iterator>> function_body_;
  qi::rule<Iterator, skipper<Iterator>> function_body_helper_;
  qi::rule<Iterator, skipper<Iterator>> function_try_block_;
  qi::rule<Iterator, skipper<Iterator>> handler_;
  qi::rule<Iterator, skipper<Iterator>> handler_seq_;

}; // struct function_body

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_FUNCTION_BODY_HPP
