import sympy
import sys
from mpmath import mpf
class Locator:
    def __init__(self,sList):
        self.sensors = sList;

def locate(times,exclude):
    """locate(t,exclude)
    input: list-of-times in microseconds
    and what to exclude in calculations
    output (x, y) in meters
    """
    times = times[:];
    pts = [(0.0,0.0),(-0.635,-.1778),(0.1905,0.37592),(0.6604,-0.2032)];
    del pts[exclude];
    del times[exclude];
    x,y,t = sympy.symbols('x y t');
    a,b = pts[0];
    c,d = pts[1];
    e,f = pts[2];

    t_1 = times[0];
    t_2 = times[1];
    t_3 = times[2];

    sos = 340.2;
    
    t_1 = mpf(t_1);# / 1e6;
    t_2 = mpf(t_2);# / 1e6;
    t_3 = mpf(t_3);# / 1e6;

    f_1 = (x-a)**2 + (y-b)**2 - ((t_1-t)*sos)**2;
    f_2 =  (x-c)**2 + (y-d)**2 - ((t_2-t)*sos)**2;
    f_3 = (x-e)**2 + (y-f)**2 - ((t_3-t)*sos)**2;

    try:
        res = sympy.nsolve((f_1,f_2,f_3),(x,y,t),(0,0,0));
        return ( float(res[0]), float(res[1]) );
    except(ValueError,ZeroDivisionError):
        return ( float('NaN'), float('NaN') );
if __name__ == "__main__":
    locate(sys.argv[1],sys.argv[2],sys.argv[3]);
