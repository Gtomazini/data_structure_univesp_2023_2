#include <iostream>
#include "queue.h"

int main()
{
    queue queue1;
    int option;
    typeItem item;

    std::cout << "Queue generator program: \n";

    do {
    std::cout << "Type 0 to stop the program\n";
    std::cout << "Type 1 to enqueue a element\n";
    std::cout << "Type 2 to dequeue a element\n";
    std::cout << "Type 3 to print the queue \n";
    std::cin >> option;

    if (option == 1) {
        std::cout << "Type the element to be enqueued\n";
        std::cin >> item;
        queue1.enqueue(item);
    } else if (option == 2) {

        item = queue1.dequeue();
        std::cout << "The element dequeued: " << item << std::endl;
    
    } else if (option == 3) {

        queue1.print();
    
    }

    } while (option != 0);

    return 0;
}