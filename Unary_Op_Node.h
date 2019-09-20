// C++
// Unary_Op_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _UNARY_OP_NODE_H_
#define _UNARY_OP_NODE_H_

#include "Op_Node.h"

class Unary_Op_Node
{
	public:
		virtual ~Unary_Op_Node (void); 
	protected:
		Unary_Op_Node (Expr_Node * c);
		Expr_Node * child_;
};

#endif //!defined  _UNARY_OP_NODE_H_



