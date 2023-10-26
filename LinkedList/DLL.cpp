
struct Node
{
	size_t data;
	Node* prev = nullptr;
	Node* next = nullptr;
};

struct List
{
	Node* head = nullptr;
	Node* tail = nullptr;

	size_t count = 0;

	void push_front(Node* node)
	{
		if (count == 0)
		{
			head = tail = node;
			return;
		}

		head->prev = node;
		node->next = head;
		node->prev = nullptr;
		head = node;
		count++;
	}

	void push_back(Node* node)
	{
		if (count == 0)
		{
			head = tail = node;
			return;
		}

		node->prev = tail;
		node->next = nullptr;
		tail->next = node;
		tail = node;
		count++;
	}

	void pop_front()
	{
		if (count == 0)
			return;


		if (count == 1)
		{
			delete head;
			head = tail = nullptr;
			return;
		}

		Node* newHead = head->next;
		delete head;
		head = newHead;
		head->prev = nullptr;
		count--;
	}

	void pop_back()
	{
		if (count == 0)
			return;


		count--;
		Node* newTail = tail->prev;
		delete tail;
		tail = newTail;

		if (count == 0)
			head = nullptr;
		
		else
			tail->next = nullptr;
	}

	void insert(Node* node, size_t position)
	{
		if (position > count)
			return;

		size_t index = 0;
		Node* prev = nullptr;
		Node* current = head;
		while (current && index < position)
		{
			prev = current;
			current = current->next;
			index++;
		}

		if (prev == nullptr)
		{
			push_front(node);
			return;
		}

		if (prev == tail)
		{
			push_back(node);
			return;
		}

		prev->next = node;
		node->prev = prev;
		node->next = current;
		current->prev = node;
		count++;
	}

	void remove(Node* node)
	{
		count--;
		if (node == head)
		{
			Node* newHead = head->next;
			delete head;
			head = newHead;
			if (head == nullptr)
				tail = nullptr;

			return;
		}

		if (node == tail)
		{
			Node* newTail = tail->prev;
			delete tail;
			tail = newTail;
			return;
		}

		node->prev->next = node->next;
		node->next->prev = node->prev;
		delete node;
	}
};