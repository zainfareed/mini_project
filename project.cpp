#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int nmbr;
std::cout << "Enter the number : ";
std::cin >> nmbr;
if (nmbr==1) {
    std::cout << "Add new appointment" << '\n';
  }
else if(nmbr==2)
      std::cout << "List All Appointments" << '\n';
else if(nmbr==3)
    std::cout << "Quit" << '\n';



  return 0;
}
