class MyCircularQueue 
{
    public:
    int k;
    deque<int> dq;

    MyCircularQueue(int size)
    {
        k = size;
    }
    
    bool enQueue(int value) 
    {
        if(dq.size()<k)
        {
            dq.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deQueue() 
    {
        if(dq.size()!=0)
        {
            dq.pop_front();
            return true;
        }
        return false;
    }
    
    int Front() 
    {
        if(dq.size()!=0)
            return dq.front();    
        return -1;
    }
    
    int Rear() 
    {
        if(dq.size()!=0)
            return dq.back();    
        return -1;
    }
    
    bool isEmpty() 
    {
        if(dq.size()==0)
            return true;
        return false;
    }
    
    bool isFull() 
    {
        if(dq.size()==k)    
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */