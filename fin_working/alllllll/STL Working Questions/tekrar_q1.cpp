#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <map>
#include <iomanip>
using namespace std;

typedef map<pair<int,int>,pair<int,double> > myMap;
int fillLabels(void);
int rand15(void);
void printVector(vector<int> &a);
main()
{
	srand(time(0));
	int id[5] = {1,2,3,4,5};
	int samp[5] = {20,10,30,5,35};
	int tp[5] = {0,0,0,0,0};
	double pre[5] = {0,0,0,0,0};
	myMap map;
	for(int i=0;i<5;i++)
	{
		pair<int,int> temp(id[i],samp[i]);
		pair<int,double> temp1(tp[i],pre[i]);
		map.insert(myMap::value_type(temp,temp1));
	}
	
	cout << "ClassID\t\tSamples\t\tTP\t\tPrecision" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(7) << it->first.first << "\t\t" << setw(7) << it->first.second << "\t\t" << setw(2) << it->second.first << "\t\t" << setw(9) << it->second.second << endl;
	vector <int> labels(100);
	generate(labels.begin(),labels.end(),fillLabels);
	cout << "LABELS" << endl;
	printVector(labels);
	vector <int> predictions(100);
	generate(predictions.begin(),predictions.end(),rand15);
	cout << "PREDICTIONS" << endl;
	printVector(predictions);
	vector <int> mask(100);
	for(int i=0;i<labels.size();i++)
	{
		if(labels[i]-predictions[i] == 0)
			mask[i] = 1;
		else
			mask[i] = 0;
	}
	cout << "MASK" << endl;
	printVector(mask);
	
	int result_1 = count(mask.begin(),mask.begin()+20,1);
	cout << "\nTP for Class1: " << result_1 << endl;
	int result_2 = count(mask.begin()+20, mask.begin()+30,1);
	cout << "TP for Class2: " << result_2 << endl;
	int result_3 = count(mask.begin()+30, mask.begin()+60,1);
	cout << "TP for Class3: " << result_3 << endl;
	int result_4 = count(mask.begin()+60, mask.begin()+70,1);
	cout << "TP for Class4: " << result_4 << endl;
	int result_5 = count(mask.begin()+70, mask.begin()+100,1);
	cout << "TP for Class5: " << result_5 << endl;
	
	double precision_1 = result_1 /(double) samp[0];
	double precision_2 = result_2 /(double) samp[1];
	double precision_3 = result_3 /(double) samp[2];
	double precision_4 = result_4 /(double) samp[3];
	double precision_5 = result_5 /(double) samp[4];
	
	double pre1[5] = {precision_1,precision_2,precision_3,precision_4,precision_5};
	int truee[5] = {result_1,result_2,result_3,result_4,result_5};
	map.clear();
	for(int i=0;i<5;i++){
		pair<int,int> temp3(id[i],samp[i]);
		pair<int,double> temp4(truee[i],pre1[i]);
		map.insert(myMap::value_type(temp3,temp4));
	}
	cout << "\nClassId\t\tSamples\t\tTP\t\tPrecision" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(7) << it->first.first << "\t\t" << setw(7) << it->first.second << "\t\t" << setw(2) << it->second.first << "\t\t" << setw(9) << it->second.second << endl;
	
	
	
	
	
}

int rand15(void)
{
	return 1+rand()%5;
}

int fillLabels(void)
{
	static int k=0;
	int hold;
	if(k<20)
		hold = 1;
	else if(k<30)
		hold = 2;
	else if(k<60)
		hold = 3;
	else if(k<70)
		hold = 4;
	else
		hold = 5;
	k++;
	return hold;
}

void printVector(vector<int> &a)
{
	int cnt=0;
	for(int i=0;i<a.size();i++)
	{
	
		cout << a[i] << "  ";
		cnt++;	
		if(cnt==10){
			cout << endl;
			cnt =0;	
		}	
	}
	cout << "----------------------------" << endl;
}

