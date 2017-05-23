/****************************************************************************
 *   function_definition.hpp    Sat Mar  11, 2017 11:32 AM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_FUNCTION_DEFINITION_HPP)
#define LIA_PARSER_FUNCTION_DEFINITION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "declarator.hpp"
#include "decl_specifier_seq.hpp"
#include "function_body.hpp"
#include "skipper.hpp"
#include "virt_specifier_seq.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct function_definition : qi::grammar<Iterator, skipper<Iterator>>
{
  function_definition();

  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  declarator<Iterator> declarator_;
  decl_specifier_seq<Iterator> decl_specifier_seq_;
  function_body<Iterator> function_body_;
  qi::rule<Iterator, skipper<Iterator>> function_definition_;
  virt_specifier_seq<Iterator> virt_specifier_seq_;

}; // struct function_definition

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_FUNCTION_DEFINITION_HPP
