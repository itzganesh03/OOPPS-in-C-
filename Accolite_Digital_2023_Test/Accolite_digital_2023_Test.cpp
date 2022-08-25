// You are supposed to write production ready code with Proper Unit Test Cases, Modularizaton etc. You need to write your test cases under user package in test folder. One sample test is created under same package for reference.
// Your code will be evaluated on the basis of code coverage, Code Quality, Best Practices and Bugs. NOTE: Here, we use Python3.7



// **PROBLEM:**

// Mustafa wants to cross a dungeon. Dungeon has N cells, and in every cell there are M monsters. To cross each cell he has to kill one monster, on killing the monster,

// he loses the strength equal to that of monster and gains some confidence which adds up in his strength and he proceeds to the next cell. Mustafa can only kill a monster

// Help him find the minimum strength he must have in the beginning so that he can cross N cells.

// **CONSTRAINTS:**


// 1 <N< 100

// 1 <M< 10^3 

// 1 < P,C< 100e


// **FUNCTION DESCRIPTION:** Complete the function 'hunt in code. Function must return an integer, the minimum strength required by mustafa to cross the dungeon.

// 'hunt' has the following parameter(s):



// Input

// P: N*M 2D Array, where P[1][1] denotes strength of monster in ith cell

// C: N*M 2D Array, where C[i][j] denotes gain in confidence, hence increase in strength on killing jth monster in ith cell.

// N: Number of cell

// M: Number of monsters in each cell

// Output

// Return an integer, the minimum strength required by mustafa to cross the dungeon.

// **EXAMPLE:**

// Eg Input

// N = 3

// N = 3

// P =3 2 5.

//       891

//       476

// c = 111

//        111


// Output

// 5

// Explanation

// Let strength of mustafa be 5-5 Mustafa kills 2nd monster in first cell and gains the confidence equal to 1. (s-4) Mustafa then kills 3rd monster in second cell and gains confidence equal to 1. (5-4) Mustafa then kills the 1st monster in third cell and gains confidence equal to 1. (s - 1)

// So s = 5 is the minimum strength required to cross the dungeon.


#include <iostream>
#include <vector>

using namespace std;

//Function signature SHOULD NOT be modified at all,

// otherwise, you code would be disqualified

int hun(vector<vector<int>> P, vector<vector<int>> C, int n, int m){

      int strength=99999999999;
      for(int i=0;i<m;i++){
            strength=min(strength,P[n-1][i]);
      }

      for(int i=n-2;i>=0;i--){
            int temp_min=999999999999;
            for(int j=0;j<m;j++){

                  temp_min=min(temp_min,P[i][j]-C[i][j]+strength);
            }
            strength=temp_min;
      }
      cout<<strength;
      return 0;
}