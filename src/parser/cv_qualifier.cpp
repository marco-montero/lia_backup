/****************************************************************************
 *   cv_qualifier.cpp    Thu May  18, 2017 09:07 PM                         *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/cv_qualifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::cv_qualifier<IteratorType>;

} // namespace parser

} // namespace lia
