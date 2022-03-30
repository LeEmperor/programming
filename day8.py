from dataclasses import dataclass
import pprint
from re import L;

if __name__ == "__main__":
    data = [];
    cleanInstructions = [];
    global accum;
    accum = 0;
    lineNum = 0;

    with open("day8.txt", "r") as f:
        for instruction in f:
            data.append(instruction.strip());
    
    def doThing(data, lineNum, accum):
        print(f"processing: {data[lineNum]}")
        if data[lineNum].count('nop') > 0:
            print(f"{data[lineNum]} is blank");
            doThing(data, lineNum+1, accum);
        elif data[lineNum].count('jmp') > 0:
            print(f"{data[lineNum]} is a jump");
            instruction = data[lineNum];
            signedQuanta = instruction[4:];
            sign = signedQuanta[0];
            quanta = int(signedQuanta[1:]);
            if sign == "+":
                doThing(data, lineNum+quanta, accum);
            else:
                doThing(data, lineNum-lineNum, accum);
        else:
            print(f"{data[lineNum]} is an addline");
            instruction = data[lineNum];
            signedQuanta = instruction[4:];
            sign = signedQuanta[0];
            quanta = int(signedQuanta[1:]);
            if sign == "+":
                print(f"adding {quanta} much");
                accum += quanta;
                print(accum);
            else:
                accum -= quanta;

    for line in data:
        doThing(data, lineNum, accum);
        print(f"{accum} \n");
        lineNum+=1;
