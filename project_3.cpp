/*//Suriya Sristi
#include <iostream>
using namespace std;

int main(){

  int q[8][8] = {};
  int r = 0, c = 0;
  q[r][c] = 1; 
  
nextColumn: 
  c++;
  if (c == 8) goto print;
  r = -1;

nextRow:
  r++;
  if (r == 8) goto backtrack;
  for (int i = 0; i < c; i++){
    if (q[r][i] == 1) goto nextRow;
  }
  for (int i = 1; ((r-i)>=0 && (c-i)>=0); i++){
    if (q[r-i][c-i] == 1) goto nextRow;
  }
  for (int i = 1; ((r+i)<=7 && (c-i)>=0); i++){
    if (q[r+i][c-i] == 1) goto nextRow;
  }
  q[r][c] = 1;
  goto nextColumn;

backtrack:
  c--;
  if (c == -1){
    cout << "No more solutions.\n";
    return 0;
  }
  r = 0;
  while (q[r][c] != 1){
    r++;
  }
  q[r][c] = 0;
  goto nextRow;

print:
  static int numSol = 0;
  cout << "Solution #" << ++numSol << ":\n";
  for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
      cout << q[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  goto backtrack;
}*/