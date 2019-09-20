#include <assert.h>
#include "Expr_Tree_Builder.h"

int main (void) {
	Expr_Builder * builder = new Expr_Tree_Builder();
	builder->start_expression();
	builder->build_number(5);
	builder->build_addition_operator();
	builder->build_number(4);
	builder->construct_expression();
	Expr_Tree * tree = builder->get_expression();
	
	int result = tree->evaluate_expr();
	assert(9 == result);
//	Stack<Expr_Node *> stack;
//	Op_Node_Factory * factory = new Addition_Node_Factory(stack, 1);
//	int p = factory->get_precedence();
//	assert(1 == p);
	return 0;
}
