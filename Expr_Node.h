// C++
// Expr_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

class Expr_Node_Visitor;


class Expr_Node
{
	public:
		virtual ~Expr_Node (void); 
		virtual int evaluate (void) const = 0 ;
		virtual int accept (Expr_Node_Visitor & v) = 0;
	protected:
		Expr_Node (void);
};

#endif //!defined  _EXPR_NODE_H_


