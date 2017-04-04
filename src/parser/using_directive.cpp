/****************************************************************************
 *   using_directive.cpp    Mon Apr  03, 2017 10:57 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/using_directive_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::using_directive<IteratorType>;

} // namespace parser

} // namespace lia
