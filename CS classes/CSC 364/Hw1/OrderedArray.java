//Michael Weyman
public class OrderedArray {
	//initialize the array
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
	
	//gets size of list
	public static int getSize(int k[]){
		return k.length;
	}
	//prints the array
	public static void printArray(int k[]){
		for(int i = 0; i < numberInList; i++){
			System.out.print(k[i] + " ");
		}
	}
	//searches and prints a value in the array
	public static int arraySearch(int k[], int key){
		int high = numberInList - 1;
		int low = 0;
		while (high >= low){
			int mid = (high + low) / 2;
			if(key < k[mid]){
				high = mid - 1;
			}
			else if (key == k[mid]){
				System.out.println("found: " + (mid + 1));
				return mid + 1; }
			else if (key > k[mid])
				low = mid + 1;
		}
		System.out.println("not found: -1" );
		return -1;
	}
	
	//inserts items into the array
	public static int[] insertArray(int k[], int num){
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
	    move = move + (num - k[j + 1]);
		numberInList += 1;
		return k;
	}
	//deletes a value in the array
	public static int[] deletionOfItem(int k[], int key){
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
		return k;
		
	}
	//main to do i - v in the assignment
	public static void main(String[] args){
		for(int i = 0; i < 26; i++){
			k[i] = i + 1;
			numberInList += 1;
			}
		System.out.println("length of array: " + getSize(k));
		System.out.println("number of items in array: " + numberInList);
		k = insertArray(k,34);
		printArray(k);
		System.out.println("");
		System.out.println("here: " + arraySearch(k, 26));
		k = deletionOfItem(k, 5);
		printArray(k);
	}
}
