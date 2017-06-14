/****************************************************************************
 *   declaration_def.hpp        Thu Mar  02, 2017 11:41 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_DECLARATION_DEF_HPP)
#define LIA_PARSER_CLIENT_DECLARATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "declaration.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
declaration<Iterator>::declaration() :
  declaration::base_type(declaration_),
  template_declaration_(this),
  explicit_instantiation_(this),
  explicit_specialization_(this),
  linkage_specification_(this),
  namespace_definition_(this)
{
  qi::char_type char_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  declaration_ =
    block_declaration_
    | function_definition_
    | template_declaration_
    | explicit_instantiation_
    | explicit_specialization_
    | linkage_specification_
    | namespace_definition_
    | empty_declaration_
    | attribute_declaration_
    ;

  empty_declaration_ =
    char_(';')
    ;

  declaration_.name("declaration");

  debug(declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLARATION_DEF_HPP
