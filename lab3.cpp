#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>   //for function sorting
using namespace std;

int main() {

	vector<int> harvest(9);

	ifstream inFile("file.in" , ios::in) ;
	
	// check validity for infile
	if (!inFile){
		cerr<<"can't open the file ! !";
		return 0 ;
	}
	

	for ( int i = 1; i <10 ; i++ ){
		inFile >> harvest[ i-1 ] ;
	}

	//sorting for harvest
	//by funct sort
	
	vector<int> harvest_00 = harvest ; 
	sort( harvest_00.begin() , harvest_00.end());

	//calculate the top five number of the cows 
	int top5Number_00 = 0 ;

	for (int index = 4 ; index < 9; index++){
		top5Number_00 = top5Number_00 + harvest_00.at( index );
	}

	//show result
	cout<< "the total sum of top 5 number of cows is equal to "<< top5Number_00<<"(calculated by fun sort()"<<endl<<endl;
	

	// sorting for harvest
	// insertion sorting computing step by step
	 
	vector<int> harvest_01 = harvest;	
	for ( int j = 0; j < 9; j++ ){
		int ReservedData = harvest_01[j] ;
		
		int k = j;
		while ( ( k != 0) & (harvest_01[k] <  harvest_01[k-1]) ){
			harvest_01[k] = harvest_01[k-1] ;
			harvest_01[k-1] = ReservedData ;
			k--;
		}
	}
		

	// calculate top 5 number of the harvest
	
	int top5Number = 0 ;
	for (int i = 8; i > 3;  i--){
		top5Number = top5Number + harvest_01[i] ;

	}
	

	// show the result 
	cout<<"the total sum of top 5 number of cows is equal to " <<top5Number<<"(calculated by insertion sort"<<endl;

			
	
		
	return 0;
}

