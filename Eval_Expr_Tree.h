// C++
// Eval_Expr_Tree.h
//-----------------------------------------------------------------------------
//
// Honor Pledge :
//I pledge that I neither gave nor recieved help on this assignment
//
//-----------------------------------------------------------------------------

#include "Expr_Node_Visitor.h"
#include <stdexcept>
//#include <exception>

class Eval_Expr_Tree : public Expr_Node_Visitor {
	public:
		Eval_Expr_Tree (void);
		virtual ~Eval_Expr_Tree (void);

		virtual int Visit_Number_Node (const Number_Node & node);	
		//virtual int Visit_Variable_Node (const Variable_Node & node);
		virtual int Visit_Addition_Node (const Addition_Node & node);
		virtual int Visit_Subtraction_Node (const Subtraction_Node & node);
		virtual int Visit_Multiplication_Node (const Multiplication_Node & node);
		virtual int Visit_Division_Node (const Division_Node & node);
		virtual int Visit_Modulo_Node (const Modulo_Node & node);

		int get_result (void) const ;
	private:
		int result_;
		//other state for calculating result?
	
};
