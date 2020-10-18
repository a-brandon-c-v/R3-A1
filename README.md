# R3-A1
Thickercad website
https://www.tinkercad.com/things/7apRVYpKbAB-r3-a1/editel
R3

Unfortunately I do not have enough time to go deeper and debug my program. I was able to do all 5 task without the dip switch. for some reason I am having some problems with the switch it only response to one of my changes. it only goes fwd and when modify it completely stops. 
I had put the potentiometer on the side as I was debuging because I need it to get a clear rpm and with the potentiometer around the singal was moving sometimes. 

![github-small](file:///Users/brandoncastillo/Desktop/Screen%20Shot%202020-10-17%20at%2011.53.53%20PM.png)
![Uploading Screen Shot 2020-10-17 at 11.53.53 PM.png…]()

Something to highlight is the orientation of the motors. 

I've decided to have full stops btw every main command for the user to view the difference of each action something to highlight is that both motors have to be facing the same way and switch routing of motor on the top M1 LEFT This way the logic of the motors will be as follows: 
  //positive rpm= cw= both motors=moving fwd
  //negative rpm =ccw= both motors=moving bckwd
  //oposite rpm=cw vs ccw; ccw vs cw =left or right move
