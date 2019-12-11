#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>

#include "utilities.hpp"
#include "reproductive_operators.cpp"
#include "selection.cpp"

vector<pair<char*,int>> GA::get_pop(){
	return m_pop_set;

}
void GA::set_pop(vector<pair<char*,int>> pop){
	m_pop_set=pop;
}


int main(){
	std::vector<pair<char*,int>> pop;
	GA g;
	int index=0;
	for(int i=0;i<POP_SIZE;i++){
		char *temp="";
		for(int i=0;i<LEN_CHROM;i++){
			temp+=(char)rand()%2;
		}
		pair<char*,int>temp_pair;
		temp_pair.first=temp;
		int fitness=g.fitness_function_evaluation(temp);
		temp_pair.second=fitness;
		pop.push_back(temp_pair);
	}
	std::vector<pair<char*,int>> mating_pool=g.tournament_selection(pop);
	cout<<"choose an index of your choice for crossover operation(index from 0 to 9))"<<endl;
	cin>>index<<endl;
	for(int i=0;i<(POP_SIZE/2);i++){
		pair<char*,int>parent_one=pop[i];
		pair<char*,int>parent_two=pop[i+1];
		pair<char*,char*> mated=crossover(parent_one.first,parent_two.first,index);
		char *mate_one=mutation(mated.first);
		char *mate_two=mutation(mated.second);

	}





}	










