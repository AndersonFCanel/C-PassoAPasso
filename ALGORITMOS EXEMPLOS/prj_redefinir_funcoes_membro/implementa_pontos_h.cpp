ponto::ponto(float a,float b)

{

inicializa(a,b);

}

void ponto::inicializa(float a,float b)

{

x=a;

y=b;

}

float ponto::retorna_x(void)

{ return x; }

float ponto::retorna_y(void)

{ return y; }

void ponto::altera_x(float a)

{ x=a; }

void ponto::altera_y(float b)

{ y=b; }

void ponto::mostra(void)

{

cout << "(" << x << "," << y << ")" <<endl;

}

ponto_reflete::ponto_reflete(float a,float b):ponto(a,b)

{ }

void ponto_reflete::reflete(void)

{

altera_x(-retorna_x());

altera_y(-retorna_y());

}

void ponto_reflete::mostra(void)

{

cout << "X:" << retorna_x() << " Y:";

cout << retorna_y() << endl;

}

//somente altera o formato de impressao

ponto_move::ponto_move(float a,float b):ponto(a,b)

{ }

void ponto_move::move(float dx,float dy)

{

altera_x(retorna_x()+dx);

altera_y(retorna_y()+dy);

}
