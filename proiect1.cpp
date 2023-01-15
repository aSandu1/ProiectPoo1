#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <time.h>
#include "Locatie.h"
#pragma warning(disable : 4996)

using namespace std;


//class Locatie {
//private:
//	string nume_locatie;
//	int numar_max_locuri;
//	int numar_zone;
//	char** nume_zone;
//	int* randuri_per_zona;
//	int* locuri_per_zona;
//
//public:
//	Locatie()
//	{
//		nume_locatie = "necunoscut";
//		numar_max_locuri = 0;
//		numar_zone = 0;
//		nume_zone = nullptr;
//		randuri_per_zona = nullptr;
//		locuri_per_zona = nullptr;
//
//	}
//	Locatie(int numar_max_locuri, string nume_locatie,  int numar_zone, char** nume_zone, int* randuri_per_zona, int* locuri_per_zona)
//	{
//		this->nume_locatie = nume_locatie;
//		this->numar_max_locuri = numar_max_locuri;
//		if (numar_zone > 0) {
//			if (nume_zone != nullptr)
//			{
//				this->nume_zone = new char* [numar_zone];
//
//				for (int i = 0; i < numar_zone; i++)
//				{
//					this->nume_zone[i] = new char[strlen(nume_zone[i])+1];
//				}
//
//				for (int i = 0; i < numar_zone; i++)
//				{
//					strcpy_s(this->nume_zone[i], strlen(nume_zone[i]) + 1, nume_zone[i]);
//				}
//
//				this->numar_zone = numar_zone;
//			}
//			if (randuri_per_zona != nullptr && locuri_per_zona != nullptr)
//			{
//				this->randuri_per_zona = new int[numar_zone];
//			this->locuri_per_zona = new int[numar_zone];
//				for (int i = 0; i < numar_zone; i++)
//				{
//					this->randuri_per_zona[i] = randuri_per_zona[i];
//					this->locuri_per_zona[i] = locuri_per_zona[i];
//				}
//
//
//			}
//			else
//			{
//				this->locuri_per_zona = nullptr;
//				this->randuri_per_zona = nullptr;
//			}
//		}
//		else
//		{
//			this->numar_zone = 0;
//		}
//
//	}
//
//	//int* getPret() 
//	//{
//	//	if (pret != nullptr)
//	//	{
//	//		int* copy = new int[numar_zone];
//	//		for (int i = 0; i < numar_zone; i++)
//	//		{
//	//			copy[i] = pret[i];
//	//		}
//	//		return copy;
//	//	}
//	//	else return nullptr;
//
//	//}
//	//
//	//void setPret(int* pret, int numar_zone)
//	//{
//	//	if (pret != nullptr && numar_zone>0)
//	//	{
//	//		delete[] this->pret;
//	//		this->pret = new int[numar_zone];
//	//		for (int i = 0; i < numar_zone; i++)
//	//		{
//	//			this->pret[i] = pret[i];
//	//		}
//	//		this->numar_zone = numar_zone;
//
//	//	}
//	//}
//
//
//	int* getRanduri_per_zona()
//	{
//		if (randuri_per_zona != nullptr)
//		{
//			int* copy = new int[numar_zone];
//			for (int i = 0; i < numar_zone; i++)
//			{
//				copy[i] = randuri_per_zona[i];
//			}
//			return copy;
//		}
//		else return nullptr;
//
//	}
//
//	void setRanduri_per_zona(int* randuri_per_zona, int numar_zone)
//	{
//		if ( randuri_per_zona != nullptr && numar_zone > 0)
//		{
//			delete[] this->randuri_per_zona;
//			this->randuri_per_zona = new int[numar_zone];
//			for (int i = 0; i < numar_zone; i++)
//			{
//				this->randuri_per_zona[i] = randuri_per_zona[i];
//			}
//			this->numar_zone = numar_zone;
//
//		}
//	}
//
//	int getNumar_zone()
//	{
//		if (numar_zone>0)
//		{
//			int copie = numar_zone;
//		
//			return copie;
//		}
//		
//	}
//
//	int* getLocuri_per_zona()
//	{
//		if (locuri_per_zona != nullptr)
//		{
//			int* copy = new int[numar_zone];
//			for (int i = 0; i < numar_zone; i++)
//			{
//				copy[i] = locuri_per_zona[i];
//			}
//			return copy;
//		}
//		else return nullptr;
//
//	}
//
//	void setLocuri_per_zona(int* locuri_per_zona, int numar_zone)
//	{
//		if (locuri_per_zona != nullptr && numar_zone > 0)
//		{
//			delete[] this->locuri_per_zona;
//			this->locuri_per_zona = new int[numar_zone];
//			for (int i = 0; i < numar_zone; i++)
//			{
//				this->locuri_per_zona[i] = locuri_per_zona[i];
//			}
//			this->numar_zone = numar_zone;
//
//		}
//	}
//
//
//
//	void setnume_locatie(string nume_locatie)
//	{
//		this->nume_locatie = nume_locatie;
//	}
//	string getnume_locatie()
//	{
//		string copie = this->nume_locatie;
//		return copie;
//	}
//
//
//	void setnumar_max_locuri(int numar_max_locuri)
//	{
//		if(numar_max_locuri>0)
//		this->numar_max_locuri = numar_max_locuri;
//	}
//	int getnumar_max_locuri()
//	{
//		int copie = this->numar_max_locuri;
//		return copie;
//	}
//
//	char** getNume_zone()
//	{
//		if (nume_zone != nullptr)
//		{
//			char** copy = new char* [numar_zone];
//
//			for (int i = 0; i < numar_zone; i++)
//			{
//				copy[i] = new char[25];
//			}
//
//			for (int i = 0; i < numar_zone; i++)
//			{
//				strcpy_s(copy[i], strlen(nume_zone[i]) + 1, nume_zone[i]);
//			}
//			return copy;
//
//		}
//		else return nullptr;
//	}
//
//	void setNume_zone(const char* nume_zone,int i)
//	{
//		if (i == 0 && nume_zone != nullptr) 
//		{
//
//			if (this->nume_zone != nullptr)
//			{
//				delete[] this->nume_zone;
//			}
//		}
//
//			if (i == 0) {
//				this->nume_zone = new char* [numar_zone];
//			}
//
//		
//				this->nume_zone[i] = new char[strlen(nume_zone)+1];
//
//		
//				strcpy_s(this->nume_zone[i], strlen(nume_zone) + 1, nume_zone);
//		
//		
//	}
//
//
//	Locatie& operator=(const Locatie& l)
//	{
//		if (this != &l)
//		{
//			 
//				if (l.nume_zone != nullptr && l.numar_zone>0)
//				{
//					if (this->nume_zone != nullptr)
//					{
//						delete[] this->nume_zone;
//					}
//					this->nume_zone = new char* [numar_zone];
//
//					for (int i = 0; i < numar_zone; i++)
//					{
//						this->nume_zone[i] = new char[25];
//					}
//
//					for (int i = 0; i < numar_zone; i++)
//					{
//						strcpy_s(this->nume_zone[i], strlen(l.nume_zone[i]) + 1, l.nume_zone[i]);
//					}
//
//				}
//				else {
//					this->nume_zone = nullptr;
//				}
//
//				
//
//				if (this->randuri_per_zona != nullptr)
//				{
//					delete[] this->randuri_per_zona;
//				}
//
//				
//
//				if (l.randuri_per_zona != nullptr && l.numar_zone>0)
//				{
//					this->randuri_per_zona = new int[l.numar_zone];
//
//					for (int i = 0; i < l.numar_zone; i++)
//					{
//						this->randuri_per_zona[i] = l.randuri_per_zona[i];
//					}
//				}
//				else {
//					this->randuri_per_zona = nullptr;
//					this->numar_zone = 0;
//				}
//
//				if (this->locuri_per_zona != nullptr)
//				{
//					delete[] this->locuri_per_zona;
//				}
//
//				if (l.locuri_per_zona != nullptr && l.numar_zone>0)
//				{
//					
//					this->locuri_per_zona = new int[l.numar_zone];
//					for (int i = 0; i < l.numar_zone; i++)
//						this->locuri_per_zona[i] = l.locuri_per_zona[i];
//				}
//				else 
//				{
//					this->locuri_per_zona = nullptr;
//					this->numar_zone = 0;
//				}
//
//				this->numar_zone = l.numar_zone;
//				this->numar_max_locuri = l.numar_max_locuri;
//				this->nume_locatie = l.nume_locatie;
//				
//
//			
//			
//			
//		}
//
//		return *this;
//	}
//	//string nume_locatie;
//	//int numar_max_locuri;
//	//int numar_zone;
//	//char** nume_zone;
//	//int* randuri_per_zona;
//	//int* locuri_per_zona;
//
//	friend ostream& operator<<(ostream& out, Locatie a);
//	friend istream& operator>>(istream& in, Locatie& a);
//	
//
//};

ostream& operator<<(ostream& out, Locatie a)
{
	out << "Nume locatie: " << a.nume_locatie << endl;
	out << "Numar maxim de locuri: " << a.numar_max_locuri << endl;
	out << "Numarul zonelor: " << a.numar_zone << endl;
	out << "Numele zonelor: ";
		for (int i = 0; i < a.numar_zone; i++)
		{
			out << a.nume_zone[i] << " ";
		}
	out << endl;
	for (int i = 0; i < a.numar_zone; i++)
	{
		/*out << "Numarul de randuri din zona " << a.nume_zone[i] << "este= " << a.randuri_per_zona[i] << endl;*/
		out << "Numarul de locuri din zona " << a.nume_zone[i] << "este= " << a.locuri_per_zona[i] << endl;

	}
	return out;
}


istream& operator>>(istream& in, Locatie& a)
{
	cout << endl << "Introduceti locatia: ";
	string buffer;
	getline(in, buffer);
	a.nume_locatie = buffer;
	
	
	cout << "Numar maxim de locuri:";
		in >> a.numar_max_locuri;
		
		cout << "Numar zone:";
		in >> a.numar_zone;
	
		while (a.numar_zone < 1)
		{
			cout << "Locatia trebuie sa aiba minim o zona, intorduceti alta valoare :";
				in >> a.numar_zone;
		}


		for (int i = 0; i < a.numar_zone; i++)
		{
			cout << "Introduceti numele zonei " << i+1 << ": ";
			in >> buffer;
			a.setNume_zone(buffer.c_str(),i);
			
		}

		if (a.randuri_per_zona != nullptr)
		{
			delete[] a.randuri_per_zona;
			a.randuri_per_zona = nullptr;
		}
		a.randuri_per_zona = new int[a.numar_zone];

		if (a.locuri_per_zona != nullptr)
		{
			delete[] a.locuri_per_zona;
			a.locuri_per_zona = nullptr;
		}
		a.locuri_per_zona = new int[a.numar_zone];
		
		int suma_locuri = 0;
		int ok = 0;

		while (ok == 0)
		{
			suma_locuri = 0;

			for (int i = 0; i < a.numar_zone; i++)
			{
				/*cout << "Introduceti numarul de raduri disponibile in zona " << a.nume_zone[i] << ": ";
				in >> a.randuri_per_zona[i];*/

				cout << "Introduceti numarul de locuri disponibile in zona " << a.nume_zone[i] << ": ";
				in >> a.locuri_per_zona[i];
				suma_locuri = suma_locuri + a.locuri_per_zona[i];

			}
			if (suma_locuri > a.numar_max_locuri)
			{
				cout << "Capacitate depasita, introduceti datele din nou astfel incat suma sa fie mai mica decat capacitatea locatiei"<<endl;
			}
			else ok = 1;
		}

	return in;
}


class Eveniment {
	
	string denumire;
	string an;
	string luna;
	string zi;
	string ora;
	int durata;
	int* preturi;
	int nr_preturi;
	Locatie l;
	int* bilete_ramase_per_zona;

public:
	
	

	Eveniment() {
		denumire = "necunoscuta";
		an = "necunoscut";
		luna = "necunoscuta";
			zi = "necunoscuta";
		ora = "necunoscuta";
		durata = 0;
	}

	Eveniment(string denumire, string an,string luna, string zi, string ora, int durata,int* preturi, Locatie b)
	{
		//validari facute in supraincarcarea >>
		this->denumire = denumire;
		this->an = an;
		this->luna = luna;
		this->zi = zi;
		this->ora = ora;
		this->durata = durata;
		this->nr_preturi = b.getNumar_zone();
		if (this->nr_preturi > 0)
			for (int i = 0; i < this->nr_preturi; i++)
				this->preturi[i] = preturi[i];
		

	}

	string getAn()
	{
		string copy = an;
		return an;
	}
	string getZi()
	{
		string copy = zi;
		return zi;
	}
	string getLuna()
	{
		string copy = luna;
		return copy;
	}
	string getOra()
	{
		string copy = ora;
		return ora;
	}
	int getDurata()
	{
		int co = durata;
		return co;
	}

	

	string getDenumire() {
		string copy = denumire;
		return denumire;
	}

	void initializeaza_bilete_ramase_per_zona(Locatie l)
	{
		int numar_zone = l.getNumar_zone();
		this->bilete_ramase_per_zona = new int[numar_zone];
		this->bilete_ramase_per_zona=l.getLocuri_per_zona();
	}
	
	void actualizeaza_bilete_ramase_per_zona(Locatie l, int numar_bilte_dorite, string nume_zona_dorita)
	{
		char** nume_zone;
		int numar_zone=l.getNumar_zone();
		nume_zone = new char* [numar_zone];
		for (int i = 0; i < numar_zone; i++)
		{
			nume_zone[i] = new char[25];
		}
		nume_zone = l.getNume_zone();
		int zona=0;
		for (int i = 0; i < numar_zone; i++)
		{
			if (strcmp(nume_zona_dorita.c_str(), nume_zone[i]) == 0)
				zona = i;
		}
		this->bilete_ramase_per_zona[zona] = this->bilete_ramase_per_zona[zona] - numar_bilte_dorite;
	}
	
	int* getBiete_ramase_per_zona()
	{
		if (this->bilete_ramase_per_zona != nullptr)
		{
			int nr = l.getNumar_zone();
			int* copy = new int[nr];
			for (int i = 0; i < nr; i++)
			{
				copy[i] = this->bilete_ramase_per_zona[i];
			}
			return copy;
		}
		else return nullptr;
	}

	void citeste_preturile(Locatie l)
	{
		int numar_zone = l.getNumar_zone();
		char** nume_zone = new char* [numar_zone];

		for (int i = 0; i < numar_zone; i++)
		{
			nume_zone[i] = new char[25];
		}
		nume_zone = l.getNume_zone();

	/*	for (int i = 0; i < numar_zone; i++)
			cout << nume_zone[i]<<" ";*/
		int* a = new int[numar_zone];

		for (int i = 0; i < numar_zone; i++) {
			cout << "Introduceti pretul unui bilet in zona " << nume_zone[i] << "(lei) :";
			cin >> a[i];
		
		}
		

			this->preturi = new int[numar_zone];

			for (int i = 0; i < numar_zone; i++)
			{
				this->preturi[i] = a[i];
			}

		this->nr_preturi = l.getNumar_zone();
	}

	int* getPreturi() {
		if (preturi != nullptr)
		{
			int* copy = new int[nr_preturi];
			for (int i = 0; i < nr_preturi; i++)
			{
				copy[i] = preturi[i];
			}
			return copy;
		}
		else return nullptr;
	}
	int getNr_preturi()
	{
		return nr_preturi;

	}

	Eveniment& operator=(const Eveniment& e)
	{
		if (this != &e)
		{
			if (this->preturi != nullptr)
			{
				delete[] this->preturi;
			}
			if (e.preturi != nullptr && e.nr_preturi > 0)
			{
				this->preturi = new int[e.nr_preturi];

				for (int i = 0; i < e.nr_preturi; i++)
				{
					this->preturi[i] = e.preturi[i];
				}
				this->nr_preturi = e.nr_preturi;
			}
			else 
			{
				this->nr_preturi = 0;
				this->preturi = nullptr;
			}
			this->denumire = e.denumire;
			this->an = e.an;
			this->luna = e.luna;
			this->zi = e.zi;
			this->durata = e.durata;
			this->ora = e.ora;
			this->l = e.l;
		}
		return *this;

	}
	void leagatura_eveniment_locatie(Locatie l)
	{
		
		this->l = l;
	}




	Eveniment(const Eveniment& a)
	{
		this->denumire = a.denumire;
		this->an = a.an;
		this->luna = a.luna;
		this->zi = a.zi;
		this->ora = a.ora;
		this->l = a.l;
		this->durata = a.durata;
		if (a.preturi != nullptr && a.nr_preturi > 0)
		{
			this->preturi = new int[a.nr_preturi];
			for (int i = 0; i < a.nr_preturi; i++)
			{
				this->preturi[i] = a.preturi[i];
			}
			this->nr_preturi = a.nr_preturi;
		}
		else {
			this->preturi = nullptr;
			this->nr_preturi = 0;
		}
		if (a.bilete_ramase_per_zona != nullptr && a.nr_preturi!=0)
		{
			this->bilete_ramase_per_zona = new int[a.nr_preturi];
			for (int i = 0; i < a.nr_preturi; i++)
			{
				this->bilete_ramase_per_zona[i] = a.bilete_ramase_per_zona[i];
			}
		}
		else {
			this->bilete_ramase_per_zona = nullptr;
		}
	}

	~Eveniment()
	{
		if (this->preturi != nullptr)
		{
			delete[] this->preturi;
		}
		if (this->bilete_ramase_per_zona != nullptr)
		{
			delete[] this->bilete_ramase_per_zona;
		}
	}



	friend ostream& operator<<(ostream& out, Eveniment e);
	friend istream& operator>>(istream& in, Eveniment& e);

};
ostream& operator<<(ostream& out, Eveniment e)
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	

	out << "Denumirea evenimentului :" << e.denumire << endl;

	if (stoi(e.an) > ltm->tm_year) 
	{
		if (stoi(e.luna) > ltm->tm_mon) 
		{
			if (stoi(e.zi) > ltm->tm_mday)
			{
				out << "Data desfasurarii evenimentului este: " << e.zi << "/" << e.luna << "/" << e.an << endl;

				out << "Ora evenimentului:" << e.ora << endl;
			}

			else if (stoi(e.zi) == ltm->tm_mday)
			{
				out << "Data trecuta, nu se poate crea eveniment in ziua curenta :" << endl;
			}

			else if (stoi(e.zi) < ltm->tm_mday)
			{
				out << "Data trecuta" << endl; 
			}
		}
		else if (stoi(e.luna) < ltm->tm_mon)
		{
			out << "Data trecuta" << endl;
		}
	}
	else if (stoi(e.an) < ltm->tm_year)
		out << "Data trecuta" << endl;

	out << "Data desfasurarii evenimentului este: " << e.zi << "/" << e.luna << "/" << e.an << endl;
	out << "Ora evenimentului:" << e.ora << endl;

	
	for (int i = 0; i < e.nr_preturi; i++)
	{
		out << "Pretul biletului in zona " << i << "este :" << e.preturi[i];
	}

	
	return out;
}
istream& operator>>(istream& in, Eveniment& e)
{

	time_t now = time(0);
	tm* ltm = localtime(&now);

	string buffer;
	getline(in, buffer);

	cout << "Introduceti denumirea evenimentului: ";

	getline(in, buffer);
	e.denumire = buffer;



	cout << "Introduceti anul in care se va desfasura evenimentul: ";
	in >> e.an;
	while (stoi(e.an) < 1900 + ltm->tm_year) {
		cout << "An depasit, indroduceti din nou anul: ";
			in >> e.an;
	}

	cout << "Introduceti luna in care se va desfasura evenimentul: ";
	in >> e.luna;

	if(stoi(e.an) == (1900 + ltm->tm_year))
	while ( stoi(e.luna) < ltm->tm_mon + 1) 
	{
		cout << "Luna depasita, indroduceti din nou luna: ";
			in >> e.luna;
	}

	cout << "Introduceti ziua in care se va desfasura evenimentul: ";
	in >> e.zi;
	if((stoi(e.an) == 1900 + ltm->tm_year)&&(stoi(e.luna) == ltm->tm_mon + 1))
	while (stoi(e.zi) <= ltm->tm_mday)
	{
		if (stoi(e.zi) == ltm->tm_mday)
			cout << "Nu se poate crea eveniment in ziua curenta, intoduceti din nou ziua: ";
		else
		cout << "Zi depasita, indroduceti din nou ziua: ";
			in >> e.zi;
	}

	cout << "Introduceti ora la care se va desfasura evenimentul (de tip ab:cd): ";
	in >> e.ora;
	while (e.ora[2] != ':') {
		cout << "Formatul orei introdus gresit, introdu din nou ora: ";
		in >> e.ora;
	}

	cout << "Introduceti durata evenimentului(in minute) : ";
	in >> e.durata;

	return in;
}

class Bilet
{
private:

	int numar_bilete_dorite;
	string nume_zona_dorita;
	string nume_cumparator;
	long* id;
	int suma_de_platit;
	Eveniment e;
	Locatie l;
	static int nrBilete;


public:

	Bilet()
	{
		numar_bilete_dorite = 0;
		nume_zona_dorita = "necunoscut";
		nume_cumparator = "necunoscut";
		id = nullptr;
		nrBilete++;

	}


	Bilet(int numar_bilete_dorite, string nume_zona_dorita, string nume_cumparator, Eveniment e, Locatie l)
	{
		if (numar_bilete_dorite > 0)
		{

			this->e = e;
			this->l = l;

			int numar_zone = l.getNumar_zone();

			char** nume_zone = new char* [numar_zone];

			for (int i = 0; i < numar_zone; i++)
			{
				nume_zone[i] = new char[(25)];
			}
			nume_zone = l.getNume_zone();

			int ok = 0;
			int zona = 0;
			for (int i = 0; i < numar_zone; i++)
			{
				if (strcmp((nume_zona_dorita.c_str()), nume_zone[i]) == 0)
				{
					ok = 1;
					zona = i;
				}
				cout << nume_zone[i] << " ";
			}
			if (ok == 0)
			{
				this->nume_zona_dorita = "zona necunoscuta";
			}
			else
			{
				int* bilete_ramse_per_zona = new int[numar_zone];
				bilete_ramse_per_zona = e.getBiete_ramase_per_zona();

				if (bilete_ramse_per_zona[zona] > numar_bilete_dorite || bilete_ramse_per_zona[zona] == numar_bilete_dorite)
				{

					this->numar_bilete_dorite = numar_bilete_dorite;
					e.actualizeaza_bilete_ramase_per_zona(l, numar_bilete_dorite, nume_zona_dorita);
					
					nrBilete++;
				}
				else 
				{
					this->numar_bilete_dorite = 0;
					cout << "Nu exista " << numar_bilete_dorite << " in zona " << "nume_zone[zona]";
					this->id = nullptr;
					this->suma_de_platit = 0;
				}
				
					
			}

			
		}
	}

	int getNumar_bilete_dorite()
	{
		int nr = this->numar_bilete_dorite;
		return nr;
		
	}

	int getNr_bilete_dorite()
	{
		int c = this->numar_bilete_dorite;
		return c;
	}

	string getZona_dorita()
	{
		string zona_dorita = zona_dorita;
		return zona_dorita;
	}

	void genereaza_id()
	{

		srand(time(0));
		delete[] this->id;
		
		this->id = new long[this->numar_bilete_dorite+1];
		for (int i = 0; i < this->numar_bilete_dorite; i++)
		{
			this->id[i] = rand();
			
		}

	}

	void legatura_intre_bilet_eveniment_locatie(Locatie l, Eveniment e)
	{
		this->l = l;
		this->e = e;
	}

	void calculeaza_suma_de_platit()
	{

	
		int nr_preturi = this->e.getNr_preturi();

		int* preturi = new int[nr_preturi];
		preturi = this->e.getPreturi();


		int numar_zone = this->l.getNumar_zone();

		
		char** copy = new char* [numar_zone];

	
		for (int i = 0; i < numar_zone; i++)
		{
			copy[i] = new char[(25)];
		}
		copy = this->l.getNume_zone();

		int zona=0;

		for (int i = 0; i < numar_zone; i++)
		{

			if (strcmp((this->nume_zona_dorita.c_str()), copy[i]) == 0)
			{
				zona = i;
			}
		}
		int nr_bilete_dorite = getNr_bilete_dorite();
		this->suma_de_platit = this->numar_bilete_dorite * preturi[zona];

	}


	//~Bilet()
	//{
	//	if (this->id != nullptr)
	//	{
	//		delete[] this->id;
	//	}
	//}
	

	//Bilet(const Bilet& a) 
	// {
	//	this->nume_zona_dorita = a.nume_zona_dorita;
	//	this->nume_cumparator = a.nume_cumparator;
	//	this->suma_de_platit = a.suma_de_platit;
	//	this->e = a.e;
	//	this->l = a.l;
	//	if (a.id != nullptr && a.numar_bilete_dorite > 0)
	//	{
	//		this->id = new long[a.numar_bilete_dorite];
	//		for (int i = 0; i < a.numar_bilete_dorite; i++)
	//		{
	//			this->id[i] = a.id[i];
	//		}
	//		this->numar_bilete_dorite = a.numar_bilete_dorite;
	//	}
	//	
	//	else 
	//	{

	//		this->id = nullptr;
	//		this->numar_bilete_dorite = 0;
	//	}
	//}



	friend ostream& operator<<(ostream& out, Bilet b);
	friend istream& operator>>(istream& in, Bilet& b);

};

ostream& operator<<(ostream& out, Bilet b)
{
	for (int i = 0; i < b.numar_bilete_dorite; i++)
	{
		cout << "------- Bilet la evenimentul :" <<"'"<< b.e.getDenumire() <<"'" <<endl ;
		cout << "Nume cumparator: " << b.nume_cumparator << endl;

		cout << "Locatia :" << b.l.getnume_locatie()<<endl;
		cout << "Data :" << b.e.getZi() << "/" << b.e.getLuna() << "/" << b.e.getAn() << endl;
		cout << "Durata:" << b.e.getDurata() << " minute" << endl;
		cout << "Zona:" << b.nume_zona_dorita<<endl;
		cout << "ID:" << b.id[i];

	/*	if (i != b.numar_bilete_dorite - 1)
		{
			
		}*/
		cout << endl << endl << endl;

	}
	

	return out;
}
istream& operator>>(istream& in, Bilet& b)
{
	
	string buffer;
	//getline(in, buffer); //trebuie citit enter

	cout << "Introduceti numarul de bilete dorite: ";
	in >> b.numar_bilete_dorite;

	while (b.numar_bilete_dorite < 1)
	{
		cout << "Numarul de bilete dorite trebuie sa fie minim 1, introduceti din nou :";
		in >> b.numar_bilete_dorite;
	}
	
	int numar_zone = b.l.getNumar_zone();

	int* biete_ramase_per_zona = new int[numar_zone];
	b.e.initializeaza_bilete_ramase_per_zona(b.l);
	biete_ramase_per_zona = b.e.getBiete_ramase_per_zona();
	

	char** nume_zone = new char* [numar_zone];

	for (int i = 0; i < numar_zone; i++)
	{
		nume_zone[i] = new char[(25)];
	}
	nume_zone = b.l.getNume_zone();

	int sunt = 0;
	for (int i = 0; i < numar_zone  ; i++)
	{
		
		if (b.numar_bilete_dorite <= biete_ramase_per_zona[i])
		{
			if (sunt == 0)
				cout << "Zonele in care mai sunt disponibile " << b.numar_bilete_dorite << " sunt: ";

				cout << nume_zone[i];
				sunt = 1;

			if (i != numar_zone - 1)
			{
				cout << ", ";
			}
		}
	}
	if (sunt == 0) {
		cout << "Nu mai exista bilete disponibile";
		exit(5);
	}

	if (sunt == 1) {
		b.e.actualizeaza_bilete_ramase_per_zona(b.l, b.numar_bilete_dorite, b.nume_zona_dorita);
		Bilet::nrBilete = Bilet::nrBilete + b.numar_bilete_dorite;
	}
	cout << endl;

	getline(in, buffer); //trebuie citit enter

	cout << "Introduceti zona dorita: ";
	
	getline(in, buffer);
	b.nume_zona_dorita = buffer;

	int zona=0;
	int da = 0;
	
	while(da==0)
	{
		for (int i = 0; i < numar_zone; i++)
		{
			if (strcmp((b.nume_zona_dorita.c_str()), nume_zone[i]) == 0)
			{
				da = 1;
				zona = i;
			}
		}
		if (da == 0)
		{
			
			cout << "Zona introdusa gresit, introduceti din nou zona:";
			getline(in, buffer);
			b.nume_zona_dorita = buffer;

			//getline(in, buffer); //trebuie citit enter
		}
	}

	//b.l.getLocuri_per_zona();

	//if (b.numar_bilete_dorite > biete_ramase_per_zona[zona])
	//{
	//	cout << "Nu mai sunt disponibile " << b.numar_bilete_dorite << " locuri in zona " << b.nume_zona_dorita[zona]<<endl;
	//	int exista = 0;
	//	for (int i = 0; i < numar_zone; i++)
	//	{
	//		if(exista==0)
	//			if (b.numar_bilete_dorite < biete_ramase_per_zona[i])
	//			{
	//				
	//				cout << " Mai sunt disponibile " << b.numar_bilete_dorite << " locuri in zonele: "<< nume_zone[i];
	//					exista = 1;
	//				
	//			}

	//	/*	if (b.numar_bilete_dorite < biete_ramase_per_zona[i])
	//		{
	//			cout << nume_zone[i] << " ";
	//		}*/
	//	}
	//	if (exista == 0)
	//	{
	//		cout << " Nu exista zone care sa mai aiba " << b.numar_bilete_dorite << " locuri disponibile" << endl;
	//		
	//	}
	//}

	//getline(in, buffer); //trebuie citit enter

	b.calculeaza_suma_de_platit();
	cout << "Pret de achitat: ";
	cout << b.suma_de_platit<<endl;

	cout << "Introduceti numele cumparatorului: ";
	getline(in, buffer);
	b.nume_cumparator = buffer;
	
	int ok = 0;
	int nume_bun = 0;
	int i = 0;
	while (nume_bun == 0) 
	{
		ok = 0;
		i = 0;
		while (i < b.nume_cumparator.length())
		{
			if (b.nume_cumparator[i] == ' ')
				i++;

				if (!((b.nume_cumparator[i] >= 'a' && b.nume_cumparator[i] <= 'z') || (b.nume_cumparator[i] >= 'A' && b.nume_cumparator[i] <= 'Z')))
				{
					ok = 1;
					i = b.nume_cumparator.length();
				}
			i++;

		}
		if (ok == 1)
		{
			cout << "Numele introdus nu este valid, are caractere diferite de litere. Introduceti numele din nou : ";
			getline(in, buffer);
			b.nume_cumparator = buffer;
		}		
		else if (ok == 0)
		{
			nume_bun = 1;
		}

	}
	
		
	
	b.genereaza_id();

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	

	return in;
}

int Bilet::nrBilete = 0;

int main()
{

	Locatie l;
	cin >> l;

	Eveniment e;
	e.citeste_preturile(l);
	cin >> e;
	e.leagatura_eveniment_locatie(l);
	

	Bilet b;
	b.legatura_intre_bilet_eveniment_locatie(l, e);

	cin>>b;
	cout << b;

}









