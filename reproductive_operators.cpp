#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cstring>
using namespace std;

#include "utilities.hpp"


pair<char*,char*> GA::crossover(char *s1,char *s2,int index){
	srand(time(NULL));
	pair<char*,char*>crossed;
	crossed.first=s1;
	crossed.second=s2;
	int rand_value=rand();
	if(rand_value<=PROB_CROSSOVER){

		char *temp_one_part_one=(char*)malloc(index);
		strncpy(temp_one_part_one,s1,index);
		char *temp_one_part_two=(char*)malloc(index);
		strcpy(temp_one_part_two,s1+index+1);
		char *temp_two_part_one=(char*)malloc(index);
		strncpy(temp_two_part_one,s2,index);
		char *temp_two_part_two=(char*)malloc(index);
		strcpy(temp_two_part_two,s2+index+1);
	
		strcat(temp_one_part_one,temp_two_part_one);
	
		strcat(temp_one_part_two,temp_two_part_two);
		crossed.first=temp_one_part_one;
		crossed.second=temp_one_part_two;
		return crossed;
	}
	
	return crossed;
}

char* GA::mutation(char *s1){

	size_t len=strlen(s1);
	srand(time(NULL));
	int rand_value=rand();

	if(rand_value<=PROB_MUTATION){
		for(unsigned int i=0;i<len;i++){
			if(s1[i]=='1'){
				s1[i]='0';	
			}else if(s1[i]=='0'){
				s1[i]='1';
			}
		}

	}
	return s1;


}



