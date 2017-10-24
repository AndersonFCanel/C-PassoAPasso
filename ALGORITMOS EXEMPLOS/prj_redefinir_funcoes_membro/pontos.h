//header file

class ponto
{

    private:

    float x;

    //sao ocultos por default

    float y;

    //sao ocultos por default

    public:

    //daqui em diante tudo e acessivel.

    ponto(float a,float b);

    void inicializa(float a,float b);

    float retorna_x(void);

    float retorna_y(void);

    void altera_x(float a);

    void altera_y(float b);

    void mostra(void);

};

class ponto_reflete:public ponto
{

      private:

      //se voce quer adicionar atributos

      public:

      ponto_reflete(float a, float b);

      void reflete(void);

      void mostra(void);

      //redefinicao

};

class ponto_move:public ponto

{

      public:

      ponto_move(float a,float b);

      void move(float dx,float dy);

      //esta classe filha nao redefine mostra

};
