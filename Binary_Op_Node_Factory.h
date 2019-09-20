// C++
// Binary_Op_Node_Factory.h
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _BINARY_OP_NODE_FACTORY_H_
#define _BINARY_OP_NODE_FACTORY_H_

#include "Op_Node_Factory.h"

class Binary_Op_Node_Factory : public Op_Node_Factory {
	public:
		virtual ~Binary_Op_Node_Factory (void);
	protected:
		Binary_Op_Node_Factory (Stack<Expr_Node *> & s, int p);
};

#endif //!defined _BINARY_OP_NODE_FACTORY_H_


