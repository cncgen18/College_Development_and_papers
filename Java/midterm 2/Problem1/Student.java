package Problem1;
import java.util.Random;

public class Student {

	public String name;
	public int serial;
	
	Student(){
		name = getName();
		serial = getSerial();
	}
	
	public String getName(){
		char[] chars = "abcdefghijklmnopqrstuvwxyz".toCharArray();
		StringBuilder temp = new StringBuilder();
		Random num = new Random();
		for (int i = 0; i < 7; i++) {
		    char nam = chars[num.nextInt(chars.length)];
		    temp.append(nam);
		}
		name = temp.toString();
		return name;
	}
	
	public int getSerial(){
		int value = (int)(Math.random() * 8847);
		if (value >= 1000){
			return value;
		}
		return value + 1000;
	}
}
