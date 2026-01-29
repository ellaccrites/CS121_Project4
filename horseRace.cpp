#include <iostream>
#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	int horses[] = {0, 0, 0, 0};
	/*
	win = FALSE
    	while isWinner == FALSE:
        	for horseNum in 0-4:
            	advance(horseNum, &horsePosition[horseNum])
            	printLane(horseNum, &horsePosition[horseNum])
            	win = isWinner(horseNum, &horsePosition[horseNum])
        print "Press enter for the next turn"
        take user input
	*/
} // end main
void advance(int horseNum; int* horses){
	i = 0;
	for(i = 0; i < 5; i++){
		coin = dist(rd);
		if(coin == 1){
			*horses = *horses + 1;
		} // end if
	} // end for
} // end advance

void printLane(int horseNum, int* horses){
	i = 0;
	for(i = 0; i < *horses; i++){
		std::cout << " .";
	} // end for
	std::cout << " " << horseNum << " ";
	for(i = 0; i < (14 - *horses; i++)){
		std::cout << " . ";
	} // end for
} // end printLane
			
