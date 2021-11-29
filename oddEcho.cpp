#include <iostream>
#include <string>

int main() {

  int integer, i;
  std::string string[100];

  //  std::cout << "enter a number!\n";
  std::cin >> integer;
  
  for (i=0; i<integer; i++)
    {
      //     std::cout << "enter a word\n";
      std::cin >> string[i];
    }
  for (i=0; i<integer; i++)
    std::cout << string[i++] << "\n";
  return 0;
}
