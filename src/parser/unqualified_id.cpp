/****************************************************************************
 *   unqualified_id.cpp    Sun May  14, 2017 12:35 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/unqualified_id_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::unqualified_id<IteratorType>;

} // namespace parser

} // namespace lia
