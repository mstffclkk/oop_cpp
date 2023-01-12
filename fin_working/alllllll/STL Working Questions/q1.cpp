#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <map>
#include <iomanip>
using namespace std;

typedef map<pair<int,int>,pair<int,double> >myMap;
int filllabel(void);
int rand15(void);
bool evaluate1(vector <int> &a, vector <int> &b);
void printVector(vector <int> &b);
double TP(int,int);
main()
{
	srand(time(0));
	int ID[5] = {1,2,3,4,5};
	int Samples[5] = {20,10,30,5,35};
	double tp[5] = {0,0,0,0,0};
	double pre[5] = {0,0,0,0,0};
	myMap map;
	for(int i=0;i<5;i++){
		pair<int,int> temp(ID[i],Samples[i]);
		pair<int,double> temp2(tp[i],pre[i]);
		map.insert(myMap::value_type(temp,temp2));
	}
	
	cout << "ClassId\t\tSamples\t\tTP\t\tPrecision" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(7) << it->first.first << "\t\t" << setw(7) << it->first.second << "\t\t" << setw(2) << it->second.first << "\t\t" << setw(9) << it->second.second << endl;
	
	vector <int> label(100);
	vector <int>::iterator it;
	generate(label.begin(),label.end(),filllabel);
	int cnt=0;
	cout << "\nLABELS" << endl;
	printVector(label);
	
	vector <int> predictions(100);
	generate(predictions.begin(),predictions.end(),rand15);
	cout << "\nPREDICTIONS" << endl;
	printVector(predictions);
	
	vector <int> mask(100,0);
	//it = find_if(predictions.begin(),predictions.begin()+20,evaluate1);
	//BOOL ÝLE YAZILACAK
	for(int i=0;i<100;i++){
		if(label[i]-predictions[i] == 0)
			mask[i] = 1;
	}
	cout << "\nMASK" << endl;
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
	
		
	double precision_1 = result_1 /(double) Samples[0];
	double precision_2 = result_2 /(double) Samples[1];
	double precision_3 = result_3 /(double) Samples[2];
	double precision_4 = result_4 /(double) Samples[3];
	double precision_5 = result_5 /(double) Samples[4];
	
	double pre1[5] = {precision_1,precision_2,precision_3,precision_4,precision_5};
	int truee[5] = {result_1,result_2,result_3,result_4,result_5};
	map.clear();
	for(int i=0;i<5;i++){
		pair<int,int> temp3(ID[i],Samples[i]);
		pair<int,double> temp4(truee[i],pre1[i]);
		map.insert(myMap::value_type(temp3,temp4));
	}
	cout << "\nClassId\t\tSamples\t\tTP\t\tPrecision" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(7) << it->first.first << "\t\t" << setw(7) << it->first.second << "\t\t" << setw(2) << it->second.first << "\t\t" << setw(9) << it->second.second << endl;
}
int filllabel(void)
{
	static int j =0;
	int hold;
	if(j<20)
		hold =1;
	else if(j<30)
		hold=2;
	else if(j<60)
		hold=3;
	else if(j<70)
		hold=4;
	else if(j<100)
		hold=5;
	j++;
	return hold;
}

int rand15(void)
{
	int a = 1 + rand()%5;
	return a;
}

void printVector(vector <int> &b)
{
	int cnt = 0;
	for(int i=0;i<b.size();i++){
	
		cout << b[i] << "  ";
		cnt++;	
		if(cnt==10){
			cout << endl;
			cnt =0;	
		}	
	}
}

bool evaluate1(int x)
{
	return x==1;	
}
