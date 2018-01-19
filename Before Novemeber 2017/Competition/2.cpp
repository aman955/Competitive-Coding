public class SubMtrix {

	private int m =3;
	private int n =4;
	private int mark_i = 0,mark_another=0;
	private int part_row = 0;
	private int row_1 = 0,row_2 =0;;
	private int end_row =0,end_another=0;
	public static void main(String args[]) {
		int [][] a ={ { 0, 1,1,0}, { 0,0,0,0}, { 1, 1, 0, 0 } };
		SubMtrix sm = new SubMtrix();
		 sm.subMat(a);
		
		
	}
	public  void subMat(int a[][]) {
		for(int i =0 ;i < a.length;i++){
			part_row = 0;
			for(int j =0;j < a[0].length;j++) {
				if(a[i][j]==1){
					
					if(row_1 == 0)
					     mark_i = i;
					part_row++;
					row_1++;
					end_row =i+1;
					
					
				}
			}
			if(part_row ==0)
			{
				row_2=row_1;
				mark_another = mark_i;
				end_another = end_row;
				
				row_1 =0;
			}
			if(part_row !=0 & row_2 < row_1){
				row_2 =row_1;
				mark_another = mark_i;
				end_another = end_row;
			}
		}
		for(int i = mark_another;i < end_another;i++){
			for(int j =0;j < n;j++) {
				System.out.print(a[i][j] + " ");
			}
			System.out.println();
		}
	}
	
	
	
}
