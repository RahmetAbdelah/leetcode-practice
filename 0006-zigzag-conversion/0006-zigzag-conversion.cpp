class Solution {
public:
    string convert(string s, int numRows) {
        // Base case: if only one row, or string is shorter than the row count
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);
        int curRow = 0;
        bool goingDown = false;

        // Traverse the input string
        for (char c : s) {
            rows[curRow] += c;
            // Change direction when we reach the top or bottom
            if (curRow == 0 || curRow == numRows - 1)
                goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }

        // Combine all rows into the final result
        string result;
        for (string &row : rows)
            result += row;

        return result;
    }
};
