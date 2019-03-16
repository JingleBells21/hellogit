#include <iostream>
#include <vector>

 using namespace std;

void bubblesort (auto & D)
{

for (int i = 0; i < D.size (); i++) //each iteration here is a pass
for ( int j = 0; j < D.size () - 1; j++)
	if ( D [j] > D [j+i] )
		swap ( D [j], D [j+i]);
}
 
int main ()

{
vector <int> v = { 25, 18, 12, 17, 10};
bubblesort (v);

for (auto i:v)

cout << i << " " ;
cout << endl ;



}
