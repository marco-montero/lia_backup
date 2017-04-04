/****************************************************************************
 *   namespace_alias_definition.cpp    Mon Apr  03, 2017 10:55 PM           *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/namespace_alias_definition_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::namespace_alias_definition<IteratorType>;

} // namespace parser

} // namespace lia
