#include "Calculator.h"
void loop (void) {
	int result;
	std::map <std::string, int> map;
	Expr_Tree_Builder builder(map);
	Calculator calculator (builder);
	std::string infix;
	
	while (infix != "QUIT"){
		std::getline(std::cin, infix);
		try{
			result = calculator.evaluate(infix);
		}	
		catch (std::exception & e){
			std::cerr<<e.what()<<std::endl;
			continue;
		}
		
		std::cout << infix << " = " << result << std::endl;

		map.clear();
	}
}
int main (void) {
	loop();
	return 0;
}
