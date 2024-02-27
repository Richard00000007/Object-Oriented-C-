#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

class Point {
public:
    int x, y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int n = points.size();
        if (n <= 2) return n;

        int maxPointsOnLine = 0;

        for (int i = 0; i < n; ++i) {
            unordered_map<double, int> slopeCount;
            int samePoint = 0;
            int localMax = 0;

            for (int j = i + 1; j < n; ++j) {
                int xDiff = points[j].x - points[i].x;
                int yDiff = points[j].y - points[i].y;

                if (xDiff == 0 && yDiff == 0) {
                    samePoint++;
                    continue;
                }

                double slope;
                if (xDiff == 0) {
                    slope = numeric_limits<double>::infinity();
                } else {
                    slope = static_cast<double>(yDiff) / xDiff;
                }
                
                slopeCount[slope]++;
                localMax = max(localMax, slopeCount[slope]);
            }

            maxPointsOnLine = max(maxPointsOnLine, localMax + samePoint + 1);
        }

        return maxPointsOnLine;
    }
};

int main() {
    Solution sol;
    vector<Point> points = {{1, 1}, {2, 2}, {3, 3}, {4, 1}, {5, 1}};
    cout << "Max points on a line: " << sol.maxPoints(points) << endl;
    return 0;
}

