from dataclasses import dataclass
import pprint
from re import L;

if __name__ == "__main__":
    data = [];
    cleanInstructions = [];
    accum = 0;
    lineNum = 0;

    with open("day8.txt", "r") as f:
        for instruction in f:
            data.append(instruction.strip());
    
    def doThing(lineNum):
        if data[lineNum].count('nop') > 0:
            print(f"blank line, performing next");
            doThing(lineNum+1);
        elif data[lineNum].count('jmp') > 0:
            instruction = data[lineNum];
            core, quanta = instruction.split(" ");
            #look for sign next

            #we have sign, subtract lineNim to recurse next
            print(f"jumping line to {}")
        pass;
    
    for line in data:
        doThing(lineNum)
