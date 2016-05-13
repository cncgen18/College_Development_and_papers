package tree;

public class test {
	
	public static void main(String[] args){
		Tree t1 = new Tree();
		t1.insert(67);
		t1.insert(79);
		t1.insert(51);
		t1.insert(62);
		t1.insert(83);
		t1.insert(9);
		t1.insert(74);
		t1.insert(2);
		t1.insert(63);
		t1.insert(78);
		t1.insert(27);
		t1.insert(86);
		t1.insert(70);
		t1.insert(55);
		t1.insert(65);
		t1.insert(85);
		t1.insert(16);
		t1.insert(43);
		t1.insert(76);
		t1.insert(52);
		t1.insert(87);
		t1.insert(58);
		t1.insert(35);
		t1.insert(56);
		int min = minimum(t1.getRoot());
		t1.Average(t1.getAmount(), t1.getComparisons());
		System.out.println("preorder traversal:");
		preorder(t1.getRoot());
		System.out.println("");
		System.out.println("inorder traversal:");
		inOrder(t1.getRoot());
		System.out.println("");
		System.out.println("levelorder traversal:");
		levelOrder(t1.getRoot());
		System.out.println("");
		System.out.println("Minimum number in tree is: " + min);
		t1.delete(56);
		t1.delete(63);
		t1.delete(43);
		t1.delete(74);
		t1.delete(9);
		t1.delete(35);
		t1.delete(86);
		System.out.println("The number of reassignments required for deleting these seven nodes was: " + t1.reasign);
		System.out.println("The number of rotations required for deleting these seven nodes was: " + t1.rotate);
		System.out.println("levelorder traversal:");
		levelOrder(t1.getRoot());
		
	}
	
	private static void inOrder(Node localRoot){
		if(localRoot != null){
			inOrder(localRoot.leftChild);
			localRoot.displayNode();
			inOrder(localRoot.rightChild);
		}
	}
	
	private static void preorder(Node localRoot){
		
		if(localRoot != null){
			localRoot.displayNode();
			preorder(localRoot.leftChild);
			preorder(localRoot.rightChild);
		}
	}
	
	private static int minimum(Node localRoot){
		while(localRoot.leftChild != null){
			localRoot = localRoot.leftChild;
		}
		return localRoot.iData;
	}
	
	public static void levelOrder(Node localRoot){
		Queue temp = new Queue();
		if(localRoot == null)
			return;
		temp.insert(localRoot);
		while(temp.isEmpty() == false){
			Node tNode = temp.remove();
			tNode.displayNode();
			if(tNode.leftChild != null){
				temp.insert(tNode.leftChild);
			}
			if(tNode.rightChild != null){
				temp.insert(tNode.rightChild);
			}
		}
		
	}

}
