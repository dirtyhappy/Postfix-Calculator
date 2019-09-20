// C++
// Modulo_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _MODULO_NODE_H_
#define _MODULO_NODE_H_

#include "Binary_Op_Node.h"

class Modulo_Node : public Binary_Op_Node
{
	public:
		Modulo_Node (Expr_Node * num1, Expr_Node * num2);
		virtual ~Modulo_Node (void); 
		virtual int evaluate (void) const;
		virtual int accept (Expr_Node_Visitor & v);
};

#endif //!defined  _MODULO_NODE_H_





