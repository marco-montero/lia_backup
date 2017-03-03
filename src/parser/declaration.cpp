/****************************************************************************
 *   declaration.cpp          Thu Mar  02, 2017 11:57 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/declaration_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::declaration<IteratorType>;

} // namespace parser

} // namespace lia
