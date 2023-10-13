// Alejandro Fonseca
// CPSC 121L-06
// 10-12-23
// gfoncsu.fullerton.edu email>
// alejandro-garf
//
// Lab 7-1

// ======================= YOUR CODE HERE =======================
// Write the Bubble class here, containing one member variable,
// the radius_. Note that radius_ can be a decimal value.
//
// Then, define the following member functions:
// 1. The accessor (getter) function for radius_.
// 2. The mutator (setter) function for radius_.
// 3. The CalculateVolume member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// ===============================================================
class Bubble {
 public:
  double GetRadius() const { return radius_; }
  void SetRadius(double radius) { radius_ = radius; }
  // Volume of a sphere is 4/3 * r * r * r;
  double CalculateVolume() const {
    double volume = (4.0 / 3.0) * 3.1415 * radius_ * radius_ * radius_;
    return volume;
  }

 private:
  double radius_;
};

// ========================= YOUR CODE HERE =========================
// Write the function declaration for the CombineBubbles function.
//
// 1. Use pass-by-reference to pass in the Bubble objects efficiently.
// 2. Consider if the inputs passed in should be modified. If not,
//    please mark them const.
// ===================================================================
Bubble CombineBubbles(const Bubble& bubble1, Bubble& bubble2);