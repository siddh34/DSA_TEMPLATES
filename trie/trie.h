#include <string>
#include <unordered_map>
using namespace std;

class Node
{
private:
    char data;
    unordered_map<char, Node *> map;
    bool isterminal;

public:
    Node(char d)
    {
        data = d;
        isterminal = false;
    }

    friend class Trie;
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node('\0');
    }

    void insert(string word){
        Node *temp = root;
        
        for(char ch: word){
            if(temp->map.count(ch) == 0){
                Node *n = new Node(ch);
                temp->map[ch] = n;
            }
            temp = temp->map[ch];
        }

        temp->isterminal = true;
    }

    bool search(string word){
        Node *temp = root;

        for(char ch: word){
            if(temp->map.count(ch) == 0){
                return false;
            }
            temp = temp->map[ch];
        }

        return temp->isterminal;
    }

    vector<string> findWords(string prefix){
        Node *temp = root;
        vector<string> words;
        for(char ch: prefix){
            if(temp->map.count(ch) == 0){
                return words;
            }
            temp = temp->map[ch];
        }

        findWordsHelper(temp, prefix, words);
        return words;
    }

    void findWordsHelper(Node *temp, string prefix, vector<string> &words){
        if(temp->isterminal){
            words.push_back(prefix);
        }

        for(auto it: temp->map){
            findWordsHelper(it.second, prefix + it.first, words);
        }
    }
};