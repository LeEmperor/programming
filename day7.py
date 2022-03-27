import pprint;

if __name__ == "__main__":
    
    data = [];

    with open("day7.txt", "r") as f:
        for line in f:
            data.append(line.strip());

    graph = {};
    path = [];

    for line in data:
        parent, child = line.split("contain");
        parent = parent.replace("bags", "").replace("bag", "").strip();
        child = child.replace("bags", "").replace("bag", "").strip();
        if child.count(",") > 0:
            bruh = [x.replace(".", "").strip() for x in child.split(" , ")]
            graph[parent] = bruh;
        else:
            graph[parent] = [child.replace(".", "").strip()];

    def findIn(graph, lookFor, path):
        # base case

        # bruhbruh
        for key in graph:
            for contains in graph[key]:
                if contains.count(lookFor) > 0:
                    path.append(key);
    
    # findIn(graph, "shiny gold", path);
    
    pprint.pprint(graph);