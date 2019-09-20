//C++
//Expr_Tree_Builder.cpp    
//Author : Vivek Bigelow
//-----------------------------------------------------------------------------
//
// Honor Pledge :
//I pledge that I neither gave or receieved any help on this assignment
//
//-----------------------------------------------------------------------------

#include "Expr_Tree_Builder.h"

///////////////////////////////////////////////////////////////////////////////
//
// constructor
//
Expr_Tree_Builder::Expr_Tree_Builder (std::map <std::string, int> & m) 
	:	tree_(nullptr),		
		factory_stack_(),
		node_stack_(),
		map_(m)
		
		
{ }

///////////////////////////////////////////////////////////////////////////////
//
// destructor
// 
Expr_Tree_Builder::~Expr_Tree_Builder (void){
	if (nullptr != this->tree_){
		delete this->tree_;
	}
}

///////////////////////////////////////////////////////////////////////////////
//
// start expression
//
void Expr_Tree_Builder::start_expression (void) {
	//not sure what this is supposed to do yet.	
	if (!this->factory_stack_.is_empty()){
		this->factory_stack_.clear();
	}
	if (!this->node_stack_.is_empty()){
		this->node_stack_.clear();
	}
	this->tree_ = new Expr_Tree ();
}

///////////////////////////////////////////////////////////////////////////////
//
// build number
//
void Expr_Tree_Builder::build_number (int n) {
	Expr_Node * number = new Number_Node(n);
	this->node_stack_.push(number);
}

///////////////////////////////////////////////////////////////////////////////
//
// build variable
//
void Expr_Tree_Builder::build_variable (std::string ch){
	auto search = this->map_.find(ch);
	if (search != this->map_.end()){
		this->build_number(search->second);
	}	
	else {
		this->set_variable (ch);
		this->build_variable(ch);
	}
}
///////////////////////////////////////////////////////////////////////////////
//
// build addition operator
//
void Expr_Tree_Builder::build_addition_operator (int level) {
	int precedence = level + 1;
	Op_Node_Factory * factory = new Addition_Node_Factory(this->node_stack_, precedence);

	while(!this->factory_stack_.is_empty() && this->factory_stack_.top()->get_precedence() >= factory->get_precedence()){

		this->use_factory();
	}
	
		this->factory_stack_.push(factory);
	
}


///////////////////////////////////////////////////////////////////////////////
//
// build subtraction operator
//
void Expr_Tree_Builder::build_subtraction_operator (int level) {
	int precedence = level + 1;
	Op_Node_Factory * factory = new Subtraction_Node_Factory(this->node_stack_, precedence);

	while(!this->factory_stack_.is_empty() && this->factory_stack_.top()->get_precedence() >= factory->get_precedence()){

		this->use_factory();
	}
	this->factory_stack_.push(factory);
}

///////////////////////////////////////////////////////////////////////////////
//
// division
//
void Expr_Tree_Builder::build_division_operator (int level) {
	int precedence = level + 2;
	Op_Node_Factory * factory = new Division_Node_Factory(this->node_stack_, precedence);

	while(!this->factory_stack_.is_empty() && this->factory_stack_.top()->get_precedence() >= factory->get_precedence()){

		this->use_factory();
	}
	this->factory_stack_.push(factory);
}

///////////////////////////////////////////////////////////////////////////////
//
// multiplication
//
//
void Expr_Tree_Builder::build_multiplication_operator (int level) {
	int precedence = level + 2;
	
	Op_Node_Factory * factory = new Multiplication_Node_Factory(this->node_stack_, precedence);

	while(!this->factory_stack_.is_empty() && this->factory_stack_.top()->get_precedence() >= factory->get_precedence()){

		this->use_factory();
	}
	this->factory_stack_.push(factory);
}

////////////////////////////////////////////////////////////////////////////////
//
// modulo
//
void Expr_Tree_Builder::build_modulo_operator (int level) {
	int precedence = level + 2;
	Op_Node_Factory * factory = new Modulo_Node_Factory(this->node_stack_, precedence);

	while(!this->factory_stack_.is_empty() && this->factory_stack_.top()->get_precedence() >= factory->get_precedence()){

		this->use_factory();
	}
	this->factory_stack_.push(factory);
}

///////////////////////////////////////////////////////////////////////////////
//
// construct expression
//
void Expr_Tree_Builder::construct_expression (void){
	while(!this->factory_stack_.is_empty()){
		this->use_factory();	
	}	

	if (!this->node_stack_.is_empty()){
		this->tree_->update_node(this->node_stack_.top());
		this->node_stack_.pop();
	}
	
	else {
		//throw exception
	}
}
// get expression
//
Expr_Tree * Expr_Tree_Builder::get_expression (void)
{
	return this->tree_;
}

//-----------------------------------------------------------------------------
//
// use factory
//
void Expr_Tree_Builder::use_factory (void){
	Expr_Node * new_node = this->factory_stack_.top()->create_node();
	this->factory_stack_.pop();
	this->node_stack_.push(new_node);
}

//-----------------------------------------------------------------------------
//
// set variable
//
void Expr_Tree_Builder::set_variable (std::string ch) {
	int num;
	std::string number;
	std::cout << "Enter value of " << ch << ": ";
	std::getline(std::cin, number);	
	std::istringstream number_char(number);
	number_char >> num;
	this->map_.insert(std::pair<std::string, int> (ch, num));
}
///////////////////////////////////////////////////////////////////////////////
