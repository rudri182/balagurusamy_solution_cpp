class Max
{
		public :
		int a ,b ,c;
		
		Max(int aa , bb , cc)
		{
				a = aa;
				b = bb;
				c = cc;
		}
		
		void max()
		{
				if(a > b)
				{
						if(a > c)
							cout << a <<"is largetst." ;
						else 
							cout << c << "is largest." ;
				}
				else
				{
						if(b > c)
								cout << b << "is largest." ;
						else
								cout << c <<"is largest ." ;
				}
		}
}

int main
{
		Max obj ;
		int i1 , i2 , i3;
		
		cout << "Enter three no. :" ;
		cin >> i1 >> i2 >> i3;
		
		obj.max();
		
		return 0;
}
