// C++
// Author : Vivek Bigelow
// Expr_Builder.h
//-----------------------------------------------------------------------------
// Interface for Builder pattern
// Honor Pledge :
//I pledge that I neither gave or receieved any help on this assignment
//
//-----------------------------------------------------------------------------

#include "Expr_Tree.h"
#include "Stack.h"
#include <string>
#include <iostream>
#include <sstream>
#include <map>

class Expr_Builder {
	public:
		virtual ~Expr_Builder (void) { };
		virtual void start_expression (void) = 0 ;
		virtual void build_number( int n) = 0;
		virtual void build_variable(std::string ch) = 0;
		virtual void build_addition_operator (int level) = 0;
		virtual void build_subtraction_operator (int level) = 0;
		virtual void build_division_operator (int level) = 0;
		virtual void build_multiplication_operator (int level) = 0;
		virtual void build_modulo_operator (int level) = 0;
		virtual Expr_Tree * get_expression (void) = 0;	
		virtual void construct_expression (void) = 0;
		virtual void set_variable (std::string ch) = 0;
	protected:
		Expr_Builder (void) { };
		virtual void use_factory (void) = 0;
};

