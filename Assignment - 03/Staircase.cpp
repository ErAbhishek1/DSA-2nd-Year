/*Staircase detail
This is a staircase of size :
   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
Write a program that prints a staircase of size .
Function Description
Complete the staircase function in the editor below.
staircase has the following parameter(s):
int n: an integer
Print
Print a staircase as described above.
Input Format
A single integer, , denoting the size of the staircase.
Output Format
Print a staircase of size  using # symbols and spaces.
Note: The last line must have  spaces in it.
Sample Input
6 
Sample Output
     #
    ##
   ###
  ####
 #####
######*/

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
//https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (int j = n - i -1; j < n; ++j) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
