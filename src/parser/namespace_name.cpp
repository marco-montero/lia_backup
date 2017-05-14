/****************************************************************************
 *   namespace_name.cpp    Sun May  14, 2017 04:23 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/namespace_name_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::namespace_name<IteratorType>;

} // namespace parser

} // namespace lia
