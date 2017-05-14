/****************************************************************************
 *   type_id.cpp    Sun May  14, 2017 06:25 PM                              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/type_id_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::type_id<IteratorType>;

} // namespace parser

} // namespace lia
