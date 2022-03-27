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
    

    def findCount(graph, lookFor, count):
        if graph[lookFor] == ['no other']:
            return 0;
        else:
            for listBag in graph[lookFor]:
                amount = int(listBag[0]);
                type = listBag[2:];
                bagCount = (amount + (amount * (findCount(graph, type, count))))
            count += bagCount;


    # findIn(graph, "shiny gold", path);
    
    pprint.pprint(findCount(graph, "1 shiny gold", count))
