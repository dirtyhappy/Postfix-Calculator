// C++
// Variable_Node.cpp
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------

#include "Variable_Node.h"
#include "Expr_Node_Visitor.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Variable_Node::Variable_Node (std::map <std::string, int> & map, std::string ch)
	:	map_(map),
		variable_(ch)
	{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Variable_Node::~Variable_Node (void)
	{ }

//-----------------------------------------------------------------------------
//
// evaluate
//
int Variable_Node::evaluate (void) const {
	std::map <std::string, int>::iterator iter;		
	iter = this->map_.find(this->variable_);
	int number = iter->second;
	return number;
}

//-----------------------------------------------------------------------------
//
// accept
//
int Variable_Node::accept (Expr_Node_Visitor & v){
	return v.Visit_Variable_Node(*this);
}

//-----------------------------------------------------------------------------

