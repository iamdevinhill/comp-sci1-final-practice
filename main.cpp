// Devin Hill
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
  int num;
  char letter;
  ifstream myfile ("testfile.txt");

  // open file
  if(myfile.is_open()){
    // loop thru file
      while (myfile >> num >> letter){
        // conditional for N line break
          if (letter =='N'){
              cout << endl;
          }
            // outputting letters
          else{
              for (int i=0; i < num; i++)
              cout << letter;
          }
      }
    }
}
