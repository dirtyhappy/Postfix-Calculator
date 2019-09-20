// C++
// calculator.h
// Author: Vivek Bigelow
//----------------------------------------------------------------------------
//	Header File for basic expression evaluator class
//
//	Honor Pledge : 
//
//	I pledge that I have neither given nor receieved any help
//	on this assignment.
//----------------------------------------------------------------------------

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_
#include <iostream>
//#include <exception>
//#include <stdlib.h>
#include <ctype.h>
#include <sstream>
#include "Expr_Tree_Builder.h"
class Calculator
{
	public:
	
	//constructor
	Calculator(Expr_Builder & b);
	
	//destructor
	~Calculator(void);
	
	//parse 	
	bool parse_expr (const std::string & infix);
	//evaluate
	int evaluate (const std::string & infix);
	
	//void set_variables (void);	
	private:
		Expr_Builder & builder_;
		
	
};

#endif //	!defined _CALCULATOR_H_
