#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>

#include "utilities.hpp"

using namespace std;



int GA::fitness_function_evaluation(char *s1){
	size_t len=strlen(s1);
	int adder=0;
	for(unsigned int i=0;i<len;i++){
		if(s1[i]=='1'){
			adder+=1;
		}
	}

	return adder;
}




vector<char*> GA::tournament_selection(vector<pair<char*,int>>pop){
	vector<char*>mating_pool;
	int counter=0;
	int len=sizeof(pop)/sizeof(pop[0]);
	while(counter<len){

		srand(time(NULL));
		int random_value_one=rand()%(len);
		int random_value_two=rand()%(len);
	
		pair<char*,int> p1=pop[random_value_one];
		pair<char*,int>	p2=pop[random_value_two];

		if(p1.second>p2.second){
			mating_pool.push_back(p1.first);
		}else if(p1.second<=p2.second){
			mating_pool.push_back(p2.first);
		}
		counter+=1;
	}

	return mating_pool;
	

}
