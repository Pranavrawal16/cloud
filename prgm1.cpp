/*Write a prgm to read data from a keyboard and write into file*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream out;
  ifstream in;
  string line;
  out.open("Sample.txt");//To open the file in out mode.
  cout<<endl<<endl<<"Enter the data : ";
  getline(cin,line);//writing data from keyboard.
  out<<line;//writing data into file which was written by user through user.
  out.close();//closed the file.
  in.open("Sample.txt");//To open the file in In mode.
  getline(in,line);//Take written data from file.
  cout<<line<<endl;//Taken datafrom file is written into terminal.
  in.close();//close the file.
  return 0;
}*/

/*Write a prgm to create a new file and insert data until the user enters dollor sign is encounterd read data
and display in file*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream out;
  ifstream in;
  string line;
  out.open("Sample.txt");//opening file 
  cout<<endl<<"Enter the data : ";
  while(out){
    getline(cin,line);
    if(line=="$"){
      break;
    }
    out<<line;
  }
  out.close();
  cout<<"Data readed from Sample.txt file : ";
  in.open("Sample.txt");
  while(in){
    getline(in,line);
  }
  cout<<line<<endl;
  return 0;
}*/

/*Write a program to copy a file data and paste into another.*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream out;
  ifstream in;
  string line;
  out.open("Sample.txt");//opening file
  cout<<"Enter the data : ";
  while(out){
    getline(cin,line);
    if(line=="$"){
      break;
    }
    out<<line<<endl;
  }
  out.close();
  in.open("Sample.txt");
  cout<<"Data readed from file sample.txt is : ";
  getline(in,line);
  cout<<line<<endl;
 
  in.open("Sample.txt");
  getline(in,line);
  cout<<line<<endl;
  in.close();

  ofstream out1;
  ifstream in1;
  out1.open("Sampl1.txt");
  out1<<line<<endl;
  out1.close();
  return 0;
}*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream out;
  ifstream in;
  string line;
  cout<<"Enter data : ";
  out.open("Sample.txt",ios::out);
  while(out){
    getline(cin,line);
    if(line=="$"){
      break;
    }
    out<<line;
  }
  out.close();
  out.open("Sample.txt",ios::in);
  in.open("Sample.txt",ios::out);
  while(in){
    getline(in,line);
    out<<line;
    out.close();
    in.close();
    in.open("Sample.txt",ios::in);
  }
  cout<<line<<endl;
  while(in){
    getline(in,line);
  }
  in.close();
  return 0;
}*/

//Unary minus(-) using operator function outside the class

/*#include<iostream>
using namespace std;
class Test{
  int value;
  public: 
  void getData(){
    cout<<"Enter the number : ";
    cin>>value;
  }
  void print(){
    cout<<"Value is : "<<value<<endl;
  }
  void operator -();
};

void Test::operator-(){
  value=-value;
}

int main(){
  Test t;
  t.getData();
  cout<<"Value before change : ";
  t.print();
  cout<<"Value after change : ";
  -t;
  t.print();
}*/

/*#include <iostream>
using namespace std;
class Distance{
  int feet;             // 0 to infinite
  int inches;           // 0 to 12
  public:
  // required constructors
  /*Distance() {
    feet = 0;
    inches = 0;
  }*/
  /*Distance(int f, int i) {
    feet = f;
    inches = i;
  }
      
  // method to display distance
  void displayDistance() {
    cout << "F: " << feet << " I:" << inches <<endl;
  }
      
  // overloaded minus (-) operator
  void operator- ();
};*/

/*void Distance:: operator- (){
  feet = -feet;
  inches = -inches;
  /*return Distance(feet, inches);*/
//}

/*int main() {
  Distance D1(11, 10), D2(-5, 11);
  -D1;                     // apply negation
  D1.displayDistance();    // display D1
  -D2;                     // apply negation
  D2.displayDistance();    // display D2
  return 0;
}*/

/*#include<iostream>
using namespace std;
class Test{
  int value;
  public:
  void getData(){
    cout<<"Enter a number : ";
    cin>>value;
  }
  void print(){
    cout<<"Value is : "<<value<<endl;
  }
  friend void operator-(Test &);
};
void operator-(Test &obj){
  obj.value=-obj.value;
}
int main(){
  Test t;
  t.getData();
  cout<<"Value before change"<<endl;
  t.print();
  cout<<"Value after change"<<endl;
  -t;
  t.print();
}
*/
/*#include<iostream>
using namespace std;
class Test{
  int real,imag;
  public:
  void getInput(){
    cout<<"Enter the real number : ";
    cin>>real;
    cout<<"Enter the imaginary number : ";
    cin>>imag;
  }
  void display(){
    cout<<real<<"+i"<<imag<<endl;
  }
  friend Test operator +(Test &t1,Test &t2);
};

Test operator +(Test &t4,Test &t){
  Test t1;
  t1.real=t4.real+t.real;
  t1.imag=t4.imag+t.imag;
  return t1;
}

int main(){
  Test t1,t2,t3;
  t1.getInput();
  t2.getInput();
  t3=t1+t2;
  t3.display();
}*/

/*#include<iostream>
using namespace std;
class Increment{
  int value;
  public:
  Increment(){
    value=0;
  }
  Increment(int x){
    value=x;
  }
  void display(){
    cout<<value<<endl;
  }
  Increment operator ++(){
    Increment inc;
    value=value+1;
    inc.value=value;
    return inc;
  }
  Increment operator ++(int d){
    Increment inc;
    inc.value=value;
    value=value+1;
    return inc;
  }
};
int main(){
  Increment i(18),j;
  i.display();
  j=i++;
  i.display();
  j.display();
  j=++i;
  i.display();
  j.display();
}*/

/*#include<iostream>
using namespace std;
class Base{
  public:
  void display(){
    cout<<"It is Base class display"<<endl;
  }
};
class Derived1:virtual public Base{
  public:
  void display1(){
    cout<<"It is Derived1 class display"<<endl;
  }
};
class Derived2:virtual public Base{
  public:
  void display2(){
    cout<<"It is Derived2 class display"<<endl;
  }
};
class NewClass:public Derived1,public Derived2{
  public:
  void display3(){
    cout<<"It is NewClass class display"<<endl;
  }
};
int main(){
  NewClass c;
  c.display();
}*/

/*#include<iostream>
using namespace std;
class Sample{
  int real,imag;
  public:
  void getInput(){
    cout<<"Enter the real number : ";
    cin>>real;
    cout<<"Enter the imaginary number : ";
    cin>>imag;
  }
  void display(){
    cout<<real<<"+i"<<imag<<endl;
  }
  friend Sample operator-(Sample &s1,Sample &s2);
};
Sample operator-(Sample &s1,Sample &s2){
  Sample s3;
  s3.real=s1.real-s2.real;
  s3.imag=s1.imag-s2.imag;
  return s3;
}
int main(){
  Sample s1,s2,s3;
  s1.getInput();
  s2.getInput();
  s3=s1-s2;
  s3.display();
}*/

/*#include<iostream>
using namespace std;
class Mean{
  int value1,value2;
  public:
  void getInput(){
    cout<<"Enter the value1 : ";
    cin>>value1;
    cout<<"Enter the value2 : ";
    cin>>value2;
  }
  friend int Calm(Mean &);
};
int Calm(Mean &m){
 return(m.value1+m.value2)/2;
}
int main(){
  Mean m;
  m.getInput();
  cout<<"Mean of two numbers are : "<<Calm(m);
}
*/

/*#include<iostream>
using namespace std;
class Test;
class Sample{
  int value1;
  public:
  void getData(){
    cout<<"Enter the value1 : ";
    cin>>value1;
  }
  friend int add(Sample &s,Test &t);
};
class Test{
  int value2;
  public:
  void getInput(){
    cout<<"Enter the value2 : ";
    cin>>value2;
  }
  friend int add(Sample &s,Test &t);
};
int add(Sample &s,Test &t){
  return s.value1+t.value2;
}
int main(){
  Sample s;
  Test t;
  s.getData();
  t.getInput();
  cout<<"The sum of both the numbers are : "<<add(s,t);
}*/
/*
#include<iostream>
using namespace std;
int temp;
class Second;
class First{
  int a;
  public:
  void getData(){
    cout<<"Enter the first value : ";
    cin>>a;
  }
  friend void swap(First &f,Second &s);
};
class Second{
  int b;
  public:
  void getInput(){
    cout<<"Enter the second number : ";
    cin>>b;
  } 
  friend void swap(First &f,Second &s);
};
void swap(First &fr,Second &sd){
  cout<<"Before swapping the value of a is : "<<fr.a<<endl;
  cout<<"Before swapping the value of b is : "<<sd.b<<endl;
  temp=fr.a;
  fr.a=sd.b;
  sd.b=temp;
  cout<<"After swaping the value of a is : "<<fr.a<<endl;
  cout<<"After swaping the value of b is : "<<sd.b<<endl;
}
int main(){
  First f;
  Second d;
  f.getData();
  d.getInput();
  swap(f,d);
}*/

/*#include<iostream>
using namespace std;
class Employee{
  int sal1,age1;
  char name1[30];
  public:
  void getData(){
    cout<<"Enter the name of faculty: ";
    cin>>name1;
    cout<<"Enter the age of faculty : ";
    cin>>age1;
    cout<<"Enter the salary of faculty : ";
    cin>>sal1;
  }
  void display(){
    cout<<"Name of faculty is : "<<name1<<endl;
    cout<<"Age of faculty is : "<<age1<<endl;
    cout<<"Salary of faculty is : "<<sal1<<endl;
  }
  void getInput(){
    cout<<"Enter the name of staff : ";
    cin>>name1;
    cout<<"Enter the age of staff : ";
    cin>>age1;
    cout<<"Enter the salary of staff : ";
    cin>>sal1;
  }
  void display1(){
    cout<<"Name of staff is : "<<name1<<endl;
    cout<<"Age of staff is : "<<age1<<endl;
    cout<<"Salary of staff is : "<<sal1<<endl;
  }
};
int main(){
  Employee f[5];
  Employee s[7];
  cout<<"Enter the detail of 5 faculties : "<<endl<<endl;
  for(int i=0; i<5; i++){
    f[i].getData();
    cout<<endl;
  }
  cout<<"Details of FACULTIES are : "<<endl;
  for(int i=0; i<5; i++){
    f[i].display();
    cout<<endl;
  }
  cout<<"Enter the detail of 7 staff : "<<endl<<endl;
  for(int i=0; i<7; i++){
    s[i].getInput();
    cout<<endl;
  }
  cout<<"Details of STAFF is : "<<endl;
  for(int i=0; i<7; i++){
    s[i].display1();
    cout<<endl;
  }
  return 0;
}*/

/*#include<iostream>
using namespace std;
class Student{
  int id;
  string name;
public: 
  void getData(){
    cout<<"Enter the name of Student : ";
    cin>>name;
    cout<<"Enter the id of Student : ";
    cin>>id;
  }
  void displayData(){
    cout<<"Student name is : "<<name<<endl;
    cout<<"Student id is : "<<id<<endl;
  }
};
class Marks:public Student{
public:
  int javamarks,cmarks,cppmarks;
  void getMarks(){
    cout<<"Enter the marks of javamarks : ";
    cin>>javamarks;
    cout<<"Enter the marks of cmarks : ";
    cin>>cmarks;
    cout<<"Enter the marks of cppmarks : ";
    cin>>cppmarks;
  }*/
  //void displayMarks(){
  //  /**/
  //}
//};
/*class Result:public Marks{
  float total,avg;
public:
  void calcResult(){
    total=javamarks+cmarks+cppmarks;
    avg=(javamarks+cmarks+cppmarks)/3;
  }
  void displayResult(){
    cout<<"Total marks of Student is : "<<total<<endl;
    cout<<"Average of Student marks is : "<<avg<<endl;
  }
};
int main(){
  Result r;
  r.getData();
  r.displayData();
  r.getMarks();
  r.calcResult();
  r.displayResult();
}*/


/*
#include<iostream>
using namespace std;
#define MAX 10
int main(){
  int flag=0;
  int n,arr[MAX],elm;
  cout<<"Enter the size of an array : ";
  cin>>n;
  cout<<"Enter the element of an array : "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Elements are : "<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
  }
  cout<<"Enter the element you want to search : ";
  cin>>elm;
  for(int i=0; i<n; i++){
    if(elm==arr[i]){
      cout<<"Number is present"<<endl;
      flag=1;
      break;
    }
  }
  if(flag==0){
    cout<<"Number is not present"<<endl;
  }
  return 0;
}*/



/*#include<iostream>
using namespace std;
#define MAX 100

void insertArray(int& n, int arr[MAX]);
void insertLocation(int& n, int a, int arr[MAX]);

int main(){
  int a,n=0,arr[MAX],cs;
  char choice;
  do{
    cout<<endl<<"-----------Menu Driven program-----------"<<endl;
    cout<<"'1' is for inserting elemnets in an array."<<endl;
    cout<<"'2' is for inserting elements at desired location."<<endl;
    cout<<"'3' is for inserting elements from backward."<<endl;
    cout<<"'4' is for inserting elements from front."<<endl;
    cout<<"'5' is for deleting elements from inserted array elements."<<endl;
    cout<<"'6' is for deleting elements from last."<<endl;
    cout<<"'7' is for deleting elements from desired location."<<endl;
    cout<<"'8' is for End the program."<<endl<<endl;
    cout<<"choose the operation you want to perform : ";
    cin>>cs;

    switch(cs){
      case 1 : 
        insertArray(n,arr);
        break;
      case 2 :
        cout<<"Enter the element you want to insert : ";
        cin>>a;
        insertLocation(n,a,arr);
        break;
      default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    cout<<endl<<"Do you want to continue? (Y/N): ";
    cin>>choice;
  }while(choice == 'Y' || choice == 'y');

  return 0;
}

void insertArray(int& n, int arr[MAX]){
  cout<<"Enter the size of an array : ";
  cin>>n;
  
  cout<<"Enter the elements of an Array is : "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<"Elements of an array is : "<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  } 
  cout<<endl;
}

void insertLocation(int& n, int a, int arr[MAX]){
  char Y;
  int loc;
  if(n == 0){
    cout<<"Arrray is empty"<<endl;
    cout<<"Do you want to insert elements in an Array : "<<endl;
    cout<<"Enter 'Y' for Yes"<<endl;
    cout<<"Enter 'N' for No"<<endl;
    cin>>Y;
    if(Y == 'Y' || Y == 'y'){
      insertArray(n,arr);
    }
    else{
      cout<<"Program Ends"<<endl;
    }
  }
  else{
    cout<<"Code beginns from here"<<endl;
    cout<<"Enter at which location do you want to insert the element  : ";
    cin>>loc;

  }
}
*/

#include<iostream>
using namespace std;
#define MAX 100

void insertArray(int& n, int arr[MAX]);
void insertLocation(int& n, int a, int arr[MAX]);

int main(){
  int a, n = 0, arr[MAX], cs;
  char choice;

  do {
    cout<<endl<<"--------Menu Driven program--------"<<endl;
    cout<<"'1' is for inserting elements in an array."<<endl;
    cout<<"'2' is for inserting elements at desired location."<<endl;
    cout<<"'3' is for inserting elements from backward."<<endl;
    cout<<"'4' is for inserting elements from front."<<endl;
    cout<<"'5' is for deleting elements from inserted array elements."<<endl;
    cout<<"'6' is for deleting elements from last."<<endl;
    cout<<"'7' is for deleting elements from desired location."<<endl;
    cout<<"'8' is to End the program."<<endl<<endl;
    cout<<"Choose the operation you want to perform: ";
    cin>>cs;

    switch(cs){
      case 1:
        insertArray(n, arr);
        break;
      case 2:
        cout<<"Enter the element you want to insert: ";
        cin>>a;
        insertLocation(n, a, arr);
        break;
      default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    
    cout<<endl<<"Do you want to continue? (Y/N): ";
    cin>>choice;
  } while (choice == 'Y' || choice == 'y');

  return 0;
}

void insertArray(int& n, int arr[MAX]){
  int size;
  cout<<"Enter the size of the array to be inserted: ";
  cin>>size;

  if (n + size <= MAX) {
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=n; i<n+size; i++){
      cin>>arr[i];
    }

    n += size;

    cout<<"Elements of the array:"<<endl;
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    } 
    cout<<endl;
  }
  else {
    cout<<"Cannot insert. Array size exceeds the maximum limit."<<endl;
  }
}

void insertLocation(int& n, int a, int arr[MAX]){
  char Y;
  int loc;
  if(n == 0){
    cout<<"Array is empty"<<endl;
    cout<<"Do you want to insert elements in the array? (Y/N): ";
    cin>>Y;
    if(Y == 'Y' || Y == 'y'){
      insertArray(n, arr);
    }
  }
  else{
    cout<<"Code begins from here"<<endl;
    cout<<"This is commited 2nd time"<<endl;
    //cout<<"Enter at which location do you want to insert the element: ";
    //cin>>loc;
    // Perform the desired operation
  }
}






