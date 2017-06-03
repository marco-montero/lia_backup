/****************************************************************************
 *   template_parameter_list.cpp    Fri May  26, 2017 08:14 PM              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/template_parameter_list_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::template_parameter_list<IteratorType>;

} // namespace parser

} // namespace lia
