#include <iostream>
#include "stack.h"

int main(){

    stack stack1;
    TypeItem item;
    int option;

     std::cout << "This is a generate stack program:\n";

     do {
      std::cout << "Type 0 to stop the program!\n";
       std::cout << "Type 1 to insert elements!\n";
        std::cout << "Type 2 to remove a element\n";
         std::cout << "Type 3 to print the stack\n";
          std::cout << "Type 4 to know stack Lenght\n";
            std::cin >> option;
            if (option == 1) {

                 std::cout << "Type the element that you want to add\n";
                 std::cin >> item;
                 stack1.pushStack(item);
            } else if (option == 2) {
                stack1.popStack();
                std::cout << "Removed element: " << item << std::endl;
            } else if (option == 3) {

                stack1.printStack();
            
            } else if (option == 4) {
                int stackValue = stack1.whichLenght();
                std::cout << "the stack lenght its: " << stackValue << std::endl;
            }

     }while (option != 0);


    return 0;
}