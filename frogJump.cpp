#include <iostream>

int solution(int inputX,int inputY,int inputD){
  int j=0,answer;

  answer=(inputY-inputX)/inputD;
  if ((inputY-inputX)%inputD !=0){
    answer++;
  }
    /*  for(int i=inputX; i<=inputY; i=i+inputD) {
    j++;
    answer=j;
    }*/
  return answer;
}

int main() {

  int inputX,inputY,inputD,answer=0;
  
  std::cout << "int? \n";
  std::cin >> inputX >> inputY >> inputD;
  answer = solution(inputX,inputY,inputD);
  std::cout << answer << "\n";
  
  return 0;
}
