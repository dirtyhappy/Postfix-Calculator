// C++
// Op_Node_Factory.h
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _OP_NODE_FACTORY_H_
#define _OP_NODE_FACTORY_H_

#include "Stack.h"
#include "Expr_Node.h"
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"
#include "Modulo_Node.h"

class Op_Node_Factory {
	public:
		virtual ~Op_Node_Factory (void);
		virtual Expr_Node * create_node (void) = 0;
		int get_precedence (void);
	protected:
		Op_Node_Factory (Stack<Expr_Node *> & s,int p) ;
		Stack <Expr_Node *> & stack_;
		int precedence_;
};

#endif //!defined _OP_NODE_FACTORY_H_

