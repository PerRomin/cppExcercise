#include <iostream>

int solution(int input){
  int i,n,j,answer,flag=0;
  int array[32];
  
  for(i=0; input>0; i++) {
    array[i]=input%2;
    input = input/2;
  }
  
  for(j=0; j < i; j++){
    if (array[j]==0 && flag==1){
      n++;
      if (n>answer){
	answer=n;
      }
    }
    if (array[j]==1){
      flag=1;
      n=0;
    }
  }
  return answer;
}

int main() {

  int input,answer=0;
  
  //std::cout << "int? \n";
  std::cin >> input;
  answer = solution(input);
  std::cout << answer << "\n";
  
  return 0;
}
