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
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
//    sv.push(3);
    sv.push(7);
//    sv.push(7);
//    
    int i;
    for(i = 0; i < sv.get_size(); ++i){
        cout << "#";
        cout << i;
        cout << " ";
        cout << sv[i] << endl;
    }
     cout << "At 0: " << sv.at(0) << endl;
     cout << "At 1: " << sv.at(1) << endl;
     cout << "At 2: " << sv.at(2) << endl;
    cout << "At 3: " << sv.at(3) << endl;
     cout << "At 100: " << sv.at(100) << endl;
    cout << "Capacity:" << sv.get_capacity() << endl;
    cout << "Size:" << sv.get_size() << endl;
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
