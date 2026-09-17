void patientIntake(char name[][20],
                  unsigned short int age[],
                  unsigned long int checkInTime[],
                  unsigned int* patientCount,
                  char contactNumber[][11],
                  char address[][50],
                  char IDNumber[][13],
                  char emergencyContactNumber[][11]);

void menu(char name[][20],
          unsigned short int age[],
          unsigned long int checkInTime[],
          unsigned int* patientCount,
          char contactNumber[][11],
          char address[][50],
          char IDNumber[][13],
          char emergencyContactNumber[][11],
          int specialtyID[],
          char specialty[][25],
          float baseConsultationFee[],
          int consultationTimeInMinutes[],
          int patientCap[],
          int wardID[],
          char wardName[][30],
          float dailyBedRate[],
          int bedCapacity[],
          int bedOccupancy[][20]);

void doctorSpecialtyData(int specialtyID[],
                         char specialty[][25],
                         float baseConsultationFee[],
                         int consultationTimeInMinutes[],
                         int patientCap[]);

void hospitalWardData(int wardID[],
                      char wardName[][30],
                      float dailyBedRate[],
                      int bedCapacity[]);

void bedArray(int bedOccupancy[][20],
              int wardID[]);
