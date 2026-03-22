#include<iostream>
using namespace std;

class circle {
	int radius;
public:

	circle() : radius(0) { cout << " default constracter " << endl; }
	 
	circle(int radius) {

		this->radius = radius;
		cout << " parameter constracter " << endl;
	 }

	circle(const circle& c) {
		this->radius = c.radius;
		cout << " copy constracter " << endl;
	}

	~circle() {
		cout << " destructer constracter " << endl;
	}

	void set_radius(int radius) {
		this->radius = radius;
	}

	int get_radius() {
		return radius;
	}

	float get_area() {
		return (3.14 * radius * radius);
	}

	circle compare(circle c) {
		if (this->radius > c.radius) 
		{
			return *this;
		}
		else 
		{
			return c;
		}
	}

	circle sum(circle c) {
		circle t;
		t.radius = this->radius + c.radius;
		return t;
	}

	void display(circle c[], int n) {
		for (int i = 0; i < n; i++) {
			cout << " circle " << i+1 << " : " << " radius : " << c[i].get_radius() << " area : " << c[i].get_area() << endl;
		 }
	}

};

int main()
{
   
        cout << "=== manager circle ===" << endl;
        cout << endl;

        // ÅäÔÇÁ ÏæÇÆÑ ÈÇÓÊÎÏÇã ÇáãäÔÆÇÊ ÇáãÎÊáÝÉ
        cout << " build circle 1 :" << endl;
        circle c1;                    // ÇáãäÔÆ ÇáÇÝÊÑÇÖí
        circle c2(5);                 // ÇáãäÔÆ ãÚ ãÚÇãá
        circle c3(10);                // ãäÔÆ ÂÎÑ ãÚ ãÚÇãá
        circle c4 = c2;               // ãäÔÆ ÇáäÓÎ

        cout << endl;

        // ÊÚííä Þíã áÃäÕÇÝ ÇáÃÞØÇÑ
        c1.set_radius(3);

        cout << endl;

        // ÚÑÖ ãÚáæãÇÊ ÇáÏæÇÆÑ
        cout << " data circle 2 :" << endl;
        cout << "Circle 1 - Radius: " << c1.get_radius() << ", Area: " << c1.get_area() << endl;
        cout << "Circle 2 - Radius: " << c2.get_radius() << ", Area: " << c2.get_area() << endl;
        cout << "Circle 3 - Radius: " << c3.get_radius() << ", Area: " << c3.get_area() << endl;
        cout << "Circle 4 - Radius: " << c4.get_radius() << ", Area: " << c4.get_area() << endl;

        cout << endl;

        // ãÞÇÑäÉ ÇáÏæÇÆÑ
        cout << " compar circle 3 :" << endl;
        circle larger= c2.compare(c3);
        cout << " larger radius " << larger.get_radius() << endl;

        cout << endl;

        // ÌãÚ ÇáÏæÇÆÑ
        cout << "collection radius 4 :" << endl;
        circle sumCircle = c1.sum(c2);
        cout << " collection " << sumCircle.get_radius() << endl;

        cout << endl;
		
        // ÇÓÊÎÏÇã ÇáãÕÝæÝÉ æÏÇáÉ display
        cout << " display :" << endl;
        circle circles[3] = { c1, c2, c3 };
        c1.display(circles, 3);

        cout << endl;

        cout << "=== finalll ===" << endl;

        return 0;
   
}