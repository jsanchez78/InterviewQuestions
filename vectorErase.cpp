#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    vector<int>  myVector(size);
    //iterator
    vector<int>::iterator beginningPtr = myVector.begin();
    vector<int>::iterator endPtr = myVector.end();
    for(auto iterator = beginningPtr;iterator!=endPtr;iterator++){
      cin >> (*iterator);
    }
    /*
    for(auto iterator = beginningPtr;iterator!=endPtr;iterator++){
      cout <<  (*iterator) << " ";
    }
    */
    int firstQuery;
    cin >> firstQuery;
    myVector.erase(myVector.begin()+(firstQuery-1));
    int new_size = size-1;
    myVector.resize(new_size);
    int begin, end;
    cin >> begin >> end;
    myVector.erase(myVector.begin()+(begin-1),myVector.begin()+(end-1));
    vector<int> newVector(new_size-(end-begin));
    newVector = myVector;
    /*
    vector<int>::iterator itb;
    itb = newVector.begin();
    vector<int>::iterator ite;
    ite = newVector.end();
    //copy values into new vector
    for(auto iterator = itb;iterator!=ite;iterator++){
      int i =1;
      newVector.insert(iterator ,myVector[i]);
      i++;
    }
    */
    ///display value
    vector<int>::iterator newBegin = newVector.begin();
    vector<int>::iterator newEnd = newVector.end();
    cout << newVector.size() << endl;
    for(auto iterator = newBegin;iterator!=newEnd;iterator++){
      cout << (*iterator) << " ";
    }
    return 0;
}
