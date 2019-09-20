// C++
// Multiplication_Node_Factory.h
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _MULTIPLICATION_NODE_FACTORY_H_
#define _MULTIPLICATION_NODE_FACTORY_H_

#include "Binary_Op_Node_Factory.h"

class Multiplication_Node_Factory : public Binary_Op_Node_Factory {
	public:
		Multiplication_Node_Factory (Stack <Expr_Node *> & s, int p);
		virtual ~Multiplication_Node_Factory (void);
		Expr_Node * create_node (void);
	
};

#endif //!defined _MULTIPLICATION_NODE_FACTORY_H_




