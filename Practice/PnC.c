/*
 * Aim : Program for Permutation and Combination
 * Formulae's :
 * nPr  : n!/(n-r)!
 * nCr : n!/r!(n-r)!
 * */
#include "stdio.h"
void Permute(int *n, int *r);
int main(){
  // char msg[] = "Headers Works Perfectly fine with \" double quots \"";
  // UsrInp
  int *pN, *pR, N, R, nPr;
  printf("Enter your N and R as (eg. 5 4): ");
  scanf("%d %d",&N, &R); pN = &N; pR = &R;
  Permute(pN, pR);
  return 0;
}

void Permute(int *n, int *r){
  int i,j = *n;
  //printf("%p, %p, %d, %d \n", n,r,*n,*r);
  for(i = 1; i <= *n; i++ ){
    j *= i;  
    printf("%d\n", j);
  }
}
