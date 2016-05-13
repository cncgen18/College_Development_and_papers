package tree;

public class Tree {
	
	private Node root;
	private int amount;
	private int comparisons;
	public int reasign;
	public int rotate;
	
	public Node getRoot(){
		return root;
	}
	
	public int getAmount(){
		return amount;
	}
	
	public int getComparisons(){
		return comparisons;
	}
	
	public void Average(int amt, int comp){
		double avg = 1.0 * comp / amt;
		System.out.println("Total number of comparisons: " + comp);
		System.out.println("Average comparisons: " + avg);
	}
	
	public Node find(int key){
		Node current = root;
		while(current.iData != key)
		{
		if(key < current.iData)
			current = current.leftChild;
		else
			current = current.rightChild;
		if(current == null) 
			return null; 
		}
		return current; 
	}
	
	public void insert(int id){
		amount++;
		Node newNode = new Node(); 
		newNode.iData = id;
		if(root==null) 
			root = newNode;
		else 
		{
			Node current = root;
			Node parent;
			while(true)
			{
				parent = current;
				comparisons++;
				if(id < current.iData){
					current = current.leftChild;
					if(current == null) 
					{ 
						parent.leftChild = newNode;
						return;
					}
				} 
				else 
				{
					current = current.rightChild;
					if(current == null) 
					{ 
						parent.rightChild = newNode;
						return;
					}
				} 
			} 
			} 
		} 
		
	public void delete(int id){
		
		Node parent = null;
		Node current = root;
		
		while (current != null) {
			
			if (id < current.iData) {
				parent = current;
				current = current.leftChild;
			}
			else if (id > current.iData) {
				parent = current;
				current = current.rightChild;
			}
			else
				break;
			}
		
		if (current.leftChild == null){
			reasign++;
			if(parent == null){
				root = current.rightChild;
			}
			else{
				if( id < parent.iData)
					parent.leftChild = current.rightChild;
				else
					parent.rightChild = current.rightChild;
			}
		}
		else{
			Node rParent = current;
			Node right = current.leftChild;
			
			while( right.rightChild != null){
				
				rParent = right;
				right = right.rightChild;
			
			}
			
			current.iData = right.iData;
			
			if (rParent.rightChild == right){
				rotate++;
				rParent.rightChild = right.leftChild;
			}
				 else{
				 rParent.leftChild = right.leftChild;
				 }
				
				 amount--;
					
			}
		}
	
}
