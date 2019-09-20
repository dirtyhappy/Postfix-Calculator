// C++
// Multiplication_Node.cpp
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------

#include "Multiplication_Node.h"
#include "Expr_Node_Visitor.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Multiplication_Node::Multiplication_Node (Expr_Node * num1, Expr_Node * num2)
	:	Binary_Op_Node(num1, num2)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Multiplication_Node::~Multiplication_Node (void)
{ }

//-----------------------------------------------------------------------------
//
// evaluate
//
int Multiplication_Node::evaluate (void) const {
	int left_val = this->left_->evaluate();
	int right_val = this->right_->evaluate();
	int result = left_val * right_val;
	return result;
}


//-----------------------------------------------------------------------------
//
// accept
//
int Multiplication_Node::accept (Expr_Node_Visitor & v){
	return v.Visit_Multiplication_Node(*this);
}

//-----------------------------------------------------------------------------

