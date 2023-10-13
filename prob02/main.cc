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

#include <iostream>
#include <string>
#include <vector>

#include "chirp.h"

int main() {
  std::vector<Chirp> chirps;
  std::string input;

  std::cout << "You can \"chirp\" a new message to Chirper, or \"like\" an "
               "existing chirp, or \"exit\". What do you want to do? ";

  while (input != "exit") {
    std::getline(std::cin, input);

    if (input == "chirp") {
      std::string user_message;
      std::cout << "What's your message? ";
      std::getline(std::cin, user_message);

      // Create a new Chirp object and add it to the vector.
      chirps.emplace_back(Chirp(user_message));
    } else if (input == "like") {
      std::string user_index_string;
      std::cout << "Which index do you want to like? ";
      std::getline(std::cin, user_index_string);
      int user_index = std::stoi(user_index_string);

      if (user_index > 0 && user_index <= chirps.size()) {
        chirps[user_index - 1].AddLike();
      }
    }

    // Print the list of chirps.
    std::cout << "Chirper has " << chirps.size() << " chirp";
    if (chirps.size() != 1) {
      std::cout << "s";
    }
    std::cout << ":" << std::endl;

    for (size_t i = 0; i < chirps.size(); i++) {
      std::cout << i + 1 << ". " << chirps[i].GetMessage() << " ("
                << chirps[i].GetLikes() << " likes)" << std::endl;
    }
  }

  std::cout << "Goodbye!" << std::endl;

  return 0;
}