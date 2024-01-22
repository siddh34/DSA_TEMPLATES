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
};