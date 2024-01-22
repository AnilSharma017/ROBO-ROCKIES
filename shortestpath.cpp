//code to find shortest path using LSRU concept in micromouse.
#include <iostream>
#include <string>
using namespace std;
using std::string;

// finding u turns to reduce path  
void UTurCheck(string in){
for(int x=0;x<in.length();x++){
    if(intake[x]=='U'){ 
    return 1;
        }
    }
    return 0;
}

//reducing path
void shortestPath(string input)
{
    while (UTurnCheck(input)==1)
    {
        for (int i = 0; i < input.length(); i++)
        {
             if (input[i] == 'S' && input[i + 1] == 'U' && input[i + 2] == 'R')
            {
                input.erase(i, 3);
                input.insert(i, "R");
                break;
            }
              
             else if (input[i] == 'L' && input[i + 1] == 'U' && input[i + 2] == 'L')
            {
                input.erase(i, 3);
                input.insert(i, "S");
                break;
            }
        }
    }
    cout << input;
}
int main()
{
    string input = "SRURSUR";
    shortestPath(input);
  return 0;
}
