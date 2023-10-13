// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>

#include "bubble.h"

int main() {
  // 1. Create two bubble objects called `bubble1` and `bubble2`

  double radius1 = 0.0;
  double radius2 = 0.0;
  std::cout << "Please enter the radius of the first bubble: ";
  std::cin >> radius1;
  // 2. Set the radius of bubble1 to radius1

  std::cout << "Please enter the radius of the second bubble: ";
  std::cin >> radius2;
  // 3. Set the radius of bubble2 to radius2

  // 4. Create a new bubble object called `combined`

  // 5. Call the CombineBubbles function to combine the bubble1
  // and bubble2 objects, then store the result in the combined variable.

  double volume = 0.0;
  // 6. Get the volume of `combined` and set the volume variable above.

  std::cout
      << "The bubbles have now combined and created a bubble with the volume "
         "of: "
      << std::fixed << std::setprecision(2) << volume << std::endl;
  return 0;
}
