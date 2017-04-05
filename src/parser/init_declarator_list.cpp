/****************************************************************************
 *   init_declarator_list.cpp    Wed Apr  05, 2017 12:23 PM                 *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/init_declarator_list_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::init_declarator_list<IteratorType>;

} // namespace parser

} // namespace lia
