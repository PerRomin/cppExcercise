#include <iostream>
#include <string>
#include <sstream>
int main() {

  int input,i,j,speed,sum,time,layer=0;
  //std::cout << "number of stops?\n";
  for(;;){
    std::cin >> input;
    if(input == -1){return 0;}
    int int_1[input],int_2[input];
    int_2[0]=0;
    std::string str[input*2];
    
    for(i=0;i<input*2;i++){
      //std::cout << "mile time:?\n";
      std::cin >> str[i];
    }
    j=0;
    for(i=0;i<input;i++){
      std::stringstream ss1,ss2;
      ss1 << str[j];
      ss1 >> int_1[i];
      ss2 << str[j+1];
      ss2 >> int_2[i];
      if(i>0){
	sum = sum + (int_1[i] * (int_2[i] - int_2[i-1]));
      }else
	sum = sum + (int_1[i] * int_2[i]);
      j=j+2;
    }
    std::cout << sum << " miles\n";
    sum=0;
  }
  return 0;
}
