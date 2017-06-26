/****************************************************************************
 *   function_body_def.hpp    Mon May  22, 2017 09:53 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_FUNCTION_BODY_DEF_HPP)
#define LIA_PARSER_CLIENT_FUNCTION_BODY_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "function_body.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
function_body<Iterator>::function_body() :
  function_body::base_type(function_body_)
{
  qi::char_type char_;
  qi::eps_type eps_;
  qi::alpha_type alpha_;
  qi::digit_type digit_;
  qi::lexeme_type lexeme_;
  qi::raw_type raw_;
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  function_body_ =
    -ctor_initializer_ >> compound_statement_
    | function_try_block_
    | function_body_helper_
    ;

  function_body_helper_ =
    char_('=') >> (string_("default") | string_("delete")) >> char_(';')
    ;

  function_try_block_ =
    string_("try") >> -ctor_initializer_ >> compound_statement_
    >> handler_seq_
    ;

  handler_seq_ =
    handler_ >> handler_seq_
    ;

  handler_ =
    string_("catch") >> char_('(') >> exception_declaration_
    >> char_(')') >> compound_statement_
    ;

  function_body_.name("function_body");

  debug(function_body_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_FUNCTION_BODY_DEF_HPP
