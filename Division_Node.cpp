// C++
// Division_Node.cpp
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------

#include "Division_Node.h"
#include "Expr_Node_Visitor.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Division_Node::Division_Node (Expr_Node * num1, Expr_Node * num2)
	:	Binary_Op_Node(num1, num2)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Division_Node::~Division_Node (void)
{ }

//-----------------------------------------------------------------------------
//
// evaluate
//
int Division_Node::evaluate (void) const{
	int left_val = this->left_->evaluate();
	int right_val = this->right_->evaluate();
	int result = left_val / right_val;
	return result;
}


//-----------------------------------------------------------------------------
//
// accept
//
int Division_Node::accept (Expr_Node_Visitor & v){
	return v.Visit_Division_Node (*this);
}


//-----------------------------------------------------------------------------

