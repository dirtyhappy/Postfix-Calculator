// C++
// Unary_Op_Node.cpp
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------

#include "Unary_Op_Node.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Unary_Op_Node::Unary_Op_Node (Expr_Node * c)
	: child_(c) 
	{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Unary_Op_Node::~Unary_Op_Node (void) {
	if (nullptr != this->child_){
		delete this->child_;
	}
}

//-----------------------------------------------------------------------------
