typedef int typeItem;
const int maxItens = 100;

class queue{
    private:
    int first, last;
    typeItem* typeStruct;

    public:
    queue();
    ~queue();
    bool isEmpty();
    bool isFull();
    void enqueue(typeItem item);
    typeItem dequeue();
    void print(); 

};