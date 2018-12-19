#include <iostream>
#include <string.h>
using namespace std;




class Appointment{
private:
  string discription;
  int date;
public:
  Appointment(){

  }

void add()
{

  getline(cin, discription);
  std::cout << "Please enter discription : " << '\n';
  //std::cin >> discription;
  std::cout << discription << '\n';
  std::cout << "Please enter date : " << '\n';

}
void show()
{
  std::cout << "1. Attend of seminar at 11:30 on 25/11/2018" << '\n';
  std::cout << "2. Guest Lecture at 12:00 on 11/09/2018" << '\n';
}
};


int main(int argc, char const *argv[]) {
   Appointment appoint1;
  char charr;
std::cout << "Enter 'a' for add new appointment" << '\n';
std::cout << "Enyer 'l' for show the appointment list" << '\n';
std::cout << "Enter 'q' for quit" << '\n';
std::cin >> charr;

if (charr=='a')
 {
    appoint1.add();
  }
else if(charr=='l')
{
      appoint1.show();
}
else if(charr=='q')
{
    std::cout << "quit" << '\n';
}


  return 0;
}
