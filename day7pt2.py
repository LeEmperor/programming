import pprint

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


    def howManyIn(graph, lookFor):
        count = 0;

        # base case
        if graph[lookFor][0] == 'no other':
            return count;
        # end base case

        # begin recurse
        else:
            for bagType in graph[lookFor]:
                useThis = bagType[2:];
                count += int(bagType[0])
                count += (int(bagType[0]) * howManyIn(graph, useThis));
            return count;
        # end recurse
        

    pprint.pprint(howManyIn(graph, 'shiny gold'));
