package Problem2;


public class MyList {
	static int[] k = new int[50];
	// variable holds the number used in the list
	static int numberInList;
	//calculates the amount of moves when inserting
	static double move;
	//holds amount of shifts when deleting
	static double shifts;
	//holds number of deletions
	static int removed;
	//methods
	
	MyList(){
		k = new int[50];
	}
	
	//gets size of list
	public int getSize(int k[]){
		return k.length;
	}
	//prints the array
	public void printArray(){
		for(int i = 0; i < numberInList; i++){
			System.out.print(k[i] + " ");
		}
	}
	//searches and prints a value in the array
	public boolean arraySearch(int key){
		int high = numberInList - 1;
		int low = 0;
		while (high >= low){
			int mid = (high + low) / 2;
			if(key < k[mid]){
				high = mid - 1;
			}
			else if (key == k[mid]){
				return true; }
			else if (key > k[mid])
				low = mid + 1;
		}
		System.out.println("not found: -1" );
		return false;
	}
	
	//inserts items into the array
	public void insertArray(int num){
		int j = 0;
		for(int i = 0; i < numberInList; i++){
			if(k[i] > num){
				j = i;
				break;
			}
			else
				j = numberInList;
		}
		for(int s = numberInList; s > j; s--){
			k[s] = k[s-1];
		}
		k[j] = num;
	    move = move + (num - k[j]);
		numberInList += 1;
	}
	//deletes a value in the array
	public void deletionOfItem(int key){
		int j = 0;
		removed++;
		for(int i = 0; i < numberInList; i++){
			if (k[i] == key){
				j = i;
				shifts = shifts + (numberInList - j);
				break;
			}
		}
		for(int s = j; s < numberInList; s++){
			k[s] = k[s+1];
		}
		numberInList -= 1;
		
	}
	//main to do i - v in the assignment
}
