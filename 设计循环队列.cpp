typedef struct CircleQueue
{
    int* base;
    int capacity;
    int head;
    int tail;
}CircleQueue;
    
class MyCircularQueue {
public:
    CircleQueue cq;
    MyCircularQueue(int k) 
    {
        cq.base = (int*)malloc(sizeof(int)*(k+1));
        cq.capacity = k;
        cq.head = cq.tail = 0;
    }
    bool isEmpty() {
        return cq.head == cq.tail;
    }
    bool isFull() {
        return  (cq.tail+1)%(cq.capacity+1) == cq.head;
    }
    bool enQueue(int value) {
        if(isFull())
            return false;
        cq.base[cq.tail] = value;
        cq.tail = (cq.tail+1)%(cq.capacity+1);    
        return true;
    }   
    bool deQueue() {
        if(isEmpty())
            return false;
        cq.head = (cq.head+1)%(cq.capacity+1);
        return true;
    }
    int Front() {
        if(isEmpty())
            return -1;
        else
            return cq.base[cq.head];
    }  
    int Rear() {
        if(isEmpty())
            return -1;
        else
            return cq.base[(cq.tail-1+cq.capacity+1)%(cq.capacity+1)];
    }
};

