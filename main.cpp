#include <iostream>
#include <vector>
using namespace std;

int main(){

  //3D Vector "Va"
  vector <vector<int> > Va;
  int Vn, q, qElement, qn; 
  int Vsize = 0, Velement = 0;
  //Define Number of Vectors
  cin >> Vn;
  cin >> q;

  for(int i = 0; i < Vn; i++){
    //nested Vector
    vector<int> temp;
    cin >> Vsize; // Define the size of the vector
  
    for(int j = 0; j < Vsize; j++){
      cin >> Velement; //add elements to the vector
      temp.push_back(Velement);
    }
    Va.push_back(temp);
  }

  for(int i = 0; i < q; i++){
    cin >> qn;
    

  }

  //print the vector
  for(unsigned int i = 0; i < Va.size(); i++){
    for(unsigned int j = 0; j < Va[i].size(); j++){
      cout << Va[i][j] << " ";
    }
    cout << endl;
  }



}