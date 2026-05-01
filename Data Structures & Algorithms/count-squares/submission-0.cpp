class CountSquares {
private:
    map<pair<int,int>, int> pointCount;

public:
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        int x = point[0];
        int y = point[1];

        pointCount[{x, y}]++;
    }
    
    int count(vector<int> point) {
        int x1 = point[0];
        int y1 = point[1];

        int total = 0;

        for (auto it : pointCount) {
            int x2 = it.first.first;
            int y2 = it.first.second;
            int diagonalCount = it.second;

            if (abs(x2 - x1) != abs(y2 - y1))
                continue;
            
            if (x1 == x2 || y1 == y2)
                continue;

            int corner1Count = pointCount[{x1, y2}]; 
            int corner2Count = pointCount[{x2, y1}];

            total += diagonalCount * corner1Count * corner2Count;
        }

        return total;
    }
};