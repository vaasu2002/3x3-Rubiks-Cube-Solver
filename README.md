# 3x3x3 Rubik's Cube Cracker 

While learning DSA, I wanted to create a pure DSA-focused project but wasn’t sure what to build until I came across an article that explained how a Rubik’s Cube can be solved using graph algorithms. This is a passion project where I apply my DSA and competitive programming skills to solve the cube using various graph algorithms and compare them. I’ll also explore different ways to represent the Rubik’s Cube—a physical entity in a form the computer can process. There are different ways to model a Rubik's cube, but we would ideally want to model it in a way that is fast to do operations. 

## About Rubik's Cube
The Rubik's Cube is a 3D combination puzzle invented in 1974 by Hungarian sculptor and professor of architecture Ernő Rubik.[Wikipedia](https://en.wikipedia.org/wiki/Rubik's_Cube)

### Terminology
  1) **Face:** A side of a Rubik’s Cube made up of 9 cubies: 1 center, 4 edges, and 4 corners. There are six faces: front, back, left, right, up, and down.
  2) **Cubie:** One of the 26 mini-cubes that make up the whole cube. Each cubie can have either one, two, or three sides coloured.
  3) **Center Cubie:** Cubies with only one side coloured and are present at the center of each side of the Rubik’s Cube. There are a total of 6 Center Cubbies. It is important to note that all center cubbies are statically positioned. No matter how you rotate/twist the Rubik’s Cube, the center cubbies will not change their positions relative to each other.
  4) **Edge Cubie:** Cubbies which are coloured on two of their sides. There are a total of 12 edge cubbies. Eg: Red-Yellow Edge.
  5) **Corner Cubie:** Cubbies with three of their sides coloured. There are a total of 8 corner cubbies. Eg: White-Red-Blue Corner Cubie.
