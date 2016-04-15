package Problem2;

import java.util.Scanner;

public class SepChainTest {
	
	public static void main(String[] args){
		System.out.print("What would you like the size of your hash array to be: ");
		Scanner s = new Scanner(System.in);
		int size = s.nextInt();
		System.out.println("");
		System.out.print("How many items do you want to store in the hash table (<= 120): ");
		Scanner i = new Scanner(System.in);
		int items = i.nextInt();
		MyHashTable table = new MyHashTable(size,items);
		System.out.println("");
		System.out.print("Enter your items sequentially: ");
		Scanner num = new Scanner(System.in);
		for(int j = 0; j < items; j++){
			table.insert(num.nextInt());
		}
		
		System.out.println("");
		System.out.println("The generated hash table with separate chaining is: ");
		for(int x = 0; x < size; x++){
			System.out.print("The items for index [" + x + "]: ");
			table.list[x].printArray();
			System.out.println("");
			}
		}
		
		
}


