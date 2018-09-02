#include <iostream>
 using namespace std;   
int main(){
int mark;
cout<<"please enter your mark: ";
cin>> mark;
cout << endl;
if(mark>=80)
{
	cout<<"congratulation you had an A";

}else if(mark>=75)
   {
   	cout<<"congratulations you had a B+";
}else if(mark>=69)
   {
   	cout<<"you had a C+";
   }else if(mark>=64)
     {
     	cout<<"You had a C";
     }else if(mark>=59)
     {
     	cout<<"You had a cool D+";
     }else if(mark<=54)
     {
     	cout<<"You had a D";
     }else if(mark>=49)
     {
     	cout<<"You had an E";
     }else
      {
      	cout<<"you failed "; 
}

    return 0;
  }
