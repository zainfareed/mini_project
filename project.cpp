#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int nmbr;
std::cout << "Enter the number : ";
std::cin >> nmbr;

if (nmbr==1)
 {
    add_new_appointment();
  }
else if(nmbr==2)
{
      list_all_appointments();
}
else if(nmbr==3)
{
    quit();
}


  return 0;
}

void add_new_appointment()
{
  std::cout << "Please enter discription : " << '\n';
  std::cout << "Please enter time : " << '\n';
  std::cout << "Please enter date : " << '\n';
  std::cout << "Enter 3 to quit" << '\n';
}

void list_all_appointments()
{
  std::cout << "1. Attend of seminar at 11:30 on 25/11/2018" << '\n';
  std::cout << "2. Guest Lecture at 12:00 on 11/09/2018" << '\n';
}

void quit()
{
  
}
