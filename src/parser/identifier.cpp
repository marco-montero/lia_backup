/****************************************************************************
 *   identifier.cpp    Wed Apr  05, 2017 03:53 PM                           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/identifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::identifier<IteratorType>;

} // namespace parser

} // namespace lia
