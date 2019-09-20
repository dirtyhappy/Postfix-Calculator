// C++
// Calculator.cpp 
// Author: Vivek Bigelow
//----------------------------------------------------------------------------
//	File for basic expression evaluator class
//
//	Honor Pledge : 
//
//	I pledge that I have neither given nor receieved any help
//	on this assignment.
//----------------------------------------------------------------------------
#include "Calculator.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Calculator::Calculator (Expr_Builder & b)	
	:	builder_(b)
		

{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Calculator::~Calculator (void)
{
}

//-----------------------------------------------------------------------------
//
// parse expr
//
bool Calculator::parse_expr (const std::string & infix){
	std::istringstream	input(infix);
	std::string token;
		
	int level = 0;
	this->builder_.start_expression();
	
	while (!input.eof()){
		input >> token;
		if ("QUIT" == token){
			exit(0);
		}
		else if (token == "+"){
			this->builder_.build_addition_operator(level);
		}
		
		else if (token == "-"){
			this->builder_.build_subtraction_operator(level);
		}
		
		else if (token == "*"){
			this->builder_.build_multiplication_operator(level);
		}
		
		else if (token == "/"){
			this->builder_.build_division_operator(level);
		}
		
		else if (token == "%"){
			this->builder_.build_modulo_operator(level);
		}
		
		else if (token == "("){			
			++level;	
		}
		else if (token == ")"){
			level--;
			
		}
		
		else if (token.find_first_of("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz") != std::string::npos){
			this->builder_.build_variable(token);
		}
		else {
			int number;
			std::istringstream number_char(token);
			number_char >> number;
			this->builder_.build_number(number);
			
		}	
	}
	return true;
}

//-----------------------------------------------------------------------------
//
// evaluate expression
//
int Calculator::evaluate (const std::string & infix){
	if (!this->parse_expr(infix)){
		throw std::runtime_error ("Bad Expression");
	}
	else {
		//this->set_variables();
		this->builder_.construct_expression();
		Expr_Tree * expr = this->builder_.get_expression();
		if (nullptr == expr){
			throw std::runtime_error ("No Expression");
		}
		//this->map_.clear();
		return expr->evaluate_expr();
	}
}

//-----------------------------------------------------------------------------
//
// set variables
//
//void Calculator::set_variables (void) {
//	std::map <std::string, int>::iterator iter;
//	iter = this->map_.begin();
//	int number;
	
//	while (iter != this->map_.end()) {
//		std::cout << "Enter value of " << iter->first << ": ";
//		std::cin >> number;
//		this->map_[iter->first] = number;
//		++iter;
//	}
//}

//-----------------------------------------------------------------------------
	
	

