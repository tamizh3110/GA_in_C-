#ifndef UTILITIES
#define UTILITIES

#define GEN_SIZE 100
#define POP_SIZE 100
#define LEN_CHROM 10
#define PROB_MUTATION 0.6
#define PROB_CROSSOVER 0.6

class GA{
	
	private:
		vector<pair<char*,int>>m_pop_set; /*pop_set is a vector that stores a pair where pair.first is chromosome(bit string) and pair.second is fitness(value)*/
	public:
		GA();
		void fitness_function(char*);
		void crossover(char*,char*,int);
		char* mutation(char*);
		vector<pair<char*,int>> get_pop();
		void set_pop(vector<pair<char*,int>>,char*);
		double get_fitness(char*);
		void set_fitness(vector<pair<char*,int>>,double fitness);
		void tournament_selection(vector<pair<char*,int>>);
};

#endif






		


		

