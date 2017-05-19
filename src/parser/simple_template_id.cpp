/****************************************************************************
 *   simple_template_id.cpp    Thu May  18, 2017 10:04 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/simple_template_id_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::simple_template_id<IteratorType>;

} // namespace parser

} // namespace lia
