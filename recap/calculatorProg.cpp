#include <iostream>

class Token {
public:
    char kind;
    double value;
};

int main()
{
    std::cout << "Please enter expression (we can handle +, -, *, and /)\n";
    
    std::cout << "add an x to end expression (e.g., 1+2*3x): ";
    
    int lval = 0;
    int rval;
    
    std::cin>>lval; // read leftmost operand
    if (!std::cin) 
        std::cout << "No first operand \n"; 
        // error("no first operand");
        
    for (char op; std::cin>>op; ) { // read operator and right-hand operand
        // repeatedly
        if (op!='x')
            std::cin >> rval;
            // cin>>rval;
        
        if (!std::cin) 
            std::cout << "no second operand \n";

        switch(op) {
            case '+':
                lval += rval; // add: lval = lval + rval
                break;
            case '-':
                lval -= rval; // subtract: lval = lval – rval
                break;

            case '*':
                lval *= rval; // multiply: lval = lval * rval
                break;
            
            case '/':
                lval /= rval; // divide: lval = lval / rval
                break;
            
            default: // not another operator: print result
                std::cout << "Result: " << lval << '\n';
                // std::cin.get();
                return 0;
        }
    }
    // error("bad expression");
    std::cout << "Bad expression" << std::endl;
}