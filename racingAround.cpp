#include <iostream>
#include <string>
#include<bits/stdc++.h>
// diameter 60 fot, hastighet 15 fot/sek, 1 sek perbokstav, omkrets 188.495559215 fot, ascii space 32, ascii ' 39,
// 188.495559215 / 15 ger antal 12.5663706144 sek per varv.
// delat med 28 ger antalsek per bokstav. 0,44879895051
//pi=3.141592653589793238462
int main() {

  int input,i,j,a,b,sum;
  double layer=0;
  double konst=0.44879895051;

  std::string instring,str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
  
  //  std::cout << "number of aphorism's:\n";
  std::cin >> input;

  for(i=0;i<input;i++){
    sum=0;
    //    std::cout << "aforism?\n";
    std::getline(std::cin >> std::ws,instring);
    //std::cin >> instring;

    for(j=0;j < instring.size()-1; j++){
      if(instring[j]=='\''){
	a=28+64;
      }else{
	if(instring[j]==' '){
	  a=27+64;
	}else{
	  a=(int)instring[j];
	}
      }
      if(instring[j+1]=='\''){
	b=28+64;
      }else{
	if(instring[j+1]==' '){
	  b=27+64;
	}else{
	  b=(int)instring[j+1];
	}
      }

      if(abs(b-a)>14){
	sum=sum+abs(abs(b-a)-28);
      }else{
	sum=sum+abs(b-a);
      }
      //std::cout << sum << "\n";

    }  
    layer=sum*konst;//antal sek att springa runt
    layer=layer+instring.size();// 1 sek extra per bokstav    
    std::cout << std::setprecision(13);
    std::cout <<  layer << "\n";
    //std::cout << "antalsek: "<< layer << "extra sek: " << instring.size() << "\n";
  }

  
  return 0;
}
