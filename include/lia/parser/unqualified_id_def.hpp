/****************************************************************************
 *   unqualified_id_def.hpp    Sun May  14, 2017 12:17 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_UNQUALIFIED_ID_DEF_HPP)
#define LIA_PARSER_CLIENT_UNQUALIFIED_ID_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "unqualified_id.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
unqualified_id<Iterator>::unqualified_id() :
  unqualified_id::base_type(unqualified_id_)
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

  unqualified_id_ =
    identifier_
    | operator_helper_
    | literal_operator_id_
    | char_('~') >> class_name_
    | char_('~') >> decltype_specifier_
    | template_id_
    ;

  operator_helper_ =
    string_("operator") >> (operator_ | literal_operator_id_)
    ;

  literal_operator_id_ =
    string_("\"\"") >> identifier_
    ;

  unqualified_id_.name("unqualified_id");

  debug(unqualified_id_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_UNQUALIFIED_ID_DEF_HPP
