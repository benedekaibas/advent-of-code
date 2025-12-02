#include <iostream>
#include <fstream>
#include <chrono>

void GuessPassword() {
  int pos = 50;
  int count = 0;
  std::string text;
  std::ifstream ReadFile("text.txt");
  char direction;
  int val;
  while (ReadFile >> direction >> val) {

    if (direction == 'R') {
      pos += val;
      
      pos = pos % 100;
      if (pos > 99) {
        pos = (pos + val) % 100;
      }
    }

    if (direction == 'L') {
      pos -= val;

      pos = pos % 100;
      if (pos < 0) {
        pos = pos + 100;
      }
    }
    if (pos == 0) {
      count++;
    }
  }
  std::cout << "Result: " << count << "\n";
}

int main() {
  const auto begin{std::chrono::steady_clock::now()};
  GuessPassword();
  const auto end{std::chrono::steady_clock::now()};

  const std::chrono::duration<double> time{end - begin};
  std::cout << time.count() << "\n";
}
