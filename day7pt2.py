import pprint;

if __name__ == "__main__":
    
    data = [];

    with open("day7.txt", "r") as f:
        for line in f:
            data.append(line.strip());

    graph = {};
    path = [];
    count = 0;

    for line in data:
        parent, child = line.split("contain");
        parent = parent.replace("bags", "").replace("bag", "").strip();
        child = child.replace("bags", "").replace("bag", "").strip();
        if child.count(",") > 0:
            if child.count("shiny gold") == 0:
                bruh = [x.replace(".", "").strip() for x in child.split(" , ")]
                graph[parent] = bruh;
        else:
            if child.count("shiny gold") == 0:
                graph[parent] = [child.replace(".", "").strip()];

    
    def findIn(graph, lookFor, path):
        # base case

        # bruhbruh
        for key in graph:
            for contains in graph[key]:
                if contains.count(lookFor) > 0:
                    path.append(key);
    

    def findCount(graph, lookFor):
        print(f"looking for : {lookFor}");
        # begin base case
        allEmpty = True;
        count = 0;
        for bagType in graph[lookFor]:
            useThis = bagType[2:];
            if graph[useThis][0] == 'no other':
                continue;
            else:
                allEmpty = False;
        if allEmpty:
            for bagType in graph[lookFor]:
                count += int(bagType[0]);
            return count;
        else:
            print(f"beginning recurse");
            for grandParent in graph[lookFor]:
                print(f"grandParent = {grandParent}");
                numBag = int(grandParent[0]);
                count += numBag;
                print(f"numBag = {numBag}")
                count += (numBag * findCount(graph, grandParent[2:]));
                print(f"count is now: {count}\n");
            return count;

        # end recurse
    

    # pprint.pprint(graph);
    print(f"mirrored lavender has {findCount(graph, 'mirrored lavender')} many");
    
