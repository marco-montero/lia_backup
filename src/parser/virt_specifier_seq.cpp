/****************************************************************************
 *   virt_specifier_seq.cpp    Mon May  22, 2017 10:31 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/virt_specifier_seq_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::virt_specifier_seq<IteratorType>;

} // namespace parser

} // namespace lia
