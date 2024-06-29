#include <fstream>
#include <iostream>
#include "MergeSort.cpp"

using namespace std;

int main()
{
  vector <int> v;

  ifstream input("sort.txt");
  int number;
  while (input >> number)
  {
     v.push_back(number);
  }
  input.close();

  mergeSort(v);
  for(int i =0; i<v.size(); i++)
    cout << v[i] << " ";
  cout<<endl;

    return 0;
} 