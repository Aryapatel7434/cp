class P
{
	public static void main(String a[])
	{
		int n = 3;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = n ; j >= i ; j--)
			{
				System.out.print(" "); 
			}

			for(int j = 0 ; j < i ; j++)
			{
				System.out.print(" *");
			}

			System.out.print('\n');
		}

		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j <= i ; j++)
			{
				System.out.print(" "); 
			}

			for(int j = 0 ; j < n - i ; j++)
			{
				System.out.print(" *");
			}

			System.out.print('\n');
		}
	}
}