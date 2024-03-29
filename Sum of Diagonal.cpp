#include <iostream>
#include <cmath>
#define N 7
using namespace std;
float solve( int M[ N ][ N ] ){
   int sum_major = 0;
   int sum_minor = 0;
   for ( int i = 0; i < N; i++ ) {
      for ( int j = 0; j < N; j++ ) {
         if( i == j ) {
            sum_major = sum_major + M[ i ][ j ];
         }
         if( (i + j) == N - 1) {
            sum_minor = sum_minor + M[ i ][ j ];
         }
      }
   }
   cout << "The sum of major diagonal: " << sum_major << endl;
   cout << "The sum of minor diagonal: " << sum_minor << endl;
}
int main(){
   int mat1[ N ][ N ] = {
      {5, 8, 74, 21, 69, 78, 25},
      {48, 2, 98, 6, 63, 52, 3},
      {85, 12, 10, 6, 9, 47, 21},
      {6, 12, 18, 32, 5, 10, 32},
      {8, 45, 74, 69, 1, 14, 56},
      {7, 69, 17, 25, 89, 23, 47},
      {98, 23, 15, 20, 63, 21, 56},
   };
   cout << "For the first matrix: " << endl;
   solve( mat1 );
   int mat2[ N ][ N ] = {
      {6, 8, 35, 21, 87, 8, 26},
      {99, 2, 36, 326, 25, 24, 56},
      {15, 215, 3, 157, 8, 41, 23},
      {96, 115, 17, 5, 3, 10, 18},
      {56, 4, 78, 5, 10, 22, 58},
      {85, 41, 29, 65, 47, 36, 78},
      {12, 23, 87, 45, 69, 96, 12}
   };
   cout << "\nFor the second matrix: " << endl;
   solve( mat2 );
}
