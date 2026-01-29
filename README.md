# CS121_Project4

## Procedural Horse Race Algorithm

```
create prototype for advance function
create prototype for printLane functuon
create prototype for isWinner function

create main function
    create array with four 0s called horsePosition
    win = FALSE
    while isWinner == FALSE:
        for horseNum in 0-4:
            advance(horseNum, horsePosition[horseNum])
            printLane(horseNum, horsePosition[horseNum])
            win = isWinner(horseNum, horsePosition[horseNum])
        print "Press enter for the next turn"
        take user input

create function advance(horseNum, int* horses)
    create random device
    make random integer output 1 or 0

    for horse in horsePosition:
        coin = random 0 or 1
        
        if coin is 0:
            horsePosition[horse] stays the same
        if coin is 1:
            horsePosition[horse] increases by one
    return 0

create function printLane(horseNum, int* horses):
    for 0 < horsePosition:
        print "."
    print horseNum
    for 0 < (14 - horsePosition[horseNum]):
        print "."

create function isWinner(horseNum, int* horses):
    if horsePosition[horseNum] == 15:
        win = True
        print "Horse [horseNum] is the winner!!!"
    else:
        win = False
    return win


