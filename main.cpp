 #include <iostream>

    using namespace std ;

    int main()
    {
        int n , c;
        cin >> n >> c;
        int flag = 1 ;
        int count = 0;
        int min ;
        for(int i = 1 ; i<=n;i++)
        {
            int val ;
            cin >> val ;
            if(flag)
            {
                min = val;
                flag = 0 ;
            }
            else
            {
                if(min>val)
                {
                    min = val ;
                }
            }
            count++;
            if(count == c || i==n)
            {
                cout << min << " " ;
                count = 0;
                flag = 1 ;
            }

        }

        return 0;
    }
