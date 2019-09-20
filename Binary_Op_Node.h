// C++
// Binary_Op_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _BINARY_OP_NODE_H_
#define _BINARY_OP_NODE_H_

#include "Op_Node.h"

class Binary_Op_Node : public Op_Node
{
	public:
		virtual ~Binary_Op_Node (void); 
		Expr_Node * get_left (void) const ;
		Expr_Node * get_right (void) const ; 
		void set_left (Expr_Node * node);
		void set_right (Expr_Node * node);
	protected:
		Binary_Op_Node (Expr_Node * left, Expr_Node * right);
		Expr_Node * left_; 
		Expr_Node * right_; 
};

#endif //!defined  _BINARY_OP_NODE_H_




