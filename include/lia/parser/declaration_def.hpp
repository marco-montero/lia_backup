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
  declaration::base_type(declaration_)
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

  declaration_ =
    block_declaration_
    | function_definition_
    ;

  declaration_.name("declaration");

  debug(declaration_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_DECLARATION_DEF_HPP
