/****************************************************************************
 *   using_directive.hpp     Mon Apr  03, 2017 10:50 PM                     *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_USING_DIRECTIVE_HPP)
#define LIA_PARSER_CLIENT_USING_DIRECTIVE_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_specifier_seq.hpp"
#include "namespace_name.hpp"
#include "nested_name_specifier.hpp"
#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct using_directive : qi::grammar<Iterator, skipper<Iterator>>
{
  using_directive();

  attribute_specifier_seq<Iterator> attribute_specifier_seq_;
  namespace_name<Iterator> namespace_name_;
  nested_name_specifier<Iterator> nested_name_specifier_;
  qi::rule<Iterator, skipper<Iterator>> using_directive_;

}; // struct using_directive

} // namespace client

} // namespace parser

} // namespace lia

#endif // LIA_PARSER_CLIENT_USING_DIRECTIVE_HPP
