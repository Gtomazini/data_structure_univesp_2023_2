
typedef int TypeItem;
const int max_itens = 100;


class stack{

    private:
    int stackSize;
    TypeItem* stackStruct;

    public:

    stack(); //construtor
    ~stack(); //destrutur
    bool isFull();
    bool isEmpty();
    void pushStack(TypeItem item);
    TypeItem popStack();
    void printStack();
    int whichLenght();

};