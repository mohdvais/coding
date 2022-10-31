/******************************************************************************
                                              Question 29
  At campus monk every stuent gets a score based on their performance in live online class.
  there are total n students sin class starting from roll. no. 1 to n, You will be given an array score[] of size n.
  where score[i] represent the marks scored by the roll no. [i+1]
  There is a new game plaled at campus monk in which the students are divided into teams of 2 colors (Green and blue ).
  The students with odd roll no. are in blue team and the students with even roll no. are in green team.
  the team score is calculated by adding the score of each student in the team and whichever team has the higher score is
  considered the winner of the game.
  you need to find the winning teaam and print the color of the team and also print the score difference of both teams
  winning team - losing team.

  Note : if the score of both the team are equal then print "Draw" do nont print 0 afterwards.                          
*******************************************************************************/

#include <iostream>

using namespace std;

void Winner(int n, int arr[])
{
    int even = 0, odd = 0;
    for(int i=0; i<n; i++)
    {
        //even
        if((i+1) % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];

        }
    }
    if(even >odd)
    {
        cout<<"Green "<< even-odd<<endl;
    }
    else if (odd> even)
    {
        cout<<"Blue "<< odd-even<<endl;
    }
    else
    {
       cout<<"DRAW"<<endl; 
    }
}

int main()


{
    int n; cin>> n;
    int arr[n];
    for( int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Winner(n, arr);
}

/*
6
11 29 21 3 5 9
Green 4
9
1 2 3 4 5 6 7 8 9
Blue 5
3
21 50 29
DRAW
*/
