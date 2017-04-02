/****************************************************************************
 *   asm_definition.cpp       Sat Mar  11, 2017 02:43 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/asm_definition_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::asm_definition<IteratorType>;

} // namespace parser

} // namespace lia
