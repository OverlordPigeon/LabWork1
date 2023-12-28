#include "pch.h"
#include "CppUnitTest.h"
#include "../CLINIClabwork2/Headers.h"
//#include <string>//
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ClinicTests
{
	TEST_CLASS(clinic) {
		TEST_METHOD(hire) {
			Clinic clinic;
			Worker W;
			W.setSurname("surname");
			clinic.Hire(W);
			Assert::AreEqual(clinic.FindWorker(W), true);
		}
		TEST_METHOD(fire) {
			Clinic clinic;
			Worker W;
			W.setSurname("surname");
			clinic.Hire(W);
			clinic.Fire(W);
			Assert::AreEqual(clinic.FindWorker(W), false);
		}
		TEST_METHOD(setsalary) {
			Clinic clinic;
			Worker W;
			W.setSurname("surname");
			clinic.Hire(W);
			int salary = 123;
			clinic.SetSalary(W, salary);
			Assert::AreEqual(salary, W.getSalary());
		}
	};
	TEST_CLASS(patient) {

		TEST_METHOD(adddocument) {
			Patient P;
			Doctor D;
			PatientHistory PH;
			P.SetPH(PH);
			Document document("type", 20, &D, &P);
			P.SetDocument(&document);
			string t = "type";
			Assert::AreEqual(P.getDocument().getType(), t);
		}
		TEST_METHOD(addMeds) {
			Patient P;
			PatientHistory PH;
			P.SetPH(PH);
			Medication Meds("name", true, "type");
			P.SetMeds(Meds);
			Assert::AreEqual(P.FindMedication(Meds), true);
		}
		/*TEST_METHOD(addPH) { //
			Patient P;
			PatientHistory PH;
			P.SetPH(PH);
			PatientHistory* PHPtr = &PH;
			//Assert::AreEqual(P.getPH(), PHPtr);
		}*/

		TEST_METHOD(adddisease) {
			Patient P;
			PatientHistory PH;
			P.SetPH(PH);
			P.SetDisease("plague");
			string d = "plague";
			Assert::AreEqual(P.FindDisease(d), true);
		}
	};

	TEST_CLASS(patienthistory) {
		TEST_METHOD(addmeds) {
			Medication M("name", true, "type");
			PatientHistory PH;
			PH.AddMeds(M);
			Assert::AreEqual(PH.FindMedication(M), true);
		}
		TEST_METHOD(adddocs) {
			Doctor D;
			Patient P;
			Document Doc("type", 12, &D, &P);
			PatientHistory PH;
			PH.AddDocs(&Doc);
			Document* DocPtr = &Doc;
			Assert::AreEqual(PH.FindDocument(DocPtr), true);
		}
		TEST_METHOD(adddisease) {
			PatientHistory PH;
			PH.AddDisease("plague");
			string disease = "plague";
			Assert::AreEqual(PH.FindDisease(disease), true);
		}
	};

	TEST_CLASS(appointment) {
public:
	TEST_METHOD(constructor) {
		Doctor D;
		D.setName("Doc1");
		Patient P;
		P.setName("Pat1");
		double time = 20;
		Appointment App(20, D, P);
		Assert::AreEqual(App.getTime(), time);

		string expectedDName = D.getName();
		Doctor& Dptr = App.getDoctor();
		string actualDName = Dptr.getName();
		Assert::AreEqual(expectedDName, actualDName);

		string expectedPName = P.getName();
		Patient& Pptr = App.getPatient();
		string actualPName = Pptr.getName();
		Assert::AreEqual(expectedPName, actualPName);
		/*Doctor& actualD = App.getDoctor();
		Doctor* expectedD = &D;
		Assert::AreEqual(&actualD, expectedD);
		Assert::AreEqual(App.getPatient(), P);*/
	}
	TEST_METHOD(changetime) {
		Doctor D;
		Patient P;
		double time = 22;
		Appointment App(20, D, P);
		App.setTime(22);
		Assert::AreEqual(App.getTime(), time);
	}
	TEST_METHOD(changedoctor) {
		Doctor D1;
		Doctor D2;
		Patient P;
		D1.setName("Doc1");
		D2.setName("Doc2");
		Appointment App(20, D1, P);
		App.setDoctor(D2);
		string expectedDName = D2.getName();
		Doctor& Dptr = App.getDoctor();
		string actualDName = Dptr.getName();
		Assert::AreEqual(expectedDName, actualDName);
	}
	TEST_METHOD(changepatient) {
		Doctor D;
		Patient P1;
		Patient P2;
		P1.setName("Pat1");
		P2.setName("Pat2");
		Appointment App(20, D, P1);
		App.setPatient(P2);
		string expectedPName = P2.getName();
		Patient& Pptr = App.getPatient();
		string actualPName = Pptr.getName();
		Assert::AreEqual(expectedPName, actualPName);
	}
	};
	TEST_CLASS(doctor) {
public:
	TEST_METHOD(find) {
		Patient P1;
		Patient P2;
		Doctor D;
		P1.setSurname("Surname1");
		P2.setSurname("Surname2");
		D.AddPatient(&P1);
		D.AddPatient(&P2);
		Assert::AreEqual(D.FindPatient(&P2), true);
	}
	};
	TEST_CLASS(receptionist) {
public:
	TEST_METHOD(addappointment) {
		Receptionist R;
		Patient P;
		Doctor D;
		R.AddAppointment(20, &D, &P);
		R.AddAppointment(12, &D, &P);
		Assert::AreEqual(R.FindAppointment(12, &D, &P), true);
	}
	};
	TEST_CLASS(ward) {
public:
	TEST_METHOD(AddPatient) {
		Ward W;
		Patient P1;
		P1.setSurname("P1");
		Patient P2;
		P2.setSurname("P2");
		W.AddPatient(P1);
		W.AddPatient(P2);
		Assert::AreEqual(W.FindPatient(P1), true);
		Assert::AreEqual(W.FindPatient(P2), true);
	}
	TEST_METHOD(RemovePatient) {
		Ward W;
		Patient P1, P2;
		P1.setSurname("P1");
		P2.setSurname("P2");
		W.AddPatient(P1);
		W.AddPatient(P2);
		W.RemovePatient(P1);
		Assert::AreEqual(W.FindPatient(P2), true);
		Assert::AreEqual(W.FindPatient(P1), false);
	}
	};
	TEST_CLASS(document) {
public:
	TEST_METHOD(getters) {
		Patient P;
		Doctor D;
		Patient* p = &P;
		Doctor* d = &D;
		string s = "medcertificate";
		int date = 20;
		Document Doc(s, date, d, p);
		Assert::AreEqual(Doc.getType(), s);
		Assert::AreEqual(Doc.getDate(), date);
	}
	};
	TEST_CLASS(worker) {
public:
	TEST_METHOD(setters) {
		Worker W;
		string n = "Igor";
		string s = "Soroko";
		W.setName(n);
		W.setSurname(s);
		Assert::AreEqual(W.getName(), n);
		Assert::AreEqual(W.getSurname(), s);
	}
	TEST_METHOD(salary) {
		Worker W;
		W.SetSalary(2000);
		Assert::AreEqual(W.getSalary(), 2000);
	}
	};
	TEST_CLASS(person) {
public:
	TEST_METHOD(setters) {
		Person P;
		string n = "Igor";
		string s = "Soroko";
		P.setName(n);
		P.setSurname(s);
		Assert::AreEqual(P.getName(), n);
		Assert::AreEqual(P.getSurname(), s);
	}
	};

	TEST_CLASS(meds) {
public:
	TEST_METHOD(constructor) {
		string s = "abc";
		string n = "liquid";
		Medication Med(s, false, n);
		Assert::AreEqual(Med.getName(), s);
		Assert::AreEqual(Med.getReceipt(), false);
		Assert::AreEqual(Med.getType(), n);
	}
	TEST_METHOD(getName) {
		string s = "abc";
		string n = "liquid";
		Medication Med(s, false, n);
		Assert::AreEqual(Med.getName(), s);
	}
	TEST_METHOD(getReceipt) {
		string s = "abc";
		string n = "liquid";
		Medication Med(s, false, n);
		Assert::AreEqual(Med.getReceipt(), false);
	}
	TEST_METHOD(getType) {
		string s = "abc";
		string n = "liquid";
		Medication Med(s, false, n);
		Assert::AreEqual(Med.getType(), n);
	}
	};
}
