#include<stdio.h>
#include<stdlib.h>
#define SEATS 10
 
int main(){
   int seat[ SEATS ] = { 0 };
   int i, assignSeat, seatNumber, noSeat = 0, terminator = 0;
   char switchClass;
    
   while( terminator == 0 ){
      while( noSeat == 0 ){
         printf("Please type 1 for \"first class\"\n"
                "Please type 2 for \"economy\"\n");
         scanf("%d", &assignSeat);
         noSeat += 2;
      }
    
      if( assignSeat == 1){
       
         for(i = 0; i < SEATS / 2; i++){
            if( seat[ i ] == 0 ){
               seat[ i ] == 1;
               noSeat = 0; 
               terminator = 1;         
               printf("*************\nBoarding Pass\n*************\n\n"
                      "Your seat number: %d\nClass: First\n", i + 1 );
            }else{
               noSeat = 1;      
            }
             
            if( terminator == 1 )
               break;
         }
          
      }else if( assignSeat == 2 ){
       
         for(i = ( SEATS / 2 ); i < SEATS; i++){
            if( seat[ i ] == 0 ){
               seat[ i ] == 1;
               noSeat = 0; 
               terminator = 1; 
               printf("*************\nBoarding Pass\n*************\n\n"
                      "Your seat number: %d\nClass: Economy\n", i + 1 );
            }else{
               noSeat = 1;      
            }
             
            if( terminator == 1 )
               break;
         }   
      }else{
         system("cls");
         printf("Invalid input!\n");   
      } 
    
      if( noSeat == 1 ){
         if( assignSeat == 1 ){
            assignSeat = 2;
            printf("The seat in first class is full.\nCan we assign you to another class?[y or n]\n");
         }else if( assignSeat == 2 ){
            assignSeat = 1;
            printf("The seat in first class is full.\nCan we assign you to another class?[y or n]\n");   
         }           
          
         scanf(" %c", &switchClass );
          
         if( switchClass == 'n' ){
            printf("Next flight leaves in 3 hours.\n");
            terminator = 1;
         }
      }  
    
   }
    
   system("pause");
   return 0;   
}