// C++
// Number_Node.cpp
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------

#include "Number_Node.h"
#include "Expr_Node_Visitor.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Number_Node::Number_Node (int num)
	:	num_(num)
	{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Number_Node::~Number_Node (void)
	{ }

//-----------------------------------------------------------------------------
//
// evaluate
//
int Number_Node::evaluate (void) const {
	return this->num_;
}

//-----------------------------------------------------------------------------
//
// accept
//
int Number_Node::accept (Expr_Node_Visitor & v){
	return v.Visit_Number_Node(*this);
}

//-----------------------------------------------------------------------------
