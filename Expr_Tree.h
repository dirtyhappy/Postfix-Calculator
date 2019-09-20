//C++
//Expr_Tree.h
//Author : Vivek Bigelow
//
///////////////////////////////////////////////////////////////////////////////
//
// Honor Pledge :
// I pledge that I neither gave nor receieved help on this assignment.
//
// ////////////////////////////////////////////////////////////////////////////
#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Expr_Node.h"
#include "Eval_Expr_Tree.h"
class Expr_Tree {
	public:
		Expr_Tree (void);	
		virtual ~Expr_Tree (void);
		int evaluate_expr (void);
		void update_node (Expr_Node * node);
		Expr_Node * get_node (void);
	private:
		Expr_Node * tree_;
		Expr_Node_Visitor * eval_;
};

#endif // defined ! _EXPR_TREE_H_
