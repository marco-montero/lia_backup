/****************************************************************************
 *   function_body.cpp    Mon May  22, 2017 10:33 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/function_body_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::function_body<IteratorType>;

} // namespace parser

} // namespace lia
