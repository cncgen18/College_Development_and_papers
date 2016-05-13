//Michael Weyman
public class Test {
	public static void main(String[] args){
		//inserting
		OrderedArray.insertArray(OrderedArray.k, 12);
		OrderedArray.insertArray(OrderedArray.k, 1);
		OrderedArray.insertArray(OrderedArray.k, 8);
		OrderedArray.insertArray(OrderedArray.k, 2);
		OrderedArray.insertArray(OrderedArray.k, 18);
		OrderedArray.insertArray(OrderedArray.k, 7);
		OrderedArray.insertArray(OrderedArray.k, 19);
		OrderedArray.insertArray(OrderedArray.k, 27);
		OrderedArray.insertArray(OrderedArray.k, 34);
		OrderedArray.insertArray(OrderedArray.k, 43);
		OrderedArray.insertArray(OrderedArray.k, 90);
		OrderedArray.insertArray(OrderedArray.k, 65);
		OrderedArray.insertArray(OrderedArray.k, 87);
		OrderedArray.insertArray(OrderedArray.k, 15);
		OrderedArray.insertArray(OrderedArray.k, 21);
		OrderedArray.insertArray(OrderedArray.k, 56);
		OrderedArray.insertArray(OrderedArray.k, 35);
		OrderedArray.insertArray(OrderedArray.k, 9);
		OrderedArray.insertArray(OrderedArray.k, 10);
		OrderedArray.insertArray(OrderedArray.k, 11);
		//printing the array
		for(int i = 0; i < OrderedArray.numberInList; i++){
			System.out.print(OrderedArray.k[i] + " ");
		}
		// holds average movements while inserting
		double avg = OrderedArray.move / OrderedArray.numberInList;
		System.out.println("");
		System.out.println(OrderedArray.move);
		System.out.println("The average movement between numbers is: " + avg);
		//searching array
		OrderedArray.arraySearch(OrderedArray.k, 12);
		OrderedArray.arraySearch(OrderedArray.k, 6);
		OrderedArray.arraySearch(OrderedArray.k, 1);
		OrderedArray.arraySearch(OrderedArray.k, 62);
		OrderedArray.arraySearch(OrderedArray.k, 8);
		OrderedArray.arraySearch(OrderedArray.k, 63);
		OrderedArray.arraySearch(OrderedArray.k, 2);
		OrderedArray.arraySearch(OrderedArray.k, 60);
		OrderedArray.arraySearch(OrderedArray.k, 18);
		OrderedArray.arraySearch(OrderedArray.k, 61);
		OrderedArray.arraySearch(OrderedArray.k, 7);
		OrderedArray.arraySearch(OrderedArray.k, 62);
		OrderedArray.arraySearch(OrderedArray.k, 19);
		OrderedArray.arraySearch(OrderedArray.k, 64);
		OrderedArray.arraySearch(OrderedArray.k, 27);
		OrderedArray.arraySearch(OrderedArray.k, 66);
		OrderedArray.arraySearch(OrderedArray.k, 34);
		OrderedArray.arraySearch(OrderedArray.k, 68);
		OrderedArray.arraySearch(OrderedArray.k, 43);
		OrderedArray.arraySearch(OrderedArray.k, 69);
		//deletions
		OrderedArray.deletionOfItem(OrderedArray.k, 43);
		OrderedArray.deletionOfItem(OrderedArray.k, 2);
		OrderedArray.deletionOfItem(OrderedArray.k, 9);
		OrderedArray.deletionOfItem(OrderedArray.k, 7);
		OrderedArray.deletionOfItem(OrderedArray.k, 90);
		OrderedArray.deletionOfItem(OrderedArray.k, 15);
		OrderedArray.deletionOfItem(OrderedArray.k, 56);
		OrderedArray.deletionOfItem(OrderedArray.k, 18);
		OrderedArray.deletionOfItem(OrderedArray.k, 65);
		OrderedArray.deletionOfItem(OrderedArray.k, 11);
		double avgShifts = (OrderedArray.shifts / OrderedArray.removed);
		System.out.println("average shifts per deletion: " + avgShifts);
		// displaying array!
		for(int i = 0; i < OrderedArray.numberInList; i++){
			System.out.print( OrderedArray.k[i] + " ");
		}
	}
}

