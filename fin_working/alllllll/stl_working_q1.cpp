#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

typedef map <pair<int,int>,pair<int,double> > myMap;
int fillLabel(void);
void printVector(vector <int> &b);
int rand15(void);
main()
{
	
	srand(time(0));
	myMap map;
	int id[5] = {1,2,3,4,5};
	int samp[5] = {20,10,30,5,35};
	int tp[5] = {};
	double pre[5] = {};
	
	for(int i=0;i<5;i++){
		pair<int,int> temp(id[i],samp[i]);
		pair<int,double> temp1(tp[i],pre[i]);
		map.insert(myMap::value_type(temp,temp1));
	}
	cout << "ClassID\t\tSamples\t\tTP\t\tPrecision" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(7) <<it->first.first << "\t\t" <<setw(7) << it->first.second << "\t\t" << setw(2) << it->second.first << "\t\t" << setw(9) << it->second.second << endl;
	vector <int> labels(100);
	generate(labels.begin(),labels.end(),fillLabel);
	cout << "LABELS" << endl;
	printVector(labels);	
	vector <int> predictions(100);
	generate(predictions.begin(),predictions.end(),rand15);
	cout << "PREDICTIONS" << endl;
	printVector(predictions);
	vector <int> mask(100);
	for(int i=0;i<labels.size();i++){
		if(labels[i]-predictions[i] == 0)
			mask[i] = 1;
		else
			mask[i] = 0;
	}
	printVector(mask);
	int result_1 = count(mask.begin(),mask.begin()+20,1);
	//cout << "\nTP for Class1: " << result_1 << endl;
	int result_2 = count(mask.begin()+20,mask.begin()+30,1);
	//cout << "TP for Class2: " << result_2 << endl;
	int result_3 = count(mask.begin()+30, mask.begin()+60,1);
	//cout << "TP for Class3: " << result_3 << endl;
	int result_4 = count(mask.begin()+60, mask.begin()+70,1);
	//cout << "TP for Class4: " << result_4 << endl;
	int result_5 = count(mask.begin()+70, mask.begin()+100,1);
	//cout << "TP for Class5: " << result_5 << endl;
	
	double pre_1 = result_1/(double) samp[0];	
	double pre_2 = result_2/(double) samp[1];	
	double pre_3 = result_3/(double) samp[2];	
	double pre_4 = result_4/(double) samp[3];	
	double pre_5 = result_5/(double) samp[4];	
	
	double pred[5] = {pre_1,pre_2,pre_3,pre_4,pre_5};
	int pos[5] = {result_1,result_2,result_3,result_4,result_5};
	map.clear();
	for(int i=0;i<5;i++){
		pair<int,int> temp2(id[i],samp[i]);
		pair<int,double> temp3(pos[i],pred[i]);
		map.insert(myMap::value_type(temp2,temp3));
	}
	cout << "ClassID\t\tSamples\t\tTP\t\tPrecision" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(7) <<it->first.first << "\t\t" <<setw(7) << it->first.second << "\t\t" << setw(2) << it->second.first << "\t\t" << setw(9) << it->second.second << endl;
}

int fillLabel(void)
{
	static int a=0;
	int hold;
	if(a<20)
		hold = 1;
	else if(a<30)
		hold = 2;
	else if(a<60)
		hold = 3;
	else if(a<70)
		hold = 4;
	else
		hold = 5;
	a++;
	return hold;
}

void printVector(vector <int> &b)
{
	int count = 0;
	for(int i=0;i<b.size();i++)
	{
		count++;
		cout << " " << b[i] << "  ";
		
		if(count == 10){
			cout << endl;
			count = 0;	
		}
			
	}
	cout << "--------------------------------------\n" << endl;
}

int rand15(void)
{
	return 1+rand()%5;
}
