/****************************************************************************
 *   template_id.cpp    Tue Jun  20, 2017 11:43 PM                          *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/template_id_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::template_id<IteratorType>;

} // namespace parser

} // namespace lia
