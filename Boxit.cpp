#include <iostream>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
private:
  int l;
  int b;
  int h;
public:
  Box(){
    l=0;
    b=0;
    h=0;
  }
  Box(int a,int breadth,int c){
    l = a;
    b = breadth;
    h = c;
  }
  Box(Box const & box_object){
    l = box_object.l;
    b = box_object.b;
    h = box_object.h;
  }
  int getLength(){
    return l;
  }
  int getBreadth(){
    return b;
  }
  int getHeight(){
    return h;
  }
  long long CalculateVolume(){
    long long volume = l;
    volume *= b;
    volume *= h;
    return volume;
  }
///Operator overload
///friend operator allows function to have access as members of Box
  friend bool operator(Box &A,Box&B){
    if((A.l < B.l) || (A.b < B.b && A.l==B.b) || (A.h < B.h && A.b==B.b && A.l==B.l))
      return true;
    else
      return false;
  }
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
