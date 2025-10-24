class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        string word;
        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.back() < b.back();
        });
        string result = "";
        for (auto &w : words) {
            result += w.substr(0, w.size() - 1) + " ";
        }
        result.pop_back();
        return result;
    }
};
