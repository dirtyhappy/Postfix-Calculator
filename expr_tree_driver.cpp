#include <stdio.h>
#include "Number_Node.h"
#include "Addition_Node.h"
#include "Eval_Expr_Tree.h"
int main (void) {
	Expr_Node * num1 = new Number_Node (5);
	Expr_Node * num2 = new Number_Node (4);
	Expr_Node * op = new Addition_Node (num1, num2);
	Expr_Node_Visitor * visitor = new Eval_Expr_Tree ();
	visitor->Visit_Addition_Node(*op);
	int res = visitor->get_result();
	printf("%d\n", res);
	
	return 0;
}
