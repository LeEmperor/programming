import pprint

if __name__ == "__main__":
    data = [];
    index = 0;
    accum = 0;

    with open("day8.txt", "r") as f:
        for line in f:
            data.append(line.strip());

    for line in data:
        print(line);

    print("the noise that this makes is extremely annoying");

