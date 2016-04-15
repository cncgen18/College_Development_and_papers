//Michael Weyman
package problem2;
import java.util.Scanner;


public class Anagrams {
	public static void anaGenerator(String word1, String ana){
		// used to print out anagrams when word 1 is emptied
		if(word1.length() == 0){
			// prints the anagram transfered into ana from word1
			System.out.println(ana);
		}
		for(int i = 0; i < word1.length(); i++){
			// Use this for loop to split the inputed word into seprate strings creating anagrams
			anaGenerator(word1.substring(0,i) + word1.substring(i+1, word1.length()), word1.charAt(i) + ana);
		}
	}
	
	public static void main(String args[]){
		String word;
		Scanner in1 = new Scanner(System.in);
		System.out.print("enter a word: ");
		word = in1.next();
		anaGenerator(word, "");
	}
}
