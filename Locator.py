import sympy
import sys
from mpmath import mpf
class Locator:
    def __init__(self,sList):
        self.sensors = sList[:];
    def locate(self,times,exclude):
        """locate(t,exclude)
        input: list-of-times in microseconds
        and what to exclude in calculations
        output (x, y) in meters
        """
        sos = 340.2;
        
        times = times[:];
        pts = self.sensors[:];
        del pts[exclude];
        del times[exclude];
        x,y,t = sympy.symbols('x y t');
        a,b = pts[0];
        c,d = pts[1];
        e,f = pts[2];
        #print(a,b,c,d,e,f);
        t_1 = mpf(times[0])/1e6;
        t_2 = mpf(times[1])/1e6;
        t_3 = mpf(times[2])/1e6;
        #t_1,t_2,t_3 = 0,t_2-t_1,t_3-t_1;
        
        f_1 = (x-a)**2 + (y-b)**2 - ((t_1-t)*sos)**2;
        f_2 =  (x-c)**2 + (y-d)**2 - ((t_2-t)*sos)**2;
        f_3 = (x-e)**2 + (y-f)**2 - ((t_3-t)*sos)**2;

        try:
            res = sympy.nsolve((f_1,f_2,f_3),(x,y,t),(0,0,min(t_1,t_2,t_3)));
            return ( float(res[0]), float(res[1]) );
        except(ValueError,ZeroDivisionError):
            return ( float('NaN'), float('NaN') );

def inToM(l):
    return l*2.54/100;

if __name__ == "__main__":
    sensors = [
            (inToM(48),inToM(0)),
            (inToM(0),inToM(-41)),
            (inToM(0),inToM(42)),
            (inToM(-48),inToM(0))];
    loc = Locator(sensors);
    for ex in range(4):
        x,y = loc.locate([float(sys.argv[1]),float(sys.argv[2]),float(sys.argv[3]),float(sys.argv[4])],ex);
        print(x,y);
#    locate(sys.argv[1],sys.argv[2],sys.argv[3]);
