/****************************************************************************
 *   declarator.cpp    Mon May  22, 2017 10:26 PM                           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/declarator_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::declarator<IteratorType>;

} // namespace parser

} // namespace lia
