// C++
// Number_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Expr_Node.h"

class Number_Node : public Expr_Node
{
	public:
		Number_Node (int num);
		~Number_Node (void); 
		int evaluate (void) const;
		int accept (Expr_Node_Visitor & v);
	private:
		int num_;
};

#endif //!defined  _NUMBER_NODE_H_



