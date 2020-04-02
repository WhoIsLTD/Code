public abstract class TuGiac {
	Dinh d1, d2, d3, d4;
	double chuVi, dienTich;
	
	void nhapGT(Dinh gTriD1, Dinh gTriD2, Dinh gTriD3, Dinh gTriD4) {
		// gan gtri d1, d2, d3, d4
	}
	abstract void tinhCV();
	abstract void tinhDT();
	void inTT() {
		d1.inTT();
		d2.inTT();
		d3.inTT();
		d4.inTT();
		// in chuVi, dienTich
	}
}
