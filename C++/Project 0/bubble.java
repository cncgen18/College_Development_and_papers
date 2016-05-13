/** Michael Weyman
 *  9-10-13
 *  Project 0
 *  Sort array in java */
public class bubble {

	
	public static void main(String[] args){
		int size = 100000; // size of array
		int[] sort = new int[size]; // create array
		double time = System.currentTimeMillis(); // start time
		for(int i = 0; i < size; i++){ // insert rand num into array
			int value = (int)(Math.random() * 8847);
			sort[i] = value;
		}
		bubblesort(sort); // sort array
		System.out.println("done");
		double time2 = System.currentTimeMillis(); // end time
		System.out.println("sort took: " + (time2 - time) + " ms"); // print results
	}
	
	public static void bubblesort(int [] sort){ 
		for(int i = 0; i < 9; i++){ // sort array
			if(sort[i] > sort[i+1]){
				int temp = sort[i];
				sort[i] = sort[i+1];
				sort[i+1] = temp;
			}
		}
	}
	
}

