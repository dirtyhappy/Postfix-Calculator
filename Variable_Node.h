// C++
// Variable_Node.h
// Author : Vivek Bigelow
//------------------------------------------------------------------------------
// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//------------------------------------------------------------------------------


#ifndef _VARIABLE_NODE_H_
#define _VARIABLE_NODE_H_

#include "Expr_Node.h"
#include <map>
#include <string>

class Variable_Node : public Expr_Node
{
	public:
		Variable_Node (std::map<std::string, int> & map, std::string ch);
		~Variable_Node (void); 
		int evaluate (void) const;
		int accept (Expr_Node_Visitor & v);
	private:
		std::map<std::string, int> & map_;
		std::string variable_;	
};

#endif //!defined  _VARIABLE_NODE_H_




