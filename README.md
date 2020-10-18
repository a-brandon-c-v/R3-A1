# R3-A1
Thickercad website
https://www.tinkercad.com/things/7apRVYpKbAB-r3-a1/editel
R3

I have been able to complete all task after debugging my previous system and program. 

As mentioned previously, I was having problems after implementing the dip switch. After review the entire system with some help! I came to a realization that my switching were routed wrong. They were supposed to be connected from the bottom pins to a common ground and the top pins were supposed to be connected to ONLY the output signals from the arduino which it already provides a voltage. 

Another interesting issue that I had was that the pin 13 was not working in tinkercad. The reason is still unknown to me, but as soon as i switch it to pin 11 everything started working. 

After Moustafas feedback I decided to remove the full stop. 

Here's a cronological representation of the system
FOWARD:
First task is to have the system move forward. So I decided for the system to initialize with both motors turn on M1 M2 on positive rpm. 
In terms of the logic of the code for the switches we would have dip switch [s1 s2 s3 s4]= [LOW LOW LOW LOW]
<img width="1030" alt="Screen Shot 2020-10-18 at 2 07 55 AM" src="https://user-images.githubusercontent.com/64425431/96360028-17570200-10e7-11eb-8026-c7aef823ae17.png">

#BACKWARDS: 
M1 AND M2 NEGATIVE RPM
In terms of the logic of the code for the switches we would have dip switch [s1 s2 s3 s4]= [HIGH LOW LOW LOW]
<img width="1025" alt="Screen Shot 2020-10-18 at 2 08 13 AM" src="https://user-images.githubusercontent.com/64425431/96360043-39e91b00-10e7-11eb-9d5d-0e10b7c2c8c6.png">

#LEFT TURN
M1 NEGATIVE M2 POSITIVE RPM
In terms of the logic of the code for the switches we would have dip switch [s1 s2 s3 s4]= [HIGH HIGH LOW LOW]
<img width="1021" alt="Screen Shot 2020-10-18 at 2 08 30 AM" src="https://user-images.githubusercontent.com/64425431/96360063-5dac6100-10e7-11eb-9c84-9942b60ad523.png">

#RIGHT TURN
M1 POSITIVE M2 NEGATIVE RPM
In terms of the logic of the code for the switches we would have dip switch [s1 s2 s3 s4]= [HIGH HIGH HIGH LOW]
<img width="1022" alt="Screen Shot 2020-10-18 at 2 08 44 AM" src="https://user-images.githubusercontent.com/64425431/96360081-7e74b680-10e7-11eb-8893-d4835b5c35e3.png">

#STOP 
M1 AND M2 0 RPM
In terms of the logic of the code for the switches we would have dip switch [s1 s2 s3 s4]= [HIGH HIGH HIGH HIGH]
<img width="1024" alt="Screen Shot 2020-10-18 at 2 08 56 AM" src="https://user-images.githubusercontent.com/64425431/96360082-82a0d400-10e7-11eb-90d6-7d1f7f755953.png">





-----------------



#REF.

PREVIOUS EXAMPLES WITH WRONG SYSTEM TO SHOW PROGRESS...
I was able to do all 5 task without the dip switch all automatically. with the following system. 
I've decided to have full stops btw every main command for the user to view the difference of each action something to highlight is that both motors have to be facing the same way and switch routing of motor on the top M1 LEFT This way the logic of the motors will be as follows: 
  //positive rpm= cw= both motors=moving fwd
  //negative rpm =ccw= both motors=moving bckwd
  //oposite rpm=cw vs ccw; ccw vs cw =left or right move
<img width="1167" alt="Screen Shot 2020-10-17 at 11 53 53 PM" src="https://user-images.githubusercontent.com/64425431/96358469-84619c00-10d5-11eb-8b8e-1cd2a4e0d97c.png">

Unfortunately I do not have enough time to go deeper and debug my program. I got two big assignments due Monday, but hopefully i get to tweak it even afterwards. For some reason I am having some problems with the switch it only response to one of my changes. It only goes fwd and when modify it completely stops. 
I had put the potentiometer on the side as I was debuging because I need it to get a clear rpm and with the potentiometer around the singal was moving sometimes. 


<img width="1167" alt="Screen Shot 2020-10-17 at 11 53 53 PM" src="https://user-images.githubusercontent.com/64425431/96358448-44021e00-10d5-11eb-96a5-88c0ee287e4b.png">

<img width="849" alt="Screen Shot 2020-10-18 at 12 06 21 AM" src="https://user-images.githubusercontent.com/64425431/96358496-c854a100-10d5-11eb-93cd-e9d698311943.png">

Something to highlight is the orientation of the motors. 


