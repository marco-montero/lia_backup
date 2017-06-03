/****************************************************************************
 *   linkage_specification_def.hpp     Sun Apr  02, 2017 11:33 PM           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_DEF_HPP)
#define LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "linkage_specification.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
linkage_specification<Iterator>::linkage_specification(declaration<Iterator> *d) :
  linkage_specification::base_type(linkage_specification_),
  declaration_(d)
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

  linkage_specification_ =
    string_("extern") >> string_literal_ >> linkage_specification_cont_
    ;

  linkage_specification_cont_ =
    char_('{') >> -declaration_seq_ >> char_('}')
    | (*declaration_)
    ;

  declaration_seq_ =
    (*declaration_) >> *(*declaration_)
    ;

  linkage_specification_.name("linkage_specification");

  debug(linkage_specification_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_LINKAGE_SPECIFICATION_DEF_HPP
