#include <iostream>
using namespace std ;

int BinarySearch(int arr[] , int left , int right , int number)
{
   while ( left <= right)
    {
        int mid = left + ( right - left ) / 2 ;
        if ( arr[mid] == number ){
            return mid ;
        }
        else if (arr[mid] < number ){
            left = mid + 1 ;
        }
        else
        {
            right = mid - 1 ;
        }
    }

    return -1 ;

}







int main (){

// the sorted array
int myarr[10] = {4,5,6,7,8,9,14,18,19,20} ;

cout <<"Enter the number u wanna search on "<<endl ;
int number ;
cin >> number ;

int result = BinarySearch( myarr , 0 , 9 , number) ;


if (result == -1 )
{
    cout << "Your number is missing !" <<endl ;
}
else
{
     cout << "Your number is at position "<<result +1  << endl ;
}







return 0 ;
}
