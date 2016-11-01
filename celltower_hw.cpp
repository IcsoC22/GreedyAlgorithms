#include <iostream>
using namespace std;

int place(int *houses, int *celltowers, int num_houses);

int main()
{
  int *houses;
  int *celltowers;
  int num_houses;

  cout << "How many houses are there? ";
  cin >> num_houses;

  houses = new int[num_houses];
  celltowers = new int[num_houses];

  cout << "Give me the distances of the houses" << endl;
  for (int i=0; i<num_houses; i++)
    {
      cin >> houses[i];
    }

  int num_tower = place(houses,celltowers,num_houses);

  cout << "Here is where the cell towers go" << endl;
  for (int i=0; i<num_tower; i++)
    {
      cout << celltowers[i] << " ";
    }
  cout << endl;

  return 0;
}

int place(int *houses, int *celltowers, int num_houses)
{
  int num_tower = 1;
  celltowers[0] = houses[0]+4;
  for(int i = 1; i < num_houses; i++){
    if(houses[i] > (celltowers[num_tower-1]+4)){ //Outside of range of current tower
      num_tower++;
      celltowers[num_tower-1] = houses[i]+4;
    }
  }

  return num_tower;
}
