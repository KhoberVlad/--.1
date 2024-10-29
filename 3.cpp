double x, y, z, a;
		cout << "Enter x, y, z\n";
		cin >> x >> y >> z;
		a = ((3 * abs(y) - pow(pow(x,3) + 4*y, 1/2. )) / (10 * x - y / pow(z, 3)) + pow(x, 4) / 4);
		cout << "a = " << fixed << setprecision(2) << a << endl;
