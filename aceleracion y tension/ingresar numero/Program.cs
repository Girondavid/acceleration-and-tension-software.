using System;

namespace ingresar_numero
{
    class Program
    {
        class numero
        {
            private int numer { set; get; }
            public numero()
            {
                Console.WriteLine("ingrese un numero");
                string line = Console.ReadLine();
                numer = int.Parse(line);
            }
            public void imprimir()
            {
                Console.WriteLine("el numero es  "+ numer);
            }
        }
        static void Main(string[] args)
        {
            numero numero1 = new numero();
            numero1.imprimir();
        }
    }
}
