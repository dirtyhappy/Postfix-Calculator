// C++
// Expr_Node_Visitor.h
//-----------------------------------------------------------------------------
//
// Honor Pledge :
//I pledge that I neither gave nor recieved help on this assignment
//
//-----------------------------------------------------------------------------

class Expr_Node;
class Number_Node;
class Variable_Node;
class Addition_Node;
class Subtraction_Node;
class Multiplication_Node;
class Division_Node;
class Modulo_Node;

class Expr_Node_Visitor {
	public:
		virtual ~Expr_Node_Visitor (void);
		
		virtual int Visit_Number_Node (const Number_Node & node) = 0;	
		//virtual int Visit_Variable_Node (const Variable_Node & node) = 0;
		virtual int Visit_Addition_Node (const Addition_Node & node) = 0;
		virtual int Visit_Subtraction_Node (const Subtraction_Node & node) = 0;
		virtual int Visit_Multiplication_Node (const Multiplication_Node & node) = 0;
		virtual int Visit_Division_Node (const Division_Node & node) = 0;
		virtual int Visit_Modulo_Node (const Modulo_Node & node) = 0;
		virtual int get_result (void) const = 0;
	protected:
		Expr_Node_Visitor (void); 
};
