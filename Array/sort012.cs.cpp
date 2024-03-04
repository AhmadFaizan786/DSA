void sortArray(vector<int>& arr, int n)

{

    int start = 0 ;

    int end = n - 1 ;

    int mid = 0; 

    while ( mid <= end )

    {

        if ( arr[mid] == 0 )

        {

            swap( arr[mid] , arr[start] ) ;

            start++ ;

            mid++ ;

        }

        else if( arr[mid] == 1 )

        {

         mid++ ;

        }       

        else {

            swap( arr[mid] , arr[end] );

            end--;

        }

    }

}