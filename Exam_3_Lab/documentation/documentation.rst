DOCUMENTATION

FILES:
Applicaton.cpp/.h: Start the glut graphics engine and displays message in terminal.

Complex.cpp/.h: Includes the complex number operations for the Mandlebrot.cpp.

Graphics.cpp/.h: Includes the glut graphics for the Mandlebrot plot and screen controls/keyboard controls.

Mandlebrot.cpp/.h: Contains math for the Mandlebrot plot as well as color schemes and controls for scale and bitmap memory.

timer.cpp/.h: Contains the code to find the frame rate.

about.h: Contains the author, program name, date, etc.

commands.cpp/.h: contains the display message instructions.

UNDERSTANDING MANDLEBROT PLOTS:
To start, the basic formula is z(z)+c.
In the program, this formula is taking two complex numbers for z and c.
The formula is used to calculate how many times the calculation is done before the value is out of bounds or 'escaped' the mandlebrot
set. The min and max values are set to the absolute value of 2 for y, and the absolute value of 2.5 for x. Each point on the screen is 
passed through the formula and assigned a color for how many times it took for it to escape, and that is how the plot is being generated.
If the min and max's were changed, i think it would change the appearance of the set. 