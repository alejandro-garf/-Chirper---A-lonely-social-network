// Alejandro Fonseca
// CPSC 121L-06
// 10-12-23
// gfoncsu.fullerton.edu email>
// alejandro-garf
//
// Lab 7-1

#include "bubble.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (bubble.cc) is where you should implement
// the member functions declared in the header (bubble.h), only
// if you didn't implement them inline within bubble.h:
//   1. GetRadius
//   2. SetRadius
//   3. CalculateVolume
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Bubble class.
// ===================================================================

// ========================= YOUR CODE HERE =========================
// Implement the CombineBubbles function you declared in bubble.h
//
// Since CombineBubbles is NOT in the Bubble class, you should not
// specify the name of the class with the :: format.
// ===================================================================
Bubble CombineBubbles(const Bubble& bubble1, Bubble& bubble2) {
  Bubble combined_bubble{};
  combined_bubble.SetRadius(bubble1.GetRadius() + bubble2.GetRadius());
  return combined_bubble;
}