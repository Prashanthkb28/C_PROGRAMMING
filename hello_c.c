// write a c program to print hello world in different format
#include<stdio.h>
#include<conio.h>
// standarad
int main(){
    printf("hello world !!\n");
    retuen 0;
}
// *without using main function
     
#define start main    //add the gloabal declaration
int start(){
    printf("Hello world!!\n")
     return 0;
}

// without using semicolon to print the one line  sentence
int main(){
   if( printf("hello world !!\n")){

   }
}
// similarly using while and switch we can implement te code to run sentence without using semicolon
// whle(!printf("sentence")){}  //switch(printf("hello")){}
