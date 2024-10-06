# 3x3x3 Rubik's Cube Cracker 

While learning DSA, I wanted to create a pure DSA-focused project but wasn’t sure what to build until I came across an article that explained how a Rubik’s Cube can be solved using graph algorithms. This is a passion project where I apply my DSA and competitive programming skills to solve the cube using various graph algorithms and compare them. I’ll also explore different ways to represent the Rubik’s Cube—a physical entity in a form the computer can process. There are different ways to model a Rubik's cube, but we would ideally want to model it in a way that is fast to do operations. 

## About Rubik's Cube
The Rubik's Cube is a 3D combination puzzle invented in 1974 by Hungarian sculptor and professor of architecture Ernő Rubik. [[Wikipedia]](https://en.wikipedia.org/wiki/Rubik's_Cube)

### Terminology
  1) **Face:** A side of a Rubik’s Cube made up of 9 cubies: 1 center, 4 edges, and 4 corners. There are six faces: front, back, left, right, up, and down.
  2) **Cubie:** One of the 26 mini-cubes that make up the whole cube. Each cubie can have either one, two, or three sides coloured.
  3) **Center Cubie:** Cubies with only one side coloured and are present at the center of each side of the Rubik’s Cube. There are a total of 6 Center Cubbies. It is important to note that all center cubbies are statically positioned. No matter how you rotate/twist the Rubik’s Cube, the center cubbies will not change their positions relative to each other.
  4) **Edge Cubie:** Cubbies which are coloured on two of their sides. There are a total of 12 edge cubbies. Eg: Red-Yellow Edge.
  5) **Corner Cubie:** Cubbies with three of their sides coloured. There are a total of 8 corner cubbies. Eg: White-Red-Blue Corner Cubie.

### Advanced Rubik's Cube notation

There are 6 faces of a Rubik's cube, we can perform 6 rotations by rotating any one of the 6 sides clockwise.

#### Label of Rubik's Cube face-
- The face facing you would be Front (or F), in your case, it should be White. 
- The face facing up would be Up (or U), in your case, it should be Red.
- The face facing down would be Down (or D), in your case, it could be Orange. 
- The face facing away from you, that is, the face opposite to the White face is Back (or B), in your case it could be Yellow. 
- The faces left and right to the White face are Left (or L) and Right (or R), in your case it could be Blue and Green respectively.

#### Label of Rubik's Cube face rotation-
We can rotate any of the faces clockwise once, thus, giving us 6 unique rotations. We denote these rotations by the first letter of the face, that is, F, U, L, D, R, B.

| Notation 	| Meaning                          	|
|----------	|----------------------------------	|
| F        	| Clockwise rotation of Front face 	|
| R        	| Clockwise rotation of Right face 	|
| U        	| Clockwise rotation of Up face    	|
| B        	| Clockwise rotation of Back face  	|
| L        	| Clockwise rotation of Left face  	|
| D        	| Clockwise rotation of Down face  	|

#### Face rotations
- **Prime Rotations:** We can rotate any of the 6 faces counter-clockwise once, thus, giving us 6 more rotations, denoted by the first letter of the Face and an apostrophe. These are F’, U’, L’, D’, R’, B’. 
- **Double Rotation:** Rotating a face clockwise (or anti-clockwise) will give another 6 rotations, denoted by a face letter followed by the number 2. These are F2, U2, L2, D2, R2, B2. 

This gives us a list of **18 possible moves** we can make on a Rubik’s Cube:

|   	|    	|  	  |
|:-:	|:--:	|:---:|
| F 	| F’ 	|F2 	 |
| U 	| U’ 	|U2 	 |
| L 	| L’ 	|L2 	 |
| D 	| D’ 	|D2 	 |
| R 	| R’ 	|R2 	 |
| B 	| B’ 	|B2 	 |