// C++
// Op_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _OP_NODE_H_
#define _OP_NODE_H_

#include "Expr_Node.h"

class Op_Node : public Expr_Node
{
	public:
		virtual ~Op_Node (void) { }; 
	protected:
		Op_Node (void) { } ;
};

#endif //!defined  _OP_NODE_H_



