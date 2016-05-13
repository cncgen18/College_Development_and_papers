package Problem1;

public class Test {
		public static int Size = 100000;
		public static void main(String[] args){
			
			Student[] bSort = new Student[Size];
			Student[] sSort = new Student[Size];
			Student[] rSort = new Student[Size];
			for(int i = 0; i < Size; i++){
				bSort[i] = new Student();
				sSort[i] = new Student();
				rSort[i] = new Student();
				System.out.println(rSort[i].name + " " + rSort[i].serial);
			}
			bubbleSort(bSort);
			shellSort(sSort);
			radixSort(rSort);
			/**for(int i = 0; i < Size; i++){
				System.out.println(rSort[i].name + " " + rSort[i].serial);
			}*/
			System.out.println("");
			System.out.println("done");
		}
		
		public static void bubbleSort(Student[] bSort){
			double time1 = System.currentTimeMillis();
			for(int i=Size-1; i>=0; i--){
				for(int j=0; j<i; j++){
						if( bSort[j].serial > bSort[j+1].serial ){
							Student temp = bSort[j];
							bSort[j] = bSort[j+1];
							bSort[j+1] = temp;}
					
				}
			}
			double time2 = System.currentTimeMillis();
			System.out.println("Time it took to BubbleSort: " + (time2 - time1));
		}
		
		public static void shellSort(Student[] sSort){
			double time1 = System.currentTimeMillis();
			int p1;
			int p2;
			Student tmp;
			int h = 1; 
			while(h <= Size/3)
				h = h*3 + 1; 
			while(h>0){
				for(p2=h; p2<Size; p2++){
					tmp = sSort[p2];
					p1 = p2;
					while(p1 > h-1 && sSort[p1-h].serial >= tmp.serial){
						sSort[p1] = sSort[p1-h];
						p1 -= h;
					}
				sSort[p1] = tmp;
				}
				h = (h-1)/3;
			}
			double time2 = System.currentTimeMillis();
			System.out.println("Time it took to ShellSort: " + (time2 - time1));
		} 
		
		public static void radixSort(Student[] rSort){
			double time1 = System.currentTimeMillis();
			int i;
			Student[] temp = new Student[Size];
			int expn = 1;
			for (i = 0; i != 4; ++i) {
				int j;
				int[] bucket = new int[10];
				for (j = 0; j != Size; ++j)
					bucket[ rSort[j].serial / expn % 10 ]++;
				for (j = 1; j != 10; ++j)
			        bucket[j] += bucket[j - 1];  
				for (j = Size - 1; j >= 0; --j)
			        temp[--bucket[rSort[j].serial / expn % 10]] = rSort[j];
				for (j = 0; j != Size; ++j)
					rSort[j] = temp[j];
				expn *= 10;
			    }
			double time2 = System.currentTimeMillis();
			System.out.println("Time it took to RadixSort: " + (time2 - time1));
			}
}


