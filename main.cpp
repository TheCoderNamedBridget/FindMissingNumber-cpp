/******************************************************************************

Bridget Naylo
Lab 2 
*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

// int findSQRT( int num )
// {
//     bool squareFound= false;
//     int firstSquare = 0;
//     int lastSquare = num / 2;
//     int middleSquare = (firstSquare + lastSquare) / 2;
//     int middleSquarePlusOne = middleSquare + 1;
    
//     while ( !squareFound )
//     {
//         if ( num == middleSquare * middleSquare )
//         {
//             return middleSquare;
//         }
//         else if ( num > middleSquare * middleSquare && num <= middleSquarePlusOne * middleSquarePlusOne )
//         {
//             return middleSquarePlusOne;
//         }
//         else if ( num > middleSquare * middleSquare )
//         {
//             firstSquare = middleSquare;
//             //int lastSquare = lastSquare;
            
//             middleSquare += (lastSquare - firstSquare);
//             middleSquarePlusOne = middleSquare + 1;
//         }
//         else if ( num < middleSquare * middleSquare )
//         {
//             //int firstSquare = firstSquare;
//             lastSquare = middleSquare;
            
//             middleSquare = (firstSquare + lastSquare) / 2;
//             middleSquarePlusOne = middleSquare + 1;
//         }
//     }
    
//     return 0;
    
// }


int findSmallestMissingNum( int nums[] )
{
    //if current num + 1 != nums[current index + 1] 
    // current num + 1 == missing num
    
    return 0;
}

int main()
{
    //Part 1
    // cout<<"Enter an integer that you want the square of: "<<endl;
    // int N;
    // cin>>N;
    // cout<<findSQRT( N );
    
    
    //Part 2
    cout<<"Enter size of list: "<<endl;
    int n;
    cin>>n;
    
    int missingNumIndex;

    srand (time(NULL));

    missingNumIndex = rand() % n ;
    
    int listOfNums[n];
    for ( int i = 0; i < n ; i++ )
    {
        if ( i != missingNumIndex )
        {
            listOfNums[i] = i;
            cout<<"i "<<i<<" item[i]: "<<listOfNums[i]<<endl;
        }
        
    }
    
    findSmallestMissingNum( listOfNums );

    return 0;
}
