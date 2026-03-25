# Projectile Simulator (C) 🎯

A console-based physics simulator that calculates the landing distance of a projectile using user inputs like mass, force, distance of force application, and angle. Includes a simple ASCII animation and typing effect for better visualization.

**Features**

* Projectile motion calculation (range)
* Input validation for accuracy
* ASCII trajectory animation
* Delayed “typing” output effect
* Loop for repeated simulations

**Usage**

1. Compile the program:

   ```bash
   gcc main.c -o simulator -lm
   ```
2. Run:

   ```bash
   ./simulator
   ```
3. Enter values when prompted.

**Inputs**

* Mass
* Force applied
* Distance over which force is applied
* Launch angle (0–90°)

**Tech**
C, math library, Windows sleep functions

**Note**

* Uses basic physics approximation.
* Animation is for visualization only.
* On non-Windows systems, replace `Sleep()` with `usleep()`.

