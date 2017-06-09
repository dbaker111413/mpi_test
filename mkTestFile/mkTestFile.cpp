#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(int argc, char ** argv){
  srand(atoi(argv[1]));

  int nums[10000];

  for(int i = 0; i < 10000; i++){
    nums[i] = (rand() % 100) + 1;
  }

  ofstream out;
  out.open("test.dat");
  if(out.fail())
    printf("error!\n");
  else{
    for(int i = 0; i < 10000; i++)
      out << nums[i] << ",";
  }

  out.close();
  
  return 0;
}
