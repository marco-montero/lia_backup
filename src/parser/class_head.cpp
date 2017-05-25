/****************************************************************************
 *   class_head.cpp    Wed May  24, 2017 11:56 PM                           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/class_head_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::class_head<IteratorType>;

} // namespace parser

} // namespace lia
