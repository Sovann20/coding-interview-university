#import "svect.h"
#import <iostream>

//Constructor
SVect::SVect(int cap){
    
    if(cap < 1){
        std::cout << "Cannot make a vector of size 0" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    elem = new int[cap];
    sz = 0;
    capacity = cap;
}

//Operator
int& SVect::operator[](int i){
    return elem[i];
}

int SVect::get_size(){return sz;}

int SVect::get_capacity(){return capacity;}

bool SVect::is_empty(){
    if(!sz){
        return true;
    }
    return false;
}

void SVect::push(int i){
    
    elem[sz] = i;
    ++sz;
    
    //Making capacity larger
    if(sz > capacity){
        resize(capacity*2);
    }
}

int SVect::at(int index){
    if(index > capacity){
        
        std::cout << "This index is out of bounds. Exiting." << std::endl;
        exit(EXIT_FAILURE);
    }
    
    return *(elem+index);
}

int SVect::pop(){
    
    if(sz){
        
        int temp = elem[sz-1];
        --sz;
        
        //Making capacity smaller
        if(sz <= capacity/4){
            if(capacity%2 == 0){
                resize(capacity/2);
            }
            else{
                resize((capacity/2)+1);
            }
        }
        
        return temp;
    }
    else{
        std::cout << "There are no items in this vector" << std::endl;
        exit(EXIT_FAILURE);
    }
}

/*
 This function will be called at edge cases, we are creating a resizable vector after all.
 */
void SVect::resize(int new_capacity){
    
    int *temp;
    
    temp = new int[new_capacity];
    
    std::memcpy(&temp, &elem, sizeof(elem));
    
    std::memcpy(&elem, &temp, sizeof(temp));
    
    capacity = new_capacity;
}

void SVect::insert(int index, int ele){
    
    at(index);
    
    if(capacity == sz){
        resize(capacity*2);
    }
    
    ++sz;
    
    int next_ele = elem[index];
    int i, curr_ele = ele;
    
    for(i = index; i < sz; ++i){
        elem[i] = curr_ele;
        curr_ele = next_ele;
        next_ele = elem[i+1];
    }
    
}

void SVect::delete_at(int index){
    
    at(index);
    
    //Simply decreasing the size of the array so that the index is no longer reachable.
    if(index == sz-1){
        sz--;
    }
    else{
        int i, next_ele, curr_ele = elem[sz-1];
        
        for(i = sz-1; i > index; --i){
            
            next_ele = elem[i-1];
            elem[i-1] = curr_ele;
            curr_ele = next_ele;
        }
        
        sz--;
    }
}

void SVect::remove(int ele){
    int i;
    for(i = 0; i < sz; ++i){
        if(ele == elem[i]){
            delete_at(i);
            --i;
        }
    }
}

int SVect::find(int ele){
    int i;
    for(i = 0; i < sz; ++i){
        if( ele == elem[i]){
            return i;
        }
    }
    
    return -1;
}

void SVect::prepend(int ele){
    insert(0, ele);
}

//Deconstructer
SVect::~SVect(){delete elem;};
