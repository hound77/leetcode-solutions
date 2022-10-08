class MyCircularQueue {
  std::queue<int> queue;
      int maxSize ;
public:
    MyCircularQueue(int n) : maxSize(n){
        
    }
    
    bool enQueue(int value) {
      if(queue.size() == maxSize)
              return    false ;
        else
        {
        queue.push(value);
        return true;
        }
    }
    
    bool deQueue() {
         if( queue.empty()==true)
             return false;
         else
         {
             queue.pop();
             return true;
         }
    }
    
    int Front() {
         if( queue.empty()==true)
             return -1;
         else
         {
            return queue.front();
         }
    }
    
    int Rear() {
          if( queue.empty()==true)
             return -1;
         else
         {
            return queue.back();
         }
    }
    
    bool isEmpty() {
        return queue.empty();
    }
    
    bool isFull() {
        return queue.size() == maxSize;
    }
};

