/****************************************************************************
 *   block_declaration_def.hpp  Sat Mar  04, 2017 09:20 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_BLOCK_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_BLOCK_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "block_declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
block_declaration<Iterator>::block_declaration() :
  block_declaration::base_type(block_declaration_)
{
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  block_declaration_ =
    simple_declaration_
    | asm_definition_
    | namespace_alias_definition_
    | using_declaration_
    | using_directive_
    | static_assert_declaration_
    | alias_declaration_
    | opaque_enum_declaration_
    ;
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_BLOCK_DECLARATION_DEF_HPP
