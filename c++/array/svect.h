//Header for a mutable vector.
//Guard
#ifndef SVECT_H
#define SVECT_H

class SVect{
    
public:
    SVect(int);
    ~SVect();
    int& operator[](int);
    int get_size();
    int get_capacity();
    bool is_empty();
    void push(int);
    int pop();
    void insert(int, int);
    void delete_at(int);
    void remove(int);
    int find(int);
    void prepend(int);
    int at(int);
    
private:
    void resize(int);
    int sz, capacity;
    int *elem;
};




#endif
