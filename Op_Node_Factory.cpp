// C++
// Op_Node_Factory.cpp
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////

#include "Op_Node_Factory.h"

//-----------------------------------------------------------------------------
//
// constructor
//
Op_Node_Factory::Op_Node_Factory (Stack <Expr_Node *> & s,int p) 
	:	stack_(s),
		precedence_(p)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Op_Node_Factory::~Op_Node_Factory (void)
{ }

//-----------------------------------------------------------------------------
//
// get precedence
//
int Op_Node_Factory::get_precedence (void) {
	return this->precedence_;
}

//-----------------------------------------------------------------------------
