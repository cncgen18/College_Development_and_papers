//Michael Weyman


public class ceaser {
	
	public static void main(String[] args){
		String dmes = "YQIIKHUOEKYXQTHQJXUHRUJXUVYHIJCQDXUHUJXQDJXUIUSEDTCQDYDHECU";
		for( int i = 0; i < 26; i++){
			decodeMes(dmes,i);
		}
		
		
	}
	
	public static void decodeMes(String word, int index){
		char message[] = new char[word.length()];
		for(int i = 0; i < word.length(); i++){
			if((char) (word.charAt(i) - index) < 'A'){
				message[i] = (char) (word.charAt(i) - index + 26);
			}
			else{
				message[i] = (char) (word.charAt(i) - index);}
		}
		System.out.print("Message at index " + index + ": ");
		for(int j = 0; j < message.length; j++){
			System.out.print(message[j]);
		}
		System.out.println("");
	}

}
