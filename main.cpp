/******************************************************************************

Bridget Naylo
Lab 2 
*******************************************************************************/
#include <stdio.h>
#include <iostream>/******************************************************************************

Bridget Naylor
Lab 2 
*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int findSQRT( int num )
{
    bool squareFound= false;
    int firstSquare = 0;
    int lastSquare = num / 2;
    int middleSquare = (firstSquare + lastSquare) / 2;
    int middleSquarePlusOne = middleSquare + 1;
    
    while ( !squareFound )
    {
        if ( num == middleSquare * middleSquare )
        {
            return middleSquare;
        }
        else if ( num > middleSquare * middleSquare && num <= middleSquarePlusOne * middleSquarePlusOne )
        {
            return middleSquarePlusOne;
        }
        else if ( num > middleSquare * middleSquare )
        {
            firstSquare = middleSquare;
            //int lastSquare = lastSquare;
            
            middleSquare += (lastSquare - firstSquare);
            middleSquarePlusOne = middleSquare + 1;
        }
        else if ( num < middleSquare * middleSquare )
        {
            //int firstSquare = firstSquare;
            lastSquare = middleSquare;
            
            middleSquare = (firstSquare + lastSquare) / 2;
            middleSquarePlusOne = middleSquare + 1;
        }
    }
    
    return 0;
    
}


int findSmallestMissingNum( int n, int nums[] )
{
    bool found = false;
    int start = 0;
    int end = n;
    int middle = n / 2;
    while ( !found )
    {
        if ( middle == 0 || (nums[middle] != middle && nums[ middle - 1 ] == middle - 1 && middle - 1 >= 0))// 
        {
            found = true;
            return middle;
        }
        else if ( nums[middle] == middle )
        {
            start = middle;
            middle += (end - middle);
        }
        else if ( nums[middle] != middle )
        {
            end = middle;
            middle = (middle + start)/2;
        }
        
    }
    return 0;
}

int main()
{
    //Part 1
    cout<<"Part 1: Enter an integer that you want the square of: "<<endl;
    int N;
    cin>>N;
    cout<<findSQRT( N );
    
    
    //Part 2
    cout<<"Part 2: Enter size of list: "<<endl;
    int n;
    cin>>n;
    
    int missingNumChance;
    
    int missingNumIndex = 0;
    

    
    srand (time(0));
    int listOfNums[n];
    int value = 0;
    for ( int i = 0; i < n ; i++ )
    {
        
        //missingNumIndex = rand() % n ;
        //cout<<"missingNumIndex "<<missingNumIndex<<endl;
        missingNumChance = rand() % 10 ;
        if ( missingNumChance > 7 )//30% chance this i will be a missing number
        {
            value ++;
            listOfNums[i] = value;
            //cout<<"missingNumChance "<<missingNumChance<<"missing num "<<i<<endl;
        }
        else 
        {
            listOfNums[i] = value;
            //missingNumIndex = rand() % n ;
        }
        
        cout<<"i = "<<i<<" item[i] = "<<listOfNums[i]<<endl;
        value ++;
    }
    cout<<"Missing value = "<<findSmallestMissingNum( n, listOfNums );

    return 0;
}


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


int findSmallestMissingNum( int n, int nums[] )
{
    bool found = false;
    int start = 0;
    int end = n;
    int middle = n / 2;
    while ( !found )
    {
        if ( nums[middle] != middle && middle - 1 >= 0 && nums[ middle - 1 ] == middle - 1)
        {
            found = true;
            return middle;
        }
        else if ( nums[middle] == middle )
        {
            start = middle;
            middle += (end - middle);
        }
        else if ( nums[middle] != middle )
        {
            end = middle;
            middle = middle - start;
        }
        
    }
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
    int value;
    for ( int i = 0; i < n ; i++ )
    {
        if ( i == missingNumIndex )
        {
            value ++;
            listOfNums[i] = value;
        }
        else 
        {
            listOfNums[i] = value;
        }
        
        cout<<"i = "<<i<<" item[i] = "<<listOfNums[i]<<endl;
        value ++;
    }
    
    cout<<"Missing value = "<<findSmallestMissingNum( n, listOfNums );

    return 0;
}
