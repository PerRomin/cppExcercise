#include <iostream>

int main() {

  int a,b[1000],sum=0,i;
  float div=2;
  b[0]=0;
  
  //std::cout << "number of times the button is pressed\n";
  std::cin >> a;
  for(i=0;i<a;i++){
    //std::cout << "tider knappen trycks\n";
    std::cin >> b[i];
    if(i % 2 > 0){    
      b[i] = b[i] - b[i-1];
      sum = sum + b[i];
    }
  }
  if(a % 2 > 0){
    std::cout << "still running";
  }else{
    //std::cout << "answer is:\n";
    std::cout << sum;
  }
  return 0;
}
