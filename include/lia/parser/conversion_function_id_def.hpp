/****************************************************************************
 *   conversion_function_id_def.hpp    Sun Jun  18, 2017 07:58 PM           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CONVERSION_FUNCTION_ID_DEF_HPP)
#define LIA_PARSER_CLIENT_CONVERSION_FUNCTION_ID_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "conversion_function_id.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
conversion_function_id<Iterator>::conversion_function_id() :
  conversion_function_id::base_type(conversion_function_id_)
{
  qi::char_type char_;
  qi::string_type string_;
  using qi::on_error;
  using qi::debug;
  using qi::fail;

  conversion_function_id_ =
    string_("conversion_function_id")
    ;

  conversion_function_id_.name("conversion_function_id");

  debug(conversion_function_id_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CONVERSION_FUNCTION_ID_DEF_HPP
