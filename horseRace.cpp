#include <iostream>
#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

void advance(int horseNum, int* horsePos);
void printLane(int horseNum, int* horsePos);
bool isWinner(int horseNum, int* horsePos);

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	int i = 0;
	int keepGoing = 0;
	while(keepGoing == 0){
		int win = 0;
		for(i = 0; i < 5; i++){
			advance(i, &horses[i]);
			printLane(i, &horses[i]);
			if(isWinner(i, &horses[i]) == true){
				win = 1;
			} // end if
		} //end for
		if( win == 1){
			keepGoing = 1;
		} else {
			std::string next = "\n";
			std::cout << "Press enter to continue ";
			getline(std::cin, next);
			std::cout << std::endl;
		}// end if
	} // end while
	std::cout << std::endl;
} // end main

void advance(int horseNum, int* horsePos){
	int coin = dist(rd);
	if(coin == 1){
		*horsePos = *horsePos + 1;
	} // end if
} // end advance

void printLane(int horseNum, int* horsePos){
	int i = 0;
	for(i = 0; i < *horsePos; i++){
		std::cout << ".";
	} // end for
	std::cout << horseNum;
	for(i = 0; i < 14 - *horsePos; i++){
		std::cout << ".";
	} //end for
	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horsePos){
	if(*horsePos == 14){
		std::cout << "Horse " << horseNum << " is the winner!!!" << std::endl;
		return true;
	} else {
		return false;
	} // end if
} // end isWinner
