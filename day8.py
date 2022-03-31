import pprint

if __name__ == "__main__":
    data = [];
    cleanInstructions = [];
    global accum;
    accum = 0;
    lineNum = 0;

    with open("day8.txt", "r") as f:
        for instruction in f:
            data.append(instruction.strip());
   
   for line in data:
       print(line);

