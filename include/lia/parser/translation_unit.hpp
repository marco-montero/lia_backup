/****************************************************************************
 *   translation_unit.hpp   Sun Jan  28, 2017 05:27 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_TRANSLATION_UNIT_HPP)
#define LIA_PARSER_TRANSLATION_UNIT_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

// #define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "skipper.hpp"

namespace lia {

namespace parser {

namespace client {

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct translation_unit : qi::grammar<Iterator, skipper<Iterator>>
{
  translation_unit();

  qi::rule<Iterator, skipper<Iterator>> alignment_specifier_;
  qi::rule<Iterator, skipper<Iterator>> attribute_;
  qi::rule<Iterator, skipper<Iterator>> attribute_argument_clause_;
  qi::rule<Iterator, skipper<Iterator>> attribute_list_;
  qi::rule<Iterator, skipper<Iterator>> attribute_namespace_;
  qi::rule<Iterator, skipper<Iterator>> attribute_scoped_token_;
  qi::rule<Iterator, skipper<Iterator>> attribute_specifier_;
  qi::rule<Iterator, skipper<Iterator>> attribute_specifier_seq_;
  qi::rule<Iterator, skipper<Iterator>> attribute_token_;
  qi::rule<Iterator, skipper<Iterator>> balanced_token_;
  qi::rule<Iterator, skipper<Iterator>> balanced_token_seq_;
  qi::rule<Iterator, skipper<Iterator>> declaration_;
  qi::rule<Iterator, skipper<Iterator>> declaration_seq_;
  qi::rule<Iterator, skipper<Iterator>> declarator_;
  qi::rule<Iterator, skipper<Iterator>> decl_specifier_seq_;
  qi::rule<Iterator, skipper<Iterator>> digit_;
  qi::rule<Iterator, skipper<Iterator>> empty_declaration_; // not useful so far
  qi::rule<Iterator, skipper<Iterator>> function_body_;
  qi::rule<Iterator, skipper<Iterator>> function_definition_;
  qi::rule<Iterator, skipper<Iterator>> identifier_;
  qi::rule<Iterator, skipper<Iterator>> identifier_nondigit_;
  qi::rule<Iterator, skipper<Iterator>> keyword_;
  qi::rule<Iterator, skipper<Iterator>> literal_;
  qi::rule<Iterator, skipper<Iterator>> nondigit_;
  qi::rule<Iterator, skipper<Iterator>> operator_;
  qi::rule<Iterator, skipper<Iterator>> punctuator_;
  qi::rule<Iterator, skipper<Iterator>> token_;
  qi::rule<Iterator, skipper<Iterator>> translation_unit_;
  qi::rule<Iterator, skipper<Iterator>> universal_character_name_;
  qi::rule<Iterator, skipper<Iterator>> virt_specifier_seq_;
}; // struct translation_unit

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_TRANSLATION_UNIT_HPP
