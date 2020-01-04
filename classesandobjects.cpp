#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <sstream>
#include <string>
using namespace std;

// Write your Student class here
class Student{
private:
  int size;
  int* scores;
public:
  Student();
  Student(int n);
  int calculateTotalScore();
  void input();
  ~Student();
};
Student::~Student(){
  delete [] scores;
}
Student::Student(){
  size = 0;
  scores = new int[size];
  for(int i=0;i<size;i++){
    scores[i] = 0;
  }
}
Student::Student(int n){
  size = n;
  scores = new int[size];
}
int Student::calculateTotalScore(){
  int total = 0;
  for(int i=0;i<size;i++){
    total = total + scores[i];
  }
  return total;
}
void Student::input(){
  string inputstring;
  while(){

  }
}
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
