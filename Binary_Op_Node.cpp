// C++
// Binary_Op_Node.cpp
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//-----------------------------------------------------------------------------

#include "Binary_Op_Node.h"

//-----------------------------------------------------------------------------
//
// constructor
//
Binary_Op_Node::Binary_Op_Node (Expr_Node * left, Expr_Node * right)
	:	left_(left),
		right_(right)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Binary_Op_Node::~Binary_Op_Node (void) {
	if (nullptr != this->left_){	
		delete this->left_;
	}

	if (nullptr != this->right_){	
		delete this->right_;
	}
}

//-----------------------------------------------------------------------------
//
// get left
//
Expr_Node * Binary_Op_Node::get_left (void) const {
	return this->left_;
}

//-----------------------------------------------------------------------------
//
// get right  
//
Expr_Node * Binary_Op_Node::get_right (void) const {
	return this->right_;
}

//-----------------------------------------------------------------------------
//
// set left
//
void Binary_Op_Node::set_left (Expr_Node * node) {
	delete this->left_;
	this->left_ = node;
}

//-----------------------------------------------------------------------------
//
// set right 
//
void Binary_Op_Node::set_right (Expr_Node * node) {
	delete this->right_;
	this->right_ = node;
}

///////////////////////////////////////////////////////////////////////////////
