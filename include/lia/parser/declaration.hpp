/****************************************************************************
 *   declaration.hpp        Thu Mar  02, 2017 11:42 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECLARATION_HPP)
#define LIA_PARSER_CLIENT_DECLARATION_HPP

#define BOOST_SPIRIT_NO_PREDEFINED_TERMINALS

#define BOOST_SPIRIT_QI_DEBUG
#include <boost/spirit/include/qi.hpp>

#include "attribute_declaration.hpp"
#include "block_declaration.hpp"
#include "explicit_instantiation.hpp"
#include "explicit_specialization.hpp"
#include "function_definition.hpp"
#include "linkage_specification.hpp"
#include "namespace_definition.hpp"
#include "skipper.hpp"
#include "template_declaration.hpp"
#include "template_parameter_list.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator> struct template_declaration;

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

template <typename Iterator>
struct declaration : qi::grammar<Iterator, skipper<Iterator>>
{
  declaration();

  attribute_declaration<Iterator> attribute_declaration_;
  block_declaration<Iterator> block_declaration_;
  qi::rule<Iterator, skipper<Iterator>> declaration_;
  qi::rule<Iterator, skipper<Iterator>> empty_declaration_;
  explicit_instantiation<Iterator> explicit_instantiation_;
  explicit_specialization<Iterator> explicit_specialization_;
  function_definition<Iterator> function_definition_;
  linkage_specification<Iterator> linkage_specification_;
  namespace_definition<Iterator> namespace_definition_;
  template_declaration<Iterator> template_declaration_;
  template_parameter_list<Iterator> template_parameter_list_;

}; // struct declaration

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLARATION_HPP
