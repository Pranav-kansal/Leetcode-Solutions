class Trie {
public:
    struct Node
    {
        bool isWord;
        struct Node *child[26] ={NULL};
    };
    Node *root = new Node();
    Trie() {
        
    }
    
    void insert(string word) {
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->child[tolower(word[i])-'a']==NULL)
            {
                temp->child[tolower(word[i])-'a']= new Node();
                temp = temp->child[tolower(word[i])-'a'];
            }
            else
            {
                temp = temp->child[tolower(word[i])-'a'];
            }
        }
        temp->isWord = true;
    }
    
    bool search(string word) {
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->child[tolower(word[i])-'a']==NULL)
            {
                return false;
            }
            else
            {
                temp = temp->child[tolower(word[i])-'a'];
            }
        }
        return temp->isWord;
    }
    
    bool startsWith(string prefix) {
        Node *temp = root;
        for(int i=0;i<prefix.length();i++)
        {
            if(temp->child[tolower(prefix[i])-'a']==NULL)
            {
                return false;
            }
            else
            {
                temp = temp->child[tolower(prefix[i])-'a'];
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */