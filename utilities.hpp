#ifndef UTILITIES
#define UTILITIES

#include<vector>
#define GEN_SIZE 100
#define POP_SIZE 100
#define LEN_CHROM 10
#define PROB_MUTATION 0.6
#define PROB_CROSSOVER 0.6

class GA{
	
	private:
		std::vector<std::pair<char*,int>>m_pop_set; /*pop_set is a vector that stores a pair where pair.first is chromosome(bit string) and pair.second is fitness(value)*/
	public:
		GA(){
		
		}
		GA(std::vector<std::pair<char*,int>>pop):m_pop_set(pop){
			
		}


		int fitness_function_evaluation(char*);
		pair<char*,char*> crossover(char*,char*,int);
		char* mutation(char*);
		std::vector<std::pair<char*,int>> get_pop();
		void set_pop(std::vector<std::pair<char*,int>>,char*);
		//double get_fitness(char*,pair<char*);
		//void set_fitness(std::vector<std::pair<char*,int>>,double fitness);
		std::vector<char*> tournament_selection(std::vector<std::pair<char*,int>>);
};

#endif






		


		

