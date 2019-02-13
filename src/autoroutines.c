// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"

void compAutoRedRight(){
  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
     // for 10 meter = 394" at speed 60            // turn at seed 30 for 90 degree angle right turn
    // After turn drive a bit more forward
  driveForDistancePID(12, 50);
  pivotTurn(1, 50, 30);
  driveForDistancePID(15, 50);
  liftMove(75);
  delay(2000);
  liftMove(0);
  driveForDistancePID(5, 50);
  driveForDistancePID(30, -50);
  pivotTurn(1, 40, 450);
}

void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
         // dirve robot forward at speed '80'
          // drive for 200mSec (2Sec)
}
