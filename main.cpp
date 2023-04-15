#include <iostream>
using namespace std;

int playgame() {
  cout
      << "<<<<<<------    Please read the instructions to play     ------>>>>>>"
      << endl
      << endl;
  cout << "1. Quiz contains 10 questions" << endl << endl;
  cout << "2. For every correct answer, you will get 1 mark" << endl
       << endl
       << endl
       << endl;

  int score = 0;
  char option;

  cout << "Q1. Who developed C++?" << endl;
  cout << "a) Bjarne Stroustrup b) Dennis Ritchie c) Sun Microsystems d) Guido "
          "van Rossum"
       << endl;
  cin >> option;
  cout << endl;
  if (option == 'a' || option == 'A') {
    score++;
  }
  cout << "Q2. What is the another name of C++?" << endl;
  cout << "a) C b) new C c) C# d) C Sharp" << endl;
  cin >> option;
  cout << endl;
  if (option == 'b' || option == 'B') {
    score++;
  }
  cout << "Q3. When was C++ developed?" << endl;
  cout << "a) 1947 b) 1990 c) 1985 d) 2000" << endl;
  cin >> option;
  cout << endl;
  if (option == 'c' || option == 'C') {
    score++;
  }
  cout << "Q4. How many primitive datatypes are there in C++?" << endl;
  cout << "a) 10 b) 7 c) 8 d) 5" << endl;
  cin >> option;
  cout << endl;
  if (option == 'b' || option == 'B') {
    score++;
  }
  cout << "Q5. Which of the following is used for single line comment in C++?"
       << endl;
  cout << "a) //comment b) /comment c) comment// d) /comment/" << endl;
  cin >> option;
  cout << endl;
  if (option == 'a' || option == 'A') {
    score++;
  }
  cout << "Q6. Which of the following user-defined header file extension used "
          "in c++?"
       << endl;
  cout << "a) hg b) cpp c) hf d) h" << endl;
  cin >> option;
  cout << endl;
  if (option == 'd' || option == 'D') {
    score++;
  }
  cout << "Q7. Which of the following is a correct identifier in C++?" << endl;
  cout << "a) VAR_1234  b) $var_name  c) 7VARNAME  d) 7var_name" << endl;
  cin >> option;
  cout << endl;
  if (option == 'a' || option == 'A') {
    score++;
  }
  cout << "Q8. Which of the following is not a type of Constructor in C++?"
       << endl;
  cout << "a) Copy Constructor b) Default Constructor c) Parameterized "
          "Constructor d) Friend Constructor"
       << endl;
  cin >> option;
  cout << endl;
  if (option == 'd' || option == 'D') {
    score++;
  }
  cout << "Q9. Which of the following approach is used by C++?" << endl;
  cout << "a) Left-Right b) Right-Left c) Bottom-Up d) Top-Down" << endl;
  cin >> option;
  cout << endl;
  if (option == 'c' || option == 'C') {
    score++;
  }
  cout << "Q10. Which of the following type is provided by C++ but not C?"
       << endl;
  cout << "a) int b) bool c) double d) float" << endl;
  cin >> option;
  cout << endl;
  if (option == 'b' || option == 'B') {
    score++;
  }

  return score;
}

int main() {
  cout << endl << endl;
  cout << "-----Welcome to the Quiz-----" << endl << endl << endl;
play:
  cout << "Press s to start the quiz" << endl << endl;

  char choice, c;
  int temp = 0, score;
  cin >> choice;
  if (choice == 's' || choice == 'S') {
    score = playgame();
    temp = 1;
  } else {
    cout << "Invalid key pressed" << endl << endl;
    cout << "You need to press s to play" << endl;
    cin >> choice;
    if (choice == 's' || choice == 'S') {
      score = playgame();
      temp = 1;
    } else {
      exit(0);
    }
  }
  if (temp == 1) {
    cout << "Your Score: " << score << endl;
    if (score >= 6) {
      cout << "Hey! You passed it." << endl << endl;
      cout << "Congratulations!" << endl;
      cout << "Do you want to play again y or n?" << endl;
      cin >> c;
      if (c == 'y' || c == 'Y') {
        goto play;
      } else {
        cout << "Thanks for playing" << endl;
        exit(0);
      }
    } else {
      cout << "You are not passed" << endl << endl;
      cout << "Do you want to play again y or n?" << endl;
      cin >> c;
      if (c == 'y' || c == 'Y') {
        goto play;
      } else {
        cout << "Thanks for playing" << endl;
        exit(0);
      }
    }
  }
}
