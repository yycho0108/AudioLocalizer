import sympy
import sys
from mpmath import mpf
def locate(s_1,s_2,s_3):
    """locate(s_1,s_2,s_3)
    input times in microseconds
    output location in meters
    """
    x,y,t = sympy.symbols('x y t');
    #a = -0.635;
    #b = -.1778;
    #c = 0.1905;
    #d = 0.37592;
    #e = 0.6604;
    #f = -0.2032;
    a = -10;
    b = 10;
    c = 10;
    d = 10;
    e = 10;
    f = -10;
    sos = 340.2;
    
    s_1 = mpf(s_1);# / 1e6;
    s_2 = mpf(s_2);# / 1e6;
    s_3 = mpf(s_3);# / 1e6;

    f_1 = (x-a)**2 + (y-b)**2 - ((s_1-t)*sos)**2;
    f_2 =  (x-c)**2 + (y-d)**2 - ((s_2-t)*sos)**2;
    f_3 = (x-e)**2 + (y-f)**2 - ((s_3-t)*sos)**2;

    try:
        res = sympy.nsolve((f_1,f_2,f_3),(x,y,t),(0,0,0));
        print((float(res[0]),float(res[1])));
    except(ValueError,ZeroDivisionError):
        print('(NaN, NaN)');
if __name__ == "__main__":
    locate(sys.argv[1],sys.argv[2],sys.argv[3]);
