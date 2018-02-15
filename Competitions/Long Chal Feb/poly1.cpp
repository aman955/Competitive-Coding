#include "bits/stdc++.h"
#include <vector>
#include <iostream>

struct vec2d {
    double x, y;
    vec2d(double _x, double _y) : x(_x), y(_y) {}
};

// Finds the cross product of the vectors: AB x BC
double crossProduct(vec2d pointA, vec2d pointB, vec2d pointC) {
    vec2d vectorAB = vec2d(pointB.x - pointA.x, pointB.y - pointA.y);
    vec2d vectorBC = vec2d(pointC.x - pointB.x, pointC.y - pointB.y);

    return vectorAB.x * vectorBC.y - vectorBC.x * vectorAB.y;
}

// Finds area for the triangle ABC
double S(vec2d A, vec2d B, vec2d C) {
    return crossProduct(A, B, C) / 2;
}

bool isPointInsideTriangle(vec2d A, vec2d B, vec2d C, vec2d point)
{
    return S(A, B, point) >= 0 && S(B, C, point) >= 0 && S(C, A, point) >= 0;
}

bool isPointAboveLine(vec2d A, vec2d B, vec2d point)
{
    return S(A, B, point) >= 0;
}

// O(logN), works only for convex polygons
bool isPointInsidePolygon(std::vector<vec2d> polygon, vec2d point) {
    if (polygon.size() == 3) {
        return isPointInsideTriangle(polygon[0], polygon[1], polygon[2], point);
    }

    if (isPointAboveLine(polygon[0], polygon[polygon.size() / 2], point)) {
        std::vector<vec2d> polygonAbove(polygon.begin() + polygon.size() / 2, polygon.end());
        polygonAbove.emplace(polygonAbove.begin(), polygon[0].end());
        return isPointInsidePolygon(polygonAbove, point);
    }
    else {
        std::vector<vec2d> polygonBelow(polygon.begin(), polygon.begin() + polygon.size() / 2 + 1);
        return isPointInsidePolygon(polygonBelow, point);
    }
}

int main()
{
    std::vector<vec2d> convexPolygon;
    convexPolygon.push_back(vec2d(0, 2));
    convexPolygon.push_back(vec2d(2, 0));
    convexPolygon.push_back(vec2d(4, 1));
    convexPolygon.push_back(vec2d(6, 3));
    convexPolygon.push_back(vec2d(6, 4));
    convexPolygon.push_back(vec2d(5, 6));
    convexPolygon.push_back(vec2d(2, 6));
    convexPolygon.push_back(vec2d(1, 4));
    std::cout << isPointInsidePolygon(convexPolygon, vec2d(2, 5));

    return 0;
}
