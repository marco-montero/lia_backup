/****************************************************************************
 *   cv_qualifier_def.hpp    Thu May  18, 2017 08:24 PM                     *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#if !defined(LIA_PARSER_CLIENT_CV_QUALIFIER_DEF_HPP)
#define LIA_PARSER_CLIENT_CV_QUALIFIER_DEF_HPP

#include <iostream>

#define BOOST_SPIRIT_DEBUG

#include "cv_qualifier.hpp"

namespace lia {

namespace parser {

namespace client {

template <typename Iterator>
cv_qualifier<Iterator>::cv_qualifier() :
  cv_qualifier::base_type(cv_qualifier_)
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

  cv_qualifier_ =
    string_("cv_qualifier")
    ;

  cv_qualifier_.name("cv_qualifier");

  debug(cv_qualifier_);
}

} // namespace client

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_CLIENT_CV_QUALIFIER_DEF_HPP
