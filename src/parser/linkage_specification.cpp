/****************************************************************************
 *   linkage_specification.cpp    Mon Apr  03, 2017 08:14 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/linkage_specification_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::linkage_specification<IteratorType>;

} // namespace parser

} // namespace lia
