// ConsoleApplication66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "BankLoan.h"
#include "CreditDossier.h"
#include "Person.h"
//Теория расчета аннуитетного платежа
using namespace std;

int main() {
	BankLoan loanSixMonths("Six month loan", 100000.0, 6, 20);
	BankLoan loanTwelveMonths("Loan for a year", 500000.0, 12, 20);
	BankLoan loanTwoYears("Loan for two years", 2000000.0, 24, 20);

	Person ivanov("Ivanov", "Ivan", "Ivanovich");
	Person petrov("Petrov", "Petr", "Petrovich");
	Person sidorov("Sidorov", "Sidor", "Sidorovich");

	CreditDossier cardIvanov, cardPetrov, cardSidorov;

	cardIvanov.setPerson(ivanov);
	cardIvanov.setLoan(loanSixMonths);

	cardPetrov.setPerson(petrov);
	cardPetrov.setLoan(loanSixMonths);
	cardPetrov.setLoan(loanTwoYears);

	cardSidorov.setPerson(sidorov);
	cardSidorov.setLoan(loanTwelveMonths);
	cardSidorov.setLoan(loanTwoYears);

	cardIvanov.getLoanByName(loanSixMonths);
	cardIvanov.getLoanBySumm(loanTwelveMonths);
	cardIvanov.getLoanByRepaymentAmount(loanTwoYears);

	BankLoan::getLoanRepaymentSchedule(loanSixMonths);
	BankLoan::getLoanRepaymentSchedule(loanTwoYears);

	cardIvanov.getRepaymentSchedule(loanSixMonths);
	cardPetrov.getRepaymentSchedule(loanTwelveMonths);
	cardSidorov.getRepaymentSchedule(loanTwoYears);

	return 0;
}
