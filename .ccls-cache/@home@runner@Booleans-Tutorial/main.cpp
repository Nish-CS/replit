#include <iostream>

int main() {
  // Booleans are the most basic form of data, being either true or false;

  // This sets creates a variable called isOn and sets its value to true
  bool isOn = true;

  /*
    Output the boolean variable to the console either as a 1 for true or 0 for
    false std::endl is a replacement for outouting the \n characterand should be
    used when dealing with variables
  */

  std::cout << isOn << std::endl;

  // Reassign the variable to false

  isOn = false;

  // re-output the varible to confirm that it has changed
  std::cout << isOn << std::endl;
}