class LRUCache {
private:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    int capacity;
    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;

    void removeNode(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insertAtFront(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        head = new Node(0, 0);   
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (!mp.count(key)) {
            return -1;
        }

        Node* node = mp[key];
        removeNode(node);
        insertAtFront(node);

        return node->value;
    }

    void put(int key, int value) {
        if (mp.count(key)) {
            Node* node = mp[key];
            node->value = value;
            removeNode(node);
            insertAtFront(node);
            return;
        }

        if (mp.size() == capacity) {
            Node* lru = tail->prev;
            removeNode(lru);
            mp.erase(lru->key);
            delete lru;
        }

        Node* newNode = new Node(key, value);
        insertAtFront(newNode);
        mp[key] = newNode;
    }
};