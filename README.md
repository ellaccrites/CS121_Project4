# CS121_Project4

## Procedural Horse Race Algorithm

```
create prototype for advance function
create prototype for printLane functuon
create prototype for isWinner function

create random device
make random integer output 1 or 0

create main function
    create array with four 0s called horsePosition
    win = FALSE
    keepGoing = 0;
    while keepGoing == 0:
        for horseNum in 0-4:
            advance(horseNum, horsePosition[horseNum])
            printLane(horseNum, horsePosition[horseNum])
            win = isWinner(horseNum, horsePosition[horseNum])
        if win == TRUE:
            keepGoing = 1
        else:
            print "Press enter for the next turn"
            take user input

create function advance(horseNum, int* horses)
    initialize i = 0
    for 0 to i:
        coin = random 0 or 1
        
        if coin is 0:
            horsePosition[horse] stays the same
        if coin is 1:
            horsePosition[horse] increases by one
    return 0

create function printLane(horseNum, int* horses):
    initialize i = 0
    for 0 to 5:
        print "."
    print horseNum
    for 0 to (14 - horsePosition[horseNum]):
        print "."

create function isWinner(horseNum, int* horses):
    if horsePosition[horseNum] == 15:
        win = True
        print "Horse [horseNum] is the winner!!!"
    else:
        win = False
    return win


