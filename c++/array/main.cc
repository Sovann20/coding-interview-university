#import <iostream>
#import "svect.h"
#import <vector>

using namespace std;

int main(int argc, char *argv[]){
    
//    vector<int> vec(1);
//    vec.push_back(3);
//    vector<int>::iterator iter;
//    iter = vec.begin();
//    vec.insert(iter, 1);
//    cout << vec[1] << endl;
    
    SVect sv(5);
    sv.push(5);
    sv.push(1);
    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
    sv.push(3);
//    sv.push(3);
//    sv.push(3);
    sv.push(7);
    sv.insert(1, 15);
    sv.insert(1, 25);
    sv.insert(1, 23);
    sv.insert(4, 13);
//    sv.delete_at(0);
    sv.delete_at(7);
//    sv.remove(3);
//    sv.remove(7);
//    sv.remove(5);
//    sv.push(7);
    
    sv.prepend(34);
    sv.prepend(34);
    sv.prepend(123123);
    sv.prepend(5023);
    
    int i;
    for(i = 0; i < sv.get_size(); ++i){
        cout << "#";
        cout << i;
        cout << " ";
        cout << sv[i] << endl;
    }
//     cout << "At 0: " << sv.at(0) << endl;
//     cout << "At 1: " << sv.at(1) << endl;
//     cout << "At 2: " << sv.at(2) << endl;
//    cout << "At 3: " << sv.at(3) << endl;
//     cout << "At 100: " << sv.at(100) << endl;
    cout << "Capacity:" << sv.get_capacity() << endl;
    cout << "Size:" << sv.get_size() << endl;
    
    cout << "Found 3 at: " << sv.find(3) << endl;
    cout << "Found 25 at: " << sv.find(25) << endl;
    cout << "Found 123123 at: " << sv.find(123123) << endl;
////    cout<< sv.pop();
//    sv.pop();
//    cout << "Capacity:" << sv.get_capacity() << endl;
//    cout << "Size:" << sv.get_size() << endl;
//    sv.pop();
//    sv.pop();
//    for(i = 0; i < sv.get_size(); ++i){
//        cout << sv[i] << endl;
//    }

    return 0;
}
