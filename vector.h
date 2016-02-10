//header for vectors

class vector
{
	private:
	double x;
	double y;
	double z;
	double s;

	public:
	vector()
	{
		x=0.0;
		y=0.0;
		z=0.0;
		s=1.0;
	}

	vector(double a, double b, double c)
	{
		x=a;
		y=b;
		z=c;
		s=1.0;
		normalize(this);
	}

	double getX();
	double getY();
	double getZ();
	double getS();
	static void normalize(vector* v);
	static vector add(vector* v, vector* u);
	static vector sub(vector* v, vector* u);
	static double dot(vecotr* v, vector* u);
	static vector cross(vector* v, vector* u);
	static void scale(vector* v, double scale);
}
