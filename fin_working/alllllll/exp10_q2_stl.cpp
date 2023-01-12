#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <set>
#include <iomanip>
using namespace std;

bool getIndex(int);
typedef multiset< int,less<int> > IntSet;
int fillgT(void);
int fillResults(void);
void printVector(vector<int> &b);
void findIndices(IntSet &, vector <int>&, const string &);
int label;
int main()
{
	srand(time(0));
	IntSet gTIndex, resultsIndex;
	//Generate gTruth vector
	vector <int> gTruth(100);
	vector <int> TP,FP,FN;
	generate(gTruth.begin(),gTruth.end(),fillgT);
	cout << "grountTruth contains:" << endl;
	printVector(gTruth);
	// Generate results vector
	vector <int> results(100);
	generate(results.begin(),results.end(),fillResults);
	cout << "results contains:" << endl;
	printVector(results);
	double precision,recall,F1;
	for (int i=1;i<=3;i++){
		label = i;
		findIndices(gTIndex,gTruth,"gTIndex");
		findIndices(resultsIndex,results,"resultIndex");
		set_intersection(gTIndex.begin(),gTIndex.end(),resultsIndex.begin(),resultsIndex.end(),back_inserter(TP));
		set_difference(resultsIndex.begin(),resultsIndex.end(),gTIndex.begin(),gTIndex.end(),back_inserter(FP));
		set_difference(gTIndex.begin(),gTIndex.end(),resultsIndex.begin(),resultsIndex.end(),back_inserter(FN));
		cout << "TP" << endl;
		printVector(TP);
		cout << "FP" << endl;
		printVector(FP);
		cout << "FN" << endl;
		printVector(FN);	
		precision=TP.size()/(double)(TP.size()+FP.size());
		recall=TP.size()/(double)(TP.size()+FN.size());
		F1=(2*precision*recall)/(precision+recall);
	
		cout << "Class " << label << " Precision: " << precision << endl;
		cout << "Class " << label << " Recall: " << recall << endl;
		cout << "Class " << label << " F1: " << F1 << endl<< endl;
		
		gTIndex.clear();
		resultsIndex.clear();
		TP.clear();
		FP.clear();
		FN.clear();
	}
	
	
	
	//Set
	
}

bool getIndex(int x)
{
	return x==label;
}

void findIndices(IntSet &s, vector <int>&v, const string &name)
{

	vector<int>::iterator it = v.begin();
	while ((it= find_if(it, v.end(), getIndex)) != v.end())
	{
    	s.insert(distance(v.begin(), it));
    	it++;
	}
	
	cout << "Class " << label << " "<< name << " Indices : " << endl;
	for (IntSet::iterator it=s.begin();it!=s.end();it++)
		cout << setw(3) << *it << " ";
	cout << endl << endl;		
}

int fillgT(void)
{
	static int a=0;
	int hold;
	if(a<40)
		hold = 1;
	else if(a<90)
		hold = 2;
	else
		hold = 3;
	a++;
	return hold;
}

void printVector(vector<int> &b)
{
	for(int i=0;i<b.size();i++){
		cout << b[i] << " ";
	}
	cout << "\n\n";
}

int fillResults(void)
{
	return 1+rand()%3;
}
