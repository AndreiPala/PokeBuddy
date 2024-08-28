# PokeBuddy
We want to make some sort of paint app that uses the graphic functions from the TFT_eSPI library in hope that we make some animatios for our project in a more compact format.
## **To do list:**
- [X] Extract the main functions we're gonna use from the header file
- [ ] Find a way to take the function result and display it:
  ### From what I saw, we only need to modify 2 functions to make this work?, respectively:
- [ ] setWindow() -> this function should just throw the x, y, height and width
- [ ] pushBlock() -> this function should just throw what color the rectangle from setWindow should have 
#### What to do with these values?
+ these values will then be read by our program, that will then paint them on the *screen*.
+ I was thinking that we should enlarge the display, what I mean by this is multiplying the H and W of the screen so we can see better
e.g. 240x240 -> 720x720; so we can have some space to add an outline.
+ the outline mentioned above should follow the cursor of the mouse until the LMB is pressed / as some kind of shadow

#### Wanted features:
+
