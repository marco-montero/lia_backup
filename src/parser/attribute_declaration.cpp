/****************************************************************************
 *   attribute_declaration.cpp    Mon Apr  03, 2017 08:17 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/attribute_declaration_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::attribute_declaration<IteratorType>;

} // namespace parser

} // namespace lia
