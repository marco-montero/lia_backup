/****************************************************************************
 *   member_specification_def.hpp    Wed May  24, 2017 11:45 PM             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_MEMBER_SPECIFICATION_DEF_HPP)
#define LIA_PARSER_CLIENT_MEMBER_SPECIFICATION_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "member_specification.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
member_specification<Iterator>::member_specification() :
  member_specification::base_type(member_specification_)
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

  member_specification_ =
    string_("member_specification")
    ;

  member_specification_.name("member_specification");

  debug(member_specification_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_MEMBER_SPECIFICATION_DEF_HPP
