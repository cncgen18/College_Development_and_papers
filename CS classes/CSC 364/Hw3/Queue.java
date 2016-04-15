package tree;

public class Queue {
	private int maxSize = 100;
	private Node[] qArray = new Node[100];
	private int front = 0;
	private int rear = 99;
	public int nItems;
	
	public boolean isEmpty() {
		if(nItems == 0)
			return true;
		return false;
	}
	
	public void insert(Node j)
	{
		if(rear == maxSize-1) 
			rear = -1;
		qArray[++rear] = j;
		nItems++;
	}
	
	public Node remove()
	{
		Node temp = qArray[front++];
		if(front == maxSize)
			front = 0;
		nItems--;
		return temp;
	}
	
}
