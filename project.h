#ifndef PROJECT_H
#define PROJECT_H

#define MAX_PATIENTS 1000
#define MAX_WARDS 4
#define MAX_SPECIALTY 4

void patientIntake(char name[][20],
                  unsigned short int age[],
                  unsigned long int checkInTime[],
                  unsigned int* patientCount,
                  char contactNumber[][11],
                  char address[][50],
                  char IDNumber[][13],
                  char emergencyContactNumber[][11],
                  int triageLevel[],
                  int addSpecialtyID[],
                  int addWardID[],
                  int daysAdmitted[],
                  int currentQueueCount[],
                  float waitTime[],
                  const int consultationTimeInMinutes[],
                  int patientID[],
                  int addBedNumber[],
                  int bedOccupancy[][20],
                  int admissionStatus[]);

void menu(char name[][20],
          unsigned short int age[],
          unsigned long int checkInTime[],
          unsigned int* patientCount,
          char contactNumber[][11],
          char address[][50],
          char IDNumber[][13],
          char emergencyContactNumber[][11],
          const int specialtyID[],
          const char specialty[][25],
          const float baseConsultationFee[],
          const int consultationTimeInMinutes[],
          const int patientCap[],
          const int wardID[],
          const char wardName[][30],
          const float dailyBedRate[],
          const int bedCapacity[],
          int bedOccupancy[][20],
          int triageLevel[],
          int addSpecialtyID[],
          int addWardID[],
          int daysAdmitted[],
          int currentQueueCount[],
          float waitTime[],
          int patientID[],
          int addBedNumber[],
          char subsidyEligibility[][25],
          char subsidyDiscountRate[][5],
          char emergencyLevel[][10],
          int admissionStatus[]);

void doctorSpecialtyData(const int specialtyID[],
                         const char specialty[][25],
                         const float baseConsultationFee[],
                         const int consultationTimeInMinutes[],
                         const int patientCap[]);

void hospitalWardData(const int wardID[],
                      const char wardName[][30],
                      const float dailyBedRate[],
                      const int bedCapacity[]);

void bedArray(int bedOccupancy[][20],
              const int wardID[]);

void admitToAWard(int bedOccupancy[][20],
                  int addBedNumber[],
                  int addWardID[],
                  int i);

void printBill(int patientID[],
               char name[][20],
               const char specialty[][25],
               int patientCount,
               unsigned short int age[],
               const char wardName[][30],
               int triageLevel[],
               int daysAdmitted[],
               float waitTime[],
               int addSpecialtyID[],
               int addWardID[],
               const float baseConsultationFee[],
               int addBedNumber[],
               const float dailyBedRate[],
               unsigned long int checkInTime[],
               char subsidyEligibility[][25],
               char subsidyDiscountRate[][5],
               char emergencyLevel[][10],
               int admissionStatus[]);

int surcharges(int triageLevel[],
               int i);

float surchargeCalc(const float baseConsultationFee[],
                    int i,
                    int triageLevel[],
                    int addSpecialtyID[]);

float wardStayBill(int daysAdmitted[],
                   const float dailyBedRate[],
                   int i,
                   int addWardID[]);

float grossTotalBillCalc(int daysAdmitted[],
                         const float dailyBedRate[],
                         int i,
                         int addWardID[],
                         const float baseConsultationFee[],
                         int triageLevel[],
                         int addSpecialtyID[]);

float subsidyDiscount(unsigned short int age[],
                      int daysAdmitted[],
                      const float dailyBedRate[],
                      int i,
                      int addWardID[],
                      const float baseConsultationFee[],
                      int triageLevel[],
                      int addSpecialtyID[],
                      char subsidyEligibility[][25],
                      char subsidyDiscountRate[][5]);

float finalPayment(unsigned short int age[],
                   int daysAdmitted[],
                   const float dailyBedRate[],
                   int i,
                   int addWardID[],
                   const float baseConsultationFee[],
                   int triageLevel[],
                   int addSpecialtyID[],
                   char subsidyEligibility[][25],
                   char subsidyDiscountRate[][5]);

void triageLevelDisplay(int triageLevel[],
                        char emergencyLevel[][10],
                        int i);

#endif // PROJECT_H
