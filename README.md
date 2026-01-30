# CS121_Project4

## Procedural Horse Race Algorithm

```
create prototype for advance function
create prototype for printLane functuon
create prototype for isWinner function

create random device
make random integer output 1 or 0

create main function
    create array with four 0s called horsePos
    intialize integer i = 0
    keepGoing = 0;
    while keepGoing == 0:
        initialize integer win = 0
        for i in 0-4:
            advance(i, horsePos[i])
            printLane(i, horsePos[i])
            if isWinner(i, horsePos[i]) == true:
                win = 1
    if win = 1:
        keepGoing = 1
    else:
        print "Press enter for the next turn"
        take user input

create function advance(integer horseNum, pointer horsePos)
    coin = random 0 or 1
    if coin == 1:
        horsePos[horseNum] increases by 1
    return 0

create function printLane(integer horseNum, pointer horsePos):
    initialize integer i = 0
    for i in 0 to 5:
        print "."
    print horseNum
    for i in 0 to (14 - horsePosition[i]):
        print "."

create function isWinner(integer horseNum, pointer horsePos):
    if horsePosition[horseNum] == 14:
        win = True
        print "Horse [horseNum] is the winner!!!"
    else:
        win = False
    return win


