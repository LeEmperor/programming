import pprint

if __name__ == "__main__":
    data = [];
    index = 0;
    accum = 0;
    bruh = set();

    with open("day8.txt", "r") as f:
        for line in f:
            data.append(line.strip())

    def doThing(indexNum, data, accum):
        line = data[indexNum];
        core, signedQuanta = line.split(" ");
        if core == "nop":
            return 0, 1;
        elif core == "acc":
            signedQuanta = int(signedQuanta);
            accum += (signedQuanta);
            pprint.pprint(accum);
            return signedQuanta, 1;
        else:
            signedQuanta = int(signedQuanta);
            return 0, signedQuanta;


    while(index < len(data)):
       accumAdd, indexAdd = doThing(index, data, accum);
       if index in bruh:
           print("fucky wucky");
           break;
       else:
           bruh.add(index);
           accum += accumAdd;

       index += indexAdd;

    pprint.pprint(f"accum is {accum}");

