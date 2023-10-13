// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>
// ======================= YOUR CODE HERE =======================
// Write the Chirp class here, containing two member variables:
// one to store the message and one to track the number of likes.
//
// Then, define the following constructor overloads:
// 1. A default constructor, which initializes the message to the
//    empty string "", and initializes the number of likes to 0.
//    Note that `int` has a default value of 0, and string is by
//    default an empty string.
// 2. A non-default constructor, which accepts a message as input
//    and initializes the message to that input, and sets the
//    number of likes to 0.
//    Note that the int has a default value of 0.
// 3. A non-default constructor, which accepts a message as input
//    and initializes the message to that input, and also accepts
//    a like count as input, and initializes the like count to that.
//
// Finally, define the following member functions:
// 1. The accessor (getter) function for the message.
// 2. The mutator (setter) function for the message.
// 3. The two AddLike member function overloads.
// 4. The GetLikes member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// ===============================================================
class Chirp {
 public:
  Chirp();                            // Default constructor
  Chirp(const std::string& message);  // Constructor with a message
  Chirp(const std::string& message,
        int likes);  // Constructor with a message and likes

  void SetMessage(const std::string& message);
  std::string GetMessage() const;
  int GetLikes() const;
  void AddLike();
  void AddLike(int count);

 private:
  std::string message_;
  int likes_;
};