#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>

using namespace std;

// Nodes for the heap
class HuffmanNode {
public:
    char data;
    int freq;
    HuffmanNode* left;
    HuffmanNode* right;

    HuffmanNode(char ch, int f) : data(ch), freq(f), left(nullptr), right(nullptr) {}

    // To compare nodes in the heap
    bool operator<(const HuffmanNode& other) const {
        return freq > other.freq; // Note the inverted comparison for min-heap
    }
};

// Build the Huffman tree
HuffmanNode* buildHuffmanTree(const unordered_map<char, int>& freqMap) {
    // Create a priority queue (min-heap) to store nodes
    priority_queue<HuffmanNode> heap;

    for (const auto& entry : freqMap) {
        heap.push(HuffmanNode(entry.first, entry.second));
    }

    while (heap.size() > 1) {
        // Extract the two nodes with the smallest frequencies
        HuffmanNode* left = new HuffmanNode(heap.top());
        heap.pop();
        HuffmanNode* right = new HuffmanNode(heap.top());
        heap.pop();

        // Create a new node with combined frequency
        HuffmanNode* newNode = new HuffmanNode('\0', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;

        // Add the new node back to the heap
        heap.push(*newNode);
    }

    // The remaining node in the heap is the root of the Huffman tree
    return new HuffmanNode(heap.top());
}

// Generates the Huffman codes starting at the root
void huffmanCodes(HuffmanNode* root, const string& prefix, unordered_map<char, string>& result) {
    if (root == nullptr) {
        return;
    }

    if (root->data != '\0') {
        result[root->data] = prefix;
    }

    huffmanCodes(root->left, prefix + "0", result);
    huffmanCodes(root->right, prefix + "1", result);
}

int main() {
    // The string to be translated
    string text = "this class stresses me out";
    unordered_map<char, int> freqMap;

    // Calculate character frequencies
    for (char ch : text) {
        freqMap[ch]++;
    }

    // Build the Huffman tree
    HuffmanNode* root = buildHuffmanTree(freqMap);

    // Generate Huffman codes
    unordered_map<char, string> codes;
    huffmanCodes(root, "", codes);

    cout << "Huffman Codes for: \"" << text << "\"" << endl;

    // Print Huffman codes
    for (const auto& entry : codes) {
        cout << "'" << entry.first << "': " << entry.second << endl;
    }

    return 0;
}

/*
Input text: "COSC3320"
'3' : 10
's' : 010
'c' : 00
'0' : 011
'o' : 110
'2' : 111
*/
