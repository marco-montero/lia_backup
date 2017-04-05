/****************************************************************************
 *   attribute_specifier_seq.cpp    Wed Apr  05, 2017 12:22 PM              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/attribute_specifier_seq_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::attribute_specifier_seq<IteratorType>;

} // namespace parser

} // namespace lia
