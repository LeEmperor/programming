import pprint;

if __name__ == "__main__":
    data = [];

    with open("day.txt", "r") as f:
        for line in f:
            data.append(line.strip());
    
    pprint.pprint(data);
