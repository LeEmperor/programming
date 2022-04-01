import pprint

if __name__ == "__main__":
    data = [];
    index = 0;
    accum = 0;
    bruh = set();
    indexList = [];

    with open("test.txt", "r") as f:
        for line in f:
            data.append(line.strip())
    print(data[7]);
    data[7] = "nop -4";

    def doThing(indexNum, data, accum, bruh, indexList):
        line = data[indexNum];
        core, signedQuanta = line.split(" ");
        dummyVar = indexNum;
        print(f" working at index {indexNum}");
        indexList.append(indexNum);
        if core == "nop":
            return 0, 1;
        elif core == "acc":
            signedQuanta = int(signedQuanta);
            accum += (signedQuanta);
            return signedQuanta, 1;
        else:
            signedQuanta = int(signedQuanta);
            dummyVar += signedQuanta;
            if dummyVar in bruh:
                pprint.pprint(f"fucky wuck at index {indexNum} and dummyVar {dummyVar}");
            return 0, signedQuanta;


    while(index < len(data)):
       accumAdd, indexAdd = doThing(index, data, accum, bruh, indexList);
       if index in bruh:
           print("fucky wucky");
           break;
       else:
           bruh.add(index);
           accum += accumAdd;

       index += indexAdd;

    pprint.pprint(f"accum is {accum}");
    junk = indexList.pop();
    junk2 = indexList.pop();
    for index in reversed(indexList):
        dumIndex = 
        line = data[index];
        core, junk3 = line.split(" ");
        if core == "jmp":
            print(f"index {index} needs to be replace");
            break;


