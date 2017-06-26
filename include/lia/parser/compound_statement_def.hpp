/****************************************************************************
 *   compound_statement_def.hpp    Sat Jun  24, 2017 06:36 PM               *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ***************************************************************************/

#if !defined(LIA_PARSER_CLIENT_COMPOUND_STATEMENT_DEF_HPP)
#define LIA_PARSER_CLIENT_COMPOUND_STATEMENT_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "compound_statement.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
compound_statement<Iterator>::compound_statement() :
  compound_statement::base_type(compound_statement_)
{
  qi::char_type char_;
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  compound_statement_ =
    string_("compound_statement")
    ;

  compound_statement_.name("compound_statement");

  debug(compound_statement_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_COMPOUND_STATEMENT_DEF_HPP
