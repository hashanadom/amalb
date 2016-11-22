#include "stack.h"


////-----------------------------------------------\\
//||                   assignment 13               ||
//\\-----------------------------------------------//

//function recieving a string char by char from the user, returns if he is a string by the order of xcy. e.g. abbbaCabbba will return true ababaCbabab will return false.
int is_xcy(){
  int count=0;
  int flag=1;
  char c;
  
  stack side1,side2;
  initS(&side1);
  initS(&side2);
  
  while( c = getchar() != '\n'){
    pushS(&side1,c);
    count++;
  }
  
  for(int i=0;i<count/2;i++)
    pushS(&side2,pop(&side1));
  
  (count%2!=0)? popS(&side1) : 0 ;
  
  for(int i=0;i<count/2;i++)
    flag *= (popS(&side1)==popS(&side2));//if the top of the first stack is equal to the top of the second, mul flag by 1. else mul by 0;
  
  return flag
}

//function sorts a stack by white-black-white order, given a stack s with unordered black and white values. let's say that 1 is for white and 0 is for black
void token_black(sPtr s1){
  int white,black,count;
  
  white=popS(s1);
  black= !white;
  
  while(!isEmptyS(s1)){
    count+=popS(s1)==color;
  
  for(int i=0;i<count;i++)
    pushS(s1,(count%2==0)*white+(count%2!=0)*black));
  }
  
}
//function gets (get it?) a string from the user, and returns if the number of appearances is equal in both
int aabb(){
  int count=0
  char[N] str;
  char *cptr=str;
  
  stack s;
  initS(&s);
  
  gets(&str);
  
  while(*cptr!='/0'){
    pushS(&s,*cptr);
    cptr++;
  }
  
  while(!isEmptyS(&s))
    count+=(popS(&s)=='A')*2-1;
  
  return count==0;
}


//function, given three stacks, takes the first two sorted ones, and puts them in a sorted order while maintaining unique values at the third stack
void sort_stacks(sPtr s1,sPtr s2,sPtr s3){
  short num1, num2,num3;
  
  while((!isEmptyS(s1))||(!isEmptyS(s2))){
    num1=popS(s1);
    num2=popS(s2);
    
    (num1!=num2) ? pushS(s3,num1*(num1>num2)+num2*(num1<num2)),pushS(s3,num1*(num1<num2)+num2*(num1>num2) :(num1!=num3) ? push(s3,num1),num3=num1  : 0;
    
  }
}
                                                                     
  
////-----------------------------------------------\\
//||                   assignment 14               ||
//\\-----------------------------------------------//                                                                   
                                                                     
int compatible_brackets(c1,c2){
    return (c1=='{' && c2=='}')||(c1=='(' && c2==')')||(c1=='[' && c2==']')
  }
                                                                     
int valid_brackets(char *sptr){
    int flag=1; 
    
    stack s;
    initS(&s);
    while(sptr!='/0'){
      (*sptr=='('||*sptr=='{'||*sptr=='[') ? pushS(&s,*sptr) : (*sptr=='}'||*sptr==']'||*sptr==')') ? flag*=compatible_brackets(pop(&s),*sptr) : 0 ;      
      sptr++;
    }
    
  }

int bin_exp_to_value(int a, char c, int b){
    a+=(c=='+')*b;
    a-=(c=='-')*b;
    a*=(c=='*')*b;
    a/=(c=='/')*b;
    return a
  }
int calc_bin_value(){
  int num=0;
  char[N] str;
  char *cptr=str;
  
  gets(&str);
    
  while(*cptr!='/0'){
    *cptr>'0' ? num*=10,num+=*cptr-'0' : (num!=0) ? (isEmptyS(&s)) ? pushS(%s,num) :cptr++,pushS(&s,bin_exp_to_value(popS(%s),*cptr,num),num=0 : 0 ;
  }
  }
                                                                     
                                                       
                                                                   
