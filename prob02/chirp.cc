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

#include "chirp.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (chirp.cc) is where you should implement
// the member functions declared in the header (chirp.h), only
// if you didn't implement them inline within chirp.h:
//   1. SetMessage
//   2. GetMessage
//   3. The two AddLike member function overloads.
//   4. GetLikes
//   5. The three Chirp constructor overloads.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Chirp class.
// ===================================================================
Chirp::Chirp() : message_(""), likes_(0) {}

Chirp::Chirp(const std::string& message) : message_(message), likes_(0) {}

Chirp::Chirp(const std::string& message, int likes)
    : message_(message), likes_(likes) {}

void Chirp::SetMessage(const std::string& message) { message_ = message; }

std::string Chirp::GetMessage() const { return message_; }

int Chirp::GetLikes() const { return likes_; }

void Chirp::AddLike() { likes_++; }

void Chirp::AddLike(int count) { likes_ += count; }