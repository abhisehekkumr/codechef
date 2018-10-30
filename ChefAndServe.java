import java.util.Scanner;

class ChefAndServe{
	public static void main(String a[]){
		Scanner sc = new Scanner(System.in);

		int test_cases = sc.nextInt();
		while(test_cases > 0){
			test_cases--;

			int p1 = sc.nextInt();
			int p2 = sc.nextInt();
			int k = sc.nextInt();
			int sum = p1 + p2;
			int count = 0;
			boolean flag = true;

			if(p1 == 0 && p2 == 0){
				System.out.println("CHEF");
				flag = false;
			}

			while(true && flag){
				count++;
				//System.out.println(count);
				sum = sum - k;
				if(sum < 0){
					if(count%2 != 0)
						System.out.println("CHEF");
					else
						System.out.println("COOK");
					break;
				}
			}
		}
	}
}