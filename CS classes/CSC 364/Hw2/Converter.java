package homework_2;

public class Converter {
	static Stack postFix = new Stack(50);
	public static void converter(String exp){
		for(int i = 0; i < exp.length(); i++){
			char cur = exp.charAt(i);
			if(cur != '+' && cur != '-' && cur != '/' && cur != '*' && cur != '^'){
				System.out.print(cur);
			}
			else if(cur == '('){
				postFix.push(cur);
			}
			else if(cur == ')'){
				while(postFix.pop() != '('){
					System.out.print(postFix.pop());
				}
			}
			else
				postFix.push(cur);
		}
		return;
	}
	public static void main(String[] args){
		converter("(1+2)*3");
	}
}
