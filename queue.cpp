#include <iostream>
#include "queue.h"

    queue::queue()
    {
        first = 0;
        last = 0;
        typeStruct = new typeItem[maxItens];
    }

    queue::~queue()
    {
        delete [] typeStruct;
    }

    bool queue::isEmpty()
    {
        return (first == last);
    }

    bool queue::isFull()
    {
        return (last - first == maxItens);
    }

    void queue::enqueue(typeItem item)
    {
        if (isFull()){
            std::cout << "The queue is full\n";
            std::cout << "This element cannot be enqueued";
        }else {
            typeStruct[last % maxItens] = item;
            last++;
        }
    }

    typeItem queue::dequeue(){
        if (isEmpty()) {
            std::cout << "The queue is empty!\n";
            std::cout << "None element removed!\n";
            return  0;
        }else {
             first++;
            return typeStruct[(first-1) % maxItens];
           
        }
    }

    void queue::print(){
        std::cout << "Queue: [";
        for (int i = first; i < last; i++) {

            std::cout << typeStruct[i % maxItens] << " ";
        
        }

        std::cout <<"]\n";
    }