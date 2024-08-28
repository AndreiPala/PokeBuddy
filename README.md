# PokeBuddy
We want to make some sort of paint app that uses the graphic functions from the TFT_eSPI library in hope that we make some animatios for our project in a more compact format.
## **To do list:**
- [X] Extract the main functions we're gonna use from the header file
- [ ] Find a way to take the function result and display it:
#### From what I saw, we only need to modify 2 functions to make this work?, respectively:
- [ ] setWindow() -> this function should just throw the x, y, height and width
- [ ] pushBlock() -> this function should just throw what color the rectangle from setWindow should have 
#### What to do with these values?
+ these values will then be read by our program, that will then paint them on the *screen*.
+ I was thinking that we should enlarge the display, what I mean by this is multiplying the H and W of the screen so we can see better e.g. 240x240 -> 720x720; so we can have some space to add an outline.
+ the outline mentioned above should follow the cursor of the mouse until the LMB is pressed / as some kind of shadow

## Wanted features:
+ to be able to see the previous frame under the current frame;
+ to save the current frame;
+ to start a new frame;
+ when saving the frame, 3 files should be created, a png, a text file with the values of the pixels and another text one that contains the instructions for the MCU;
+ when clicking on a shape, that shape remains selected, a menu will appear with the values for calling the function for that shape, but the user will be able to use the click to make those shapes, e.g. user presses *fill rectangle*, then click at (30, 45), then at (40, 50) -> fill rectangle(30,45, 40-30, 50-45, color);
+ when the menu mentioned above appears, it will a default button that will have everything but the x and y positions, so the user can hover with the shape; to be improved on the idea..
