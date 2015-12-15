import sympy
import sys
if __name__ == "__main__":
    
    x,y,t = sympy.symbols('x y t');
    a = -0.635;
    b = -.1778;
    c = 0.1905;
    d = 0.37592;
    e = 0.6604;
    f = -0.2032;
    sos = 340.2;
    s_1 = float(sys.argv[1]) / 1e6;
    s_2 = float(sys.argv[2]) / 1e6;
    s_3 = float(sys.argv[3]) / 1e6;
    f_1 = (x-a)**2 + (y-b)**2 - ((s_1-t)*sos)**2;
    f_2 =  (x-c)**2 + (y-d)**2 - ((s_2-t)*sos)**2;
    f_3 = (x-e)**2 + (y-f)**2 - ((s_3-t)*sos)**2;
    try:
        res = sympy.nsolve([f_1,f_2,f_3],[x,y,t],[0.1,0.1,s_1]);
        print(res);
    except ValueError:
        try:
            res = sympy.nsolve([f_1,f_2,f_3],[x,y,t],[0.1,0.1,s_2]);
            print(res);
        except ValueError:
            try:
                res = sympy.nsolve([f_1,f_2,f_3],[x,y,t],[0.1,0.1,s_3]);
                print(res);
