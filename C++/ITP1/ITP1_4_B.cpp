#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
  double r;
  double area, len;
  cin >> r;
  area = r * r * M_PI;
  len = 2 * r * M_PI;
  printf("%f %f\n", area, len);
}
