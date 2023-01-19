#pragma once
#include <iostream>
#include <string>
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;

class Locatie
{
private:
	string nume_locatie;
	int numar_max_locuri;
	int numar_zone;
	char** nume_zone;
	int* randuri_per_zona;
	int* locuri_per_zona;
	const string oras;
public:
	
	Locatie():oras("necunoscut")
	{
		nume_locatie = "necunoscut";
		numar_max_locuri = 0;
		numar_zone = 0;
		nume_zone = nullptr;
		randuri_per_zona = nullptr;
		locuri_per_zona = nullptr;
		

	}
	Locatie(int numar_max_locuri, string nume_locatie, int numar_zone, char** nume_zone, int* randuri_per_zona, int* locuri_per_zona,string oras):oras(oras)
	{
		this->nume_locatie = nume_locatie;
		this->numar_max_locuri = numar_max_locuri;
		if (numar_zone > 0) {
			if (nume_zone != nullptr)
			{
				this->nume_zone = new char* [numar_zone];

				for (int i = 0; i < numar_zone; i++)
				{
					this->nume_zone[i] = new char[strlen(nume_zone[i]) + 1];
				}

				for (int i = 0; i < numar_zone; i++)
				{
					strcpy_s(this->nume_zone[i], strlen(nume_zone[i]) + 1, nume_zone[i]);
				}

				this->numar_zone = numar_zone;
			}
			if (randuri_per_zona != nullptr && locuri_per_zona != nullptr)
			{
				this->randuri_per_zona = new int[numar_zone];
				this->locuri_per_zona = new int[numar_zone];
				for (int i = 0; i < numar_zone; i++)
				{
					this->randuri_per_zona[i] = randuri_per_zona[i];
					this->locuri_per_zona[i] = locuri_per_zona[i];
				}


			}
			else
			{
				this->locuri_per_zona = nullptr;
				this->randuri_per_zona = nullptr;
			}
		}
		else
		{
			this->numar_zone = 0;
		}

	}

	int* getRanduri_per_zona()
	{
		if (randuri_per_zona != nullptr)
		{
			int* copy = new int[numar_zone];
			for (int i = 0; i < numar_zone; i++)
			{
				copy[i] = randuri_per_zona[i];
			}
			return copy;
		}
		else return nullptr;

	}

	float* calculeaza_procentaj_locuri_per_zona()
	{
		float* procentaj = new float[numar_zone];
		for (int i = 0; i < numar_zone; i++)
		{
			procentaj[i] = (float) locuri_per_zona[i] / numar_max_locuri * 100;
		}
		return procentaj;
	}

	string zona_cu_cele_mai_multe_locuri()
	{
		int ma = locuri_per_zona[0];
		int zona = 0;
		for (int i = 0; i < numar_zone; i++)
		{
			if (locuri_per_zona[i] > ma)
			{
				ma = locuri_per_zona[i];
				zona = i;
			}
		}
		string a = nume_zone[zona];
		return a;

	}

	void setRanduri_per_zona(int* randuri_per_zona, int numar_zone)
	{
		if (randuri_per_zona != nullptr && numar_zone > 0)
		{
			delete[] this->randuri_per_zona;
			this->randuri_per_zona = new int[numar_zone];
			for (int i = 0; i < numar_zone; i++)
			{
				this->randuri_per_zona[i] = randuri_per_zona[i];
			}
			this->numar_zone = numar_zone;

		}
	}

	int getNumar_zone()
	{
		if (numar_zone > 0)
		{
			int copie = numar_zone;

			return copie;
		}

	}

	int* getLocuri_per_zona()
	{
		if (locuri_per_zona != nullptr)
		{
			int* copy = new int[numar_zone];
			for (int i = 0; i < numar_zone; i++)
			{
				copy[i] = locuri_per_zona[i];
			}
			return copy;
		}
		else return nullptr;

	}

	void setLocuri_per_zona(int* locuri_per_zona, int numar_zone)
	{
		if (locuri_per_zona != nullptr && numar_zone > 0)
		{
			delete[] this->locuri_per_zona;
			this->locuri_per_zona = new int[numar_zone];
			for (int i = 0; i < numar_zone; i++)
			{
				this->locuri_per_zona[i] = locuri_per_zona[i];
			}
			this->numar_zone = numar_zone;

		}
	}



	void setnume_locatie(string nume_locatie)
	{
		this->nume_locatie = nume_locatie;
	}
	string getnume_locatie()
	{
		string copie = this->nume_locatie;
		return copie;
	}


	void setnumar_max_locuri(int numar_max_locuri)
	{
		if (numar_max_locuri > 0)
			this->numar_max_locuri = numar_max_locuri;
	}
	int getnumar_max_locuri()
	{
		int copie = this->numar_max_locuri;
		return copie;
	}

	char** getNume_zone()
	{
		if (nume_zone != nullptr)
		{
			char** copy = new char* [numar_zone];

			for (int i = 0; i < numar_zone; i++)
			{
				copy[i] = new char[25];
			}

			for (int i = 0; i < numar_zone; i++)
			{
				strcpy_s(copy[i], strlen(nume_zone[i]) + 1, nume_zone[i]);
			}
			return copy;

		}
		else return nullptr;
	}

	void setNume_zone(const char* nume_zone, int i)
	{
		if (i == 0 && nume_zone != nullptr)
		{

			if (this->nume_zone != nullptr)
			{
				delete[] this->nume_zone;
			}
			
		}
		if (i == 0) {
			this->nume_zone = new char* [numar_zone];
		}
		
		if (nume_zone != nullptr) {

			this->nume_zone[i] = new char[strlen(nume_zone) + 1];

			strcpy_s(this->nume_zone[i], strlen(nume_zone) + 1, nume_zone);
		}

	}


	Locatie& operator=(const Locatie& l)
	{
		if (this != &l)
		{

			if (l.nume_zone != nullptr && l.numar_zone > 0)
			{
				
				if (this->nume_zone != nullptr)
				{
					delete[] this->nume_zone;
				}

				this->nume_zone = new char* [l.numar_zone];

				for (int i = 0; i <l.numar_zone; i++)
				{
					this->nume_zone[i] = new char[41];
				}

				for (int i = 0; i < l.numar_zone; i++)
				{

					strcpy_s(this->nume_zone[i], strlen(l.nume_zone[i])+1, l.nume_zone[i]);

				}
			}
			else 
			{
				this->nume_zone = nullptr;
			}

			if (this->randuri_per_zona != nullptr)
			{
				delete[] this->randuri_per_zona;
			}


			if (l.randuri_per_zona != nullptr && l.numar_zone > 0)
			{
				this->randuri_per_zona = new int[l.numar_zone];

				for (int i = 0; i < l.numar_zone; i++)
				{
					
					this->randuri_per_zona[i] = l.randuri_per_zona[i];
				}
			}
			else
			{
				this->randuri_per_zona = nullptr;
				this->numar_zone = 0;
			}

			if (this->locuri_per_zona != nullptr)
			{
				delete[] this->locuri_per_zona;
			}

			if (l.locuri_per_zona != nullptr && l.numar_zone > 0)
			{

				this->locuri_per_zona = new int[l.numar_zone];
				for (int i = 0; i < l.numar_zone; i++)
					this->locuri_per_zona[i] = l.locuri_per_zona[i];
			}
			else
			{
				this->locuri_per_zona = nullptr;
				this->numar_zone = 0;
			}

			this->numar_zone = l.numar_zone;
			this->numar_max_locuri = l.numar_max_locuri;
			this->nume_locatie = l.nume_locatie;

		}

		return *this;
	}
	



	Locatie(const Locatie& a) :oras(a.oras)
	{
		this->nume_locatie = a.nume_locatie;
		this->numar_max_locuri = a.numar_max_locuri;
		if (a.numar_zone > 0)
		{
			this->numar_zone = a.numar_zone;
			if (a.nume_zone != nullptr)
			{
				this->nume_zone = new char* [this->numar_zone];
				for (int i = 0; i < this->numar_zone; i++)
				{
					this->nume_zone[i] = new char[strlen(a.nume_zone[i]) + 1];
					strcpy_s(this->nume_zone[i], strlen(a.nume_zone[i]) + 1, a.nume_zone[i]);
				}
			}
			if (a.randuri_per_zona != nullptr)
			{
				this->randuri_per_zona = new int[this->numar_zone];
				for (int i = 0; i < this->numar_zone; i++)
				{
					this->randuri_per_zona[i] = a.randuri_per_zona[i];
				}
			}
			if (a.locuri_per_zona != nullptr)
			{
				this->locuri_per_zona = new int[this->numar_zone];
				for (int i = 0; i < this->numar_zone; i++)
				{
					this->locuri_per_zona[i] = a.locuri_per_zona[i];
				}
			}
		}
		else
		{
			this->numar_zone = 0;
			this->nume_zone = nullptr;
			this->randuri_per_zona = nullptr;
			this->locuri_per_zona = nullptr;
		}
	}

	~Locatie()
	{
	
		for (int i = 0; i < numar_zone; i++)
		{
			delete[] nume_zone[i];
		}
		delete[] nume_zone;

		delete[] randuri_per_zona;
		delete[] locuri_per_zona;
	}

	friend ostream& operator<<(ostream& out, Locatie a);
	friend istream& operator>>(istream& in, Locatie& a);



};

