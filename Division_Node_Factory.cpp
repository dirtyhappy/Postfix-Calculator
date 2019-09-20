// C++
// Division_Node_Factory.cpp
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////

#include "Division_Node_Factory.h"

//-----------------------------------------------------------------------------
//
// constructor 
//
Division_Node_Factory::Division_Node_Factory (Stack <Expr_Node *> & s, int p)
	:	Binary_Op_Node_Factory(s,p)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Division_Node_Factory::~Division_Node_Factory (void)
{ }

//-----------------------------------------------------------------------------
//
// create node
//
Expr_Node * Division_Node_Factory::create_node (void){
	Expr_Node * right = this->stack_.top();
	this->stack_.pop();
	Expr_Node * left = this->stack_.top();
	this->stack_.pop();
	return new Division_Node(left, right);
}

//-----------------------------------------------------------------------------




