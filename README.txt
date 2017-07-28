The problem    
------------

    
To magnify an image by a constant integer factor, we can replace each pixel by an 
appropriate rectangular block of the same pixel. We can magnify horizontally, 
vertically, or in both directions, possibly with different factors. In fact we can allow 
negative factors, with the meaning that they both magnify the picture and reflect 
it. (A negative horizontal scaling causes a reflection across a horizontal axis, 
while a negative vertical scaling causes a reflection across a vertical axis.)

Create function(or class) "enlarge" that is given an image 
and two integer values horFactor and verFactor, representing the horizontal and vertical 
scaling factors respectively. 
It returns a new image after horFactor 
and verFactor have been applied.

c , c++ or C# can be used.
Internaly the program may use either strings or arrays (choose your prefered) to hold the images.
Expected duration :  30-90 minutes
There is no need for the program to be efficient.
    



Constraints
-------------


-
image contains between 1 and 10 elements, inclusive.
-
Each element of image contains the same number of characters, between 1 and 10, inclusive.
-
Each character in each element of image is 'X' or '-'.
-
The absolute value of horFactor is between 1 and 5, inclusive.
-
The absolute value of verFactor is between 1 and 5, inclusive.



Examples
----------

0)

    
{"X"}
2
3
Returns: {"XX", "XX", "XX" }
This picure was a single pixel. Now it is twice as big in the x-direction, and three times as big in the y-direction.
1)

    
{"X--",
 "X--",
 "XXX"}
-1
2
Returns: {"--X", "--X", "--X", "--X", "XXX", "XXX" }
The original picture has width 3 and height 3 and is an L-shape. After magnification its width is still 3, its height is 6, and the L-shape has been reflected in the x-direction (i.e., about a vertical axis).
2)

    
{"X--",
 "-X-",
 "-X-"}
2
-3
Returns: 
{"--XX--",
 "--XX--",
 "--XX--",
 "--XX--",
 "--XX--",
 "--XX--",
 "XX----",
 "XX----",
 "XX----" }

3)

    
{"XX-"}	
1
-1
Returns: {"XX-" }

4)

    
{ "--XX--XX-X", 
 "--XXX----X",
 "XX---X---X",
 "---XX-XXXX",
 "X-XX--XX-X",
 "---XXXX--X",
 "--XXX--X-X",
 "-----X----",
 "-XXX--XXXX",
 "------XXX-"} 
-5
5
Returns: 
{"XXXXX-----XXXXXXXXXX----------XXXXXXXXXX----------",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX----------",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX----------",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX----------",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX----------",
 "XXXXX--------------------XXXXXXXXXXXXXXX----------",
 "XXXXX--------------------XXXXXXXXXXXXXXX----------",
 "XXXXX--------------------XXXXXXXXXXXXXXX----------",
 "XXXXX--------------------XXXXXXXXXXXXXXX----------",
 "XXXXX--------------------XXXXXXXXXXXXXXX----------",
 "XXXXX---------------XXXXX---------------XXXXXXXXXX",
 "XXXXX---------------XXXXX---------------XXXXXXXXXX",
 "XXXXX---------------XXXXX---------------XXXXXXXXXX",
 "XXXXX---------------XXXXX---------------XXXXXXXXXX",
 "XXXXX---------------XXXXX---------------XXXXXXXXXX",
 "XXXXXXXXXXXXXXXXXXXX-----XXXXXXXXXX---------------",
 "XXXXXXXXXXXXXXXXXXXX-----XXXXXXXXXX---------------",
 "XXXXXXXXXXXXXXXXXXXX-----XXXXXXXXXX---------------",
 "XXXXXXXXXXXXXXXXXXXX-----XXXXXXXXXX---------------",
 "XXXXXXXXXXXXXXXXXXXX-----XXXXXXXXXX---------------",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX-----XXXXX",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX-----XXXXX",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX-----XXXXX",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX-----XXXXX",
 "XXXXX-----XXXXXXXXXX----------XXXXXXXXXX-----XXXXX",
 "XXXXX----------XXXXXXXXXXXXXXXXXXXX---------------",
 "XXXXX----------XXXXXXXXXXXXXXXXXXXX---------------",
 "XXXXX----------XXXXXXXXXXXXXXXXXXXX---------------",
 "XXXXX----------XXXXXXXXXXXXXXXXXXXX---------------",
 "XXXXX----------XXXXXXXXXXXXXXXXXXXX---------------",
 "XXXXX-----XXXXX----------XXXXXXXXXXXXXXX----------",
 "XXXXX-----XXXXX----------XXXXXXXXXXXXXXX----------",
 "XXXXX-----XXXXX----------XXXXXXXXXXXXXXX----------",
 "XXXXX-----XXXXX----------XXXXXXXXXXXXXXX----------",
 "XXXXX-----XXXXX----------XXXXXXXXXXXXXXX----------",
 "--------------------XXXXX-------------------------",
 "--------------------XXXXX-------------------------",
 "--------------------XXXXX-------------------------",
 "--------------------XXXXX-------------------------",
 "--------------------XXXXX-------------------------",
 "XXXXXXXXXXXXXXXXXXXX----------XXXXXXXXXXXXXXX-----",
 "XXXXXXXXXXXXXXXXXXXX----------XXXXXXXXXXXXXXX-----",
 "XXXXXXXXXXXXXXXXXXXX----------XXXXXXXXXXXXXXX-----",
 "XXXXXXXXXXXXXXXXXXXX----------XXXXXXXXXXXXXXX-----",
 "XXXXXXXXXXXXXXXXXXXX----------XXXXXXXXXXXXXXX-----",
 "-----XXXXXXXXXXXXXXX------------------------------",
 "-----XXXXXXXXXXXXXXX------------------------------",
 "-----XXXXXXXXXXXXXXX------------------------------",
 "-----XXXXXXXXXXXXXXX------------------------------",
 "-----XXXXXXXXXXXXXXX------------------------------" }
