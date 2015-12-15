import sympy
from sympy import *

if __name__ == "__main__":
    print(sympy.__version__)
    x,y,t = symbols('x y t');
    s_1,s_2,s_3 = symbols('s_1 s_2 s_3');
    a,b,c,d = symbols('a b c d');
    eq1 = Eq(x**2+y**2 - ((s_1-t)*342)**2);
    eq2 = Eq((x-a)**2+(y-b)**2 - ((s_2-t)*342)**2);
    eq3 = Eq((x-c)**2+(y-d)**2 - ((s_3-t)*342)**2);
    print(eq1);
    print(eq2);
    print(eq3);
    s = solve([eq1,eq2,eq3], [x,y,t]);

    #s = solve([x**2+y**2 - ((s_1-t)*342)**2,(x-a)**2+(y-b)**2 - ((s_2-t)*342)**2,(x-c)**2+(y-d)**2 - ((s_3-t)*342)**2], [x, y,t], exclude=[a,b,c,d,s_1,s_2,s_3]);
    print(s);
