/****************************************************************************
 *   type_specifier_seq.cpp    Sun May  14, 2017 07:09 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/type_specifier_seq_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::type_specifier_seq<IteratorType>;

} // namespace parser

} // namespace lia
