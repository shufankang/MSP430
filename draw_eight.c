//------------------------------------------------------------------------------
//  Description: This file contains the Main Routine - "While" Operating System
//
//  Shufan Kang
//  Fall 2015
//  Built with IAR Embedded Workbench Version: V6.30.2
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
#include  "msp430.h"
#include  "functions.h"
#include "macros.h"

//------------------------------------------------------------------------------
void draw_eight(void){//This function draws 8
//------------------------------------------------------------------------------

// 
//------------------------------------------------------------------------------

  Time_Sequence = 0;                        
  int i=0;
  display_1 = "SecondTask";
  posL1 = 0;
  display_2 = "DrawEight";
  posL2 = 0;
  display_3 = "ECE306";
  posL3 = 2;
  display_4 = "Skang";
  posL4 = 3;
  big = 0;
  Display_Process();
     while(Time_Sequence<300){}
   Time_Sequence=0;
  
//------------------------------------------------------------------------------
// Begining of the "While" Operating System
//------------------------------------------------------------------------------
 while(i<6) {                            // Can the Operating system run
  switch(Time_Sequence){
    case 35:                               // 1000 msec  
      if(one_time){
        Init_LEDs();                        // Initialize LEDs
        one_time = 0;
        i++;
      }
      Time_Sequence = 0;                    // 
    case 32:                               // 1000 msec  
      if(one_time){
        P3OUT |= LED5;                      // Change State of LED 5
        one_time = 0;
      }
    case 1:                               // 500 msec  
      if(one_time){
        P3OUT |= LED7;                      // Change State of LED 7
        one_time = 0;
      }

      break;                                // 
    default: break; 
  }

  if(Time_Sequence > 35){
    Time_Sequence = 0;
  }
 }
 i=0;//inialies i for second loop for 8
 while(i<5) {                            // Can the Operating system run
  switch(Time_Sequence){
    case 35:                               // 1000 msec  
      if(one_time){
        Init_LEDs();                        // Initialize LEDs
        one_time = 0;
        i++;
      }
      Time_Sequence = 0;                    // 
    case 33:                               // 1000 msec  
      if(one_time){
        P3OUT |= LED7;                      // Change State of LED 5
        one_time = 0;
      }
    case 2:                               // 500 msec  
      if(one_time){

       P3OUT |= LED5;                      // Change State of LED 7
        one_time = 0;
      }

      break;                                // 
    default: break; 
  }
  if(Time_Sequence > 35){
    Time_Sequence = 0;
  }
 }

//------------------------------------------------------------------------------
current_job=eight;
next_job=triangle;
}





