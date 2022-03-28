import pprint

if __name__ == "__main__":
    data = [];
    graph = {};
    graphList = [];

    with open("day7.txt", "r") as f:
        for line in f:
            data.append(line.strip());

    class Node:
        def __init__(self, type, left, right, nL, nR):
            self.type = type;
            self.left = left;
            self.right = right;
            self.nL = int(nL);
            self.nR = int(nR);
        
        def __str__(self):
            return (f"type={self.type}, left={self.left}, right={self.right}, nL = {self.nL}, nR = {self.nR}");
    
    for line in data:
        pass;
        

        