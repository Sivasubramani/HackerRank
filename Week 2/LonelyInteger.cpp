// Given an array of integers, where all elements but one occur twice, find the unique element.

// Example
// arr= [1,2,3,4,3,2,1]
// The unique element is 4.

// Function Description

// Complete the lonelyinteger function in the editor below.

// lonelyinteger has the following parameter(s):

// int a[n]: an array of integers
// Returns

// int: the element that occurs only once
// Input Format

// The first line contains a single integer, , the number of integers in the array.
// The second line contains  space-separated integers that describe the values in .

// Constraints

// It is guaranteed that  is an odd number and that there is one unique element.
// , where .

int lonelyinteger(vector<int> a) {
    unordered_map<int, int> m;
    for(int i : a){
        if(m.find(i) != m.end()){
            m.erase(i);
        }
        else m[i]++;
    }
    return m.begin()->first;
}
