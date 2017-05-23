/****************************************************************************
 *   function_definition_def.hpp   Sat Mar  11, 2017 11:28 AM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_FUNCTION_DEFINITION_DEF_HPP)
#define LIA_PARSER_CLIENT_FUNCTION_DEFINITION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "function_definition.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
function_definition<Iterator>::function_definition() :
  function_definition::base_type(function_definition_)
{
  qi::char_type char_;
  qi::eps_type eps_;
  qi::alpha_type alpha_;
  qi::digit_type digit_;
  qi::lexeme_type lexeme_;
  qi::raw_type raw_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

    function_definition_ =
      -attribute_specifier_seq_ >> -decl_specifier_seq_ >> declarator_
      >> -virt_specifier_seq_ >> function_body_
    ;

  function_definition_.name("function_definition");

  debug(function_definition_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_FUNCTION_DEFINITION_DEF_HPP
