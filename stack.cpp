#include <iostream>

#include "stack.h"

    stack::stack()
    {
        stackSize = 0;
        stackStruct = new TypeItem[max_itens];
    }

    stack::~stack()
    {
        delete [] stackStruct;
    }

    bool stack::isFull()
    {
        return (stackSize == max_itens);
    }

    bool stack::isEmpty()
    {
        return  (stackSize == 0);
    }

    void stack::pushStack(TypeItem item)
    {
        if(isFull()){
            std::cout << "This stack is overloaded!";
            std::cout << "Its not possible to push more elements";
        }
        else {
            stackStruct[stackSize] = item;
            stackSize++;
        }
    }

    TypeItem stack::popStack()
    {
        if(isEmpty()){
             std::cout << "This stack is empty!";
              std::cout << "There is no elements to remove";
              return 0;
        }
        else {
            stackSize--;
            return stackStruct[stackSize];
        }
    }

    void stack::printStack()
    {
         std::cout << "Stack: [";
         for (int i = 0; i < stackSize; i++) {

             std::cout << stackStruct[i] << " ";
         
         }

          std::cout << "]\n";
    }

    int stack::whichLenght()
    {
        return stackSize;
    }
