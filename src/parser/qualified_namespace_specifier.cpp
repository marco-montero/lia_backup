/****************************************************************************
 *   qualified_namespace_specifier.cpp    Wed Apr  05, 2017 03:56 PM        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/qualified_namespace_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::qualified_namespace_specifier<IteratorType>;

} // namespace parser

} // namespace lia
