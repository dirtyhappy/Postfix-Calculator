// C++
// Division_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _DIVISION_NODE_H_
#define _DIVISION_NODE_H_

#include "Binary_Op_Node.h"

class Division_Node : public Binary_Op_Node
{
	public:
		Division_Node (Expr_Node * num1, Expr_Node * num2);
		virtual ~Division_Node (void); 
		virtual int evaluate (void) const;
		virtual int accept (Expr_Node_Visitor & v);
};

#endif //!defined  _DIVISION_NODE_H_






