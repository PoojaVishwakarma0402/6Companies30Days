string encode(const string &str) {
    string encoded;
    int count = 1;
    
    for (int i = 0; i < str.size(); ++i) {
        // If the current character is the same as the next one, increase count
        if (i + 1 < str.size() && str[i] == str[i + 1]) {
            count++;
        } else {
            // If not the same, append character and its count to the encoded string
            encoded += str[i];
            encoded += to_string(count);
            count = 1;
        }
    }
    
    return encoded;
}
