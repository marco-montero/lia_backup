/****************************************************************************
 *   string_literal.cpp    Sat Mar  11, 2017 12:16 PM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/string_literal_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::string_literal<IteratorType>;

} // namespace parser

} // namespace lia
