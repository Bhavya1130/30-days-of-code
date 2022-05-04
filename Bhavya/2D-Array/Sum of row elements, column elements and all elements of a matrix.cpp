{
    int m, n, sum =0, rsum=0, csum=0;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];
    cout << "Enter elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cin >> a[i][j];
        }
    }
    cout << "\nDisplay elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i {}; i<m; i++){
        cout << "Sum of elements in row "<< i+1 << " : ";
        for(int j {}; j<n; j++){
            rsum += a[i][j];
        }
        cout << rsum << endl;
        rsum=0;
    }
    for(int j {}; j<n; j++){
        cout << "Sum of elements in column "<< j+1 << " : ";
        for(int i {}; i<m; i++){
            sum += a[i][j];
            csum += a[i][j];
        }
        cout << csum << endl;
        csum=0;
    }
    cout << "Sum of all elements of matrix: ";
    cout << sum << endl;
    return 0;
}
