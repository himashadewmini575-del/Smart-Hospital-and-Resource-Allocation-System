#ifndef PROJECT_H
#define PROJECT_H

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
                  int daysAdmitted[]);

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
          int daysAdmitted[]);

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

void admitToAWard(int bedOccupancy[][20]);

#endif // PROJECT_H
