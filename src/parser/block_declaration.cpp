/****************************************************************************
 *   block_declaration.cpp    Sat Mar  04, 2017 11:02 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/block_declaration_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::block_declaration<IteratorType>;

} // namespace parser

} // namespace lia
