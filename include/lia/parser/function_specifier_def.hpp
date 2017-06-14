/****************************************************************************
 *   function_specifier_def.hpp    Tue Jun  13, 2017 10:49 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_FUNCTION_SPECIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_FUNCTION_SPECIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "function_specifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
function_specifier<Iterator>::function_specifier() :
  function_specifier::base_type(function_specifier_)
{
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  function_specifier_ =
    string_("inline")
    | string_("virtual")
    | string_("explicit")
    ;

  function_specifier_.name("function_specifier");

  debug(function_specifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_FUNCTION_SPECIFIER_DEF_HPP
