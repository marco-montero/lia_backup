/****************************************************************************
 *   namespace_name_def.hpp    Sun May  14, 2017 04:07 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_NAMESPACE_NAME_DEF_HPP)
#define LIA_PARSER_CLIENT_NAMESPACE_NAME_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "namespace_name.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
namespace_name<Iterator>::namespace_name() :
  namespace_name::base_type(namespace_name_)
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

  namespace_name_ =
    string_("namespace_name")
    ;

  namespace_name_.name("namespace_name");

  debug(namespace_name_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_NAMESPACE_NAME_DEF_HPP
