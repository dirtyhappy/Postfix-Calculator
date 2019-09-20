// C++
// Addition_Node_Factory.cpp
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////

#include "Addition_Node_Factory.h"

//-----------------------------------------------------------------------------
//
// constructor 
//
Addition_Node_Factory::Addition_Node_Factory (Stack <Expr_Node *> & s, int p)
	:	Binary_Op_Node_Factory(s,p)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Addition_Node_Factory::~Addition_Node_Factory (void)
{ }

//-----------------------------------------------------------------------------
//
// create node
//
Expr_Node * Addition_Node_Factory::create_node (void){
	Expr_Node * right = this->stack_.top();
	this->stack_.pop();
	Expr_Node * left = this->stack_.top();
	this->stack_.pop();
	return new Addition_Node(left, right);
}

//-----------------------------------------------------------------------------



