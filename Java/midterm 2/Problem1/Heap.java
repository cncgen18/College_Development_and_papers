package Problem1;

public class Heap{
	private java.util.ArrayList list = new java.util.ArrayList();
	public Heap(){}
	
	public Heap(Node[] objects){
		for(int i = 0; i < Test.Size; i++){
			insert(objects[i]);
		}
	}
	
	public void insert(Node obj){
		list.add(obj);
		int current = list.size() - 1;
		while (current > 0){
			int parent = (current - 1)/2;
			if(current > parent){
				Node temp = (Node) list.get(current);
				list.set(current, list.get(parent));
				list.set(parent, temp);
			}
			else
				break;
			current = parent;
		}
	}
	
}
