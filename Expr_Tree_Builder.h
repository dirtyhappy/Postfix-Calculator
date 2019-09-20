//C++
// Expr_Tree_Builder.h
//Author : Vivek Bigelow
//-----------------------------------------------------------------------------
//
// Honor Pledge :
//I pledge that I neither gave or receieved any help on this assignment
//
//-----------------------------------------------------------------------------
#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Number_Node.h"
#include "Addition_Node_Factory.h"
#include "Subtraction_Node_Factory.h"
#include "Division_Node_Factory.h"
#include "Multiplication_Node_Factory.h"
#include "Modulo_Node_Factory.h"

class Expr_Tree_Builder : public Expr_Builder
{
	public:
		Expr_Tree_Builder (std::map <std::string, int> & m);
		~Expr_Tree_Builder (void);
		void start_expression (void);
		void build_number(int n);
		void build_variable(std::string ch);
		void build_addition_operator (int level);
		void build_subtraction_operator (int level);
		void build_division_operator (int level);
		void build_multiplication_operator (int level);
		void build_modulo_operator (int level);
		void construct_expression (void);	
		Expr_Tree *  get_expression (void);
		void set_variable (std::string ch);
	private:
		Expr_Tree * tree_;		
	//	Stack <Node_Factory *> number_stack_; //keep for variable
		Stack <Op_Node_Factory *> factory_stack_; 
		Stack <Expr_Node *> node_stack_;
		std::map <std::string, int> & map_;
		void use_factory (void);
};

#endif // !defined _EXPR_TREE_BUILDER_H_
