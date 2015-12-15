#include <iostream>
#include <fstream>
#include <boost/format.hpp>
int main(){
	std::ifstream f_in("timeVals.txt");
	std::ofstream f_out("timeValsShort.txt");
	f_out << "hello?" << std::endl;
	double x,y,t,t1,t2,t3;
	f_out.precision(12);
	while(f_in >> x >> y >> t >> t1 >> t2 >> t3){
	    f_out<<boost::format("x: %1%, y:%2%, t:%3%\n%4% %5% %6%\n")%x%y%t%t1%t2%t3;	
	}
	f_in.close();
	f_out.close();
	return 0;
}
