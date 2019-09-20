// C++
// Eval_Expr_Tree.cpp
//-----------------------------------------------------------------------------
//
// Honor Pledge :
//I pledge that I neither gave nor recieved help on this assignment
//
//-----------------------------------------------------------------------------

#include "Eval_Expr_Tree.h"
#include "Number_Node.h"
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Division_Node.h"
#include "Multiplication_Node.h"
#include "Modulo_Node.h"
//-----------------------------------------------------------------------------
//
// constructor
//
Eval_Expr_Tree::Eval_Expr_Tree (void)
	:	result_(0)
{ }

//-----------------------------------------------------------------------------
//
// destructor
//
Eval_Expr_Tree::~Eval_Expr_Tree (void)
{ }

//-----------------------------------------------------------------------------
//
// Visit Number Node
//
int Eval_Expr_Tree::Visit_Number_Node (const Number_Node & node) {
	this->result_= node.evaluate();
	return this->result_;
}

//-----------------------------------------------------------------------------
//
// Visit Variable Node
//
//int Eval_Expr_Tree::Visit_Variable_Node (const Variable_Node & node) {
//	this->result_ = node.evaluate();
//	return this->result_;
//}
//-----------------------------------------------------------------------------
//
// Visit Addition Node
//
int Eval_Expr_Tree::Visit_Addition_Node (const Addition_Node & node){
	Expr_Node * left = node.get_left();
	int left_result = left->accept(*this);
	Expr_Node * right = node.get_right();
	int right_result = right->accept(*this); 
	this->result_ = left_result + right_result;
	return this->result_;
}

//-----------------------------------------------------------------------------
//
// Visit Subtraction Node
//
int Eval_Expr_Tree::Visit_Subtraction_Node (const Subtraction_Node & node){
	Expr_Node * left = node.get_left();
	int left_result = left->accept(*this);
	Expr_Node * right = node.get_right();
	int right_result = right->accept(*this); 
	this->result_ = left_result - right_result;
	return this->result_;
}

//-----------------------------------------------------------------------------
//
// Visit Multiplication Node 
//
int Eval_Expr_Tree::Visit_Multiplication_Node (const Multiplication_Node & node){
	Expr_Node * left = node.get_left();
	int left_result = left->accept(*this);
	Expr_Node * right = node.get_right();
	int right_result = right->accept(*this); 
	this->result_ = left_result * right_result;
	return this->result_;
}

//-----------------------------------------------------------------------------
//
// Visit Division Node
//
int Eval_Expr_Tree::Visit_Division_Node (const Division_Node & node){
	Expr_Node * left = node.get_left();
	int left_result = left->accept(*this);
	Expr_Node * right = node.get_right();
	int right_result = right->accept(*this); 

	if (right_result == 0){
		throw std::runtime_error("Divide by Zero");
	}
	else {
		this->result_ = left_result / right_result;
		return this->result_;
	}
}
//-----------------------------------------------------------------------------
//
// Visit Modulo Node
//
int Eval_Expr_Tree::Visit_Modulo_Node (const Modulo_Node & node){
	Expr_Node * left = node.get_left();
	int left_result = left->accept(*this);
	Expr_Node * right = node.get_right();
	int right_result = right->accept(*this); 
	if (right_result == 0){
		throw std::runtime_error("Divide by Zero");
	}
	else {
		this->result_ = left_result % right_result;
		return this->result_;
	}
}

//-----------------------------------------------------------------------------
//
// get result
//
int Eval_Expr_Tree::get_result (void) const {
	return this->result_;
}

//-----------------------------------------------------------------------------

