// Filename: sedContext.cxx
// Created by:  drose (24Oct00)
// 
////////////////////////////////////////////////////////////////////

#include "sedContext.h"


////////////////////////////////////////////////////////////////////
//     Function: SedContext::Constructor
//       Access: Public
//  Description: 
////////////////////////////////////////////////////////////////////
SedContext::
SedContext(ostream &out) : _out(out) {
  _line_number = 0;
  _is_last_line = false;
  _deleted = false;
}
