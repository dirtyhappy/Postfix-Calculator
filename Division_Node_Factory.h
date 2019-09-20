// C++
// Division_Node_Factory.h
// Author : Vivek Bigelow
///////////////////////////////////////////////////////////////////////////////
//
// I pledge that I neither received or gave help on this assignment
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _DIVISION_NODE_FACTORY_H_
#define _DIVISION_NODE_FACTORY_H_

#include "Binary_Op_Node_Factory.h"

class Division_Node_Factory : public Binary_Op_Node_Factory {
	public:
		Division_Node_Factory (Stack <Expr_Node *> & s, int p);
		virtual ~Division_Node_Factory (void);
		Expr_Node * create_node (void);
	
};

#endif //!defined _DIVISION_NODE_FACTORY_H_




