package homework_2;

public class parsar {
	public static int Parsar(Stack sta){
        int number1;
        int number2;
        int result = 0;
        char c;

        for(int i = sta.getTop(); i >= 0; i--){
        	c = sta.peek();
        	if (c != '+' || c != '-' || c != '/' || c != '*') {
        		} 
        	else {
                number1 = sta.pop();
                number2 = sta.pop();
                switch(c) {
                    case '+':
                    result = number1 + number2;
                    break;
                    case '-':
                    result = number1 - number2;
                    break;
                    case '*':
                    result = number1 * number2;
                    break;
                    case '/':
                    result = number1 / number2;
                    break;
                    } sta.push((char) result);
                }
        }
            System.out.println(result);
            return sta.pop();
}
	public static void main(String[] args){
		Stack sta = new Stack(50);
		sta.push('1');
		sta.push('2');
		sta.push('+');
		sta.push('3');
		sta.push('*');
		Parsar(sta);
}
	}

