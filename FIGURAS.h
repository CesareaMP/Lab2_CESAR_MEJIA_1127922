#include <math.h>

struct figuras {
	double longitud;
	double apotema;

		double perimetrotriangulo() {
			return 3 * longitud;
		}
		double areatriangulo() {
			return ((pow(3, 1 / 2)) / 4) * pow(longitud, 2);
		}
		double perimetrocuadrilatero() {
			return (4 * longitud);
		}
		double areacuadrilatero() {
			return pow(longitud, 2);
		}
		double perimetropentagono() {
			return 5 * longitud;
		}
		double areapentagono() {
			return ((5*longitud)*apotema)/2;
		}
		double perimetrohexagono() {
			return 6 * longitud;
		}
		double areahexagono() {
			return ((6	 * longitud) * apotema) / 2;
		}
		double perimetroheptagono() {
			return 7 * longitud;
		}
		double areaheptagono() {
			return ((7 * longitud) * apotema) / 2;
		}
		double perimetrooctagono() {
			return 8 * longitud;
		}
		double areaoctagono() {
			return ((8 * longitud) * apotema) / 2;
		}
		double perimetroeneagono() {
			return 9 * longitud;
		}
		double areaeneagono() {
			return ((9 * longitud) * apotema) / 2;
		}
		double perimetrodecagono() {
			return 10 * longitud;
		}
		double areadecagono() {
			return ((10 * longitud) * apotema) / 2;
		}

};
