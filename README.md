Created for Hackathon 1 of the Smart Technology Track - University of Twente - Creative Technology Programme - 2026 Cohort


Megatron is the latest development in line-following technology, utilizing state-of-the-art
    (For Hackathon 1) techniques to return to it's track upon loss of contact. Marvel at the
    breakthroughs done by our direction-keeping algorithm which automatically oscillates direction
    whenever it needs to adjust itself considerably, until it's back on the track and following it normally.


Functionality:
    * Follows a white line on a black floor OR goes into fallback mode when it loses track of a single line.
    * Uses two light sensor boards in order to determine whether the robot sits closer to the left or right side of the line
    * Controls a dual H-Bridge board in order to steer the robot forwards/backwards or apply a brake
    * Uses PWM in order to determine the speed of the motors
    *   Output of the sensor on one side is inversely proportional to the PWM value given to the opposite side's motor
    * Robot always is aware of the direction it's going (left, right or straight)
    * If the sensors detect too much or too little light for a number of tries, the robot goes into FALLBACK MODE:
    *   (This triggers if the robot lost the line, is too far off the line when steering, or meets a very thick/branching line)
    *   It will keep its direction until it meets the line again, then either go back on the line or potentially go into fallback 
    *       mode on the opposite side, until it stabilizes itself to the middle of the line again
    *   Alternatively, it will go straight to cover a gap in the line.


Caution:
    * /!\ Right and left sensors are out of sync-ish. There's gonna be some specific values for the mapping of each one. DON'T REMOVE THESE.

Authors:
* Razvan Samoila
* Samuel Hawryluk
* Teo Peeters
* Finn Dijkstra
* Reanu Ali
* Inge Mertens
