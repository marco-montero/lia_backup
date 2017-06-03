/****************************************************************************
 *   named_namespace_definition.cpp    Sat Jun  03, 2017 03:37 PM           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/named_namespace_definition_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::named_namespace_definition<IteratorType>;

} // namespace parser

} // namespace lia
