/****************************************************************************
 *   decl_specifier_seq.cpp    Wed Apr  05, 2017 12:29 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/decl_specifier_seq_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::decl_specifier_seq<IteratorType>;

} // namespace parser

} // namespace lia
