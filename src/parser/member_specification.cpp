/****************************************************************************
 *   member_specification.cpp    Wed May  24, 2017 11:57 PM                 *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/member_specification_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::member_specification<IteratorType>;

} // namespace parser

} // namespace lia
