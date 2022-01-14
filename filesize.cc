// I am enrolled in 4000 and 4420 at the same time, these will be the same files as you said in class we can do that. 

#include <iostream>

#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
  std::cout << "program: " << argv[0] << std::endl; // retrieving the first argument passed, which in this case is the program name

  for (int arg = 1; arg < argc; ++arg) {
    std::cout << " " << argv[arg] << ":"; // outputting the files passed into the command line
    ifstream instream(argv[arg]); // creating a stream with the text files
    if (instream.is_open()) {
      int numLines = 0;
      std::string unused;
      while (std::getline(instream, unused))
        ++numLines;

      std::cout << " " << numLines << std::endl; // keep format consistent with request
    } else {
      cout << " " // keep format conistent
        <<
        "-1" << endl;
    }
  }
  exit(0); // this means that the program executed correctly!
}