package Problem2;

public class MyHashTable {
	public int s;
	public int items;
	public int hashVal;
	MyList[] list = new MyList[50];
	MyHashTable(){}
	
	MyHashTable(int size, int nItems){
		for(int i=0;i<size;i++){
			list[i] = new MyList();}
		items = nItems;
		s = size;
	}
	
	public void insert(int key){
		hashVal = (key%items);
		list[hashVal].insertArray(key);
		}
	
	public boolean find(int key){
		for(int i = 0; i < s; i++){
			if(list[i].arraySearch(key))
				return true;
		}
		return false;
	}
	
	public void delete(int key){
		hashVal = (key%items);
		if(find(key)){
			list[hashVal].deletionOfItem(key);
		}
	}
}