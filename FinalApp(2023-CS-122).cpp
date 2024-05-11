#include<iostream>
#include<windows.h>
#include <conio.h>
#include<fstream>
using namespace std;

void mainmenu();
void gotoxy(int x, int y);
string getField(string record, int field);
void generateColors();
void studentSignup();
bool cheakPassword(string str);
bool validateEmail(string str);
void optionsSignup();
void signUpMenu();
void signInMenu();
void studentSignIn();
void studentmenu();
void deleteDataMenu();
void collegesearchmenu();
void studentProfileQuestions(int studentPosition,string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[]);
void studentEducationQuestions(int studentPosition,string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[]);
void houseHoldQuestions(int studentPosition,string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[]);
void studentActivitiesQuestions(int studentPosition,string act1[],string act2[],string act3[],string act4[],string act5[]);
void studentPersonalEssayQuestions(int studentPosition,string personalStatementType[],string personalStatement[]);
void studentProfileMenu();
void studentHouseholdMenu();
void studentEducationMenu();
void studentActivityMenu();
void studentPersonalEssayMenu();
void studentFeedbackMenu();
void infoAlreadyEnteredMenu();
bool cheakDuplicateEmail(string array[],int size,string emailEntered);
void searchCollege(int qsRankingGeorgia,int qsRankingBoston,int qsRankingStanford,int qsRankingHarvard,int qsRankingPrinceton,int qsRankingYale,int qsRankingNewyork,int qsRankingColumbia,int qsRankingCornell,int qsRankingCalifornia,int qsRankingBrown,int qsRankingMichigan,int qsRankingDartmouth,int qsRankingFlorida,int qsRankingPennsylvania,
int thRankingGeorgia,int thRankingBoston,int thRankingStanford,int thRankingHarvard,int thRankingPrinceton,int thRankingYale,int thRankingNewyork,int thRankingColumbia,int thRankingCornell,int thRankingCalifornia,int thRankingBrown,int thRankingMichigan,int thRankingDartmouth,int thRankingFlorida,int thRankingPennsylvania,string universitysearch,
int georgiaStateUniArray[],int pennsylvaniaUniversityArray[],int floridaUniversityArray[],int dartmouthCollegeArray[],int michiganUniversityArray[],int brownUniversityArray[],int UniOfCaliforniaArray[],int cornellUniversityArray[],int columbiaUniversityArray[],int nyuUniversityArray[],int yaleUniversityArray[],int princetonUniversityArray[],int bostonUniversityArray[],int stanfordUniversityArray[],
int harvardUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void deleteDataFunction(int studentPosition,string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[]
,int submitFileGeorgia[],int submitFileBoston[],int submitFileStanford[],int submitFileHarvard[],int submitFilePrinceton[],int submitFileYale[],int submitFileNewyork[],int submitFileColumbia[],int submitFileCornell[],int submitFileCalifornia[],int submitFileBrown[],int submitFileMichigan[],int submitFileDartmouth[],int submitFileFlorida[],
int submitFilePennsylvania[]);



void georgiaStateUni(int qsRankingGeorgia,int thRankingGeorgia,int georgiaStateUniArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void bostonUniversity(int qsrankingBoston,int thRankingBoston,int bostonUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void stanfordUniversity(int qsRankingStanford,int thRankingStanford,int stanfordUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void harvardUniversity(int qsRankingHarvard,int thRankingHarvard,int harvardUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void princetonUniversity(int qsRankingPrinceton,int thRankingPrinceton,int princetonUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void yaleUniversity(int qsRankingYale,int thRankingYale,int yaleUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void nyuUniversity(int qsRankingNewyork,int thRankingNewyork,int nyuUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void columbiaUniversity(int qsRankingColumbia,int thRankingColumbia,int columbiaUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void cornellUniversity(int qsRankingCornell,int thRankingCornell,int cornellUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void californiaUniversity(int qsRankingCalifornia,int thRankingCalifornia,int UniOfCaliforniaArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void brownUniversity(int qsRankingBrown,int thRankingBrown,int brownUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void michiganUniversity(int qsRankingMichigan,int thRankingMichigan,int michiganUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void dartmouthUniversity(int qsRankingDartmouth,int thRankingDartmouth,int dartmouthCollegeArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void floridaUniversity(int qsRankingFlorida,int thRankingFlorida,int floridaUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);
void pennsylvaniaUniversity(int qsRankingPennsylvania,int thRankingPennsylvania,int pennsylvaniaUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[]);


bool Alphabets(string data);


bool cheakforSpercialCh(string data);
bool cheakforDigit(string data);
bool cheakforUpperCase(string data);
bool cheakforAlphabets(string data);
bool checkForDateFormat(string data);
string takeFeedBack(int borderX_start, int borderX_end, int borderY_start, int borderY_end);
void printDataWithinSpecificCoord(const string& data, int startX, int endX, int startY, int endY);

void universityquestions(int studentPosition,string addedUniversityarray[],int currentaddedUniversityarraySize,int georgiaStateUniArray[],int bostonUniversityArray[],int stanfordUniversityArray[],int harvardUniversityArray[],int pennsylvaniaUniversityArray[],int floridaUniversityArray[],int dartmouthCollegeArray[],int michiganUniversityArray[],int brownUniversityArray[],int UniOfCaliforniaArray[],int cornellUniversityArray[],int columbiaUniversityArray[],int nyuUniversityArray[],int yaleUniversityArray[],int princetonUniversityArray[],
string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],
string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],
string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[]
,string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],
string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],
string campusResidenceBrown[],string communityBrown[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[],string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[]
,string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]);
void georgiaUniversityQuestionsMenu();
void BostonUniversityQuestionsMenu();
void georgiaUniversityQuestions(int studentPosition,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[]);
void bostonUniversityQuestions(int studentPosition,string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[]);
void stanfordUniversityQuestionsMenu();
void stanfordUniversityQuestions(int studentPosition,string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[]);
void harvardUniversityQuestionsMenu();
void harvardUniversityQuestions(int studentPosition,string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[]);
void princetonUniversityQuestionsMenu();
void princetonUniversityQuestions(int studentPosition,string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[]);
void yaleUniversityQuestionsMenu();
void yaleUniversityQuestions(int studentPosition,string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[]);
void newyorkUniversityQuestionsMenu();
void newyorkUniversityQuestions(int studentPosition,string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[]);
void columbiaUniversityQuestionsMenu();
void columbiaUniversityQuestions(int studentPosition,string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[]);
void cornellUniversityQuestionsMenu();
void cornellUniversityQuestions(int studentPosition,string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[]);
void californiaUniversityQuestionsMenu();
void californiaUniversityQuestions(int studentPosition,string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[]);
void brownUniversityQuestionsMenu();
void brownUniversityQuestions(int studentPosition,string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[]);
void michiganUniversityQuestionsMenu();
void michiganUniversityQuestions(int studentPosition,string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]);
void dartmouthUniversityQuestionsMenu();
void dartmouthUniversityQuestions(int studentPosition,string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[]);
void floridaUniversityQuestionsMenu();
void floridaUniversityQuestions(int studentPosition,string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[]);
void pennsylvaniaUniversityQuestionsMenu();
void pennsylvaniaUniversityQuestions(int studentPosition,string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]);
void addedUniversityMenu();


void financialAidMainMenu();
void financialAidTypesMenu();
void scholarshipsMenu();
void scholarshipQuestions(int studentPosition,int scholarship1[],int scholarship2[]);
void financialAidMenu();
void financialAidQuestions(int studentPosition,string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[]);

void generateid(int &idcounter,int uniqueID[],int studentPosition);

/*dashboard functions*/
void mainDashboardMenu();
void mainDashboardFunction(int studentPosition,string studentEmail[],string studentName[],int georgiaStateUniArray[],int bostonUniversityArray[],int stanfordUniversityArray[],int harvardUniversityArray[],int pennsylvaniaUniversityArray[],int floridaUniversityArray[],int dartmouthCollegeArray[],int michiganUniversityArray[],int brownUniversityArray[],int UniOfCaliforniaArray[],int cornellUniversityArray[],int columbiaUniversityArray[],int nyuUniversityArray[],int yaleUniversityArray[],int princetonUniversityArray[],
int submitFileGeorgia[],int submitFileBoston[],int submitFileStanford[],int submitFileHarvard[],int submitFilePrinceton[],int submitFileYale[],int submitFileNewyork[],int submitFileColumbia[],int submitFileCornell[],int submitFileCalifornia[],int submitFileBrown[],int submitFileMichigan[],int submitFileDartmouth[],int submitFileFlorida[],int submitFilePennsylvania[],int decesionGeorgiaUni[],int decesionBostonUni[],int decesionStanfordUni[],int decesionHarvardUni[],int decesionPrincetonUni[],int decesionYaleUni[],
int decesionNewyorkUni[],int decesionColumbiaUni[],int decesionCornellUni[],int decesionCaliforniaUni[],int decesionBrownUni[],int decesionMichiganUni[],int decesionDartmouthUni[],int decesionFloridaUni[],int decesionPennsylvaniaUni[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],
string fatherOccupation[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[],int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[],string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],
string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],
string whyThisMajorStanford[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],
string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],
string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],
string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]
,string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],
string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]);

void dashboardMenu();
void DashboardFileAnswers(int studentPosition,string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[],int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[]);
void georgiaAnsMenu();
void georgiaAns(int studentPosition,int submitFileGeorgia[],string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[]);
void bostonAnsMenu();
void bostonAns(int studentPosition,int submitFileBoston[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[]);
void stanfordAnsMenu();
void stanfordAns(int studentPosition,int submitFileStanford[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[]);
void harvardAnsMenu();
void harvardAns(int studentPosition,int submitFileHarvard[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[]);
void princetonAnsMenu();
void princetonAns(int studentPosition,int submitFilePrinceton[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[]);
void yaleAnsMenu();
void yaleAns(int studentPosition,int submitFileYale[],string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[]);
void newyorkAnsMenu();
void newyorkAns(int studentPosition,int submitFileNewyork[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[]);
void columbiaAnsMenu();
void columbiaAns(int studentPosition,int submitFileColumbia[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[]);
void cornellAnsMenu();
void cornellAns(int studentPosition,int submitFileCornell[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[]);
void californiaAnsMenu();
void californiaAns(int studentPosition,int submitFileCalifornia[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[]);
void brownAnsMenu();
void brownAns(int studentPosition,int submitFileBrown[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[]);
void michiganAnsMenu();
void michiganAns(int studentPosition,int submitFileMichigan[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]);
void dartmouthAnsMenu();
void dartmouthAns(int studentPosition,int submitFileDartmouth[],string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[]);
void floridaAnsMenu();
void floridaAns(int studentPosition,int submitFileFlorida[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[]);
void pennsylvaniaAnsMenu();
void pennsylvaniaAns(int studentPosition,int submitFilePennsylvania[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]);





/*Dashboard Functions*/

/*College representative functions*/
void universityRepresentativeSignUp();
void universityRepresentativeSignIn();
bool cheakUniversityName(string universityName);
bool cheakForUniNameInSignUp(string uniRepName[],int lengthOfuniRepNameArray,string uniRepNameForSignUp);
void uniRepHeader();
void mainUniRepMenu();
void mainUniRepFunction(int studentPosition,int submitFileGeorgia[],int submitFileBoston[],int submitFileStanford[],int submitFileHarvard[],int submitFilePrinceton[],int submitFileYale[],int submitFileNewyork[],int submitFileColumbia[],int submitFileCornell[],int submitFileCalifornia[],int submitFileBrown[],int submitFileMichigan[],int submitFileDartmouth[],int submitFileFlorida[],
int submitFilePennsylvania[],int decesionGeorgiaUni[],int decesionBostonUni[],int decesionStanfordUni[],int decesionHarvardUni[],int decesionPrincetonUni[],int decesionYaleUni[],int decesionNewyorkUni[],int decesionColumbiaUni[],int decesionCornellUni[],int decesionCaliforniaUni[],int decesionBrownUni[],int decesionMichiganUni[],int decesionDartmouthUni[],int decesionFloridaUni[],int decesionPennsylvaniaUni[],
string arrayForStudentEmailCheakGeorgia[],string arrayForStudentEmailCheakBoston[],string arrayForStudentEmailCheakStanford[],string arrayForStudentEmailCheakHarvard[],string arrayForStudentEmailCheakPrinceton[],string arrayForStudentEmailCheakYale[],string arrayForStudentEmailCheakNewyork[],string arrayForStudentEmailCheakColumbia[],string arrayForStudentEmailCheakCornell[],
string arrayForStudentEmailCheakCalifornia[],string arrayForStudentEmailCheakBrown[],string arrayForStudentEmailCheakMichigan[],string arrayForStudentEmailCheakDartmouth[],string arrayForStudentEmailCheakFlorida[],string arrayForStudentEmailCheakPennsylvania[],int &arrayForStudentEmailCheakLengthGeorgia ,int &arrayForStudentEmailCheakLengthBoston,int &arrayForStudentEmailCheakLengthStanford,
int &arrayForStudentEmailCheakLengthHarvard,int &arrayForStudentEmailCheakLengthPrinceton,int &arrayForStudentEmailCheakLengthYale,int &arrayForStudentEmailCheakLengthNewyork,int &arrayForStudentEmailCheakLengthColumbia,int &arrayForStudentEmailCheakLengthCornell,int &arrayForStudentEmailCheakLengthCalifornia,int &arrayForStudentEmailCheakLengthBrown,int &arrayForStudentEmailCheakLengthMichigan,
int &arrayForStudentEmailCheakLengthDartmouth,int &arrayForStudentEmailCheakLengthFlorida,int &arrayForStudentEmailCheakLengthPennsylvania,string studentEmail[],string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string motherName[],string motherPhone[],string motherOccupation[],
string fatherName[],string fatherPhone[],string fatherOccupation[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[],int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[],string studentStatusGeorgiaUni[],string startTermGeorgia[],
string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string studentStatusBostonUni[],
string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],
string whyThisMajorStanford[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],
string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],
string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],
string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]
,string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],
string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]);

int cheakStudentEmailforUniRepGeorgia(string arrayForStudentEmailCheak[],string str,int arrayForStudentEmailCheakLength);
int cheakStudentEmailforUniRepBoston(string arrayForStudentEmailCheakBoston[],string str,int arrayForStudentEmailCheakLengthBoston);
int cheakStudentEmailforUniRepStanford(string arrayForStudentEmailCheakStanford[],string str,int arrayForStudentEmailCheakLengthStanford);
int cheakStudentEmailforUniRepHarvard(string arrayForStudentEmailCheakHarvard[],string str,int arrayForStudentEmailCheakLengthHarvard);
int cheakStudentEmailforUniRepPrinceton(string arrayForStudentEmailCheakPrinceton[],string str,int arrayForStudentEmailCheakLengthPrinceton);
int cheakStudentEmailforUniRepYale(string arrayForStudentEmailCheakYale[],string str,int arrayForStudentEmailCheakLengthYale);
int cheakStudentEmailforUniRepNewyork(string arrayForStudentEmailCheakNewyork[],string str,int arrayForStudentEmailCheakLengthNewyork);
int cheakStudentEmailforUniRepColumbia(string arrayForStudentEmailCheakColumbia[],string str,int arrayForStudentEmailCheakLengthColumbia);
int cheakStudentEmailforUniRepCornell(string arrayForStudentEmailCheakCornell[],string str,int arrayForStudentEmailCheakLengthCornell);
int cheakStudentEmailforUniRepCalifornia(string arrayForStudentEmailCheakCalifornia[],string str,int arrayForStudentEmailCheakLengthCalifornia);
int cheakStudentEmailforUniRepBrown(string arrayForStudentEmailCheakBrown[],string str,int arrayForStudentEmailCheakLengthBrown);
int cheakStudentEmailforUniRepMichigan(string arrayForStudentEmailCheakMichigan[],string str,int arrayForStudentEmailCheakLengthMichigan);
int cheakStudentEmailforUniRepDartmouth(string arrayForStudentEmailCheakDartmouth[],string str,int arrayForStudentEmailCheakLengthDartmouth);
int cheakStudentEmailforUniRepFlorida(string arrayForStudentEmailCheakFlorida[],string str,int arrayForStudentEmailCheakLengthFlorida);
int cheakStudentEmailforUniRepPennsylvania(string arrayForStudentEmailCheakPennsylvania[],string str,int arrayForStudentEmailCheakLengthPennsylvania);


void georgiaAnsForUniRep(int studentPosition,int decesionGeorgiaUni[],string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[]);
void bostonAnsForUniRep(int studentPosition,int decesionBostonUni[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[]);
void stanfordAnsForUniRep(int studentPosition,int decesionStanfordUni[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[]);
void harvardAnsForUniRep(int studentPosition,int decesionHarvardUni[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[]);
void princetonAnsForUniRep(int studentPosition,int decesionPrincetonUni[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[]);
void yaleAnsForUniRep(int studentPosition,int decesionYaleUni[],string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[]);
void newyorkAnsForUniRep(int studentPosition,int decesionNewyorkUni[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[]);
void columbiaAnsForUniRep(int studentPosition,int decesionColumbiaUni[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[]);
void cornellAnsForUniRep(int studentPosition,int decesionCornellUni[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[]);
void californiaAnsForUniRep(int studentPosition,int decesionCaliforniaUni[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[]);
void brownAnsForUniRep(int studentPosition,int decesionBrownUni[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[]);
void michiganAnsForUniRep(int studentPosition,int decesionMichiganUni[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]);
void dartmouthAnsForUniRep(int studentPosition,int decesionDartmouthUni[],string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[]);
void floridaAnsForUniRep(int studentPosition,int decesionFloridaUni[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[]);
void pennsylvaniaAnsForUniRep(int studentPosition,int decesionPennsylvaniaUni[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]);

/*Admin Functions Start*/
void adminSignUpMenu();
void adminSignInMenu();
void mainAdminMenu();
void updateRankingsMenu();
void updateUniversityRankings(int &qsRankingGeorgia,int &qsRankingBoston,int &qsRankingStanford,int &qsRankingHarvard,int &qsRankingPrinceton,int &qsRankingYale,int &qsRankingNewyork,int &qsRankingColumbia,int &qsRankingCornell,int &qsRankingCalifornia,int &qsRankingBrown,int &qsRankingMichigan,int &qsRankingDartmouth,int &qsRankingFlorida,int &qsRankingPennsylvania,
int &thRankingGeorgia,int &thRankingBoston,int &thRankingStanford,int &thRankingHarvard,int &thRankingPrinceton,int &thRankingYale,int &thRankingNewyork,int &thRankingColumbia,int &thRankingCornell,int &thRankingCalifornia,int &thRankingBrown,int &thRankingMichigan,int &thRankingDartmouth,int &thRankingFlorida,int &thRankingPennsylvania );
void veiwFeedback(string studentFeedback[],string studentEmail[]);
/*Admin Functions end*/

/*File handling functions*/
void writeDataForStudentBioData(string fileName,int lengthOfStudentEmailArray,string studentEmail[],string studentPassword[],string studentFeedbackArray[],string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[], string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[]);
void writeDataForStudentFinancialInfoData(string fileName,int lengthOfStudentEmailArray,int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[]);
void writeDataOfGeorgiaUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string arrayForStudentEmailCheakGeorgia[],int georgiaStateUniArray[],int submitFileGeorgia[],int decesionGeorgiaUni[]);
void writeDataOfBostonUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string learnedAboutBoston[],string arrayForStudentEmailCheakBoston[],int bostonUniArray[],int submitFileBoston[],int decesionBostonUni[]);
void writeDataOfStanfordUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string learnedAboutStanford[],string arrayForStudentEmailCheakStanford[],int stanfordUniArray[],int submitFileStanford[],int decesionStanfordUni[]);
void writeDataOfHarvardUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string learnedAboutHarvard[],string arrayForStudentEmailCheakHarvard[],int harvardUniArray[],int submitFileHarvard[],int decesionHarvardUni[]);
void writeDataOfPrincetonUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string learnedAboutPrinceton[],string arrayForStudentEmailCheakPrinceton[],int princetonUniArray[],int submitFilePrinceton[],int decesionPrincetonUni[]);
void writeDataOfYaleUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string learnedAboutYale[],string arrayForStudentEmailCheakYale[],int yaleUniArray[],int submitFileYale[],int decesionYaleUni[]);
void writeDataOfAllvariables(string fileName,string adminUserName,string adminPassword,string uniRepUserName,string uniRepPassword,int lengthOfStudentEmailArray,int lengthOfStudentPasswordArray,int arrayForStudentEmailCheakLengthGeorgia,int arrayForStudentEmailCheakLengthBoston,int arrayForStudentEmailCheakLengthStanford,int arrayForStudentEmailCheakLengthHarvard,int arrayForStudentEmailCheakLengthPrinceton,int arrayForStudentEmailCheakLengthYale,
    int qsRankingGeorgia,int qsRankingBoston,int qsRankingStanford,int qsRankingHarvard,int qsRankingPrinceton,int qsRankingYale,
    int thRankingGeorgia,int thRankingBoston,int thRankingStanford,int thRankingHarvard,int thRankingPrinceton,int thRankingYale);
void readDataForStudentBioData(string fileName,string studentEmail[],string studentPassword[],string studentFeedbackArray[],string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[], string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[]);
void readDataForStudentFinancialInfoData(string fileName,int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[]);
void readDataOfGeorgiaUniArray(string fileName,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string arrayForStudentEmailCheakGeorgia[],int georgiaStateUniArray[],int submitFileGeorgia[],int decesionGeorgiaUni[]);
void readDataOfBostonUniArray(string fileName,string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string arrayForStudentEmailCheakBoston[],int bostonUniversityArray[],int submitFileBoston[],int decesionBostonUni[]);
void readDataOfStanfordUniArray(string fileName,string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[],string arrayForStudentEmailCheakStanford[],int stanfordUniversityArray[],int submitFileStanford[],int decesionStanfordUni[]);
void readDataOfHarvardUniArray(string fileName,string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string arrayForStudentEmailCheakHarvard[],int harvardUniversityArray[],int submitFileHarvard[],int decesionHarvardUni[]);
void readDataOfPrincetonUniArray(string fileName,string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],string arrayForStudentEmailCheakPrinceton[],int princetonUniversityArray[],int submitFilePrinceton[],int decesionPrincetonUni[]);
void readDataOfYaleUniArray(string fileName,string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string arrayForStudentEmailCheakYale[],int yaleUniversityArray[],int submitFileYale[],int decesionYaleUni[]);
void readDataOfAllvariables(string fileName,string adminUserName,string adminPassword,string uniRepUserName,string uniRepPassword,int lengthOfStudentEmailArray,int lengthOfStudentPasswordArray,int arrayForStudentEmailCheakLengthGeorgia,int arrayForStudentEmailCheakLengthBoston,int arrayForStudentEmailCheakLengthStanford,int arrayForStudentEmailCheakLengthHarvard,int arrayForStudentEmailCheakLengthPrinceton,int arrayForStudentEmailCheakLengthYale,
    int qsRankingGeorgia,int qsRankingBoston,int qsRankingStanford,int qsRankingHarvard,int qsRankingPrinceton,int qsRankingYale,
    int thRankingGeorgia,int thRankingBoston,int thRankingStanford,int thRankingHarvard,int thRankingPrinceton,int thRankingYale);



/*File handling functions*/

main()
{
    string optionsMainMenu="",optionsSignUp="",optionsignin="",universitysearch="";
    string adminUserNameForSignUp="",adminPassword1ForSignUp="",adminPassword2ForSignUp="",adminUserName="",adminPassword="";
    string studentEmailForSignIn="",studentPasswordForSignIn="",studentEmailForSignUp="",studentPassword1ForSignUp="",studentPassword2ForSignUp="";
    
    string studentEmail[100];
    string studentPassword[100];
    string studentFeedbackArray[100];
    string studentName[100],dOB[100],phoneNumber[100],address[100],birthCountry[100],visaType[100],motherName[100],motherPhone[100],motherOccupation[100],fatherName[100],fatherPhone[100],fatherOccupation[100],highSchool[100],OlevelGrades[100],AlevelGrades[100],satScore[100],act1[100],act2[100],act3[100],act4[100],act5[100],personalStatementType[100],personalStatement[100];
    string studentStatusBostonUni[100],startTermBoston[100],admissionPlanBoston[100],major1Boston[100],major2Boston[100],siblingAttentedBoston[100],campusResidenceBoston[100],whyBoston[100];
    string studentStatusGeorgiaUni[100],startTermGeorgia[100],admissionPlanGeorgia[100],major1Georgia[100],major2Georgia[100],siblingAttentedGeorgia[100],campusResidenceGeorgia[100],learnedAboutGeorgia[100];
    string studentStatusStanfordUni[100],startTermStanford[100],admissionPlanStanford[100],major1Stanford[100],major2Stanford[100],siblingAttentedStanford[100],campusResidenceStanford[100],whyThisMajorStanford[100];
    string studentStatusHarvardUni[100],startTermHarvard[100],admissionPlanHarvard[100],major1Harvard[100],major2Harvard[100],siblingAttentedHarvard[100],campusResidenceHarvard[100],briefExperienceHarvard[100];
    string studentStatusPrincetonUni[100],startTermPrinceton[100],admissionPlanPrinceton[100],major1Princeton[100],major2Princeton[100],siblingAttentedPrinceton[100],campusResidencePrinceton[100],newSkillPrinceton[100];
    string studentStatusYaleUni[100],startTermYale[100],admissionPlanYale[100],major1Yale[100],major2Yale[100],siblingAttentedYale[100],campusResidenceYale[100],memberInfluenceYale[100];
    string studentStatusNewyorkUni[100],startTermNewyork[100],admissionPlanNewyork[100],major1Newyork[100],major2Newyork[100],siblingAttentedNewyork[100],campusResidenceNewyork[100],whyNyu[100];
    string studentStatusColumbiaUni[100],startTermColumbia[100],admissionPlanColumbia[100],major1Columbia[100],major2Columbia[100],siblingAttentedColumbia[100],campusResidenceColumbia[100],obstaclesFacedColumbia[100];
    string studentStatusCornellUni[100],startTermCornell[100],admissionPlanCornell[100],major1Cornell[100],major2Cornell[100],siblingAttentedCornell[100],campusResidenceCornell[100],takaboutIssuesCornell[100];
    string studentStatusCaliforniaUni[100],startTermCalifornia[100],admissionPlanCalifornia[100],major1California[100],major2California[100],siblingAttentedCalifornia[100],campusResidenceCalifornia[100],talentCalifornia[1000];
    string studentStatusBrownUni[100],startTermBrown[100],admissionPlanBrown[100],major1Brown[100],major2Brown[100],siblingAttentedBrown[100],campusResidenceBrown[100],communityBrown[100];
    string studentStatusMichiganUni[100],startTermMichigan[100],admissionPlanMichigan[100],major1Michigan[100],major2Michigan[100],siblingAttentedMichigan[100],campusResidenceMichigan[100],Q8Michigan[100];
    string studentStatusDartmouthUni[100],startTermDartmouth[100],admissionPlanDartmouth[100],major1Dartmouth[100],major2Dartmouth[100],siblingAttentedDartmouth[100],campusResidenceDartmouth[100],Q8Dartmouth[100];
    string studentStatusFloridaUni[100],startTermFlorida[100],admissionPlanFlorida[100],major1Florida[100],major2Florida[100],siblingAttentedFlorida[100],campusResidenceFlorida[100],Q8Florida[100];
    string studentStatusPennsylvaniaUni[100],startTermPennsylvania[100],admissionPlanPennsylvania[100],major1Pennsylvania[100],major2Pennsylvania[100],siblingAttentedPennsylvania[100],campusResidencePennsylvania[100],Q8Pennsylvania[100];
    

    
    
    
    
    
    
    
    int georgiaStateUniArray[100],bostonUniversityArray[100],stanfordUniversityArray[100],harvardUniversityArray[100],pennsylvaniaUniversityArray[100],floridaUniversityArray[100],dartmouthCollegeArray[100],michiganUniversityArray[100],brownUniversityArray[100], UniOfCaliforniaArray[100],cornellUniversityArray[100],columbiaUniversityArray[100],nyuUniversityArray[100],yaleUniversityArray[100], princetonUniversityArray[100];
    int studentPosition=0,uniRepPosition=0;
    int addedUniversityarraySize=30,currentaddedUniversityarraySize=0;
    string addedUniversityarray[addedUniversityarraySize];
    int scholarship1[100],scholarship2[100];
    string financialAidName[100],totalFamilyIncome[100],householdMembers[100],householdExpense[100],educationalExpense[100],tax[100], previousScholarshipDetail[100];
    int lengthOfStudentEmailArray=0,lengthOfStudentPasswordArray=0;
    
    int submitFileGeorgia[100],submitFileBoston[100],submitFileStanford[100],submitFileHarvard[100],submitFilePrinceton[100],submitFileYale[100],submitFileNewyork[100],submitFileColumbia[100],submitFileCornell[100],submitFileCalifornia[100],submitFileBrown[100],submitFileMichigan[100],submitFileDartmouth[100],submitFileFlorida[100],submitFilePennsylvania[100];

    /*uniRep variables and arrays*/
    string uniRepUserNameForSignUp="",uniRepPassword1ForSignUp="",uniRepPassword2ForSignUp="",uniRepUserName="",uniRepPassword="";
    
    int decesionGeorgiaUni[100],decesionBostonUni[100],decesionStanfordUni[100],decesionHarvardUni[100],decesionPrincetonUni[100],decesionYaleUni[100],decesionNewyorkUni[100],decesionColumbiaUni[100],decesionCornellUni[100],decesionCaliforniaUni[100],decesionBrownUni[100],decesionMichiganUni[100],decesionDartmouthUni[100],decesionFloridaUni[100],decesionPennsylvaniaUni[100];
    string arrayForStudentEmailCheakGeorgia[100],arrayForStudentEmailCheakBoston[100],arrayForStudentEmailCheakStanford[100],arrayForStudentEmailCheakHarvard[100],arrayForStudentEmailCheakPrinceton[100],arrayForStudentEmailCheakYale[100],arrayForStudentEmailCheakNewyork[100],arrayForStudentEmailCheakColumbia[100],arrayForStudentEmailCheakCornell[100],arrayForStudentEmailCheakCalifornia[100],arrayForStudentEmailCheakBrown[100],arrayForStudentEmailCheakMichigan[100],arrayForStudentEmailCheakDartmouth[100],arrayForStudentEmailCheakFlorida[100],arrayForStudentEmailCheakPennsylvania[100];
    int arrayForStudentEmailCheakLengthGeorgia=0,arrayForStudentEmailCheakLengthBoston=0,arrayForStudentEmailCheakLengthStanford=0,arrayForStudentEmailCheakLengthHarvard=0,arrayForStudentEmailCheakLengthPrinceton=0,arrayForStudentEmailCheakLengthYale=0,arrayForStudentEmailCheakLengthNewyork=0,arrayForStudentEmailCheakLengthColumbia=0,arrayForStudentEmailCheakLengthCornell=0,arrayForStudentEmailCheakLengthCalifornia=0,arrayForStudentEmailCheakLengthBrown=0,arrayForStudentEmailCheakLengthMichigan=0,arrayForStudentEmailCheakLengthDartmouth=0,arrayForStudentEmailCheakLengthFlorida=0,arrayForStudentEmailCheakLengthPennsylvania=0;
    
    /*Admin Variables and arrays*/
    int qsRankingGeorgia=97,qsRankingBoston=93,qsRankingStanford=5,qsRankingHarvard=4,qsRankingPrinceton=17,qsRankingYale=16,qsRankingNewyork=38,qsRankingColumbia=23,qsRankingCornell=13,qsRankingCalifornia=356,qsRankingBrown=73,qsRankingMichigan=55,qsRankingDartmouth=97,qsRankingFlorida=333,qsRankingPennsylvania=12;
    int thRankingGeorgia=105,thRankingBoston=78,thRankingStanford=2,thRankingHarvard=4,thRankingPrinceton=6,thRankingYale=10,thRankingNewyork=27,thRankingColumbia=17,thRankingCornell=20,thRankingCalifornia=567,thRankingBrown=64,thRankingMichigan=59,thRankingDartmouth=105,thRankingFlorida=243,thRankingPennsylvania=21; 

    
    for(int z=0;z<100;z++)
    {
        studentEmail[z]="";
        studentPassword[z]="";
        georgiaStateUniArray[z]=0;
        bostonUniversityArray[z]=0;
        stanfordUniversityArray[z]=0;
        harvardUniversityArray[z]=0;
        princetonUniversityArray[z]=0;
        yaleUniversityArray[z]=0;
        nyuUniversityArray[z]=0;
        columbiaUniversityArray[z]=0;
        cornellUniversityArray[z]=0;
        UniOfCaliforniaArray[z]=0;
        brownUniversityArray[z]=0;
        michiganUniversityArray[z]=0;
        dartmouthCollegeArray[z]=0;
        floridaUniversityArray[z]=0;
        pennsylvaniaUniversityArray[z]=0;
        scholarship1[z]=-1;
        scholarship2[z]=-1;
        submitFileGeorgia[z]=0;
        submitFileBoston[z]=0;
        submitFileStanford[z]=0;
        submitFileHarvard[z]=0;
        submitFilePrinceton[z]=0;
        submitFileYale[z]=0;
        submitFileNewyork[z]=0;
        submitFileColumbia[z]=0;
        submitFileCornell[z]=0;
        submitFileCalifornia[z]=0;
        submitFileBrown[z]=0;
        submitFileMichigan[z]=0;
        submitFileDartmouth[z]=0;
        submitFileFlorida[z]=0;
        submitFilePennsylvania[z]=0;
        decesionGeorgiaUni[z]=-1;
        decesionBostonUni[z]=-1;
        decesionStanfordUni[z]=-1;
        decesionHarvardUni[z]=-1;
        decesionPrincetonUni[z]=-1;
        decesionYaleUni[z]=-1;
        decesionNewyorkUni[z]=-1;
        decesionColumbiaUni[z]=-1;
        decesionCornellUni[z]=-1;
        decesionCaliforniaUni[z]=-1;
        decesionBrownUni[z]=-1;
        decesionMichiganUni[z]=-1;
        decesionDartmouthUni[z]=-1;
        decesionFloridaUni[z]=-1;
        decesionPennsylvaniaUni[z]=-1;
    }

    
    
    
   
while(true)
{
        system("cls");
        mainmenu();
        gotoxy(73,31);
        cin>>optionsMainMenu;   /*asking user options which include sign in, sign up and log out*/
        while (optionsMainMenu!="1" && optionsMainMenu!="2" && optionsMainMenu!="3")   /*loop to cheak validation for correct input*/
        {
        
        gotoxy(50,32);
        cout<<"Invalid option, enter option again: ";
        gotoxy(50,33);
        cout<<"                                                     ";
        gotoxy(60,33);
        cin>>optionsMainMenu;
        if(optionsMainMenu=="1" || optionsMainMenu=="2" || optionsMainMenu=="3")
        {
            break;
        }
        
        }

        if(optionsMainMenu=="1")    /*sign in option*/
        {
            system("cls");
            signInMenu();
            gotoxy(76,31);
            cin>>optionsignin;

            while (optionsignin!="1" && optionsignin!="2" && optionsignin!="3" )  /*loop to cheak validation for correct input*/
            {
            gotoxy(50,32);
            cout<<"Invalid option, enter option again: ";
            gotoxy(50,33);
            cout<<"                                                     ";
            gotoxy(60,33);
            cin>>optionsignin;
            if (optionsignin=="1" || optionsignin=="2" || optionsignin=="3" )
            break;
            }
            
            if(optionsignin=="1")    /*Sign in as admin*/
            {
                system("cls");
                adminSignInMenu();
                string adminUserNameForSignIn="",adminPasswordForSignIn="";                
                gotoxy(63,20);
                cin>>adminUserNameForSignIn;    
                gotoxy(63,28);
                cin>>adminPasswordForSignIn;
                bool cheakForAdminMenu=false;
                if(adminUserNameForSignIn==adminUserName && adminPasswordForSignIn==adminPassword)    /*cheak if entered username and password are correct*/
                {
                    cheakForAdminMenu=true;
                }
                if(cheakForAdminMenu==true)  /*if the entered username and password are correct then the admin signs in*/
                {
                    string optionsAdminMenu="";
                    while(optionsAdminMenu!="3")
                    {
                        system("cls");
                        mainAdminMenu();
                        gotoxy(53,34);
                        cin>>optionsAdminMenu;   

                        while (optionsAdminMenu!="1" && optionsAdminMenu!="2" && optionsAdminMenu!="3" )   /*loop to cheak validation for correct input*/
            
                        {
                            gotoxy(50,32);
                            cout<<"Invalid option, enter option again: ";
                            gotoxy(50,33);
                            cout<<"                                                     ";
                            gotoxy(60,33);
                            cin>>optionsAdminMenu;
                            if (optionsAdminMenu=="1" || optionsAdminMenu=="2" || optionsAdminMenu=="3")
                            break;
                        }


                        if(optionsAdminMenu=="1")   /*if enterd option by admin is one which is update university rankings*/
                        {
                            updateUniversityRankings(qsRankingGeorgia,qsRankingBoston,qsRankingStanford,qsRankingHarvard,qsRankingPrinceton,qsRankingYale,qsRankingNewyork,qsRankingColumbia,qsRankingCornell,qsRankingCalifornia,qsRankingBrown,qsRankingMichigan,qsRankingDartmouth,qsRankingFlorida,qsRankingPennsylvania,
                            thRankingGeorgia,thRankingBoston,thRankingStanford,thRankingHarvard,thRankingPrinceton,thRankingYale,thRankingNewyork,thRankingColumbia,thRankingCornell,thRankingCalifornia,thRankingBrown,thRankingMichigan,thRankingDartmouth,thRankingFlorida,thRankingPennsylvania );

                        }
                        else if(optionsAdminMenu=="2")   /*if enterd option by admin is 2 which is veiw feedback*/
                        {
                            veiwFeedback(studentFeedbackArray,studentEmail);
                        }
                        else if(optionsAdminMenu=="3")
                        {
                            break;
                        }


                    }

                }
                else   /*if user name and password does not match then it outputs the message that account is not made*/
                {
                    gotoxy(50,35);
                    cout<<"Account is not made, press any key to go to main screen";
                    getch();
                }
            }
            
            else if (optionsignin=="2")    /*Sign in as student*/
            {
                system("cls");
                studentSignIn();
                gotoxy(60,22);
                cin>>studentEmailForSignIn;
                gotoxy(60,30);
                cin>>studentPasswordForSignIn;
        
                bool cheakforstudentmenu=false;
                for(int i=0;i<100;i++)    /*traverses through the student email array and student password array to see if the entered email and password match*/
                {
                    if(studentEmail[i]==studentEmailForSignIn && studentPassword[i]==studentPasswordForSignIn)
                    {
                        cheakforstudentmenu=true;
                        studentPosition=i;
                    }
                }
                if (cheakforstudentmenu)
                {
                string optionsstudentmenu="";
                while(optionsstudentmenu!="8")
                {
                    system("cls");
                    studentmenu();
                    gotoxy(82,12);
                    cout<<studentEmail[studentPosition];
                    gotoxy(83,39);
                    cin>>optionsstudentmenu;
                    while (optionsstudentmenu!="1" && optionsstudentmenu!="2" && optionsstudentmenu!="3"  && optionsstudentmenu!="4"  && optionsstudentmenu!="5"  && optionsstudentmenu!="6"  && optionsstudentmenu!="7" && optionsstudentmenu!="8")
                    {
                        /*loop to cheak validation for correct input*/
                    gotoxy(50,41);
                    cout<<"Invalid option, enter option again: ";
                    gotoxy(87,41);
                    cout<<"                               ";
                    gotoxy(87,41);
                    cin>>optionsstudentmenu;
                    if (optionsstudentmenu=="1" || optionsstudentmenu=="2" || optionsstudentmenu=="3" || optionsstudentmenu=="4"|| optionsstudentmenu=="5"|| optionsstudentmenu=="6"|| optionsstudentmenu=="7" || optionsstudentmenu=="7")
                    break;
                    }
                    
                    
                    
                    if (optionsstudentmenu=="1")
                    {
                        
                        mainDashboardFunction(studentPosition, studentEmail, studentName, georgiaStateUniArray, bostonUniversityArray, stanfordUniversityArray, harvardUniversityArray, pennsylvaniaUniversityArray, floridaUniversityArray, dartmouthCollegeArray, michiganUniversityArray, brownUniversityArray, UniOfCaliforniaArray, cornellUniversityArray, columbiaUniversityArray, nyuUniversityArray, yaleUniversityArray, princetonUniversityArray, submitFileGeorgia, submitFileBoston, submitFileStanford, submitFileHarvard, submitFilePrinceton, submitFileYale,
                        submitFileNewyork, submitFileColumbia, submitFileCornell, submitFileCalifornia, submitFileBrown, submitFileMichigan, submitFileDartmouth, submitFileFlorida, submitFilePennsylvania, decesionGeorgiaUni, decesionBostonUni, decesionStanfordUni, decesionHarvardUni, decesionPrincetonUni, decesionYaleUni, decesionNewyorkUni, decesionColumbiaUni, decesionCornellUni, decesionCaliforniaUni, decesionBrownUni, decesionMichiganUni, decesionDartmouthUni, decesionFloridaUni, decesionPennsylvaniaUni, dOB, phoneNumber, address, birthCountry, visaType,
                        highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail, studentStatusGeorgiaUni, startTermGeorgia, admissionPlanGeorgia, major1Georgia, major2Georgia, siblingAttentedGeorgia, campusResidenceGeorgia, learnedAboutGeorgia,
                        studentStatusBostonUni, startTermBoston, admissionPlanBoston, major1Boston, major2Boston, siblingAttentedBoston, campusResidenceBoston, whyBoston, studentStatusStanfordUni, startTermStanford, admissionPlanStanford, major1Stanford, major2Stanford, siblingAttentedStanford, campusResidenceStanford, whyThisMajorStanford, studentStatusHarvardUni, startTermHarvard, admissionPlanHarvard, major1Harvard, major2Harvard, siblingAttentedHarvard, campusResidenceHarvard, briefExperienceHarvard, studentStatusPrincetonUni, startTermPrinceton,
                        admissionPlanPrinceton, major1Princeton, major2Princeton, siblingAttentedPrinceton, campusResidencePrinceton, newSkillPrinceton, studentStatusYaleUni, startTermYale, admissionPlanYale, major1Yale, major2Yale, siblingAttentedYale, campusResidenceYale, memberInfluenceYale, studentStatusNewyorkUni, startTermNewyork, admissionPlanNewyork, major1Newyork, major2Newyork, siblingAttentedNewyork, campusResidenceNewyork, whyNyu, studentStatusColumbiaUni, startTermColumbia, admissionPlanColumbia, major1Columbia, major2Columbia,
                        siblingAttentedColumbia, campusResidenceColumbia, obstaclesFacedColumbia, studentStatusCornellUni, startTermCornell, admissionPlanCornell, major1Cornell, major2Cornell, siblingAttentedCornell, campusResidenceCornell, takaboutIssuesCornell, studentStatusCaliforniaUni, startTermCalifornia, admissionPlanCalifornia, major1California, major2California, siblingAttentedCalifornia, campusResidenceCalifornia, talentCalifornia, studentStatusBrownUni, startTermBrown, admissionPlanBrown, major1Brown, major2Brown, siblingAttentedBrown,
                        campusResidenceBrown, communityBrown, studentStatusMichiganUni, startTermMichigan, admissionPlanMichigan, major1Michigan, major2Michigan, siblingAttentedMichigan, campusResidenceMichigan, Q8Michigan, studentStatusDartmouthUni, startTermDartmouth, admissionPlanDartmouth, major1Dartmouth, major2Dartmouth, siblingAttentedDartmouth, campusResidenceDartmouth, Q8Dartmouth, studentStatusFloridaUni, startTermFlorida, admissionPlanFlorida, major1Florida, major2Florida, siblingAttentedFlorida, campusResidenceFlorida, Q8Florida,
                        studentStatusPennsylvaniaUni, startTermPennsylvania, admissionPlanPennsylvania, major1Pennsylvania, major2Pennsylvania, siblingAttentedPennsylvania, campusResidencePennsylvania, Q8Pennsylvania);


                    }
                    else if (optionsstudentmenu=="2")
                    {
                        
                       universityquestions(studentPosition, addedUniversityarray, currentaddedUniversityarraySize, georgiaStateUniArray, bostonUniversityArray, stanfordUniversityArray, harvardUniversityArray,pennsylvaniaUniversityArray,floridaUniversityArray,dartmouthCollegeArray,michiganUniversityArray,brownUniversityArray, UniOfCaliforniaArray,cornellUniversityArray,columbiaUniversityArray,nyuUniversityArray,yaleUniversityArray, princetonUniversityArray,
                         studentStatusGeorgiaUni, startTermGeorgia, admissionPlanGeorgia, major1Georgia, major2Georgia, siblingAttentedGeorgia, campusResidenceGeorgia, learnedAboutGeorgia, studentStatusBostonUni, startTermBoston, admissionPlanBoston, major1Boston, major2Boston, siblingAttentedBoston, campusResidenceBoston, whyBoston,
                        studentStatusStanfordUni, startTermStanford, admissionPlanStanford, major1Stanford, major2Stanford, siblingAttentedStanford, campusResidenceStanford, whyThisMajorStanford, studentStatusHarvardUni, startTermHarvard, admissionPlanHarvard, major1Harvard, major2Harvard,
                        siblingAttentedHarvard, campusResidenceHarvard, briefExperienceHarvard, studentStatusPrincetonUni, startTermPrinceton, admissionPlanPrinceton, major1Princeton, major2Princeton, siblingAttentedPrinceton, campusResidencePrinceton, newSkillPrinceton, studentStatusYaleUni, startTermYale, admissionPlanYale, major1Yale, major2Yale, siblingAttentedYale, campusResidenceYale, memberInfluenceYale,
                        studentStatusNewyorkUni, startTermNewyork, admissionPlanNewyork, major1Newyork, major2Newyork, siblingAttentedNewyork, campusResidenceNewyork, whyNyu, studentStatusColumbiaUni, startTermColumbia, admissionPlanColumbia, major1Columbia, major2Columbia, siblingAttentedColumbia, campusResidenceColumbia, obstaclesFacedColumbia, studentStatusCornellUni, startTermCornell, admissionPlanCornell,
                        major1Cornell, major2Cornell, siblingAttentedCornell, campusResidenceCornell, takaboutIssuesCornell, studentStatusCaliforniaUni, startTermCalifornia, admissionPlanCalifornia, major1California, major2California, siblingAttentedCalifornia, campusResidenceCalifornia, talentCalifornia, studentStatusBrownUni, startTermBrown, admissionPlanBrown, major1Brown, major2Brown, siblingAttentedBrown,
                        campusResidenceBrown, communityBrown, studentStatusMichiganUni, startTermMichigan, admissionPlanMichigan, major1Michigan, major2Michigan, siblingAttentedMichigan, campusResidenceMichigan, Q8Michigan, studentStatusDartmouthUni, startTermDartmouth, admissionPlanDartmouth, major1Dartmouth, major2Dartmouth, siblingAttentedDartmouth, campusResidenceDartmouth, Q8Dartmouth,
                        studentStatusFloridaUni, startTermFlorida, admissionPlanFlorida, major1Florida, major2Florida, siblingAttentedFlorida, campusResidenceFlorida, Q8Florida, studentStatusPennsylvaniaUni, startTermPennsylvania, admissionPlanPennsylvania, major1Pennsylvania, major2Pennsylvania, siblingAttentedPennsylvania, campusResidencePennsylvania, Q8Pennsylvania
                        );
                    }
                    else if (optionsstudentmenu=="3")  /*if 3 option is selected then the whole bio data is collected*/
                    {
                        while(true)
                        {
                            system("cls");
                            /*if whole data is entered then it tells student that your whole biodata is entered already*/
                            if (studentName[studentPosition]!="" && motherName[studentPosition]!="" && highSchool[studentPosition]!="" && act1[studentPosition]!="" && personalStatementType[studentPosition]!="" )
                            {
                                system("cls");
                                infoAlreadyEnteredMenu();
                                gotoxy(30,16);
                                cout<<"You have submitted all the information in this section, press any key to go back to student section..";
                                getch();
                                break;
                            }
                            else   /*if data is not entered than it collects the data*/
                            {
                                if(studentName[studentPosition]=="")
                                {
                                    system("cls");
                                    studentProfileMenu();
                                    studentProfileQuestions(studentPosition,studentName,dOB, phoneNumber, address, birthCountry,visaType);
                                }
                                else{
                                    system("cls");
                                    infoAlreadyEnteredMenu();
                                    gotoxy(30,16);
                                    cout<<"You have already entered all information in this section, press any key to go to next section";
                                    getch();
                                }
                                if (motherName[studentPosition]=="")
                                {
                                    system("cls");
                                    studentHouseholdMenu();
                                    houseHoldQuestions(studentPosition, motherName,motherPhone, motherOccupation,fatherName,fatherPhone,fatherOccupation);
                                }
                                else{
                                    system("cls");
                                    infoAlreadyEnteredMenu();
                                    gotoxy(30,16);
                                    cout<<"You have already entered all information in this section, press any key to go to next section";
                                    getch();
            
                                }
                                if (highSchool[studentPosition]=="")
                                {
                                    system("cls");
                                    studentEducationMenu();
                                    studentEducationQuestions(studentPosition, highSchool, OlevelGrades, AlevelGrades, satScore);
                                }
                                else{
                                        system("cls");
                                        infoAlreadyEnteredMenu();
                                        gotoxy(30,16);
                                        cout<<"You have already entered all information in this section, press any key to go to next section";
                                        getch();
                                }
                                if (act1[studentPosition]=="")
                                {
                                    system("cls");
                                    studentActivityMenu();
                                    studentActivitiesQuestions(studentPosition,act1, act2,act3,act4, act5);
                                }
                                else{
                                    system("cls");
                                    infoAlreadyEnteredMenu();
                                    gotoxy(30,16);
                                    cout<<"You have already entered all information in this section, press any key to go to next section";
                                    getch();
                                }
                                if(personalStatementType[studentPosition]=="")
                                {
                                    system("cls");
                                    studentPersonalEssayMenu();
                                    studentPersonalEssayQuestions(studentPosition, personalStatementType,personalStatement);
                                    break;
                                }
                                else{
                                    system("cls");
                                    infoAlreadyEnteredMenu();
                                    gotoxy(30,16);
                                    cout<<"You have submitted all the information in this section, press any key to go back to student section..";
                                    getch();
                                    break;
                                }

                            }
                        }

                
                    }
                
                    else if (optionsstudentmenu=="4") /*if 4 option is selected then it takes the user to college search */
                    {
                        while(true)
                        {
                        system("cls");
                        collegesearchmenu();
                        gotoxy(70,19);
                        string askForContinue;  /*Asks user if they want to continue or go back to student menu*/
                        cout<<"Do you want to continue to search university or Exit";
                        gotoxy(70,20);
                        cout<<"enter Yes to search and No to exit  ";   
                        cin>>askForContinue;
                        if (askForContinue=="no" || askForContinue=="No")
                        break;
                        gotoxy(70,25);
                        cout<<"Enter University To Search:";
                        gotoxy(98,25);
                        cin>>universitysearch;
                        searchCollege(qsRankingGeorgia, qsRankingBoston, qsRankingStanford, qsRankingHarvard, qsRankingPrinceton, qsRankingYale, qsRankingNewyork, qsRankingColumbia, qsRankingCornell, qsRankingCalifornia, qsRankingBrown, qsRankingMichigan, qsRankingDartmouth, qsRankingFlorida, qsRankingPennsylvania,
                        thRankingGeorgia, thRankingBoston, thRankingStanford, thRankingHarvard, thRankingPrinceton, thRankingYale, thRankingNewyork, thRankingColumbia, thRankingCornell, thRankingCalifornia, thRankingBrown, thRankingMichigan, thRankingDartmouth, thRankingFlorida, thRankingPennsylvania,
                        universitysearch,georgiaStateUniArray,pennsylvaniaUniversityArray,floridaUniversityArray,dartmouthCollegeArray, michiganUniversityArray, brownUniversityArray, UniOfCaliforniaArray,cornellUniversityArray, columbiaUniversityArray,nyuUniversityArray,yaleUniversityArray, princetonUniversityArray,
                         bostonUniversityArray,stanfordUniversityArray,harvardUniversityArray,studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize,addedUniversityarray);

                        }


                    }
                    else if (optionsstudentmenu=="5")  /*takes student to financial information section and collects whole data*/
                    {
                        string optionsFinancialAidMenu="";
                        while(optionsFinancialAidMenu!="4")  
                        {
                            system("cls");
                            financialAidMainMenu();
                            gotoxy(72,34);
                            cin>>optionsFinancialAidMenu;
                            while (optionsFinancialAidMenu!="1" && optionsFinancialAidMenu!="2" && optionsFinancialAidMenu!="3" && optionsFinancialAidMenu!="4" ) /*loop to cheak validation for correct input*/
                            {
                                gotoxy(50,35);
                                cout<<"Invalid option, enter option again: ";
                                gotoxy(50,36);
                                cout<<"                                                     ";
                                gotoxy(60,36);
                                cin>>optionsFinancialAidMenu;
                                if (optionsFinancialAidMenu=="1" || optionsFinancialAidMenu=="2" || optionsFinancialAidMenu=="3" || optionsFinancialAidMenu!="4")
                                break;
                            }

                            if(optionsFinancialAidMenu=="1")
                            {
                                system("cls");
                                financialAidTypesMenu();
                                gotoxy(71,39);
                                getch();
                            }
                            else if(optionsFinancialAidMenu=="2")
                            {
                                if (scholarship1[studentPosition]==0 || scholarship1[studentPosition]==1 )
                                {
                                
                                    system("cls");
                                    infoAlreadyEnteredMenu();
                                    gotoxy(30,16);
                                    cout<<"You have already entered the required information,press any key to go back";
                                    getch();
                                }
                                else
                                {
                                system("cls");
                                scholarshipsMenu();
                                scholarshipQuestions(studentPosition,scholarship1,scholarship2);
                                }

                            }

                            else if(optionsFinancialAidMenu=="3")
                            {
                                if (financialAidName[studentPosition]=="")
                                {
                                    system("cls");
                                    financialAidMenu();
                                    financialAidQuestions(studentPosition,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);

                                }
                                else{
                                    system("cls");
                                    infoAlreadyEnteredMenu();
                                    gotoxy(30,16);
                                    cout<<"You have already entered information, press any key to go to main menu.";
                                    getch();
                                }
                            }
                            else if(optionsFinancialAidMenu=="4")
                            {
                                break;
                            }


                        }

                    }
                    else if (optionsstudentmenu=="6")  /*if option is 6 then it takes to feedback section*/
                    {
                        while(true)
                        {
                        system("cls");
                        studentFeedbackMenu();
                        gotoxy(25,20);
                        studentFeedbackArray[studentPosition]=takeFeedBack(25,125,20,26);
                        gotoxy(25,30);
                        cout<<"press any key to exit";
                        getch();
                        break;
                        }
                        
                    
                    }
                    else if (optionsstudentmenu=="7") /*takes student to delete data section where he can delete data if the final file is not submitted to any university*/
                    {
                        deleteDataFunction(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,motherName,motherPhone, motherOccupation,fatherName,fatherPhone,fatherOccupation,highSchool,OlevelGrades,AlevelGrades,satScore,act1,act2,act3,act4,act5,personalStatementType,personalStatement
                        ,submitFileGeorgia,submitFileBoston,submitFileStanford, submitFileHarvard, submitFilePrinceton, submitFileYale, submitFileNewyork,submitFileColumbia,submitFileCornell,submitFileCalifornia, submitFileBrown, submitFileMichigan,submitFileDartmouth, submitFileFlorida,
                        submitFilePennsylvania);
                        
                        
                    }
                     else if (optionsstudentmenu=="8")
                    {
                        break;
                    }


                }
                }
                else   /*if the email and password does not match then it outputs the message that account is not made*/
                {
                    gotoxy(50,35);
                    cout<<"Account is not made, press any key to go to main screen";
                    getch();
                }

            }
            else if(optionsignin=="3")   /*if sign in as college representative*/
            {
                system("cls");
                universityRepresentativeSignIn();   
                string uniRepUserNameForSignIn="",uniRepPasswordForSignIn="";
                gotoxy(63,20);
                cin>>uniRepUserNameForSignIn;
                gotoxy(63,28);
                cin>>uniRepPasswordForSignIn;
                bool cheakforuniRepmenu=false;
                if(uniRepUserNameForSignIn==uniRepUserName && uniRepPasswordForSignIn==uniRepPassword)  /*cheaks if username and password match*/
                {
                   cheakforuniRepmenu =true;
                }
                
                if (cheakforuniRepmenu) /*if username and password match it takes to mainUniversityRepresentative function where the university representatives of all universities can look at the files and make decesion regarding the students*/
                {
                    mainUniRepFunction(studentPosition, submitFileGeorgia, submitFileBoston, submitFileStanford, submitFileHarvard, submitFilePrinceton, submitFileYale, submitFileNewyork, submitFileColumbia, submitFileCornell, submitFileCalifornia, submitFileBrown, submitFileMichigan, submitFileDartmouth, submitFileFlorida,
                    submitFilePennsylvania, decesionGeorgiaUni, decesionBostonUni, decesionStanfordUni, decesionHarvardUni, decesionPrincetonUni, decesionYaleUni, decesionNewyorkUni, decesionColumbiaUni, decesionCornellUni, decesionCaliforniaUni, decesionBrownUni, decesionMichiganUni, decesionDartmouthUni, decesionFloridaUni, decesionPennsylvaniaUni, arrayForStudentEmailCheakGeorgia, arrayForStudentEmailCheakBoston, arrayForStudentEmailCheakStanford, arrayForStudentEmailCheakHarvard, arrayForStudentEmailCheakPrinceton,
                    arrayForStudentEmailCheakYale, arrayForStudentEmailCheakNewyork, arrayForStudentEmailCheakColumbia, arrayForStudentEmailCheakCornell, arrayForStudentEmailCheakCalifornia, arrayForStudentEmailCheakBrown, arrayForStudentEmailCheakMichigan, arrayForStudentEmailCheakDartmouth, arrayForStudentEmailCheakFlorida, arrayForStudentEmailCheakPennsylvania, arrayForStudentEmailCheakLengthGeorgia , arrayForStudentEmailCheakLengthBoston, arrayForStudentEmailCheakLengthStanford,
                    arrayForStudentEmailCheakLengthHarvard, arrayForStudentEmailCheakLengthPrinceton, arrayForStudentEmailCheakLengthYale, arrayForStudentEmailCheakLengthNewyork, arrayForStudentEmailCheakLengthColumbia, arrayForStudentEmailCheakLengthCornell, arrayForStudentEmailCheakLengthCalifornia, arrayForStudentEmailCheakLengthBrown, arrayForStudentEmailCheakLengthMichigan, arrayForStudentEmailCheakLengthDartmouth, arrayForStudentEmailCheakLengthFlorida, arrayForStudentEmailCheakLengthPennsylvania, studentEmail, studentName, dOB, phoneNumber, address,
                    birthCountry, visaType, highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail, studentStatusGeorgiaUni, startTermGeorgia,
                    admissionPlanGeorgia, major1Georgia, major2Georgia, siblingAttentedGeorgia, campusResidenceGeorgia, learnedAboutGeorgia, studentStatusBostonUni, startTermBoston, admissionPlanBoston, major1Boston, major2Boston, siblingAttentedBoston, campusResidenceBoston, whyBoston, studentStatusStanfordUni, startTermStanford, admissionPlanStanford, major1Stanford, major2Stanford, siblingAttentedStanford, campusResidenceStanford,
                    whyThisMajorStanford, studentStatusHarvardUni, startTermHarvard, admissionPlanHarvard, major1Harvard, major2Harvard, siblingAttentedHarvard, campusResidenceHarvard, briefExperienceHarvard, studentStatusPrincetonUni, startTermPrinceton, admissionPlanPrinceton, major1Princeton, major2Princeton, siblingAttentedPrinceton, campusResidencePrinceton, newSkillPrinceton, studentStatusYaleUni, startTermYale, admissionPlanYale, major1Yale, major2Yale, siblingAttentedYale, campusResidenceYale, memberInfluenceYale,
                    studentStatusNewyorkUni, startTermNewyork, admissionPlanNewyork, major1Newyork, major2Newyork, siblingAttentedNewyork, campusResidenceNewyork, whyNyu, studentStatusColumbiaUni, startTermColumbia, admissionPlanColumbia, major1Columbia, major2Columbia, siblingAttentedColumbia, campusResidenceColumbia, obstaclesFacedColumbia, studentStatusCornellUni, startTermCornell, admissionPlanCornell, major1Cornell, major2Cornell, siblingAttentedCornell, campusResidenceCornell, takaboutIssuesCornell,
                    studentStatusCaliforniaUni, startTermCalifornia, admissionPlanCalifornia, major1California, major2California, siblingAttentedCalifornia, campusResidenceCalifornia, talentCalifornia, studentStatusBrownUni, startTermBrown, admissionPlanBrown, major1Brown, major2Brown, siblingAttentedBrown, campusResidenceBrown, communityBrown, studentStatusMichiganUni, startTermMichigan, admissionPlanMichigan, major1Michigan, major2Michigan, siblingAttentedMichigan, campusResidenceMichigan, Q8Michigan,
                    studentStatusDartmouthUni, startTermDartmouth, admissionPlanDartmouth, major1Dartmouth, major2Dartmouth, siblingAttentedDartmouth, campusResidenceDartmouth, Q8Dartmouth, studentStatusFloridaUni, startTermFlorida, admissionPlanFlorida, major1Florida, major2Florida, siblingAttentedFlorida, campusResidenceFlorida, Q8Florida, studentStatusPennsylvaniaUni, startTermPennsylvania, admissionPlanPennsylvania, major1Pennsylvania, major2Pennsylvania, siblingAttentedPennsylvania, campusResidencePennsylvania, Q8Pennsylvania);


                }
                else  /*if the username and password does not match then it outputs the message that account is not made*/
                {
                    gotoxy(50,35);
                    cout<<"Account is not made, press any key to go to main screen";
                    getch();

                }

            }

    }
        
        
        
        
        
        
        
        
        
        
        else if (optionsMainMenu=="2")  /*if the option selected is sign up*/
        {
            system("cls");
            signUpMenu();
            gotoxy(76,31);
            cin>>optionsSignUp;

            while (optionsSignUp!="1" && optionsSignUp!="2" && optionsSignUp!="3" )  /*loop to cheak validation for correct input*/
            {
            gotoxy(50,35);
            cout<<"Invalid option, enter option again: ";
            gotoxy(50,36);
            cout<<"                                                     ";
            gotoxy(60,36);
            cin>>optionsSignUp;
            if (optionsSignUp=="1" || optionsSignUp=="2" || optionsSignUp=="3")
            break;
            }
if (optionsSignUp=="1")  /*if sign up for admin*/
{   

bool adminpasswordsmatch=false;
while(adminpasswordsmatch==false)
{
system("cls");
adminSignUpMenu();  
gotoxy(46,17);
cin>>adminUserNameForSignUp;
gotoxy(46,25);
cin>>adminPassword1ForSignUp;
                    
while (cheakPassword(adminPassword1ForSignUp)!=true)  /*llop to validate correctness of password*/
{
gotoxy(29,27);
cout<<"Password must contain the above stated requirnments";
gotoxy(29,30);
cout<<"                                                     ";
gotoxy(29,30);
cin>>adminPassword1ForSignUp;
if (cheakPassword(adminPassword1ForSignUp)==true)
 break;
}
gotoxy(48,36);
cin>>adminPassword2ForSignUp;
if (adminPassword1ForSignUp==adminPassword2ForSignUp)  /*cheaks if password and conform password match*/
{
adminpasswordsmatch=true;                        

}
else{   /*if password and conform password does not match*/
gotoxy(35,37);
cout<<"Confirm password does not matches the first password, Enter confirm password again..";
getch();

}
if(adminUserName=="" && adminPassword=="" && adminpasswordsmatch==true)  
{
adminUserName=adminUserNameForSignUp;
adminPassword=adminPassword2ForSignUp;
gotoxy(30,40);
cout<<"Your account has been made succesfully.. Press any key to go to main screen";
getch();
break;
}
else if(adminUserName!="" && adminPassword!="")
{
gotoxy(30,40);
cout<<"Account Already Made, press any key to go to main menu: ";
getch();
break;

}
if (adminpasswordsmatch==true)
break;
}
                
}
                
                
                
                if (optionsSignUp=="2")  /*if sign up as student*/
                {   

                    bool studentpasswordsmatch=false;
                    while(studentpasswordsmatch==false)
                    {
                    system("cls");
                    studentSignup();
                    gotoxy(60,20);
                    cin.ignore();
                    getline(cin,studentEmailForSignUp);
                    while(validateEmail(studentEmailForSignUp)==false)   /*validates the correctness of email*/
                    {
                        gotoxy(60,22);
                        cout<<"Invalid Input, Enter Again: ";
                        gotoxy(88,22);
                        cout<<"                                      ";
                        gotoxy(88,22);
                        getline(cin,studentEmailForSignUp);
                        if (validateEmail(studentEmailForSignUp)==true)   
                        break;

                    }
                    /*cheaking for dublicate email, if dublicate email is entered then message is conveyed to user that the account already exists and take him to mainmenu*/
                    if (cheakDuplicateEmail(studentEmail,lengthOfStudentEmailArray,studentEmailForSignUp))
                    {
                    if (lengthOfStudentEmailArray<=100)
                    {
                    studentEmail[lengthOfStudentEmailArray]=studentEmailForSignUp;
                    lengthOfStudentEmailArray++;
                    }
                    }
                    else
                    {
                        gotoxy(60,23);
                        cout<<"Account Already Made, press any key to go to main menu: ";
                        getch();
                        break;
                    }
                    gotoxy(60,27);
                    getline(cin,studentPassword1ForSignUp);
                    
                    while (cheakPassword(studentPassword1ForSignUp)==false)   /*loop for validation of password meaning password is matched according to the requirnments*/
                    {
                    gotoxy(50,28);
                    cout<<"Password must contain the above stated requirnments,Enter Password again..";
                    gotoxy(60,29);
                    cout<<"                                                     ";
                    gotoxy(60,29);
                    getline(cin,studentPassword1ForSignUp);
                    if (cheakPassword(studentPassword1ForSignUp)==true)
                        break;
                    }
                    gotoxy(60,33);
                    cin>>studentPassword2ForSignUp;
                    if (studentPassword1ForSignUp==studentPassword2ForSignUp) /*cheaks if first password and conform password match*/
                    {
                        studentpasswordsmatch=true;
                        if (lengthOfStudentPasswordArray<=1000)   /*if yes then increments the password in the student password array*/
                        {
                            studentPassword[lengthOfStudentPasswordArray]=studentPassword2ForSignUp;
                            lengthOfStudentPasswordArray++;
                        }
                        
                        
                        gotoxy(43,35);
                        cout<<"Your account has been made succesfully.. Press any key to go to main screen";
                        getch();
                    }
                    else{
                    gotoxy(40,35);
                    cout<<"Confirm password does not matches the first password, Enter confirm password again..";
                    getch();
                    }
                    if (studentpasswordsmatch==true)
                    break;
                    }
                
                  
                

                }



else if(optionsSignUp=="3")   /*if sign up for university representatives*/
{
    
bool uniReppasswordsmatch=false;
while(uniReppasswordsmatch==false)
{
system("cls");
universityRepresentativeSignUp();
gotoxy(46,17);
cin>>uniRepUserNameForSignUp;
gotoxy(46,25);
cin>>uniRepPassword1ForSignUp;
                    
while (cheakPassword(uniRepPassword1ForSignUp)!=true)
{
gotoxy(29,27);
cout<<"Password must contain the above stated requirnments,Enter Password again..";
gotoxy(29,30);
cout<<"                                                     ";
gotoxy(29,30);
cin>>uniRepPassword1ForSignUp;
if (cheakPassword(uniRepPassword1ForSignUp)==true)
 break;
}
gotoxy(48,36);
cin>>uniRepPassword2ForSignUp;
if (uniRepPassword1ForSignUp==uniRepPassword2ForSignUp)
{
uniReppasswordsmatch=true;                        
}
else{
gotoxy(35,37);
cout<<"Confirm password does not matches the first password, Enter confirm password again..";
getch();
break;
}
if(uniRepUserName=="" && uniRepPassword=="" && uniReppasswordsmatch==true)
{
uniRepUserName=uniRepUserNameForSignUp;
uniRepPassword=uniRepPassword2ForSignUp;
gotoxy(30,40);
cout<<"Your account has been made succesfully.. Press any key to go to main screen";
getch();
break;
}
else if(uniRepUserName!="" && uniRepPassword!="")
{
gotoxy(30,40);
cout<<"Account Already Made, press any key to go to main menu: ";
getch();
break;

}
if (uniReppasswordsmatch==true)
break;
}   

}
        
}

else if(optionsMainMenu=="3")  /*if the main menu option is 3 it means log out and break the main loop and end the program*/
{
    break;
}


}


}

/*write functions for flie handling*/

void writeDataForStudentBioData(string fileName,int lengthOfStudentEmailArray,string studentEmail[],string studentPassword[],string studentFeedbackArray[],string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[], string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[])
{
    char s='#';
    fstream file;
    file.open("StudentBioData.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentEmail[i]<<s<<studentPassword[i]<<s<<studentFeedbackArray[i]<<s<<studentName[i]<<s<<dOB[i]<<s<<phoneNumber[i]<<s<<address[i]<<s<<birthCountry[i]<<s<<visaType[i]<<s<<motherName[i]<<s<<motherPhone[i]<<s<<motherOccupation[i]<<s<<fatherName[i]<<s<<fatherPhone[i]<<s<<fatherOccupation[i]<<s<<highSchool[i]<<s<<OlevelGrades[i]<<s<<AlevelGrades[i]<<s<<satScore[i]<<s<<act1[i]<<s<<act2[i]<<s<<act3[i]<<s<<act4[i]<<s<<act5[i]<<s<<personalStatementType[i]<<s<<personalStatement[i]<<endl;
    }
    file.close();

}



void writeDataForStudentFinancialInfoData(string fileName,int lengthOfStudentEmailArray,int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[])
{
    char s='#';
    fstream file;
    file.open("StudentFinancialData.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<scholarship1[i]<<s<<scholarship2[i]<<s<<financialAidName[i]<<s<<totalFamilyIncome[i]<<s<<householdMembers[i]<<s<<householdExpense[i]<<s<<educationalExpense[i]<<s<<tax[i]<<s<<previousScholarshipDetail[i]<<endl;
    }
    file.close();

}

void writeDataOfGeorgiaUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string arrayForStudentEmailCheakGeorgia[],int georgiaStateUniArray[],int submitFileGeorgia[],int decesionGeorgiaUni[])
{
    char s='#';
    fstream file;
    file.open("GeorgiaUniArrays.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentStatusGeorgiaUni[i]<<s<<startTermGeorgia[i]<<s<<admissionPlanGeorgia[i]<<s<<major1Georgia[i]<<s<<major2Georgia[i]<<s<<siblingAttentedGeorgia[i]<<s<<campusResidenceGeorgia[i]<<s<<learnedAboutGeorgia[i]<<s<<arrayForStudentEmailCheakGeorgia[i]<<s<<georgiaStateUniArray[i]<<s<<submitFileGeorgia[i]<<s<<decesionGeorgiaUni[i]<<endl;
    }
    file.close();

}

void writeDataOfBostonUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string arrayForStudentEmailCheakBoston[],int bostonUniversityArray[],int submitFileBoston[],int decesionBostonUni[])
{
    char s='#';
    fstream file;
    file.open("BostonUniArrays.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentStatusBostonUni[i]<<s<<startTermBoston[i]<<s<<admissionPlanBoston[i]<<s<<major1Boston[i]<<s<<major2Boston[i]<<s<<siblingAttentedBoston[i]<<s<<campusResidenceBoston[i]<<s<<whyBoston[i]<<s<<arrayForStudentEmailCheakBoston[i]<<s<<bostonUniversityArray[i]<<s<<submitFileBoston[i]<<s<<decesionBostonUni[i]<<endl;
    }
    file.close();

}

void writeDataOfStanfordUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[],string arrayForStudentEmailCheakStanford[],int stanfordUniversityArray[],int submitFileStanford[],int decesionStanfordUni[])
{
    char s='#';
    fstream file;
    file.open("StanfordUniArrays.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentStatusStanfordUni[i]<<s<<startTermStanford[i]<<s<<admissionPlanStanford[i]<<s<<major1Stanford[i]<<s<<major2Stanford[i]<<s<<siblingAttentedStanford[i]<<s<<campusResidenceStanford[i]<<s<<whyThisMajorStanford[i]<<s<<arrayForStudentEmailCheakStanford[i]<<s<<stanfordUniversityArray[i]<<s<<submitFileStanford[i]<<s<<decesionStanfordUni[i]<<endl;
    }
    file.close();

}

void writeDataOfHarvardUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string arrayForStudentEmailCheakHarvard[],int harvardUniversityArray[],int submitFileHarvard[],int decesionHarvardUni[])
{
    char s='#';
    fstream file;
    file.open("HarvardUniArrays.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentStatusHarvardUni[i]<<s<<startTermHarvard[i]<<s<<admissionPlanHarvard[i]<<s<<major1Harvard[i]<<s<<major2Harvard[i]<<s<<siblingAttentedHarvard[i]<<s<<campusResidenceHarvard[i]<<s<<briefExperienceHarvard[i]<<s<<arrayForStudentEmailCheakHarvard[i]<<s<<harvardUniversityArray[i]<<s<<submitFileHarvard[i]<<s<<decesionHarvardUni[i]<<endl;
    }
    file.close();

}

void writeDataOfPrincetonUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],string arrayForStudentEmailCheakPrinceton[],int princetonUniversityArray[],int submitFilePrinceton[],int decesionPrincetonUni[])
{
    char s='#';
    fstream file;
    file.open("PrincetonUniArrays.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentStatusPrincetonUni[i]<<s<<startTermPrinceton[i]<<s<<admissionPlanPrinceton[i]<<s<<major1Princeton[i]<<s<<major2Princeton[i]<<s<<siblingAttentedPrinceton[i]<<s<<campusResidencePrinceton[i]<<s<<newSkillPrinceton[i]<<s<<arrayForStudentEmailCheakPrinceton[i]<<s<<princetonUniversityArray[i]<<s<<submitFilePrinceton[i]<<s<<decesionPrincetonUni[i]<<endl;
    }
    file.close();

}

void writeDataOfYaleUniArray(string fileName,int lengthOfStudentEmailArray,string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string arrayForStudentEmailCheakYale[],int yaleUniversityArray[],int submitFileYale[],int decesionYaleUni[])
{
    char s='#';
    fstream file;
    file.open("YaleUniArrays.txt",ios::out);
    for(int i=0;i<lengthOfStudentEmailArray;i++)
    {

        file<<studentStatusYaleUni[i]<<s<<startTermYale[i]<<s<<admissionPlanYale[i]<<s<<major1Yale[i]<<s<<major2Yale[i]<<s<<siblingAttentedYale[i]<<s<<campusResidenceYale[i]<<s<<memberInfluenceYale[i]<<s<<arrayForStudentEmailCheakYale[i]<<s<<yaleUniversityArray[i]<<s<<submitFileYale[i]<<s<<decesionYaleUni[i]<<endl;
    }
    file.close();

}

void writeDataOfAllvariables(string fileName,string adminUserName,string adminPassword,string uniRepUserName,string uniRepPassword,int lengthOfStudentEmailArray,int lengthOfStudentPasswordArray,int arrayForStudentEmailCheakLengthGeorgia,int arrayForStudentEmailCheakLengthBoston,int arrayForStudentEmailCheakLengthStanford,int arrayForStudentEmailCheakLengthHarvard,int arrayForStudentEmailCheakLengthPrinceton,int arrayForStudentEmailCheakLengthYale,
    int qsRankingGeorgia,int qsRankingBoston,int qsRankingStanford,int qsRankingHarvard,int qsRankingPrinceton,int qsRankingYale,
    int thRankingGeorgia,int thRankingBoston,int thRankingStanford,int thRankingHarvard,int thRankingPrinceton,int thRankingYale)
{
    char s='#';
    fstream file;
    file.open("Variables.txt",ios::out);
    
    file<<adminUserName<<s<<adminPassword<<s<<uniRepUserName<<s<<uniRepPassword<<s<<lengthOfStudentEmailArray<<s<<lengthOfStudentPasswordArray<<s<<arrayForStudentEmailCheakLengthGeorgia<<s<<arrayForStudentEmailCheakLengthBoston<<s<<arrayForStudentEmailCheakLengthStanford<<s<<arrayForStudentEmailCheakLengthHarvard<<s<<arrayForStudentEmailCheakLengthPrinceton<<s<<arrayForStudentEmailCheakLengthYale
    <<s<<qsRankingGeorgia<<s<<qsRankingBoston<<s<<qsRankingStanford<<s<<qsRankingHarvard<<s<<qsRankingPrinceton<<s<<qsRankingYale<<s<<thRankingGeorgia<<s<<thRankingBoston<<s<<thRankingStanford<<s<<thRankingHarvard<<s<<thRankingPrinceton<<s<<thRankingYale;
    
    file.close();

}

/*read data functions*/

void readDataOfAllvariables(string fileName,string adminUserName,string adminPassword,string uniRepUserName,string uniRepPassword,int lengthOfStudentEmailArray,int lengthOfStudentPasswordArray,int arrayForStudentEmailCheakLengthGeorgia,int arrayForStudentEmailCheakLengthBoston,int arrayForStudentEmailCheakLengthStanford,int arrayForStudentEmailCheakLengthHarvard,int arrayForStudentEmailCheakLengthPrinceton,int arrayForStudentEmailCheakLengthYale,
    int qsRankingGeorgia,int qsRankingBoston,int qsRankingStanford,int qsRankingHarvard,int qsRankingPrinceton,int qsRankingYale,
    int thRankingGeorgia,int thRankingBoston,int thRankingStanford,int thRankingHarvard,int thRankingPrinceton,int thRankingYale)
{
    char a='#';
    string record; 
    fstream file;
    file.open("Variables.txt",ios::in);
        for(int i=0;i<1;i++)
        {

        
        getline(file,record);
        if(record=="")
        break;
        
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(record!="")
        {
        if(count!=23) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted ";
            getch();
        }
        }
        adminUserName=getField(record,1);
        adminPassword=getField(record,2);
        uniRepUserName=getField(record,3);
        uniRepPassword=getField(record,4);
        if(getField(record,5)=="")
        {
            lengthOfStudentEmailArray=0;
        }
        else
        {
        lengthOfStudentEmailArray=stoi(getField(record,5));
        }
        if(getField(record,6)=="")
        {
            lengthOfStudentPasswordArray=0;
        }
        else
        {
        lengthOfStudentPasswordArray=stoi(getField(record,6));
        }
        if(getField(record,7)=="")
        {
            arrayForStudentEmailCheakLengthGeorgia=0;
        }
        else
        {
        arrayForStudentEmailCheakLengthGeorgia=stoi(getField(record,7));
        }
        if(getField(record,8)=="")
        {
            arrayForStudentEmailCheakLengthBoston=0;
        }
        else
        {
        arrayForStudentEmailCheakLengthBoston=stoi(getField(record,8));
        }
        if(getField(record,9)=="")
        {
            arrayForStudentEmailCheakLengthStanford=0;
        }
        else
        {
        arrayForStudentEmailCheakLengthStanford=stoi(getField(record,9));
        }
        if(getField(record,10)=="")
        {
            arrayForStudentEmailCheakLengthHarvard=0;
        }
        else
        {
        arrayForStudentEmailCheakLengthHarvard=stoi(getField(record,10));
        }
        if(getField(record,11)=="")
        {
            arrayForStudentEmailCheakLengthPrinceton=0;
        }
        else
        {
        arrayForStudentEmailCheakLengthPrinceton=stoi(getField(record,11));
        }
        if(getField(record,12)=="")
        {
            arrayForStudentEmailCheakLengthYale=0;
        }
        else
        {
        arrayForStudentEmailCheakLengthYale=stoi(getField(record,12));
        }
        if(getField(record,13)=="")
        {
            qsRankingGeorgia=0;
        }
        else
        {
        qsRankingGeorgia=stoi(getField(record,13));
        }
        if(getField(record,14)=="")
        {
            qsRankingBoston=0;
        }
        else
        {
        qsRankingBoston=stoi(getField(record,14));
        }
        if(getField(record,15)=="")
        {
            qsRankingStanford=0;
        }
        else
        {
        qsRankingStanford=stoi(getField(record,15));
        }
        if(getField(record,16)=="")
        {
            qsRankingHarvard=0;
        }
        else
        {
        qsRankingHarvard=stoi(getField(record,16));
        }
        if(getField(record,17)=="")
        {
            qsRankingPrinceton=0;
        }
        else
        {
        qsRankingPrinceton=stoi(getField(record,17));
        }
        if(getField(record,18)=="")
        {
            qsRankingYale=0;
        }
        else
        {
        qsRankingYale=stoi(getField(record,18));
        }
        if(getField(record,19)=="")
        {
            thRankingGeorgia=0;
        }
        else
        {
        thRankingGeorgia=stoi(getField(record,19));
        }
        if(getField(record,20)=="")
        {
            thRankingBoston=0;
        }
        else
        {
        thRankingBoston=stoi(getField(record,20));
        }
        if(getField(record,21)=="")
        {
            thRankingStanford=0;
        }
        else
        {
        thRankingStanford=stoi(getField(record,21));
        }
        if(getField(record,22)=="")
        {
            thRankingHarvard=0;
        }
        else
        {
        thRankingHarvard=stoi(getField(record,22));
        }
        if(getField(record,23)=="")
        {
            thRankingPrinceton=0;
        }
        else
        {
        thRankingPrinceton=stoi(getField(record,23));
        }
        if(getField(record,24)=="")
        {
            thRankingYale=0;
        }
        else
        {
        thRankingYale=stoi(getField(record,24));
        }
        }
file.close();
}








void readDataForStudentBioData(string fileName,string studentEmail[],string studentPassword[],string studentFeedbackArray[],string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[], string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[])
{
    char a='#';
    string record; 
    int i=0;
    fstream file;
    file.open("StudentBioData.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=25) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted 1";
            getch();
            break;
        }
        
        studentEmail[i]=getField(record,1);
        if(validateEmail(studentEmail[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 2";
            getch();
            break;

        }
        studentPassword[i]=getField(record,2);
        studentFeedbackArray[i]=getField(record,3);
        studentName[i]=getField(record,4);
        if(Alphabets(studentName[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 3";
            getch();
            break;
        }
        dOB[i]=getField(record,5);
        phoneNumber[i]=getField(record,6);
        if(cheakforDigit(phoneNumber[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 4";
            getch();
            break;
        }

        address[i]=getField(record,7);
        birthCountry[i]=getField(record,8);
        if(Alphabets(birthCountry[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 5";
            getch();
            break;
        }
        visaType[i]=getField(record,9);
        
        motherName[i]=getField(record,10);
        if(Alphabets(motherName[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 7";
            getch();
            break;
        }
        motherPhone[i]=getField(record,11);
        if(cheakforDigit(motherPhone[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 8";
            getch();
            break;
        }
        motherOccupation[i]=getField(record,12);
        if(Alphabets(motherOccupation[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 9";
            getch();
            break;
        }

        fatherName[i]=getField(record,13);
        if(Alphabets(fatherName[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 10";
            getch();
            break;
        }
        fatherPhone[i]=getField(record,14);
        if(cheakforDigit(fatherPhone[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 11";
            getch();
            break;
        }
        fatherOccupation[i]=getField(record,15);
        if(Alphabets(fatherOccupation[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 12";
            getch();
            break;
        }
        highSchool[i]=getField(record,16);
        if(Alphabets(highSchool[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 13";
            getch();
            break;
        }
        OlevelGrades[i]=getField(record,17);
        AlevelGrades[i]=getField(record,18);
        satScore[i]=getField(record,19);
        if(cheakforDigit(satScore[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted 14";
            getch();
            break;
        }
        act1[i]=getField(record,20);
        act2[i]=getField(record,21);
        act3[i]=getField(record,22);
        act4[i]=getField(record,23);
        act5[i]=getField(record,24);
        personalStatementType[i]=getField(record,25);
        personalStatement[i]=getField(record,26);

        i++;
    }
    file.close();
}



void readDataForStudentFinancialInfoData(string fileName,int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[])
{
    char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("StudentFinancialData.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=8) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        scholarship1[i]=stoi(getField(record,1));
        if(scholarship1[i]!=1 && scholarship1[i]!=0 && scholarship1[i]!=-1 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of scholarship 1 data";
            getch();
            break;

        }
        scholarship2[i]=stoi(getField(record,2));
        if(scholarship2[i]!=1 && scholarship2[i]!=0 && scholarship2[i]!=-1 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of scholarship 1 data";
            getch();
            break;

        }
        financialAidName[i]=getField(record,3);
        if(Alphabets(financialAidName[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid financial aid name data in row number"<<i;
            getch();
            break;
        }
        totalFamilyIncome[i]=getField(record,4);
        if(cheakforDigit(totalFamilyIncome[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted  Invalid data entered for total family income in row"<<i;
            getch();
            break;
        }
        householdMembers[i]=getField(record,5);
        if(cheakforDigit(householdMembers[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid data entered for household members in row"<<i;
            getch();
            break;
        }
        householdExpense[i]=getField(record,6);
        if(cheakforDigit(householdExpense[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid data entered for household expense in row"<<i;
            getch();
            break;
        }
        educationalExpense[i]=getField(record,7);
        if(cheakforDigit(educationalExpense[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid data entered for educatonal expense in row"<<i;;
            getch();
            break;
        }
        tax[i]=getField(record,8);
        if(cheakforDigit(tax[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid data entered for tax in row"<<i;;
            getch();
            break;
        }
        previousScholarshipDetail[i]=getField(record,9);
        
        i++;
        
    }
    file.close();

}

void readDataOfGeorgiaUniArray(string fileName,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string arrayForStudentEmailCheakGeorgia[],int georgiaStateUniArray[],int submitFileGeorgia[],int decesionGeorgiaUni[])
{
    char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("GeorgiaUniArrays.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=11) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        studentStatusGeorgiaUni[i]=getField(record,1);
        if(Alphabets(studentStatusGeorgiaUni[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid student status data in row number"<<i;
            getch();
            break;
        }
        startTermGeorgia[i]=getField(record,2);
        admissionPlanGeorgia[i]=getField(record,3);
        if(Alphabets(admissionPlanGeorgia[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid admission plan data in row number"<<i;
            getch();
            break;
        }
        major1Georgia[i]=getField(record,4);
        if(Alphabets(major1Georgia[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 1 data in row number"<<i;
            getch();
            break;
        }
        major2Georgia[i]=getField(record,5);
        if(Alphabets(major2Georgia[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 2 data in row number"<<i;
            getch();
            break;
        }
        siblingAttentedGeorgia[i]=getField(record,6);
        if(Alphabets(siblingAttentedGeorgia[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid  data in row number"<<i;
            getch();
            break;
        }
        learnedAboutGeorgia[i]=getField(record,7);
        arrayForStudentEmailCheakGeorgia[i]=getField(record,8);
        
        if((getField(record,9))=="")
        {
            georgiaStateUniArray[i]=0;
        }
        else{
        georgiaStateUniArray[i]=stoi(getField(record,9));
        }
        if(georgiaStateUniArray[i]!=1 && georgiaStateUniArray[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of georgiaStateUniArray data in row"<<i;
            getch();
            break;

        }
        if((getField(record,10))=="")
        {
           submitFileGeorgia[i]=0;
        }
        else{

        submitFileGeorgia[i]=stoi(getField(record,10));
        }
        if(submitFileGeorgia[i]!=1 && submitFileGeorgia[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of submitFileGeorgia data in row"<<i;
            getch();
            break;

        }
        if((getField(record,11))=="")
        {
           decesionGeorgiaUni[i]=0;
        }
        else{
        
        decesionGeorgiaUni[i]=stoi(getField(record,11));
        }
        if(decesionGeorgiaUni[i]!=1 && decesionGeorgiaUni[i]!=0  && decesionGeorgiaUni[i]!=-1)
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of decesionGeorgiaUni data in row"<<i;
            getch();
            break;

        }

        
    i++;  

    }
    file.close();

}

void readDataOfBostonUniArray(string fileName,string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string arrayForStudentEmailCheakBoston[],int bostonUniversityArray[],int submitFileBoston[],int decesionBostonUni[])
{
     char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("BostonUniArrays.txt",ios::in);
    
    
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=11) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        studentStatusBostonUni[i]=getField(record,1);
        if(Alphabets(studentStatusBostonUni[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid student status data in row number"<<i;
            getch();
            break;
        }
        startTermBoston[i]=getField(record,2);
        admissionPlanBoston[i]=getField(record,3);
        if(Alphabets(admissionPlanBoston[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid admission plan data in row number"<<i;
            getch();
            break;
        }
        major1Boston[i]=getField(record,4);
        if(Alphabets(major1Boston[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 1 data in row number"<<i;
            getch();
            break;
        }
        major2Boston[i]=getField(record,5);
        if(Alphabets(major2Boston[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 2 data in row number"<<i;
            getch();
            break;
        }
        siblingAttentedBoston[i]=getField(record,6);
        if(Alphabets(siblingAttentedBoston[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid  data in row number"<<i;
            getch();
            break;
        }
        whyBoston[i]=getField(record,7);
        arrayForStudentEmailCheakBoston[i]=getField(record,8);
        if((getField(record,9))=="")
        {
            bostonUniversityArray[i]=0;
        }
        else{
        bostonUniversityArray[i]=stoi(getField(record,9));
        }
        if(bostonUniversityArray[i]!=1 && bostonUniversityArray[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of BostonStateUniArray data in row"<<i;
            getch();
            break;

        }
        if((getField(record,10))=="")
        {
            submitFileBoston[i]=0;
        }
        else{
        submitFileBoston[i]=stoi(getField(record,10));
        }
        if(submitFileBoston[i]!=1 && submitFileBoston[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of submitFileBoston data in row"<<i;
            getch();
            break;

        }
        if((getField(record,11))=="")
        {
            decesionBostonUni[i]=0;
        }
        else{
        decesionBostonUni[i]=stoi(getField(record,11));
        }
        if(decesionBostonUni[i]!=1 && decesionBostonUni[i]!=0  && decesionBostonUni[i]!=-1)
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of decesionGeorgiaUni data in row"<<i;
            getch();
            break;

        }

        
    i++;  

    }
    file.close();

}

void readDataOfStanfordUniArray(string fileName,string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[],string arrayForStudentEmailCheakStanford[],int stanfordUniversityArray[],int submitFileStanford[],int decesionStanfordUni[])
{
     char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("StanfordUniArrays.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=11) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        studentStatusStanfordUni[i]=getField(record,1);
        if(Alphabets(studentStatusStanfordUni[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid student status data in row number"<<i;
            getch();
            break;
        }
        startTermStanford[i]=getField(record,2);
        admissionPlanStanford[i]=getField(record,3);
        if(Alphabets(admissionPlanStanford[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid admission plan data in row number"<<i;
            getch();
            break;
        }
        major1Stanford[i]=getField(record,4);
        if(Alphabets(major1Stanford[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 1 data in row number"<<i;
            getch();
            break;
        }
        major2Stanford[i]=getField(record,5);
        if(Alphabets(major2Stanford[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 2 data in row number"<<i;
            getch();
            break;
        }
        siblingAttentedStanford[i]=getField(record,6);
        if(Alphabets(siblingAttentedStanford[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid  data in row number"<<i;
            getch();
            break;
        }
        whyThisMajorStanford[i]=getField(record,7);
        arrayForStudentEmailCheakStanford[i]=getField(record,8);
        stanfordUniversityArray[i]=stoi(getField(record,9));
        if(stanfordUniversityArray[i]!=1 && stanfordUniversityArray[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of StanfordStateUniArray data in row"<<i;
            getch();
            break;

        }
        submitFileStanford[i]=stoi(getField(record,10));
        if(submitFileStanford[i]!=1 && submitFileStanford[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of submitFileStanford data in row"<<i;
            getch();
            break;

        }
        decesionStanfordUni[i]=stoi(getField(record,11));
        if(decesionStanfordUni[i]!=1 && decesionStanfordUni[i]!=0  && decesionStanfordUni[i]!=-1)
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of decesionStanfordUni data in row"<<i;
            getch();
            break;

        }

        
    i++;  

    }
    file.close();

}

void readDataOfHarvardUniArray(string fileName,string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string arrayForStudentEmailCheakHarvard[],int harvardUniversityArray[],int submitFileHarvard[],int decesionHarvardUni[])
{
    char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("HarvardUniArrays.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=11) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        studentStatusHarvardUni[i]=getField(record,1);
        if(Alphabets(studentStatusHarvardUni[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid student status data in row number"<<i;
            getch();
            break;
        }
        startTermHarvard[i]=getField(record,2);
        admissionPlanHarvard[i]=getField(record,3);
        if(Alphabets(admissionPlanHarvard[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid admission plan data in row number"<<i;
            getch();
            break;
        }
        major1Harvard[i]=getField(record,4);
        if(Alphabets(major1Harvard[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 1 data in row number"<<i;
            getch();
            break;
        }
        major2Harvard[i]=getField(record,5);
        if(Alphabets(major2Harvard[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 2 data in row number"<<i;
            getch();
            break;
        }
        siblingAttentedHarvard[i]=getField(record,6);
        if(Alphabets(siblingAttentedHarvard[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid  data in row number"<<i;
            getch();
            break;
        }
        briefExperienceHarvard[i]=getField(record,7);
        arrayForStudentEmailCheakHarvard[i]=getField(record,8);
        harvardUniversityArray[i]=stoi(getField(record,9));
        if(harvardUniversityArray[i]!=1 && harvardUniversityArray[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of HarvardStateUniArray data in row"<<i;
            getch();
            break;

        }
        submitFileHarvard[i]=stoi(getField(record,10));
        if(submitFileHarvard[i]!=1 && submitFileHarvard[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of submitFileHarvard data in row"<<i;
            getch();
            break;

        }
        decesionHarvardUni[i]=stoi(getField(record,11));
        if(decesionHarvardUni[i]!=1 && decesionHarvardUni[i]!=0  && decesionHarvardUni[i]!=-1)
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of decesionHarvardUni data in row"<<i;
            getch();
            break;

        }

        
    i++;  

    }
    file.close();

}
void readDataOfPrincetonUniArray(string fileName,string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],string arrayForStudentEmailCheakPrinceton[],int princetonUniversityArray[],int submitFilePrinceton[],int decesionPrincetonUni[])
{
    char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("PrincetonUniArrays.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=11) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        studentStatusPrincetonUni[i]=getField(record,1);
        if(Alphabets(studentStatusPrincetonUni[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid student status data in row number"<<i;
            getch();
            break;
        }
        startTermPrinceton[i]=getField(record,2);
        admissionPlanPrinceton[i]=getField(record,3);
        if(Alphabets(admissionPlanPrinceton[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid admission plan data in row number"<<i;
            getch();
            break;
        }
        major1Princeton[i]=getField(record,4);
        if(Alphabets(major1Princeton[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 1 data in row number"<<i;
            getch();
            break;
        }
        major2Princeton[i]=getField(record,5);
        if(Alphabets(major2Princeton[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 2 data in row number"<<i;
            getch();
            break;
        }
        siblingAttentedPrinceton[i]=getField(record,6);
        if(Alphabets(siblingAttentedPrinceton[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid  data in row number"<<i;
            getch();
            break;
        }
        newSkillPrinceton[i]=getField(record,7);
        arrayForStudentEmailCheakPrinceton[i]=getField(record,8);
        princetonUniversityArray[i]=stoi(getField(record,9));
        if(princetonUniversityArray[i]!=1 && princetonUniversityArray[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of PrincetonStateUniArray data in row"<<i;
            getch();
            break;

        }
        submitFilePrinceton[i]=stoi(getField(record,10));
        if(submitFilePrinceton[i]!=1 && submitFilePrinceton[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of submitFilePrinceton data in row"<<i;
            getch();
            break;

        }
        decesionPrincetonUni[i]=stoi(getField(record,11));
        if(decesionPrincetonUni[i]!=1 && decesionPrincetonUni[i]!=0  && decesionPrincetonUni[i]!=-1)
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of decesionPrincetonUni data in row"<<i;
            getch();
            break;

        }

        
    i++;  

    }
    file.close();

}
void readDataOfYaleUniArray(string fileName,string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string arrayForStudentEmailCheakYale[],int yaleUniversityArray[],int submitFileYale[],int decesionYaleUni[])
{
    char s='#';
    int i=0;
    string record="";
    fstream file;
    file.open("YaleUniArrays.txt",ios::in);
    while(!(file.eof()))
    {
        getline(file,record);
        if  (record=="")  /*Validtion for empty record*/
        {
            break;
        }
        int count=0;
        for(int i=0;record[i]!='\0';i++)   /*Validation for correct number of separators*/
        {
            if (record[i]=='#')
            {
                count++;
            }
        }
        if(count!=11) /*Validation for correct number of separators*/
        {
            system("cls");
            cout<<"Data is corrupted Invalid number of separators";
            getch();
            break;
        }
        studentStatusYaleUni[i]=getField(record,1);
        if(Alphabets(studentStatusYaleUni[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid student status data in row number"<<i;
            getch();
            break;
        }
        startTermYale[i]=getField(record,2);
        admissionPlanYale[i]=getField(record,3);
        if(Alphabets(admissionPlanYale[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid admission plan data in row number"<<i;
            getch();
            break;
        }
        major1Yale[i]=getField(record,4);
        if(Alphabets(major1Yale[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 1 data in row number"<<i;
            getch();
            break;
        }
        major2Yale[i]=getField(record,5);
        if(Alphabets(major2Yale[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid major 2 data in row number"<<i;
            getch();
            break;
        }
        siblingAttentedYale[i]=getField(record,6);
        if(Alphabets(siblingAttentedYale[i])==false)
        {
            system("cls");
            cout<<"Data is corrupted Invalid  data in row number"<<i;
            getch();
            break;
        }
        memberInfluenceYale[i]=getField(record,7);
        arrayForStudentEmailCheakYale[i]=getField(record,8);
        yaleUniversityArray[i]=stoi(getField(record,9));
        if(yaleUniversityArray[i]!=1 && yaleUniversityArray[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of YaleStateUniArray data in row"<<i;
            getch();
            break;

        }
        submitFileYale[i]=stoi(getField(record,10));
        if(submitFileYale[i]!=1 && submitFileYale[i]!=0 )
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of submitFileYale data in row"<<i;
            getch();
            break;

        }
        decesionYaleUni[i]=stoi(getField(record,11));
        if(decesionYaleUni[i]!=1 && decesionYaleUni[i]!=0  && decesionYaleUni[i]!=-1)
        {
            system("cls");
            cout<<"Data is corrupted Invalid input of decesionYaleUni data in row"<<i;
            getch();
            break;

        }

        
    i++;  

    }
    file.close();
}


string getField(string record, int field)
{
int commaCount = 1;
string item;
for (int x = 0; x < record.length(); x++)
{
if (record[x] == '#')
{
commaCount = commaCount + 1;
}
else if (commaCount == field)
{
item = item + record[x];
}
}
return item;
}

void mainmenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          1.) Sign In..                                                                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          2.) Sign Up..                                                                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          3.) Log Out..                                                                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter option to continue..                                                      ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}



void signUpMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             Sign Up As:                                                                  ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             1.) Administrator..                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             2.) Student..                                                                ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             3.) College Representatives..                                                ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             Enter option to continue..                                                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}



void studentSignup()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###                                                                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                        Student                                           ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter Email:                                                                    ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter Password(Password must be greater than8 characters, and it should         ||                      ##             ###"<<endl;
cout<<"###             ##                ||          contain atleast one capital letter, one digit, and one special character. ):    ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Confirm Password:                                                               ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);



}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

bool cheakPassword(string str)
{
    bool cheakforspecialcharacter=false,cheakforcapitalletter=false,cheakfordigit=false,valid=false,len=false,cheakForSpace=true;
    for(int i=0;str[i]!='\0';i++)
    {
        if (isupper(str[i]))
        cheakforcapitalletter=true;
        else if(isdigit(str[i]))
        cheakfordigit=true;
        else if(isalnum(str[i]))
        cheakforspecialcharacter=true;
        if (str[i]==' ')
        {
            cheakForSpace=false;
        }
        

    }
    if (str.length()>=8)
    len=true;
    if (cheakforcapitalletter==true && cheakfordigit==true && cheakforspecialcharacter==true && len==true && cheakForSpace==true)
    valid=true;
    return valid;
}

bool validateEmail(string str)
{
    bool cheakForatTheGate=false,cheakForCom=false,cheakForSpace=true,valid=false;
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]=='@')
        {
            cheakForatTheGate=true;
        }
    }
    
    int pos1=str.length(),pos2=str.length()-1,pos3=str.length()-2,pos4=str.length()-3;
    if(str[pos1]=='m' && str[pos2]=='o' && str[pos3]=='c' && str[pos4]=='.')
    {
        cheakForCom=true;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            cheakForSpace=false;
        }
    }
    if(cheakForatTheGate==true  && cheakForSpace==true)
    {
        valid=true;
    }
return valid;

}

void signInMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             Sign In As:                                                                  ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             1.) Administrator..                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             2.) Student..                                                                ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             3.) College Representatives..                                                ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             Enter option to continue..                                                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}


void studentSignIn()
{

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                        Student                                           ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter Email:                                                                    ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter Password:                                                                 ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

}

void studentmenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                    Student ID:                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||              1.) Dashboard                ||           2.) University Questions          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||ooooooooooooooooooooooooooooooooooooooooooo||ooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||       3.) SwiftAdmit Nexus Questions      ||           4.) University Search             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||ooooooooooooooooooooooooooooooooooooooooooo||ooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||            5.) Financial Aid              ||           6.) Provide FeedBack              ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||ooooooooooooooooooooooooooooooooooooooooooo||ooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||            7.) Delete Bio Data            ||               8.) Log Out                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                           ||                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                      Enter option to continue..                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void deleteDataMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                         Delete Data                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##        Do You Want To Delete Your Bio Data Before Submitting File, Which Includes Your:                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Name                                                                                                              ##             ###"<<endl;
cout<<"###             ##       2. Date Of Birth                                                                                                             ##             ###"<<endl;
cout<<"###             ##       3. Birth Country                                                                                                             ##             ###"<<endl;
cout<<"###             ##       4. Address                                                                                                                   ##             ###"<<endl;
cout<<"###             ##       5. Phone Number                                                                                                              ##             ###"<<endl;
cout<<"###             ##       6. Visa Type                                                                                                                 ##             ###"<<endl;
cout<<"###             ##       7. Mother Name                                                                                                               ##             ###"<<endl;
cout<<"###             ##       8. Mother Phone Number                                                                                                       ##             ###"<<endl;
cout<<"###             ##       9. Mother Occupation                                                                                                         ##             ###"<<endl;
cout<<"###             ##       10. Father Name                                                                                                              ##             ###"<<endl;
cout<<"###             ##       11. Father Phone Number                                                                                                      ##             ###"<<endl;
cout<<"###             ##       12. Father Occupation                                                                                                        ##             ###"<<endl;
cout<<"###             ##       13. High School                                                                                                              ##             ###"<<endl;
cout<<"###             ##       14. Olevel Grades                                                                                                            ##             ###"<<endl;
cout<<"###             ##       15. Alevel Grades                                                                                                            ##             ###"<<endl;
cout<<"###             ##       16. Your Extra Curricular Activities                                                                                         ##             ###"<<endl;
cout<<"###             ##       17. Your Personal Statement                                                                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void deleteDataFunction(int studentPosition,string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[]
,int submitFileGeorgia[],int submitFileBoston[],int submitFileStanford[],int submitFileHarvard[],int submitFilePrinceton[],int submitFileYale[],int submitFileNewyork[],int submitFileColumbia[],int submitFileCornell[],int submitFileCalifornia[],int submitFileBrown[],int submitFileMichigan[],int submitFileDartmouth[],int submitFileFlorida[],
int submitFilePennsylvania[])
{
    while(true)
    {
    system("cls");
    deleteDataMenu();
    gotoxy(107,17);
    string askForDelete="";
    cin>>askForDelete;
    while(askForDelete!="Yes" && askForDelete!="yes" && askForDelete!="No" && askForDelete!="no")
    {
        gotoxy(107,17);
        cout<<"         ";
        gotoxy(107,17);
        cin>>askForDelete;
        if(askForDelete=="Yes" || askForDelete=="yes" || askForDelete=="No" || askForDelete=="no")
        {
            break;
        }
    }
    if(askForDelete=="yes" || askForDelete=="Yes") 
    {
        gotoxy(25,37);
        cout<<"Are you sure you want to delete all your data:";
        gotoxy(72,37);
        string askForDeleteAgain="";
        cin>>askForDeleteAgain;
        while(askForDeleteAgain!="Yes" && askForDeleteAgain!="yes" && askForDeleteAgain!="No" && askForDeleteAgain!="no")
        {
        gotoxy(72,37);
        cout<<"         ";
        gotoxy(72,37);
        cin>>askForDeleteAgain;
        if(askForDeleteAgain=="Yes" || askForDeleteAgain=="yes" || askForDeleteAgain=="No" || askForDeleteAgain=="no")
        {
            break;
        }
        }
        if(askForDeleteAgain=="yes" || askForDeleteAgain=="Yes")
        {
            if(submitFileGeorgia[studentPosition]==0 && submitFileBoston[studentPosition]==0 && submitFileStanford[studentPosition]==0 && submitFileHarvard[studentPosition]==0 && submitFilePrinceton[studentPosition]==0 &&
            submitFileYale[studentPosition]==0 && submitFileNewyork[studentPosition]==0 && submitFileColumbia[studentPosition]==0 && submitFileCornell[studentPosition]==0 && submitFileCalifornia[studentPosition]==0 && submitFileBrown[studentPosition]==0 && submitFileMichigan[studentPosition]==0 && submitFileDartmouth[studentPosition]==0 && submitFileFlorida[studentPosition]==0 &&
            submitFilePennsylvania[studentPosition]==0)
            {
                studentName[studentPosition]="", dOB[studentPosition]="", phoneNumber[studentPosition]="", address[studentPosition]="",birthCountry[studentPosition]="",visaType[studentPosition]="",motherName[studentPosition]="",motherOccupation[studentPosition]="",motherPhone[studentPosition]="",fatherName[studentPosition]="",fatherOccupation[studentPosition]="",fatherPhone[studentPosition]="",highSchool[studentPosition]="",
                OlevelGrades[studentPosition]="",AlevelGrades[studentPosition]="",satScore[studentPosition]="",act1[studentPosition]="",act2[studentPosition]="",act3[studentPosition]="",act4[studentPosition]="",act5[studentPosition]="",personalStatementType[studentPosition]="",personalStatement[studentPosition]="";

                gotoxy(25,39);
                cout<<"Data Deleted,press any key to go back:";
                getch();
                break;
            }
            else
            {
                gotoxy(25,39);
                cout<<"You have already submitted Your File to some University, cannot delete Data,press any key to go back:";
                getch();
                break;
            }
        }
        else 
        {
            break;
        }

    }
    else
    {
        break;
    }
    }

}

void studentFeedbackMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                           Student                                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##        Please provide feedback regarding this app: (Less than 500 words)                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

bool cheakDuplicateEmail(string array[],int size,string emailEntered)
{
    bool cheakForDublicateEmail=true;
    for(int i=size;i>=0;i--)
    {
        if (array[i]==emailEntered)
            cheakForDublicateEmail=false;
    }
    return cheakForDublicateEmail;
        
}
/*search college  function in which when user search a specific university its whole data is showed to the user*/
void searchCollege(int qsRankingGeorgia,int qsRankingBoston,int qsRankingStanford,int qsRankingHarvard,int qsRankingPrinceton,int qsRankingYale,int qsRankingNewyork,int qsRankingColumbia,int qsRankingCornell,int qsRankingCalifornia,int qsRankingBrown,int qsRankingMichigan,int qsRankingDartmouth,int qsRankingFlorida,int qsRankingPennsylvania,
    int thRankingGeorgia,int thRankingBoston,int thRankingStanford,int thRankingHarvard,int thRankingPrinceton,int thRankingYale,int thRankingNewyork,int thRankingColumbia,int thRankingCornell,int thRankingCalifornia,int thRankingBrown,int thRankingMichigan,int thRankingDartmouth,int thRankingFlorida,int thRankingPennsylvania,string universitysearch,
    int georgiaStateUniArray[],int pennsylvaniaUniversityArray[],int floridaUniversityArray[],int dartmouthCollegeArray[],int michiganUniversityArray[],int brownUniversityArray[],int UniOfCaliforniaArray[],int cornellUniversityArray[],int columbiaUniversityArray[],int nyuUniversityArray[],int yaleUniversityArray[],int princetonUniversityArray[],int bostonUniversityArray[],int stanfordUniversityArray[],
    int harvardUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{   

    if (universitysearch=="Georgia" || universitysearch=="georgia")
    {
       georgiaStateUni(qsRankingGeorgia,thRankingGeorgia, georgiaStateUniArray, studentPosition,addedUniversityarraySize,currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="Boston" || universitysearch=="boston")
    {
        bostonUniversity(qsRankingBoston,thRankingBoston, bostonUniversityArray,studentPosition,addedUniversityarraySize, currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="Stanford" || universitysearch=="stanford")
    {
        stanfordUniversity(qsRankingStanford,thRankingStanford, stanfordUniversityArray,studentPosition,addedUniversityarraySize,currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="Harvard" || universitysearch=="harvard") 
    {
        harvardUniversity(qsRankingHarvard,thRankingHarvard, harvardUniversityArray,studentPosition,addedUniversityarraySize,currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="princeton" || universitysearch=="Princeton") 
    {
        princetonUniversity(qsRankingPrinceton,thRankingPrinceton, princetonUniversityArray,studentPosition,addedUniversityarraySize,currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="Yale" || universitysearch=="yale") 
    {
        yaleUniversity(qsRankingYale,thRankingYale, yaleUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize, addedUniversityArray);
    }
    else if (universitysearch=="Newyork" || universitysearch=="newyork") 
    {
        nyuUniversity(qsRankingNewyork,thRankingNewyork, nyuUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="Columbia" || universitysearch=="columbia") 
    {
        columbiaUniversity(qsRankingColumbia,thRankingColumbia, columbiaUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize, addedUniversityArray);
    }
    else if (universitysearch=="Cornell" || universitysearch=="cornell") 
    {
        cornellUniversity(qsRankingCornell,thRankingCornell, cornellUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="California" || universitysearch=="california") 
    {
        californiaUniversity(qsRankingCalifornia,thRankingCalifornia, UniOfCaliforniaArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize, addedUniversityArray);
    }
    else if (universitysearch=="Brown" || universitysearch=="brown") 
    {
        brownUniversity(qsRankingBrown,thRankingBrown, brownUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize, addedUniversityArray);
    }
    else if (universitysearch=="Michigan" || universitysearch=="michigan") 
    {
        michiganUniversity(qsRankingMichigan,thRankingMichigan, michiganUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize, addedUniversityArray);
    }
    else if (universitysearch=="Dartmouth" || universitysearch=="dartmouth") 
    {
        dartmouthUniversity(qsRankingDartmouth,thRankingDartmouth, dartmouthCollegeArray, studentPosition,addedUniversityarraySize, currentaddedUniversityarraySize,addedUniversityArray);
    }
    else if (universitysearch=="florida" || universitysearch=="Florida") 
    {
        floridaUniversity(qsRankingFlorida,thRankingFlorida, floridaUniversityArray, studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize, addedUniversityArray);
    }
    else if (universitysearch=="pennsylvania" || universitysearch=="Pennsylvania") 
    {
        pennsylvaniaUniversity(qsRankingPennsylvania,thRankingPennsylvania, pennsylvaniaUniversityArray,studentPosition, addedUniversityarraySize, currentaddedUniversityarraySize,addedUniversityArray);
    }


    else{
        gotoxy(70,27);
        cout<<"This university is not supported by this app";
        getch();
        }


}


void collegesearchmenu()  
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     Search Universities                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Universities:                                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Georgia State University                                                                                                   ##             ###"<<endl;
cout<<"###             ##      2. Boston University                                                                                                          ##             ###"<<endl;
cout<<"###             ##      3. Stanford University                                                                                                        ##             ###"<<endl;
cout<<"###             ##      4. Harvard University                                                                                                         ##             ###"<<endl;
cout<<"###             ##      5. Princeton University                                                                                                       ##             ###"<<endl;
cout<<"###             ##      6. Yale University                                                                                                            ##             ###"<<endl;
cout<<"###             ##      7. Newyork University                                                                                                         ##             ###"<<endl;
cout<<"###             ##      8. Columbia University                                                                                                        ##             ###"<<endl;
cout<<"###             ##      9. Cornell University                                                                                                         ##             ###"<<endl;
cout<<"###             ##      10. University Of Caliornia                                                                                                   ##             ###"<<endl;
cout<<"###             ##      11. Brown University                                                                                                          ##             ###"<<endl;
cout<<"###             ##      12. Michigan University                                                                                                       ##             ###"<<endl;
cout<<"###             ##      13. Dartmouth College                                                                                                         ##             ###"<<endl;
cout<<"###             ##      14. University Of Florida                                                                                                     ##             ###"<<endl;
cout<<"###             ##      15. University Of Pennsylvania                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


void infoAlreadyEnteredMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###                                                                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}






void studentProfileMenu()    
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     SwiftAdmit Questions                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                         ===Profile===                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##         1. Enter Your Full Name:                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##         2. Enter Your Date Of Birth(dd\\mm\\yyyy):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##         3. Enter Your Birth Country:                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##         4. Enter Your Address:                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##         5. Enter Your Phone Number:                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##         6. Enter Your Visa Type, F1 or B1:                                                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

/*function which collects the biodata of students*/
void studentProfileQuestions(int studentPosition,string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[])
{
    gotoxy(52,19);
    cin.ignore();
    getline(cin,studentName[studentPosition]);
    while(Alphabets(studentName[studentPosition])==false )
    {
        gotoxy(35,20);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,20);
        cout<<"                                                  ";
        gotoxy(63,20);
        getline(cin,studentName[studentPosition]);
        if (Alphabets(studentName[studentPosition]))
        break;

    }
    gotoxy(69,22);
    getline(cin,dOB[studentPosition]);
    while(checkForDateFormat(dOB[studentPosition]) )
    {
        gotoxy(35,23);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,23);
        getline(cin,dOB[studentPosition]);
        if (checkForDateFormat(dOB[studentPosition])==false)
        break;

    }
    gotoxy(56,25);
    getline(cin,birthCountry[studentPosition]);
    while(Alphabets(birthCountry[studentPosition])==false)
    {
        gotoxy(35,26);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,26);
        cout<<"                                                          ";
        gotoxy(63,26);
        getline(cin,birthCountry[studentPosition]);
        if (Alphabets(birthCountry[studentPosition]) )
        break;

    }
    gotoxy(51,28);
    getline(cin,address[studentPosition]);
    
    gotoxy(55,31);
    getline(cin,phoneNumber[studentPosition]);
    while(cheakforDigit(phoneNumber[studentPosition])==false)
    {
        gotoxy(35,32);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,32);
        cout<<"                                     "; 
        gotoxy(63,32);
        getline(cin,phoneNumber[studentPosition]);
        if (cheakforDigit(phoneNumber[studentPosition]) )
        break;

    }
    gotoxy(63,34);
    getline(cin,visaType[studentPosition]);
    while(visaType[studentPosition]!="F1" && visaType[studentPosition]!="B1")
    {
        gotoxy(35,35);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,35);
        cout<<"                             ";
        gotoxy(63,35);
        getline(cin,visaType[studentPosition]);
        if (visaType[studentPosition]=="F1" || visaType[studentPosition]=="B1")
        break;

    }
    gotoxy(25,40);
    cout<<"You have submitted all information in this section, press any key to go to next section:";
    gotoxy(113,40);
    getch();

}
/*function which collects the biodata of students*/
void studentHouseholdMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     SwiftAdmit Questions                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                        ===HouseHold===                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Mother's Information                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##              1. Mother's Name:                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##              2. Mother's Phone Number:                                                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##              3. Mother's Occupation:                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Father's Information                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##              1. Father's Name:                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##              2. Father's Phone Number:                                                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##              3. Father's Occupation:                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*function which collects the biodata of students*/
void houseHoldQuestions(int studentPosition,string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[])
{
    gotoxy(50,18);
    getline(cin,motherName[studentPosition]);
    while(Alphabets(motherName[studentPosition])==false)
    {
        gotoxy(35,19);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,19);
        cout<<"                                                    ";
        gotoxy(63,19);
        getline(cin,motherName[studentPosition]);
        if (Alphabets(motherName[studentPosition]) )
        break;

    }
    gotoxy(58,21);
    getline(cin,motherPhone[studentPosition]);
    while(cheakforDigit(motherPhone[studentPosition])==false )
    {
        gotoxy(35,22);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,22);
        cout<<"                                       ";
        gotoxy(63,22);
        getline(cin,motherPhone[studentPosition]);
        if (cheakforDigit(motherPhone[studentPosition]))
        break;

    }
    gotoxy(56,24);
    getline(cin,motherOccupation[studentPosition]);
    while(Alphabets(motherOccupation[studentPosition])==false)
    {
        gotoxy(35,25);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,25);
        cout<<"                                      ";
        gotoxy(63,25);
        getline(cin,motherOccupation[studentPosition]);
        if (Alphabets(motherOccupation[studentPosition]))
        break;

    }
    gotoxy(50,30);
    getline(cin,fatherName[studentPosition]);
    while(Alphabets(fatherName[studentPosition])==false)
    {
        gotoxy(35,31);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,31);
        cout<< "                                               ";
        gotoxy(63,31);
        getline(cin,fatherName[studentPosition]);
        if (Alphabets(fatherName[studentPosition]))
        break;

    }
    gotoxy(58,33);
    getline(cin,fatherPhone[studentPosition]);
    while(cheakforDigit(fatherPhone[studentPosition])==false)
    {
        gotoxy(35,34);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,34);
        cout<<"                                     ";
        gotoxy(63,34);
        getline(cin,fatherPhone[studentPosition]);
        if (cheakforDigit(fatherPhone[studentPosition]))
        break;

    }
    gotoxy(56,36);
    getline(cin,fatherOccupation[studentPosition]);
    while(Alphabets(fatherOccupation[studentPosition])==false)
    {
        gotoxy(35,37);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,37);
        cout<<"                                                   ";
        gotoxy(63,37);
        getline(cin,fatherOccupation[studentPosition]);
        if (Alphabets(fatherOccupation[studentPosition]))
        break;

    }
    gotoxy(25,40);
    cout<<"You have submitted all information in this section, press any key to go to next section:";
    gotoxy(113,40);
    getch();

}
/*function which collects the biodata of students*/
void studentEducationMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     SwiftAdmit Questions                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       ===Education===                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           1. Current or most recent secondary/high school:                                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           2. O-level grades (Enter the subjects in which you appeared and the grade scored in that subject)                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           3. A-level grades (Enter the subjects in which you appeared and the grade scored in that subject)                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           4. SAT Score:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*function which collects the biodata of students*/
void studentEducationQuestions(int studentPosition,string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[])
{
    gotoxy(83,19);
    getline(cin,highSchool[studentPosition]);
    while(Alphabets(highSchool[studentPosition])==false)
    {
        gotoxy(35,20);
        cout<<"Invalid Input, Enter again:";
        gotoxy(63,20);
        cout<<"                                                                 ";
        gotoxy(63,20);
        getline(cin,highSchool[studentPosition]);
        if (Alphabets(highSchool[studentPosition]))
        break;
    }
    
    OlevelGrades[studentPosition]=takeFeedBack(30,120,25,29);
    AlevelGrades[studentPosition]=takeFeedBack(30,120,30,34);
    gotoxy(30,35);
    getline(cin,satScore[studentPosition]);
    
    gotoxy(25,42);
    cout<<"You have submitted all information in this section, press any key to go to next section:";
    gotoxy(113,42);
    getch();

}
/*function which collects the biodata of students*/
void studentActivityMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     SwiftAdmit Questions                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                              ===Extra-Curricular Acitivities===                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      (Describe your activity type, leadership,Position, organization,)                                                             ##             ###"<<endl;
cout<<"###             ##      (what you accomplished and any recognition you received, etc in 150 characters)                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Activity 1:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Activity 2:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Activity 3:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Activity 4:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Activity 5:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*function which collects the biodata of students*/
void studentActivitiesQuestions(int studentPosition,string act1[],string act2[],string act3[],string act4[],string act5[])
{
    act1[studentPosition]=takeFeedBack(25,115,22,25);
    
    act2[studentPosition]=takeFeedBack(25,115,26,29);
    
    act3[studentPosition]=takeFeedBack(25,115,30,33);
    
    act4[studentPosition]=takeFeedBack(25,115,34,37);
    
    act5[studentPosition]=takeFeedBack(25,115,38,41);
    gotoxy(25,42);
    cout<<"You have submitted all information in this section, press any key to go to next section:";
    gotoxy(113,42);
    getch();
}

/*function which collects the biodata of students*/
void studentPersonalEssayMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     SwiftAdmit Questions                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      The essay demonstrates your ability to write clearly and concisely on a selected topic and helps you distinguish              ##             ###"<<endl;
cout<<"###             ##      yourself in your own voice. What do you want the readers of your application to know about you apart from courses,            ##             ###"<<endl;
cout<<"###             ##      grades, and test scores? Choose the option that best helps you answer that question and write an essay of no more             ##             ###"<<endl;
cout<<"###             ##      than 650 words, using the prompt to inspire and structure your response. Remember: 650 words is your limit, not your          ##             ###"<<endl;
cout<<"###             ##      goal. Use the full range if you need it, but don't feel obligated to do so. (The application won't accept a response          ##             ###"<<endl;
cout<<"###             ##      shorter than 250 words.)                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##          a. Some students have a background, identity, interest, or talent that is so meaningful they believe their application    ##             ###"<<endl;
cout<<"###             ##             would be incomplete without it. If this sounds like you, then please share your story.                                 ##             ###"<<endl;
cout<<"###             ##          b.The lessons we take from obstacles we encounter can be fundamental to later success. Recount a time when you faced a    ##             ###"<<endl;
cout<<"###             ##             challenge, setback, or failure. How did it affect you, and what did you learn from the experience?                     ##             ###"<<endl;
cout<<"###             ##          c.Reflect on a time when you questioned or challenged a belief or idea. What prompted your thinking? What was the outcome?##             ###"<<endl;
cout<<"###             ##          d.Reflect on something that someone has done for you that has made you happy or thankful in a surprising way.             ##             ###"<<endl;
cout<<"###             ##             How has this gratitude affected or motivated you?                                                                      ##             ###"<<endl;
cout<<"###             ##          e.Discuss an accomplishment, event, or realization that sparked a period of personal growth and a new understanding       ##             ###"<<endl;
cout<<"###             ##             of yourself or others.                                                                                                 ##             ###"<<endl;
cout<<"###             ##          f.Describe a topic, idea, or concept you find so engaging that it makes you lose all track of time.                       ##             ###"<<endl;
cout<<"###             ##             Why does it captivate you? What or who do you turn to when you want to learn more?                                     ##             ###"<<endl;
cout<<"###             ##          g.Share an essay on any topic of your choice. It can be one you've already written, one that responds to a                ##             ###"<<endl;
cout<<"###             ##             different prompt, or one of your own design.                                                                           ##             ###"<<endl;                                                
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Enter your chosen essay type:                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Submit Your Statement Here:                                                                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*function which collects the biodata of students*/
void studentPersonalEssayQuestions(int studentPosition,string personalStatementType[],string personalStatement[])
{
    gotoxy(60,37);
    getline(cin,personalStatementType[studentPosition]);
    while(personalStatementType[studentPosition]!="a" && personalStatementType[studentPosition]!="A" && personalStatementType[studentPosition]!="b" && personalStatementType[studentPosition]!="B" && personalStatementType[studentPosition]!="c" && personalStatementType[studentPosition]!="C" && personalStatementType[studentPosition]!="d" && personalStatementType[studentPosition]!="D" && personalStatementType[studentPosition]!="e" && personalStatementType[studentPosition]!="E" && personalStatementType[studentPosition]!="f"  && personalStatementType[studentPosition]!="F"  && personalStatementType[studentPosition]!="g" && personalStatementType[studentPosition]!="G" )
    {
        gotoxy(40,38);
        cout<<"Invalid Input,Enter Again";
        gotoxy(66,38);
        cout<<"             ";
        gotoxy(66,38);
        getline(cin,personalStatementType[studentPosition]);
        if (personalStatementType[studentPosition]=="a" || personalStatementType[studentPosition]=="A" || personalStatementType[studentPosition]=="b" || personalStatementType[studentPosition]=="B" || personalStatementType[studentPosition]=="c" || personalStatementType[studentPosition]=="C" || personalStatementType[studentPosition]=="d" || personalStatementType[studentPosition]=="D" || personalStatementType[studentPosition]=="e" || personalStatementType[studentPosition]=="E" || personalStatementType[studentPosition]=="f" || personalStatementType[studentPosition]=="F"  || personalStatementType[studentPosition]=="g" || personalStatementType[studentPosition]=="G")
        break;
    }
    
    personalStatement[studentPosition]=takeFeedBack(25,120,40,52);
    gotoxy(25,53);
    cout<<"You have submitted all information in this section, press any key to go to Student Section:";
    gotoxy(117,53);
    getch();

}

/*------University data functions-----------  start*/
void georgiaStateUni(int qsrankingGeorgia,int thRankingGeorgia, int  georgiaStateUniArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
    
    system("cls");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    gotoxy(10,1);
    cout<<    " _______  _______  _______  ______      _______  ___   _______          _______  _______  _______  _______  _______          __   __  __    _  ___   ";
    gotoxy(10,2);
    cout<<   "|       ||       ||       ||    _ |    |       ||   | |   _   |        |       ||       ||   _   ||       ||       |        |  | |  ||  |  | ||   |  ";
    gotoxy(10,3);
    cout<<   "|    ___||    ___||   _   ||   | ||    |    ___||   | |  |_|  |        |  _____||_     _||  |_|  ||_     _||    ___|        |  | |  ||   |_| ||   |  ";
    gotoxy(10,4);
    cout<<   "|   | __ |   |___ |  | |  ||   |_|| _  |   | __ |   | |       |        | |_____   |   |  |       |  |   |  |   |___         |  |_|  ||       ||   |  ";
    gotoxy(10,5);
    cout<<   "|   ||  ||    ___||  |_|  ||    __   | |   ||  ||   | |       |        |_____  |  |   |  |       |  |   |  |    ___|        |       ||  _    ||   |  ";
    gotoxy(10,6);    
    cout<<   "|   |_| ||   |___ |       ||   |  |  | |   |_| ||   | |   _   |         _____| |  |   |  |   _   |  |   |  |   |___         |       || | |   ||   |  ";
    gotoxy(10,7);    
    cout<<   "|_______||_______||_______||___|  |__| |_______||___| |__| |__|        |_______|  |___|  |__| |__|  |___|  |_______|        |_______||_|  |__||___|  ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone: (404) 413-2500            ";
        gotoxy(20,12);
        cout<< "       Email: admissions@gsu.edu         ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"P.O. Box 4009                             ";
        gotoxy(20,15);
        cout<<"Atlanta, GA 30302-4009                    ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    12/3/2024      |     12/8/2024     |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $60   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $60        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About Georgia State University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Georgia State is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsrankingGeorgia;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingGeorgia;
        gotoxy(80,34);
        cout<< "Do you want to add Georgia State University to your college list? Enter yes or no ";
        string askForAddCollege;  /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
    
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            georgiaStateUniArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Georgia State University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void bostonUniversity(int qsrankingBoston,int thRankingBoston, int bostonUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(13,1);
    cout<<    " _______  _______  _______  _______  _______  __    _      __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __  ";
    gotoxy(13,2);
    cout<<   "|  _    ||       ||       ||       ||       ||  |  | |    |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(13,3);
    cout<<   "| |_|   ||   _   ||  _____||_     _||   _   ||   |_| |    |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |  ";
    gotoxy(13,4);
    cout<<   "|       ||  | |  || |_____   |   |  |  | |  ||       |    |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(13,5);
    cout<<   "|  _   | |  |_|  ||_____  |  |   |  |  |_|  ||  _    |    |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|  ";
    gotoxy(13,6);    
    cout<<   "| |_|   ||       | _____| |  |   |  |       || | |   |    |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |    ";
    gotoxy(13,7);    
    cout<<   "|_______||_______||_______|  |___|  |_______||_|  |__|    |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(617) 353-2300             ";
        gotoxy(20,12);
        cout<< "       Email: admissions@bu.edu          ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"233 Bay State Rd                          ";
        gotoxy(20,15);
        cout<<"Boston, MA 02215                          ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    1/4/2024       |     11/1/2024     |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $80   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $80        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About Boston University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Georgia State is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsrankingBoston;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingBoston;
        gotoxy(80,34);
        cout<< "Do you want to add Boston University to your college list? Enter yes or no ";
        string askForAddCollege; /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            bostonUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Boston University";
                
                currentaddedUniversityarraySize++;
    
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void stanfordUniversity(int qsRankingStanford,int thRankingStanford,int stanfordUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);     
    gotoxy(6,1);
    cout<<    " _______  _______  _______  __    _  _______  _______  ______    ______       __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __  ";
    gotoxy(6,2);
    cout<<   "|       ||       ||   _   ||  |  | ||       ||       ||    _ |  |      |     |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(6,3);
    cout<<   "|  _____||_     _||  |_|  ||   |_| ||    ___||   _   ||   | ||  |  _    |    |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |  ";
    gotoxy(6,4);
    cout<<   "| |_____   |   |  |       ||       ||   |___ |  | |  ||   |_||_ | | |   |    |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(6,5);
    cout<<   "|_____  |  |   |  |       ||  _    ||    ___||  |_|  ||    __  || |_|   |    |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|  ";
    gotoxy(6,6);    
    cout<<   " _____| |  |   |  |   _   || | |   ||   |    |       ||   |  | ||       |    |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |    ";
    gotoxy(6,7);    
    cout<<   "|_______|  |___|  |__| |__||_|  |__||___|    |_______||___|  |_||______|     |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(650) 723-2091             ";
        gotoxy(20,12);
        cout<< "     Email: admissions@stanford.edu      ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"Montag Hall                               ";
        gotoxy(20,15);
        cout<<"355 Galvez Street                         ";
        gotoxy(20,16);
        cout<<"Stanford, CA 94305-6106, USA              ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|       NA          |     01/5/2024     |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $90   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $90        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About Stanford University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Georgia State is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingStanford;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingStanford;
        gotoxy(80,34);
        cout<< "Do you want to add Stanford University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            stanfordUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Stanford University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void harvardUniversity(int qsRankingHarvard,int thRankingHarvard, int harvardUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(6,1);
    cout<<    " __   __  _______  ______    __   __  _______  ______    ______       __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __  ";
    gotoxy(6,2);
    cout<<    "|  | |  ||   _   ||    _ |  |  | |  ||   _   ||    _ |  |      |     |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(6,3);
    cout<<    "|  |_|  ||  |_|  ||   | ||  |  |_|  ||  |_|  ||   | ||  |  _    |    |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  | ";
    gotoxy(6,4);
    cout<<    "|       ||       ||   |_||_ |       ||       ||   |_||_ | | |   |    |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(6,5);
    cout<<    "|       ||       ||    __  ||       ||       ||    __  || |_|   |    |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|";
    gotoxy(6,6);    
    cout<<    "|   _   ||   _   ||   |  | | |     | |   _   ||   |  | ||       |    |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |   ";
    gotoxy(6,7);    
    cout<<    "|__| |__||__| |__||___|  |_|  |___|  |__| |__||___|  |_||______|     |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(617) 353-2300             ";
        gotoxy(20,12);
        cout<< "       Email: admissions@bu.edu          ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"Massachusetts Hall, Cambridge, MA         ";
        gotoxy(20,15);
        cout<<"02138, USA                                ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|       NA          |     01/02/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $60   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $60        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About Harvard University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Georgia State is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingHarvard;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingHarvard;
        gotoxy(80,34);
        cout<< "Do you want to add Harvard University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            harvardUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Harvard University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


void princetonUniversity(int qsRankingPrinceton,int thRankingPrinceton,int princetonUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
    system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(6,1);
    cout<<    " _______  ______    ___   __    _  _______  _______  _______  _______  __    _       __   __  __    _  ___  ";
    gotoxy(6,2);
    cout<<    "|       ||    _ |  |   | |  |  | ||       ||       ||       ||       ||  |  | |     |  | |  ||  |  | ||   | ";
    gotoxy(6,3);
    cout<<    "|    _  ||   | ||  |   | |   |_| ||       ||    ___||_     _||   _   ||   |_| |     |  | |  ||   |_| ||   | ";
    gotoxy(6,4);
    cout<<    "|   |_| ||   |_||_ |   | |       ||       ||   |___   |   |  |  | |  ||       |     |  |_|  ||       ||   | ";
    gotoxy(6,5);
    cout<<    "|    ___||    __  ||   | |  _    ||      _||    ___|  |   |  |  |_|  ||  _    |     |       ||  _    ||   | ";
    gotoxy(6,6);    
    cout<<    "|   |    |   |  | ||   | | | |   ||     |_ |   |___   |   |  |       || | |   |     |       || | |   ||   | ";
    gotoxy(6,7);    
    cout<<    "|___|    |___|  |_||___| |_|  |__||_______||_______|  |___|  |_______||_|  |__|     |_______||_|  |__||___| ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(609) 258-3060             ";
        gotoxy(20,12);
        cout<< "       Email: uaoffice@princeton.edu     ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"P.O. Box 430, Princeton University        ";
        gotoxy(20,15);
        cout<<"Princeton, NJ 08542-0430                  ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|        NA         |     01/01/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $70   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $70        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 1 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 0 Required       ";
        
        gotoxy(80,10);
        cout<< "              ====About Princeton University====               ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Princeton is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingPrinceton;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingPrinceton;
        gotoxy(80,34);
        cout<< "Do you want to add Princeton University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            princetonUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Princeton University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void yaleUniversity(int qsRankingYale,int thRankingYale,int yaleUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(6,1);
    cout<<   " __   __  _______  ___      _______          __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __   ";
    gotoxy(6,2);
    cout<<   "|  | |  ||   _   ||   |    |       |        |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(6,3);
    cout<<   "|  |_|  ||  |_|  ||   |    |    ___|        |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |  ";
    gotoxy(6,4);
    cout<<   "|       ||       ||   |    |   |___         |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(6,5);
    cout<<   "|_     _||       ||   |___ |    ___|        |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|  ";
    gotoxy(6,6);    
    cout<<   "  |   |  |   _   ||       ||   |___         |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |    ";
    gotoxy(6,7);    
    cout<<   "  |___|  |__| |__||_______||_______|        |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(203) 432-9300             ";
        gotoxy(20,12);
        cout<< "     Email: applyquestions@yale.edu      ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"PO Box 208234                             ";
        gotoxy(20,15);
        cout<<"New Haven, CT 06520-8234                  ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|       NA          |     01/02/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $80   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $80        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 3 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "               ====About Yale University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Yale is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingYale;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingYale;
        gotoxy(80,34);
        cout<< "Do you want to add Yale University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            yaleUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Yale University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void nyuUniversity(int qsRankingNewyork,int thRankingNewyork,int nyuUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(6,1);
    cout<<   " __    _  _______  _     _  __   __  _______  ______    ___   _        __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __   ";
    gotoxy(6,2);
    cout<<   "|  |  | ||       || | _ | ||  | |  ||       ||    _ |  |   | | |      |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(6,3);
    cout<<   "|   |_| ||    ___|| || || ||  |_|  ||   _   ||   | ||  |   |_| |      |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |  ";
    gotoxy(6,4);
    cout<<   "|       ||   |___ |       ||       ||  | |  ||   |_||_ |      _|      |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(6,5);
    cout<<   "|  _    ||    ___||       ||_     _||  |_|  ||    __  ||     |_       |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|  ";
    gotoxy(6,6);    
    cout<<   "| | |   ||   |___ |   _   |  |   |  |       ||   |  | ||    _  |      |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |    ";
    gotoxy(6,7);    
    cout<<   "|_|  |__||_______||__| |__|  |___|  |_______||___|  |_||___| |_|      |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(212) 998-4500             ";
        gotoxy(20,12);
        cout<< "       Email: admissions@nyu.edu         ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"383 Lafayette Street                      ";
        gotoxy(20,15);
        cout<<"New York, NY 1003                        ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|       NA          |     01/05/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $80   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $80        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 0 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About NewYork University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, NYU is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingNewyork;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingNewyork;
        gotoxy(80,34);
        cout<< "Do you want to add New York University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            nyuUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Newyork University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void columbiaUniversity(int qsRankingColumbia,int thRankingColumbia,int columbiaUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(6,1);
    cout<<   " _______  _______  ___      __   __  __   __  _______  ___   _______        __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __   ";
    gotoxy(6,2);
    cout<<   "|       ||       ||   |    |  | |  ||  |_|  ||  _    ||   | |   _   |      |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(6,3);
    cout<<   "|       ||   _   ||   |    |  | |  ||       || |_|   ||   | |  |_|  |      |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |  ";
    gotoxy(6,4);
    cout<<   "|       ||  | |  ||   |    |  |_|  ||       ||       ||   | |       |      |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(6,5);
    cout<<   "|      _||  |_|  ||   |___ |       ||       ||  _   | |   | |       |      |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|  ";
    gotoxy(6,6);    
    cout<<   "|     |_ |       ||       ||       || ||_|| || |_|   ||   | |   _   |      |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |    ";
    gotoxy(6,7);    
    cout<<   "|_______||_______||_______||_______||_|   |_||_______||___| |__| |__|      |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(212) 854-2522             ";
        gotoxy(20,12);
        cout<< "     Email: ugrad-ask@columbia.edu       ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"212 Hamilton Hall, MC 2807                 ";
        gotoxy(20,15);
        cout<<"1130 Amsterdam Avenue                      ";
        gotoxy(20,16);
        cout<<"New York, NY 10027, USA                    ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    12/3/2024      |     01/01/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $85   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $85        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "              ====About Columbia University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Columbia is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingColumbia;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingColumbia;
        gotoxy(80,34);
        cout<< "Do you want to add Columbia University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            columbiaUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Columbia University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void cornellUniversity(int qsRankingCornell,int thRankingCornell,int cornellUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
    gotoxy(6,1);
    cout<<   " _______  _______  ______    __    _  _______  ___      ___            __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __   ";
    gotoxy(6,2);
    cout<<   "|       ||       ||    _ |  |  |  | ||       ||   |    |   |          |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |  ";
    gotoxy(6,3);
    cout<<   "|       ||   _   ||   | ||  |   |_| ||    ___||   |    |   |          |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |  ";
    gotoxy(6,4);
    cout<<   "|       ||  | |  ||   |_||_ |       ||   |___ |   |    |   |          |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |  ";
    gotoxy(6,5);
    cout<<   "|      _||  |_|  ||    __  ||  _    ||    ___||   |___ |   |___       |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|  ";
    gotoxy(6,6);    
    cout<<   "|     |_ |       ||   |  | || | |   ||   |___ |       ||       |      |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |    ";
    gotoxy(6,7);    
    cout<<   "|_______||_______||___|  |_||_|  |__||_______||_______||_______|      |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|    ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(607) 255-5241             ";
        gotoxy(20,12);
        cout<< "     Email: admissions@cornell.edu       ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"410 Thurston Ave                          ";
        gotoxy(20,15);
        cout<<"Ithaca, NY 14850-2488                     ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    20/3/2024      |     01/02/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $80   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $80        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About Cornell University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Cornell Universtiy is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingCornell;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingCornell;
        gotoxy(80,34);
        cout<< "Do you want to add Cornell University to your college list? Enter yes or no ";
        string askForAddCollege;   /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            cornellUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Cornell University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}


void californiaUniversity(int qsRankingCalifornia,int thRankingCalifornia,int UniOfCaliforniaArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
    gotoxy(6,1);
    cout<<   " __   __  __    _  ___         _______  _______        _______  _______  ___      ___   _______  _______  ______    __    _  ___   _______ ";
    gotoxy(6,2);
    cout<<   "|  | |  ||  |  | ||   |       |       ||       |      |       ||   _   ||   |    |   | |       ||       ||    _ |  |  |  | ||   | |   _   |";
    gotoxy(6,3);
    cout<<   "|  | |  ||   |_| ||   |       |   _   ||    ___|      |       ||  |_|  ||   |    |   | |    ___||   _   ||   | ||  |   |_| ||   | |  |_|  |";
    gotoxy(6,4);
    cout<<   "|  |_|  ||       ||   |       |  | |  ||   |___       |       ||       ||   |    |   | |   |___ |  | |  ||   |_||_ |       ||   | |       |";
    gotoxy(6,5);
    cout<<   "|       ||  _    ||   |       |  |_|  ||    ___|      |      _||       ||   |___ |   | |    ___||  |_|  ||    __  ||  _    ||   | |       |";
    gotoxy(6,6);    
    cout<<   "|       || | |   ||   |       |       ||   |          |     |_ |   _   ||       ||   | |   |    |       ||   |  | || | |   ||   | |   _   |";
    gotoxy(6,7);    
    cout<<   "|_______||_|  |__||___|       |_______||___|          |_______||__| |__||_______||___| |___|    |_______||___|  |_||_|  |__||___| |__| |__|";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(415) 457-4440             ";
        gotoxy(20,12);
        cout<< "       Email: enroll@dominican.edu       ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"50 Acacia Ave                             ";
        gotoxy(20,15);
        cout<<"San Rafael, CA 94901-2298                 ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    01/12/2024     |     07/26/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $0   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $0        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About University of California====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, University of California is the";
        gotoxy(80,18);
        cout<< "national model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingCalifornia;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingCalifornia;
        gotoxy(80,34);
        cout<< "Do you want to add University of California to your college list? Enter yes or no ";
        string askForAddCollege;  /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            UniOfCaliforniaArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="University Of California";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}


void brownUniversity(int qsRankingBrown,int thRankingBrown,int brownUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
    gotoxy(6,1);
    cout<<   " _______  ______    _______  _     _  __    _          __   __  __    _  ___   __   __  _______  ______    _______  ___   _______  __   __ ";
    gotoxy(6,2);
    cout<<   "|  _    ||    _ |  |       || | _ | ||  |  | |        |  | |  ||  |  | ||   | |  | |  ||       ||    _ |  |       ||   | |       ||  | |  |";
    gotoxy(6,3);
    cout<<   "| |_|   ||   | ||  |   _   || || || ||   |_| |        |  | |  ||   |_| ||   | |  |_|  ||    ___||   | ||  |  _____||   | |_     _||  |_|  |";
    gotoxy(6,4);
    cout<<   "|       ||   |_||_ |  | |  ||       ||       |        |  |_|  ||       ||   | |       ||   |___ |   |_||_ | |_____ |   |   |   |  |       |";
    gotoxy(6,5);
    cout<<   "|  _   | |    __  ||  |_|  ||       ||  _    |        |       ||  _    ||   | |       ||    ___||    __  ||_____  ||   |   |   |  |_     _|";
    gotoxy(6,6);    
    cout<<   "| |_|   ||   |  | ||       ||   _   || | |   |        |       || | |   ||   |  |     | |   |___ |   |  | | _____| ||   |   |   |    |   |  ";
    gotoxy(6,7);    
    cout<<   "|_______||___|  |_||_______||__| |__||_|  |__|        |_______||_|  |__||___|   |___|  |_______||___|  |_||_______||___|   |___|    |___|  ";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(401) 863-2378             ";
        gotoxy(20,12);
        cout<< "       Email: admissions@brown.edu       ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"Box 1876                                  ";
        gotoxy(20,15);
        cout<<"Providence, RI 02912                      ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|       NA          |     01/3/2024     |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $75   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $75        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About Brown University====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Brown is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingBrown;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingBrown;
        gotoxy(80,34);
        cout<< "Do you want to add Brown University to your college list? Enter yes or no ";
        string askForAddCollege;  /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            brownUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Brown University";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}


void michiganUniversity(int qsRankingMichigan,int thRankingMichigan,int michiganUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
    gotoxy(6,1);
    cout<<   " __   __  __    _  ___         _______  _______          __   __  ___   _______  __   __  ___   _______  _______  __    _ ";
    gotoxy(6,2);
    cout<<   "|  | |  ||  |  | ||   |       |       ||       |        |  |_|  ||   | |       ||  | |  ||   | |       ||   _   ||  |  | |";
    gotoxy(6,3);
    cout<<   "|  | |  ||   |_| ||   |       |   _   ||    ___|        |       ||   | |       ||  |_|  ||   | |    ___||  |_|  ||   |_| |";
    gotoxy(6,4);
    cout<<   "|  |_|  ||       ||   |       |  | |  ||   |___         |       ||   | |       ||       ||   | |   | __ |       ||       |";
    gotoxy(6,5);
    cout<<   "|       ||  _    ||   |       |  |_|  ||    ___|        |       ||   | |      _||       ||   | |   ||  ||       ||  _    |";
    gotoxy(6,6);    
    cout<<   "|       || | |   ||   |       |       ||   |            | ||_|| ||   | |     |_ |   _   ||   | |   |_| ||   _   || | |   |";
    gotoxy(6,7);    
    cout<<   "|_______||_|  |__||___|       |_______||___|            |_|   |_||___| |_______||__| |__||___| |_______||__| |__||_|  |__|";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(734) 764-7433             ";
        gotoxy(20,12);
        cout<< "       Email: admissions@umich.edu       ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"1220 SAB                                  ";
        gotoxy(20,15);
        cout<<"515 E JEFFERSON                           ";
        gotoxy(20,16);
        cout<<"Ann Arbor, MI 48109-1316, USA             ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    10/01/2023     |     02/01/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $75   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $75        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About University of Michigan====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Michigan is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingMichigan;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingMichigan;
        gotoxy(80,34);
        cout<< "Do you want to add University of Michigan to your college list? Enter yes or no ";
        string askForAddCollege;  /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            michiganUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="University of Michigan";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}




void dartmouthUniversity(int qsRankingDartmouth,int thRankingDartmouth,int dartmouthCollegeArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
    gotoxy(6,1);
    cout<<   " ______   _______  ______    _______  __   __  _______  __   __  _______  __   __            _______  _______  ___      ___      _______  _______  _______ ";
    gotoxy(6,2);
    cout<<   "|      | |   _   ||    _ |  |       ||  |_|  ||       ||  | |  ||       ||  | |  |          |       ||       ||   |    |   |    |       ||       ||       |";
    gotoxy(6,3);
    cout<<   "|  _    ||  |_|  ||   | ||  |_     _||       ||   _   ||  | |  ||_     _||  |_|  |          |       ||   _   ||   |    |   |    |    ___||    ___||    ___|";
    gotoxy(6,4);
    cout<<   "| | |   ||       ||   |_||_   |   |  |       ||  | |  ||  |_|  |  |   |  |       |          |       ||  | |  ||   |    |   |    |   |___ |   | __ |   |___ ";
    gotoxy(6,5);
    cout<<   "| |_|   ||       ||    __  |  |   |  |       ||  |_|  ||       |  |   |  |       |          |      _||  |_|  ||   |___ |   |___ |    ___||   ||  ||    ___|";
    gotoxy(6,6);    
    cout<<   "|       ||   _   ||   |  | |  |   |  | ||_|| ||       ||       |  |   |  |   _   |          |     |_ |       ||       ||       ||   |___ |   |_| ||   |___ ";
    gotoxy(6,7);    
    cout<<   "|______| |__| |__||___|  |_|  |___|  |_|   |_||_______||_______|  |___|  |__| |__|          |_______||_______||_______||_______||_______||_______||_______|";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(603) 646-2875             ";
        gotoxy(20,12);
        cout<< "       Email: apply@dartmouth.edu        ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"6016 McNutt Hall                          ";
        gotoxy(20,15);
        cout<<"Hanover, NH 03755                         ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|       NA          |     01/02/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $60   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $60        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "                ====About Dartmouth College====               ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Dartmouth is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingDartmouth;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingDartmouth;
        gotoxy(80,34);
        cout<< "Do you want to add DartMouth College to your college list? Enter yes or no ";
        string askForAddCollege;  /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            dartmouthCollegeArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="Dartmouth College";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}



void floridaUniversity(int qsRankingFlorida,int thRankingFlorida,int floridaUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);     
    gotoxy(6,1);
    cout<<   " __   __  __    _  ___       _______  _______      _______  ___      _______  ______    ___   ______   _______ ";
    gotoxy(6,2);
    cout<<   "|  | |  ||  |  | ||   |     |       ||       |    |       ||   |    |       ||    _ |  |   | |      | |   _   |";
    gotoxy(6,3);
    cout<<   "|  | |  ||   |_| ||   |     |   _   ||    ___|    |    ___||   |    |   _   ||   | ||  |   | |  _    ||  |_|  |";
    gotoxy(6,4);
    cout<<   "|  |_|  ||       ||   |     |  | |  ||   |___     |   |___ |   |    |  | |  ||   |_||_ |   | | | |   ||       |";
    gotoxy(6,5);
    cout<<   "|       ||  _    ||   |     |  |_|  ||    ___|    |    ___||   |___ |  |_|  ||    __  ||   | | |_|   ||       |";
    gotoxy(6,6);    
    cout<<   "|       || | |   ||   |     |       ||   |        |   |    |       ||       ||   |  | ||   | |       ||   _   |";
    gotoxy(6,7);    
    cout<<   "|_______||_|  |__||___|     |_______||___|        |___|    |_______||_______||___|  |_||___| |______| |__| |__|";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(617) 353-2300             ";
        gotoxy(20,12);
        cout<< "       Email: admissions@bu.edu          ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"233 Bay State Rd                          ";
        gotoxy(20,15);
        cout<<"Boston, MA 02215                          ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|    12/3/2024      |     02/12/2024    |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $60   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $60        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About University of Florida====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, University of Florida is the ";
        gotoxy(80,18);
        cout<< "national model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingFlorida;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingFlorida;
        gotoxy(80,34);
        cout<< "Do you want to add University of Florida to your college list? Enter yes or no ";
        string askForAddCollege;    /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            floridaUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="University Of Florida";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}



void pennsylvaniaUniversity(int qsRankingPennsylvania,int thRankingPennsylvania,int pennsylvaniaUniversityArray[],int studentPosition,int addedUniversityarraySize,int &currentaddedUniversityarraySize,string addedUniversityArray[])
{
     system("cls");
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
    gotoxy(6,1);
    cout<<   " __   __  __    _  ___         _______  _______          _______  _______  __    _  __    _  _______  __   __  ___      __   __  _______  __    _  ___   _______ ";
    gotoxy(6,2);
    cout<<   "|  | |  ||  |  | ||   |       |       ||       |        |       ||       ||  |  | ||  |  | ||       ||  | |  ||   |    |  | |  ||   _   ||  |  | ||   | |   _   |";
    gotoxy(6,3);
    cout<<   "|  | |  ||   |_| ||   |       |   _   ||    ___|        |    _  ||    ___||   |_| ||   |_| ||  _____||  |_|  ||   |    |  |_|  ||  |_|  ||   |_| ||   | |  |_|  |";
    gotoxy(6,4);
    cout<<   "|  |_|  ||       ||   |       |  | |  ||   |___         |   |_| ||   |___ |       ||       || |_____ |       ||   |    |       ||       ||       ||   | |       |";
    gotoxy(6,5);
    cout<<   "|       ||  _    ||   |       |  |_|  ||    ___|        |    ___||    ___||  _    ||  _    ||_____  ||_     _||   |___ |       ||       ||  _    ||   | |       |";
    gotoxy(6,6);    
    cout<<   "|       || | |   ||   |       |       ||   |            |   |    |   |___ | | |   || | |   | _____| |  |   |  |       | |     | |   _   || | |   ||   | |   _   |";
    gotoxy(6,7);    
    cout<<   "|_______||_|  |__||___|       |_______||___|            |___|    |_______||_|  |__||_|  |__||_______|  |___|  |_______|  |___|  |__| |__||_|  |__||___| |__| |__|";



        gotoxy(20,10);
        cout<< "       :::::Contact Info:::::            ";
        gotoxy(20,11);
        cout<< "        Phone:(215) 898-7505             ";
        gotoxy(20,12);
        cout<< "   Email: info@admissions.upenn.edu      ";
        gotoxy(20,13);
        cout<< "Address:                                 ";
        gotoxy(20,14);
        cout<<"3535 Market Street, Suite 850             ";
        gotoxy(20,15);
        cout<<"Philadelphia, PA 19104                    ";
        gotoxy(20,16);
        cout<<"USA                                       ";
        gotoxy(20,17);
        cout<< "    :::::Application Deadlines:::::      ";
        gotoxy(20,18);
        cout<< "=========================================";
        gotoxy(20,19);
        cout<< "|   Spring 2024     |     Fall 2024     |";
        gotoxy(20,20);
        cout<< "|        NA         |     01/5/2024     |";
        gotoxy(20,21);
        cout<< "=========================================";
        gotoxy(20,23);
        cout<< "      :::Application Information:::      ";
        gotoxy(20,24);
        cout<< "  Application Fees:                      ";
        gotoxy(20,25);
        cout<< "    First Year International Fee - $75   ";
        gotoxy(20,26);
        cout<< "    First Year Domestic Fee - $75        ";
        gotoxy(20,28);
        cout<< "  Standardized Test Policy:              ";
        gotoxy(20,29);
        cout<< "  SAT without Essay or ACT without Essay ";
        gotoxy(20,31);
        cout<< "  Recommendations:                       ";
        gotoxy(20,32);
        cout<< "   1.School Report Required              ";
        gotoxy(20,33);
        cout<< "   2.Teacher Evaluation(s): 2 Required   ";
        gotoxy(20,34);
        cout<< "   3.Counceler Recommendations:1 Required";
        gotoxy(20,36);
        cout<< "  Writing Requirements:                  ";
        gotoxy(20,37);
        cout<< "   1.Personal Essay Required             ";
        gotoxy(20,38);
        cout<< "   2.College Questions: 2 Required       ";
        
        gotoxy(80,10);
        cout<< "            ====About University of Pennsylvania====                 ";
        gotoxy(80,11);
        cout<< "Blending academic rigor with a rich college experience since 1913,";
        gotoxy(80,12);
        cout<< "Georgia State University transforms the lives of students, advances the ";
        gotoxy(80,13);
        cout<< "frontiers of knowledge and shapes future leaders. Enrolling one of the most";
        gotoxy(80,14);
        cout<< "diverse student bodies in the nation, the university provides";
        gotoxy(80,15);
        cout<< "associate-to-graduate-degree-level educational opportunities for tens of thousands";
        gotoxy(80,16);
        cout<< "across its downtown Atlanta Campus and five Perimeter College campuses. Graduating ";
        gotoxy(80,17);
        cout<< "students from all backgrounds at equal, high rates, Upenn is the national ";
        gotoxy(80,18);
        cout<< "model for student success.";

        gotoxy(80,25);
        cout<< "================================";
        gotoxy(80,26);
        cout<< "|    -------Rankings--------   |";
        gotoxy(80,27);
        cout<< "================================";
        gotoxy(80,29);
        cout<< "QS World Rankings  # "<<qsRankingPennsylvania;
        gotoxy(80,31);
        cout<< "Times Higher Education # "<<thRankingPennsylvania;
        gotoxy(80,34);
        cout<< "Do you want to add University of Pennsylvania to your college list? Enter yes or no ";
        string askForAddCollege;    /*asks if the user want to add this university to their college list*/
        cin>>askForAddCollege;
        if (askForAddCollege=="yes" || askForAddCollege=="Yes")
        {
            pennsylvaniaUniversityArray[studentPosition]=1;
            if (currentaddedUniversityarraySize<=addedUniversityarraySize)
            {
                addedUniversityArray[currentaddedUniversityarraySize]="University Of Pennsylvania";
                currentaddedUniversityarraySize++;
            }
        }
        gotoxy(0,50);
        
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

/*---------university data functions---------- ends*/



/*===validation functions====*/
bool cheakforSpercialCh(string data)
{
    bool cheaking=false;
    for(int a=0;data[a]!='\0';a++)
    {
        if (isalnum(data[a]))
        cheaking=true;
    }
    return cheaking;
}
bool cheakforDigit(string data)
{
    bool cheaking=true;
    for(int a=0;data[a]!='\0';a++)
    {
        if (isdigit(data[a])==false && data[a]!=' ')
        cheaking=false;
    }
    return cheaking;
}
bool cheakforUpperCase(string data)
{
    bool cheaking=false;
    for(int a=0;data[a]!='\0';a++)
    {
        if (isupper(data[a]))
        cheaking=true;
    }
    return cheaking;

}


bool cheakforAlphabets(string data)
{
    bool cheaking=false;
    for(int a=0;data[a]!='\0';a++)
    {
        if (isalpha(data[a]))
        cheaking=true;
    }
    return cheaking;

}

bool Alphabets(string data)
{
    bool cheaking=true;
    for(int a=0;data[a]!='\0';a++)
    {
        if (isalpha(data[a])==false && data[a]!=' ')
        cheaking=false;
    }
    return cheaking;

}



bool checkForDateFormat(string data) {
    bool checking = false;

    if (data.length() == 10 &&
        isdigit(data[0]) && isdigit(data[1]) &&
        data[2] == '/' &&
        isdigit(data[3]) && isdigit(data[4]) &&
        data[5] == '/' &&
        isdigit(data[6]) && isdigit(data[7]) && isdigit(data[8]) && isdigit(data[9]))
    {
        
        int month = stoi(data.substr(0, 2));
        int day = stoi(data.substr(3, 2));
        int year = stoi(data.substr(6, 4));

        if (month >= 1 && month <= 12 &&
            day >= 1 && day <= 31 &&
            year >= 0 && year <= 9999) {
            checking = true;
        }
    }
}

string takeFeedBack(int borderX_start, int borderX_end, int borderY_start, int borderY_end)
{
    borderX_end--;
    borderY_end--;
    char character = '\0';
    string result = "";
    int currentX = borderX_start, currentY = borderY_start;

    gotoxy(currentX, currentY);

    while (true)
    {
        character = _getch();

        if (character == VK_RETURN)
        {
            if (result != "")
            {
                break;
            }
        }
        else if (character == VK_BACK)
        {
            if (currentX > borderX_start || currentY > borderY_start)
            {
                if (currentX == borderX_start)
                {
                    currentY--;
                    currentX = borderX_end+1;
                    gotoxy(currentX, currentY);
                }
                else
                {
                    cout << "\b \b";
                    string temp = "";
                    for (int count = 0; count < result.length() - 1; count++)
                    {
                        temp = temp + result[count];
                    }
                    result = temp;
                    currentX--;
                }
            }
        }
        else if (character != VK_RETURN)
        {
            if (currentY <= borderY_end) 
            {
                if (currentX > borderX_end)
                {
                    currentX = borderX_start;
                    currentY++;

                    if (currentY <= borderY_end)
                    {
                        gotoxy(borderX_start, currentY);
                    }
                }
                result += character;
                cout << character;
                currentX++;
            }
        }
    }
    return result;
}

void printDataWithinSpecificCoord(const string& data, int startX, int endX, int startY, int endY)
{
    int currentX = startX, currentY = startY;

    // Ensure the provided coordinates are valid
    if (startX > endX || startY > endY) {
        cerr << "Invalid coordinates" << endl;
        return;
    }

    // Adjust endX and endY to stay within the provided borders
    endX = min(endX, startX + (endX - startX));
    endY = min(endY, startY + (endY - startY));

    gotoxy(currentX, currentY);

    for (char character : data) {
        if (currentY <= endY) {
            if (currentX > endX) {
                currentX = startX;
                currentY++;
                
                if (currentY <= endY) {
                    gotoxy(startX, currentY);
                }
            }

            cout << character;
            currentX++;
        }
    }
}

/*now if the students adds a certain university to their college list this functions gives a list of selected universities
by the student and updates in real time whether the data for the university specific questions is collected or not*/
void universityquestions(int studentPosition,string addedUniversityarray[],int currentaddedUniversityarraySize, int georgiaStateUniArray[],int bostonUniversityArray[],int stanfordUniversityArray[],int harvardUniversityArray[],int pennsylvaniaUniversityArray[],int floridaUniversityArray[],int dartmouthCollegeArray[],int michiganUniversityArray[],int brownUniversityArray[],int UniOfCaliforniaArray[],int cornellUniversityArray[],int columbiaUniversityArray[],int nyuUniversityArray[],int yaleUniversityArray[],int princetonUniversityArray[]
,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string studentStatusBostonUni[],string startTermBoston[],
string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],
string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[]
,string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],
string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],
string campusResidenceBrown[],string communityBrown[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[],string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[]
,string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[]
)
{
    while(true)
    {
    system("cls");
    addedUniversityMenu();
    int ex=25,ey=15;
    if(georgiaStateUniArray[studentPosition]==0 && bostonUniversityArray[studentPosition]==0 && stanfordUniversityArray[studentPosition]==0 && harvardUniversityArray[studentPosition]==0 && princetonUniversityArray[studentPosition]==0 && 
    yaleUniversityArray[studentPosition]==0 && nyuUniversityArray[studentPosition]==0 && 
    columbiaUniversityArray[studentPosition]==0 && cornellUniversityArray[studentPosition]==0 && 
    UniOfCaliforniaArray[studentPosition]==0 && brownUniversityArray[studentPosition]==0 &&
    michiganUniversityArray[studentPosition]==0 && dartmouthCollegeArray[studentPosition]==0 &&
    floridaUniversityArray[studentPosition]==0 && pennsylvaniaUniversityArray[studentPosition]==0)
    {
        gotoxy(60,14);
        cout<<"No university is selected, Press any key to go back to Student Menu";
        getch();
        break;
    }
    else
    {
    
    if(georgiaStateUniArray[studentPosition]==1 && studentStatusGeorgiaUni[studentPosition]!="")  /*if the student has selected this university and the the data is entered*/
    {
        gotoxy(ex,ey);
        cout<<"Georgia State University (Data Entered)";
        ey++;
    }
    else if(georgiaStateUniArray[studentPosition]==1)   /*if the student has selected this university and the data is not entered*/
    {
        gotoxy(ex,ey);
        cout<<"Georgia State University";
        ey++;
    }

    if(bostonUniversityArray[studentPosition]==1 && studentStatusBostonUni[studentPosition]!="") 
    {
        gotoxy(ex,ey);
        cout<<"Boston University (Data Entered)";
        ey++;
    }
    
    else if(bostonUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Boston University";
        ey++;
    }
    if(stanfordUniversityArray[studentPosition]==1 && studentStatusStanfordUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Stanford University (Data Entered)";
        ey++;
    }
    else if(stanfordUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Stanford University";
        ey++;
    }
    
    if(harvardUniversityArray[studentPosition]==1 && studentStatusHarvardUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Harvard University (Data Entered)";
        ey++;
    }
    else if(harvardUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Harvard University";
        ey++;
    }

    if(princetonUniversityArray[studentPosition]==1 && studentStatusPrincetonUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Princeton University (Data Entered)";
        ey++;
    }
    else if(princetonUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Princeton University";
        ey++;
    }

    if(yaleUniversityArray[studentPosition]==1 && studentStatusYaleUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Yale University (Data Entered)";
        ey++;
    }
    else if(yaleUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Yale University";
        ey++;
    }

    if(nyuUniversityArray[studentPosition]==1 && studentStatusNewyorkUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"NewYork University (Data Entered)";
        ey++;
    }
    else if(nyuUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"NewYork University";
        ey++;
    }

    if(columbiaUniversityArray[studentPosition]==1 && studentStatusColumbiaUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Columbia University (Data Entered)";
        ey++;
    }
    else if(columbiaUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Columbia University";
        ey++;
    }

    if(cornellUniversityArray[studentPosition]==1 && studentStatusCornellUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Cornell University (Data Entered)";
        ey++;
    }
    else if(cornellUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Cornell University";
        ey++;
    }

    if(UniOfCaliforniaArray[studentPosition]==1 && studentStatusCaliforniaUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"University Of California (Data Entered)";
        ey++;
    }
    else if(UniOfCaliforniaArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"University Of California";
        ey++;
    }

    if(brownUniversityArray[studentPosition]==1 && studentStatusBrownUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Brown University (Data Entered)";
        ey++;
    }
    else if(brownUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Brown University";
        ey++;
    }

    if(michiganUniversityArray[studentPosition]==1 && studentStatusMichiganUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"University Of Michigan (Data Entered)";
        ey++;
    }
    else if(michiganUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"University Of Michigan";
        ey++;
    }

    if(dartmouthCollegeArray[studentPosition]==1 && studentStatusDartmouthUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"Dartmouth College (Data Entered)";
        ey++;
    }
    else if(dartmouthCollegeArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"Dartmouth College";
        ey++;
    }

    if(floridaUniversityArray[studentPosition]==1 && studentStatusFloridaUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"University Of Florida (Data Entered)";
        ey++;
    }
    else if(floridaUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"University Of Florida";
        ey++;
    }

    if(pennsylvaniaUniversityArray[studentPosition]==1 && studentStatusPennsylvaniaUni[studentPosition]!="")
    {
        gotoxy(ex,ey);
        cout<<"University Of Pennsylvania (Data Entered)";
        ey++;
    }
    else if(pennsylvaniaUniversityArray[studentPosition]==1)
    {
        gotoxy(ex,ey);
        cout<<"University Of Pennsylvania";
        ey++;
    }
    

    

    string askForContinue="";
    
    gotoxy(22,36);
    cout<<"Do you want to continue to enter information or go back to student menu, enter yes to enter information and no to exit";

    gotoxy(144,36);
    cin>>askForContinue;
    if (askForContinue=="Yes" || askForContinue=="yes")
    {
        while(true)
        { 
        gotoxy(24,38);
        cout<<"Enter University for which you want to enter data..";
        string universitySearch="";
        cin.ignore();
        getline(cin,universitySearch);
        bool cheaks=false;
        for(int i=0;i<=currentaddedUniversityarraySize;i++)
        {
            if (addedUniversityarray[i]==universitySearch)
            {
            cheaks=true;
            break;
            }
        }
        
        

        if(cheaks)
        {
        if (universitySearch=="Georgia State University")
        {
            if(studentStatusGeorgiaUni[studentPosition]=="")  /*if data is not entered so it collects data else outputs that you have already entered data*/
            {
                
                system("cls");
                georgiaUniversityQuestionsMenu();
                georgiaUniversityQuestions(studentPosition,studentStatusGeorgiaUni,startTermGeorgia,admissionPlanGeorgia, major1Georgia,major2Georgia,siblingAttentedGeorgia, campusResidenceGeorgia,learnedAboutGeorgia);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Georgia State University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Boston University")
        {
            if(studentStatusBostonUni[studentPosition]=="")
            {
                
                system("cls");
                BostonUniversityQuestionsMenu();
                bostonUniversityQuestions(studentPosition,studentStatusBostonUni,startTermBoston,admissionPlanBoston, major1Boston,major2Boston,siblingAttentedBoston, campusResidenceBoston,whyBoston);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Boston University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Stanford University")
        {
            if(studentStatusStanfordUni[studentPosition]=="")
            {
                
                system("cls");
                stanfordUniversityQuestionsMenu();
                stanfordUniversityQuestions(studentPosition,studentStatusStanfordUni,startTermStanford,admissionPlanStanford, major1Stanford,major2Stanford,siblingAttentedStanford, campusResidenceStanford,whyThisMajorStanford);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Stanford University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Harvard University")
        {
            if(studentStatusHarvardUni[studentPosition]=="")
            {
                
                system("cls");
                harvardUniversityQuestionsMenu();
                harvardUniversityQuestions(studentPosition,studentStatusHarvardUni,startTermHarvard,admissionPlanHarvard, major1Harvard,major2Harvard,siblingAttentedHarvard, campusResidenceHarvard,briefExperienceHarvard);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Harvard University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Princeton University")
        {
            if(studentStatusPrincetonUni[studentPosition]=="")
            {
                
                system("cls");
                princetonUniversityQuestionsMenu();
                princetonUniversityQuestions(studentPosition,studentStatusPrincetonUni,startTermPrinceton,admissionPlanPrinceton, major1Princeton,major2Princeton,siblingAttentedPrinceton, campusResidencePrinceton,newSkillPrinceton);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Princeton University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Yale University")
        {
            if(studentStatusYaleUni[studentPosition]=="")
            {
                
                system("cls");
                yaleUniversityQuestionsMenu();
                yaleUniversityQuestions(studentPosition,studentStatusYaleUni,startTermYale,admissionPlanYale, major1Yale,major2Yale,siblingAttentedYale, campusResidenceYale,memberInfluenceYale);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Yale University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Newyork University")
        {
            if(studentStatusNewyorkUni[studentPosition]=="")
            {
                
                system("cls");
                newyorkUniversityQuestionsMenu();
                newyorkUniversityQuestions(studentPosition,studentStatusNewyorkUni,startTermNewyork,admissionPlanNewyork, major1Newyork,major2Newyork,siblingAttentedNewyork, campusResidenceNewyork,whyNyu);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Newyork University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Columbia University")
        {
            if(studentStatusColumbiaUni[studentPosition]=="")
            {
                
                system("cls");
                columbiaUniversityQuestionsMenu();
                columbiaUniversityQuestions(studentPosition,studentStatusColumbiaUni,startTermColumbia,admissionPlanColumbia, major1Columbia,major2Columbia,siblingAttentedColumbia, campusResidenceColumbia,obstaclesFacedColumbia);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Columbia University";
                getch();
                break;
            }
        }

        else if (universitySearch=="Cornell University")
        {
            if(studentStatusCornellUni[studentPosition]=="")
            {
                
                system("cls");
                cornellUniversityQuestionsMenu();
                cornellUniversityQuestions(studentPosition,studentStatusCornellUni,startTermCornell,admissionPlanCornell, major1Cornell,major2Cornell,siblingAttentedCornell, campusResidenceCornell,takaboutIssuesCornell);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Cornell University";
                getch();
                break;
            }
        }

        else if (universitySearch=="University Of California")
        {
            if(studentStatusCaliforniaUni[studentPosition]=="")
            {
                
                system("cls");
                californiaUniversityQuestionsMenu();
                californiaUniversityQuestions(studentPosition,studentStatusCaliforniaUni,startTermCalifornia,admissionPlanCalifornia, major1California,major2California,siblingAttentedCalifornia, campusResidenceCalifornia,talentCalifornia);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from University Of California";
                getch();
                break;
            }
        }

        else if (universitySearch=="Brown University")
        {
            if(studentStatusBrownUni[studentPosition]=="")
            {
                
                system("cls");
                brownUniversityQuestionsMenu();
                brownUniversityQuestions(studentPosition,studentStatusBrownUni,startTermBrown,admissionPlanBrown, major1Brown,major2Brown,siblingAttentedBrown, campusResidenceBrown,communityBrown);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Brown University";
                getch();
                break;
            }
        }

        else if (universitySearch=="University Of Michigan")
        {
            if(studentStatusMichiganUni[studentPosition]=="")
            {
                
                system("cls");
                michiganUniversityQuestionsMenu();
                michiganUniversityQuestions(studentPosition,studentStatusMichiganUni,startTermMichigan,admissionPlanMichigan, major1Michigan,major2Michigan,siblingAttentedMichigan, campusResidenceMichigan,Q8Michigan);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from University Of Michigan";
                getch();
                break;
            }
        }

        else if (universitySearch=="Dartmouth College")
        {
            if(studentStatusDartmouthUni[studentPosition]=="")
            {
                
                system("cls");
                dartmouthUniversityQuestionsMenu();
                dartmouthUniversityQuestions(studentPosition,studentStatusDartmouthUni,startTermDartmouth,admissionPlanDartmouth, major1Dartmouth,major2Dartmouth,siblingAttentedDartmouth, campusResidenceDartmouth,Q8Dartmouth);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from Dartmouth College";
                getch();
                break;
            }
        }

        else if (universitySearch=="University Of Florida")
        {
            if(studentStatusFloridaUni[studentPosition]=="")
            {
                
                system("cls");
                floridaUniversityQuestionsMenu();
                floridaUniversityQuestions(studentPosition,studentStatusFloridaUni,startTermFlorida,admissionPlanFlorida, major1Florida,major2Florida,siblingAttentedFlorida, campusResidenceFlorida,Q8Florida);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from University Of Florida";
                getch();
                break;
            }
        }

        else if (universitySearch=="University Of Pennsylvania")
        {
            if(studentStatusPennsylvaniaUni[studentPosition]=="")
            {
                
                system("cls");
                pennsylvaniaUniversityQuestionsMenu();
                pennsylvaniaUniversityQuestions(studentPosition,studentStatusPennsylvaniaUni,startTermPennsylvania,admissionPlanPennsylvania, major1Pennsylvania,major2Pennsylvania,siblingAttentedPennsylvania, campusResidencePennsylvania,Q8Pennsylvania);
                break;
            }
            else
            {
                gotoxy(24,39);
                cout<<"You have already entered information asked from University Of Pennsylvania";
                getch();
                break;
            }
        }

        
    
        }
        else
        {
            gotoxy(24,39);
            cout<<"The following university is not selected yet, press any key to go to menu again";
            getch();
            break;
        }
        }
        
    }
    else
    {
        break;
    }
    
    }

    }
}

void addedUniversityMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##   Universities Selected:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

/*functions of all university specific questions  (start)*/

void georgiaUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);  
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                   Georgia State University                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Georgia State?                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. How do you first learned about Georgia State University?                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void georgiaUniversityQuestions(int studentPosition,string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusGeorgiaUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermGeorgia[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanGeorgia[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Georgia[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Georgia[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedGeorgia[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceGeorgia[studentPosition]);
    gotoxy(85,37);
    getline(cin,learnedAboutGeorgia[studentPosition]);
    
}



void BostonUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Boston University                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Georgia State?                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Why did you choose to apply to Boston University?(Express in less than 300 words)                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void bostonUniversityQuestions(int studentPosition,string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusBostonUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermBoston[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanBoston[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Boston[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Boston[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedBoston[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceBoston[studentPosition]);
    whyBoston[studentPosition]=takeFeedBack(30,130,38,41);

}

void stanfordUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Stanford University                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Georgia State?                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Tell us why you are pursuing your selected major.?(Express in less than 300 words)                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void stanfordUniversityQuestions(int studentPosition,string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusStanfordUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermStanford[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanStanford[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Stanford[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Stanford[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedStanford[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceStanford[studentPosition]);
    whyThisMajorStanford[studentPosition]=takeFeedBack(30,130,38,41);

}

void harvardUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Harvard University                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Georgia State?                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Briefly describe an intellectual experience that was important to you.?(Express in less than 300 words)                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void harvardUniversityQuestions(int studentPosition,string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusHarvardUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermHarvard[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanHarvard[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Harvard[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Harvard[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedHarvard[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceHarvard[studentPosition]);
    briefExperienceHarvard[studentPosition]=takeFeedBack(30,130,38,41);

}



void princetonUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);     
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Princeton University                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Princeton University?                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. What is a new skill you would like to learn in college.?(Express in less than 300 words)                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void princetonUniversityQuestions(int studentPosition,string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusPrincetonUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermPrinceton[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanPrinceton[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Princeton[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Princeton[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedPrinceton[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidencePrinceton[studentPosition]);
    newSkillPrinceton[studentPosition]=takeFeedBack(30,130,38,41);

}

void yaleUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);  
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Yale University                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Yale University?                                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Other than a family member, who is someone who has had a significant influence on you?.?(Express in less than 300 words)   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void yaleUniversityQuestions(int studentPosition,string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusYaleUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermYale[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanYale[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Yale[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Yale[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedYale[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceYale[studentPosition]);
    memberInfluenceYale[studentPosition]=takeFeedBack(30,130,38,41);

}

void newyorkUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Newyork University                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Newyork University?                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Why do you want to persue your education at Newyork University.?(Express in less than 300 words)                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void newyorkUniversityQuestions(int studentPosition,string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusNewyorkUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermNewyork[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanNewyork[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Newyork[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Newyork[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedNewyork[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceNewyork[studentPosition]);
    whyNyu[studentPosition]=takeFeedBack(30,130,38,41);

}

void columbiaUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);     
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Columbia University                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Columbia University?                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. describe an obstacles you have faced and discuss the personal qualities, skills you have developed as a result?(300 words) ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void columbiaUniversityQuestions(int studentPosition,string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusColumbiaUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermColumbia[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanColumbia[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Columbia[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Columbia[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedColumbia[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceColumbia[studentPosition]);
    obstaclesFacedColumbia[studentPosition]=takeFeedBack(30,130,38,41);

}

void cornellUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Cornell University                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Cornell University?                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Describe the topics or issues that you care about and why they are important to you?(less than 300 words)                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void cornellUniversityQuestions(int studentPosition,string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusCornellUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermCornell[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanCornell[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Cornell[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Cornell[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedCornell[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceCornell[studentPosition]);
    takaboutIssuesCornell[studentPosition]=takeFeedBack(30,130,38,41);

}

void californiaUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       California University                                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented University of California?                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. What is your greatest talent or skill? How have you developed, demonstrated that talent over time? (300 words)             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void californiaUniversityQuestions(int studentPosition,string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusCaliforniaUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermCalifornia[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanCalifornia[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1California[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2California[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedCalifornia[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceCalifornia[studentPosition]);
    talentCalifornia[studentPosition]=takeFeedBack(30,130,38,41);

}

void brownUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Brown University                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Brown University?                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. What have you done to make your school or your community a better place?? (less than 300 words)                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void brownUniversityQuestions(int studentPosition,string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusBrownUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermBrown[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanBrown[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Brown[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Brown[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedBrown[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceBrown[studentPosition]);
    communityBrown[studentPosition]=takeFeedBack(30,130,38,41);

}

void michiganUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Michigan University                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Michigan University?                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Describe how you have taken advantage of a significant education opportunity to overcome an educational barrier(300 words) ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void michiganUniversityQuestions(int studentPosition,string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusMichiganUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermMichigan[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanMichigan[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Michigan[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Michigan[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedMichigan[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceMichigan[studentPosition]);
    Q8Michigan[studentPosition]=takeFeedBack(30,130,38,41);

}

void dartmouthUniversityQuestionsMenu()
{
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Dartmouth College                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Dartmouth College?                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. What inspires you to attend Dartmouth College (less than 300 words)                                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void dartmouthUniversityQuestions(int studentPosition,string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusDartmouthUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermDartmouth[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanDartmouth[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Dartmouth[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Dartmouth[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedDartmouth[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceDartmouth[studentPosition]);
    Q8Dartmouth[studentPosition]=takeFeedBack(30,130,38,41);

}

void floridaUniversityQuestionsMenu()
{
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Florida University                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Florida University?                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. What inspires you to attend Florida University (less than 300 words)                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void floridaUniversityQuestions(int studentPosition,string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusFloridaUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermFlorida[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanFlorida[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Florida[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Florida[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedFlorida[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidenceFlorida[studentPosition]);
    Q8Florida[studentPosition]=takeFeedBack(30,130,38,41);

}

void pennsylvaniaUniversityQuestionsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);    
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Pennsylvania University                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      1. Student Status(Full Time or Part Time):                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      2. Prefered Start Term:                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      3. Admission Plan:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      4. Major of Interest(First preference):                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      5. Major of Interest(Second preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      6. Have any of your sibling or relative have attented Pennsylvania University?                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      7. Do you want to be considered for on campus residence?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      8. Why do you intend to persue in the major you desire? (less than 300 words)                                                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void pennsylvaniaUniversityQuestions(int studentPosition,string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[])
{
    gotoxy(68,16);
    cin.ignore();
    getline(cin,studentStatusPennsylvaniaUni[studentPosition]);
    gotoxy(55,19);
    getline(cin,startTermPennsylvania[studentPosition]);
    gotoxy(53,22);
    getline(cin,admissionPlanPennsylvania[studentPosition]);
    gotoxy(64,25);
    getline(cin,major1Pennsylvania[studentPosition]);
    gotoxy(64,28);
    getline(cin,major2Pennsylvania[studentPosition]);
    gotoxy(95,31);
    getline(cin,siblingAttentedPennsylvania[studentPosition]);
    gotoxy(81,34);
    getline(cin,campusResidencePennsylvania[studentPosition]);
    Q8Pennsylvania[studentPosition]=takeFeedBack(30,130,38,41);

}
/*functions of all university specific questions  (end)*/


/*Financial Aid Section Functions*/ 

void financialAidMainMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                     Financial Aid                                        ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             1.) Types of Financial Aid                                                   ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             2.) Scholarships                                                             ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             3.) Apply for Financial Aid                                                  ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||             4.) Back to Student Menu                                                     ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||      Enter option to continue..                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


void financialAidTypesMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                  Types of Financial Aid                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    ===Grants and scholarships===                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Grants and scholarships are free money that you do not have to pay back. They can come from the U.S.                     ##             ###"<<endl;
cout<<"###             ##           federal or state government, a college, or a private organization. This type of aid can be renewable,                    ##             ###"<<endl;
cout<<"###             ##           meaning that you receive a fixed amount over a specified period of time. The amount can also be adjusted                 ##             ###"<<endl;
cout<<"###             ##           based on other factors, such as maintaining a certain Grade Point Average (GPA).                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           The Free Application for Federal Student Aid (FAFSA) is a great way to apply for grants and scholarships.                ##             ###"<<endl;
cout<<"###             ##           You can also look up your state grant agency and explore financial aid opportunities provided by your state              ##             ###"<<endl;
cout<<"###             ##           government. You may be eligible for state financial aid even if you are not eligible for U.S. federal aid.               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    ===Loans===                                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##            1. Federal direct loans                                                                                                 ##             ###"<<endl;
cout<<"###             ##            2. Other types of loans                                                                                                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    ===Work-study===                                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##            Work-study refers to money you'd earn throughout the academic year by working a qualifying                              ##             ###"<<endl;
cout<<"###             ##            part-time job. You can use work-study money for books, travel, and other personal expenses. If                          ##             ###"<<endl;
cout<<"###             ##            you are eligible for a work-study job it is your responsibility to find a job.                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      Press any key to go back to Financial Aid Page                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void scholarshipsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                         Scholarships                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    ===Jack Kent Cooke Foundation===                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           The Jack Kent Cooke Foundation is well known for their College Scholarship Program, Opens in new tab. You can            ##             ###"<<endl;
cout<<"###             ##           apply for this scholarship using Common App if you are a high school senior in the United States                         ##             ###"<<endl;
cout<<"###             ##           with an unweighted GPA of 3.5 or higher and an annual family income of less than $95,000. They                           ##             ###"<<endl;
cout<<"###             ##           offer up to $55,000 per year, along with college planning support and advising.                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      Do you want to apply for this scholarship? Enter Yes or No.                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    ===BigFuture===                                                                                                                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           BigFuture Scholarship Search can help you find and apply for scholarships. Once you have                                 ##             ###"<<endl;
cout<<"###             ##           submitted an application, we can link your Common App account with BigFuture. Connecting                                 ##             ###"<<endl;
cout<<"###             ##           your account will make applying for scholarships faster by pre-populating your basic information.                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##      Do you want to apply for this scholarship? Enter Yes or No.                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void scholarshipQuestions(int studentPosition,int scholarship1[],int scholarship2[])
{
    string askForScholarship1="",askForScholarship2="";
    gotoxy(83,22);
    cin>>askForScholarship1;
    while(askForScholarship1!="Yes" && askForScholarship1!="yes" && askForScholarship1!="No" && askForScholarship1!="no")
    {
        gotoxy(30,24);
        cout<<"Invalid Input, Enter Again";
        gotoxy(60,24);
        cout<<"                 ";
        gotoxy(60,24);
        cin>>askForScholarship1;
        if(askForScholarship1=="Yes" || askForScholarship1=="yes" || askForScholarship1=="No" || askForScholarship1=="no")
        break;
    }

    if (askForScholarship1=="Yes" || askForScholarship1=="yes")
    {
        scholarship1[studentPosition]=1;
    }
    else if (askForScholarship1=="No" || askForScholarship1=="no")
    {
        scholarship1[studentPosition]=0;
    }

    gotoxy(83,37);
    cin>>askForScholarship2;
    while(askForScholarship2!="Yes" && askForScholarship2!="yes" && askForScholarship2!="No" && askForScholarship2!="no")
    {
        gotoxy(30,39);
        cout<<"Invalid Input, Enter Again";
        gotoxy(60,39);
        cout<<"                 ";
        gotoxy(60,39);
        cin>>askForScholarship2;
        if(askForScholarship2=="Yes" || askForScholarship2=="yes" || askForScholarship2=="No" || askForScholarship2=="no")
        break;
    }
    if (askForScholarship2=="Yes" || askForScholarship2=="yes")
    {
        scholarship2[studentPosition]=1;
    }
    else if (askForScholarship2=="No" || askForScholarship2=="no")
    {
        scholarship2[studentPosition]=0;
    }
    

}

void financialAidMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                 Apply for Financial Aid                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Name:                                                                                                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Total Family Income per annum(In Dollars):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Number of members in Household?                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Total Family Household Expense per annum(In Dollars)                                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Total Family Educational Expense per annum(In Dollars)                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Total Tax paid per annum(In Dollars)                                                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Did you receive any scholarship at any stage in your earlier education, if yes plz provide detail.                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void financialAidQuestions(int studentPosition,string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[])
{
    gotoxy(31,14);
    cin.ignore();
    getline(cin,financialAidName[studentPosition]);
    while(Alphabets(financialAidName[studentPosition])==false)
    {
        gotoxy(30,15);
        cout<<"Invalid Input, Enter again:";
        gotoxy(60,15);
        cout<<"                                     ";
        gotoxy(60,15);
        getline(cin,financialAidName[studentPosition]);
        if (Alphabets(financialAidName[studentPosition]))
        break;

    }
    gotoxy(70,18);
    getline(cin,totalFamilyIncome[studentPosition]);
    while(cheakforDigit(totalFamilyIncome[studentPosition])==false)
    {
        gotoxy(30,20);
        cout<<"Invalid Input, Enter again:";
        gotoxy(60,20);
        cout<<"                                     ";
        gotoxy(60,20);
        getline(cin,totalFamilyIncome[studentPosition]);
        if (cheakforDigit(totalFamilyIncome[studentPosition]))
        break;

    }
    gotoxy(60,22);
    getline(cin,householdMembers[studentPosition]);
    while(cheakforDigit(householdMembers[studentPosition])==false)
    {
        gotoxy(30,24);
        cout<<"Invalid Input, Enter again:";
        gotoxy(60,24);
        cout<<"                                     ";
        gotoxy(60,24);
        getline(cin,householdMembers[studentPosition]);
        if (cheakforDigit(householdMembers[studentPosition]))
        break;

    }
    gotoxy(80,26);
    getline(cin,householdExpense[studentPosition]);
    while(cheakforDigit(householdExpense[studentPosition])==false)
    {
        gotoxy(30,28);
        cout<<"Invalid Input, Enter again:";
        gotoxy(60,28);
        cout<<"                                     ";
        gotoxy(60,28);
        getline(cin,householdExpense[studentPosition]);
        if (cheakforDigit(householdExpense[studentPosition]))
        break;

    }
    gotoxy(80,30);
    getline(cin,educationalExpense[studentPosition]);
    while(cheakforDigit(educationalExpense[studentPosition])==false)
    {
        gotoxy(30,32);
        cout<<"Invalid Input, Enter again:";
        gotoxy(60,32);
        cout<<"                                     ";
        gotoxy(60,32);
        getline(cin,educationalExpense[studentPosition]);
        if (cheakforDigit(educationalExpense[studentPosition]))
        break;

    }
    gotoxy(65,34);
    getline(cin,tax[studentPosition]);
    while(cheakforDigit(tax[studentPosition])==false)
    {
        gotoxy(30,36);
        cout<<"Invalid Input, Enter again:";
        gotoxy(60,36);
        cout<<"                                     ";
        gotoxy(60,36);
        getline(cin,tax[studentPosition]);
        if (cheakforDigit(tax[studentPosition]))
        break;

    }
    previousScholarshipDetail[studentPosition]=takeFeedBack(30,120,39,41);
    gotoxy(25,41);
    cout<<"You have submitted all information, press any key to go to financial aid page";
    getch();

    


}



/*Dashboard Functions*/

void mainDashboardMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                          Dashboard                                                                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##   Welcome                                                                                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##   University Files:                                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*this is the function which will display all the files that are ready to be submitted to the university by the student*/
void mainDashboardFunction(int studentPosition,string studentEmail[],string studentName[],int georgiaStateUniArray[],int bostonUniversityArray[],int stanfordUniversityArray[],int harvardUniversityArray[],int pennsylvaniaUniversityArray[],int floridaUniversityArray[],int dartmouthCollegeArray[],int michiganUniversityArray[],int brownUniversityArray[],int UniOfCaliforniaArray[],int cornellUniversityArray[],int columbiaUniversityArray[],int nyuUniversityArray[],int yaleUniversityArray[],int princetonUniversityArray[],
int submitFileGeorgia[],int submitFileBoston[],int submitFileStanford[],int submitFileHarvard[],int submitFilePrinceton[],int submitFileYale[],int submitFileNewyork[],int submitFileColumbia[],int submitFileCornell[],int submitFileCalifornia[],int submitFileBrown[],int submitFileMichigan[],int submitFileDartmouth[],int submitFileFlorida[],int submitFilePennsylvania[],int decesionGeorgiaUni[],int decesionBostonUni[],int decesionStanfordUni[],int decesionHarvardUni[],int decesionPrincetonUni[],int decesionYaleUni[],
int decesionNewyorkUni[],int decesionColumbiaUni[],int decesionCornellUni[],int decesionCaliforniaUni[],int decesionBrownUni[],int decesionMichiganUni[],int decesionDartmouthUni[],int decesionFloridaUni[],int decesionPennsylvaniaUni[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],
string fatherOccupation[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[],int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[],string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],
string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],
string whyThisMajorStanford[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],
string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],
string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],
string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]
,string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],
string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[])
{
    while(true)
    {

    system("cls");
    mainDashboardMenu();
    gotoxy(29,14);
    cout<<studentEmail[studentPosition];
    int x=21,y=17;
    if (studentName[studentPosition]!="" && financialAidName[studentPosition]!="")   /*cheaks if all the bio data and financial in formation is entered*/
    {
        if(georgiaStateUniArray[studentPosition]==1 && studentStatusGeorgiaUni[studentPosition]!="") /*cheaks if this university is added to college list and the university specific data is olso collected*/
        {
            if(submitFileGeorgia[studentPosition]==0 )  /*if file is not submitted then simply print university name*/
            {
                gotoxy(x,y);
                cout<<"Georgia State University";
                y++;
            }
            else if(submitFileGeorgia[studentPosition]==1 && decesionGeorgiaUni[studentPosition]==-1)  /*if file is submitted but the decesion by the university is pending*/
            {
                gotoxy(x,y);
                cout<<"Georgia State University (File Submitted) (Decesion Pending) ";
                y++;
            }
            else if(submitFileGeorgia[studentPosition]==1 && decesionGeorgiaUni[studentPosition]==1)    /*if file is submitted and  the decesion by the university is accepted*/
            {
                gotoxy(x,y);
                cout<<"Georgia State University (File Submitted) (University Decesion: Accepted) ";
                y++;
            }
            else if(submitFileGeorgia[studentPosition]==1 && decesionGeorgiaUni[studentPosition]==0)   /*if file is submitted and the decesion by the university is not accepted*/
            {
                gotoxy(x,y);
                cout<<"Georgia State University (File Submitted) (University Decesion: Not Accepted) ";
                y++;
            }
            
        } 

        if(bostonUniversityArray[studentPosition]==1 && studentStatusBostonUni[studentPosition]!="")
        {
            if(submitFileBoston[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Boston University";
                y++;
            }
            else if(submitFileBoston[studentPosition]==1 && decesionBostonUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Boston University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileBoston[studentPosition]==1 && decesionBostonUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Boston University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileBoston[studentPosition]==1 && decesionBostonUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Boston University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(stanfordUniversityArray[studentPosition]==1 && studentStatusStanfordUni[studentPosition]!="")
        {
            if(submitFileStanford[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Stanford University";
                y++;
            }
            else if(submitFileStanford[studentPosition]==1 && decesionStanfordUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Stanford University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileStanford[studentPosition]==1 && decesionStanfordUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Stanford University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileStanford[studentPosition]==1 && decesionStanfordUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Stanford University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(harvardUniversityArray[studentPosition]==1 && studentStatusHarvardUni[studentPosition]!="")
        {
            if(submitFileHarvard[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Harvard University";
                y++;
            }
            else if(submitFileHarvard[studentPosition]==1 && decesionHarvardUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Harvard University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileHarvard[studentPosition]==1 && decesionHarvardUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Harvard University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileHarvard[studentPosition]==1 && decesionHarvardUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Harvard University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(princetonUniversityArray[studentPosition]==1 && studentStatusPrincetonUni[studentPosition]!="")
        {
            if(submitFilePrinceton[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Princeton University";
                y++;
            }
            else if(submitFilePrinceton[studentPosition]==1 && decesionPrincetonUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Princeton University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFilePrinceton[studentPosition]==1 && decesionPrincetonUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Princeton University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFilePrinceton[studentPosition]==1 && decesionPrincetonUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Princeton University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(yaleUniversityArray[studentPosition]==1 && studentStatusYaleUni[studentPosition]!="")
        {
            if(submitFileYale[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Yale University";
                y++;
            }
            else if(submitFileYale[studentPosition]==1 && decesionYaleUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Yale University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileYale[studentPosition]==1 && decesionYaleUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Yale University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileYale[studentPosition]==1 && decesionYaleUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Yale University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(nyuUniversityArray[studentPosition]==1 && studentStatusNewyorkUni[studentPosition]!="")
        {
            if(submitFileNewyork[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Newyork University";
                y++;
            }
            else if(submitFileNewyork[studentPosition]==1 && decesionNewyorkUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Newyork University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileNewyork[studentPosition]==1 && decesionNewyorkUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Newyork University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileNewyork[studentPosition]==1 && decesionNewyorkUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Newyork University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(columbiaUniversityArray[studentPosition]==1 && studentStatusColumbiaUni[studentPosition]!="")
        {
            if(submitFileColumbia[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Columbia University";
                y++;
            }
            else if(submitFileColumbia[studentPosition]==1 && decesionColumbiaUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Columbia University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileColumbia[studentPosition]==1 && decesionColumbiaUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Columbia University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileColumbia[studentPosition]==1 && decesionColumbiaUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Columbia University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(cornellUniversityArray[studentPosition]==1 && studentStatusCornellUni[studentPosition]!="")
        {
            if(submitFileCornell[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Cornell University";
                y++;
            }
            else if(submitFileCornell[studentPosition]==1 && decesionCornellUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Cornell University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileCornell[studentPosition]==1 && decesionCornellUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Cornell University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileCornell[studentPosition]==1 && decesionCornellUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Cornell University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(UniOfCaliforniaArray[studentPosition]==1 && studentStatusCaliforniaUni[studentPosition]!="")
        {
            if(submitFileCalifornia[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"University Of California";
                y++;
            }
            else if(submitFileCalifornia[studentPosition]==1 && decesionCaliforniaUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"University Of California (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileCalifornia[studentPosition]==1 && decesionCaliforniaUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"University Of California (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileCalifornia[studentPosition]==1 && decesionCaliforniaUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"University Of California (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(brownUniversityArray[studentPosition]==1 && studentStatusBrownUni[studentPosition]!="")
        {
            if(submitFileBrown[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Brown University";
                y++;
            }
            else if(submitFileBrown[studentPosition]==1 && decesionBrownUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Brown University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileBrown[studentPosition]==1 && decesionBrownUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Brown University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileBrown[studentPosition]==1 && decesionBrownUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Brown University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(michiganUniversityArray[studentPosition]==1 && studentStatusMichiganUni[studentPosition]!="")
        {
            if(submitFileMichigan[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Michigan University";
                y++;
            }
            else if(submitFileMichigan[studentPosition]==1 && decesionMichiganUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Michigan University (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileMichigan[studentPosition]==1 && decesionMichiganUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Michigan University (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileMichigan[studentPosition]==1 && decesionMichiganUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Michigan University (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(dartmouthCollegeArray[studentPosition]==1 && studentStatusDartmouthUni[studentPosition]!="")
        {
            if(submitFileDartmouth[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Dartmouth College";
                y++;
            }
            else if(submitFileDartmouth[studentPosition]==1 && decesionDartmouthUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"Dartmouth College (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileDartmouth[studentPosition]==1 && decesionDartmouthUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"Dartmouth College (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileDartmouth[studentPosition]==1 && decesionDartmouthUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"Dartmouth College (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(floridaUniversityArray[studentPosition]==1 && studentStatusFloridaUni[studentPosition]!="")
        {
            if(submitFileFlorida[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"University Of Florida";
                y++;
            }
            else if(submitFileFlorida[studentPosition]==1 && decesionFloridaUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"University Of Florida (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFileFlorida[studentPosition]==1 && decesionFloridaUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"University Of Florida (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFileFlorida[studentPosition]==1 && decesionFloridaUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"University Of Florida (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }

        if(pennsylvaniaUniversityArray[studentPosition]==1 && studentStatusPennsylvaniaUni[studentPosition]!="")
        {
            if(submitFilePennsylvania[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"University Of Pennsylvania";
                y++;
            }
            else if(submitFilePennsylvania[studentPosition]==1 && decesionPennsylvaniaUni[studentPosition]==-1)
            {
                gotoxy(x,y);
                cout<<"University Of Pennsylvania (File Submitted) (Decesion Pending)";
                y++;
            }
            else if(submitFilePennsylvania[studentPosition]==1 && decesionPennsylvaniaUni[studentPosition]==1)
            {
                gotoxy(x,y);
                cout<<"University Of Pennsylvania (File Submitted) (University Decesion: Accepted)";
                y++;
            }
            else if(submitFilePennsylvania[studentPosition]==1 && decesionPennsylvaniaUni[studentPosition]==0)
            {
                gotoxy(x,y);
                cout<<"University Of Pennsylvania (File Submitted) (University Decesion: Not Accepted)";
                y++;
            }
               
        }







        string askForContinue="";
    
        gotoxy(25,36);
        cout<<"Do you want to continue to veiw files or exit, Enter Yes to veiw files and No to exit:";

        gotoxy(113,36);
        cin>>askForContinue;
        if (askForContinue=="Yes" || askForContinue=="yes")
        {
            while(true)
            { 
                gotoxy(25,38);
                cout<<"Enter University for which you want to veiw and submit files:";
                string searchUniversity="";
                gotoxy(87,38);
                getline(cin,searchUniversity);
                /*now these are all the functions for veiwing the file and submitting it for all universities*/
                if(searchUniversity=="Georgia State University" && georgiaStateUniArray[studentPosition]==1 && studentStatusGeorgiaUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    georgiaAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    georgiaAns(studentPosition,submitFileGeorgia,studentStatusGeorgiaUni, startTermGeorgia, admissionPlanGeorgia,major1Georgia, major2Georgia,siblingAttentedGeorgia, campusResidenceGeorgia,learnedAboutGeorgia);
                    break;
                }
                else if(searchUniversity=="Boston University"  && bostonUniversityArray[studentPosition]==1 && studentStatusBostonUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    bostonAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    bostonAns(studentPosition,submitFileBoston,studentStatusBostonUni, startTermBoston,admissionPlanBoston,major1Boston,major2Boston,siblingAttentedBoston, campusResidenceBoston, whyBoston);
                    break;
                }
                else if(searchUniversity=="Stanford University"  && stanfordUniversityArray[studentPosition]==1 && studentStatusStanfordUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    stanfordAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    stanfordAns(studentPosition,submitFileStanford,studentStatusStanfordUni, startTermStanford,admissionPlanStanford,major1Stanford,major2Stanford,siblingAttentedStanford, campusResidenceStanford, whyThisMajorStanford);
                    break;
                }
                else if(searchUniversity=="Harvard University"  && harvardUniversityArray[studentPosition]==1 && studentStatusHarvardUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    harvardAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    harvardAns(studentPosition,submitFileHarvard,studentStatusHarvardUni, startTermHarvard,admissionPlanHarvard,major1Harvard,major2Harvard,siblingAttentedHarvard, campusResidenceHarvard, briefExperienceHarvard);
                    break;
                }
                else if(searchUniversity=="Princeton University"  && princetonUniversityArray[studentPosition]==1 && studentStatusPrincetonUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    princetonAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    princetonAns(studentPosition,submitFilePrinceton,studentStatusPrincetonUni, startTermPrinceton,admissionPlanPrinceton,major1Princeton,major2Princeton,siblingAttentedPrinceton, campusResidencePrinceton, newSkillPrinceton);
                    break;
                }
                else if(searchUniversity=="Yale University"  && yaleUniversityArray[studentPosition]==1 && studentStatusYaleUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    yaleAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    yaleAns(studentPosition,submitFileYale,studentStatusYaleUni, startTermYale,admissionPlanYale,major1Yale,major2Yale,siblingAttentedYale, campusResidenceYale, memberInfluenceYale);
                    break;
                }
                else if(searchUniversity=="Newyork University"  && nyuUniversityArray[studentPosition]==1 && studentStatusNewyorkUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    newyorkAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    newyorkAns(studentPosition,submitFileNewyork,studentStatusNewyorkUni, startTermNewyork,admissionPlanNewyork,major1Newyork,major2Newyork,siblingAttentedNewyork, campusResidenceNewyork, whyNyu);
                    break;
                }
                else if(searchUniversity=="Columbia University"  && columbiaUniversityArray[studentPosition]==1 && studentStatusColumbiaUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    columbiaAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    columbiaAns(studentPosition,submitFileColumbia,studentStatusColumbiaUni, startTermColumbia,admissionPlanColumbia,major1Columbia,major2Columbia,siblingAttentedColumbia, campusResidenceColumbia, obstaclesFacedColumbia);
                    break;
                }
                else if(searchUniversity=="Cornell University"  && cornellUniversityArray[studentPosition]==1 && studentStatusCornellUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    cornellAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    cornellAns(studentPosition,submitFileCornell,studentStatusCornellUni, startTermCornell,admissionPlanCornell,major1Cornell,major2Cornell,siblingAttentedCornell, campusResidenceCornell, takaboutIssuesCornell);
                    break;
                }
                else if(searchUniversity=="University Of California"  && UniOfCaliforniaArray[studentPosition]==1 && studentStatusCaliforniaUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    californiaAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    californiaAns(studentPosition,submitFileCalifornia,studentStatusCaliforniaUni, startTermCalifornia,admissionPlanCalifornia,major1California,major2California,siblingAttentedCalifornia, campusResidenceCalifornia, talentCalifornia);
                    break;
                } 
                else if(searchUniversity=="Brown University"  && brownUniversityArray[studentPosition]==1 && studentStatusBrownUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    brownAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    brownAns(studentPosition,submitFileBrown,studentStatusBrownUni, startTermBrown,admissionPlanBrown,major1Brown,major2Brown,siblingAttentedBrown, campusResidenceBrown, communityBrown);
                    break;
                }
                else if(searchUniversity=="Michigan University"  && michiganUniversityArray[studentPosition]==1 && studentStatusMichiganUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    michiganAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    michiganAns(studentPosition,submitFileMichigan,studentStatusMichiganUni, startTermMichigan,admissionPlanMichigan,major1Michigan,major2Michigan,siblingAttentedMichigan, campusResidenceMichigan, Q8Michigan);
                    break;
                }
                else if(searchUniversity=="Dartmouth College"  && dartmouthCollegeArray[studentPosition]==1 && studentStatusDartmouthUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    dartmouthAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    dartmouthAns(studentPosition,submitFileDartmouth,studentStatusDartmouthUni, startTermDartmouth,admissionPlanDartmouth,major1Dartmouth,major2Dartmouth,siblingAttentedDartmouth, campusResidenceDartmouth, Q8Dartmouth);
                    break;
                }
                else if(searchUniversity=="University Of Florida"  && floridaUniversityArray[studentPosition]==1 && studentStatusFloridaUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    floridaAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    floridaAns(studentPosition,submitFileFlorida,studentStatusFloridaUni, startTermFlorida,admissionPlanFlorida,major1Florida,major2Florida,siblingAttentedFlorida, campusResidenceFlorida, Q8Florida);
                    break;
                }
                else if(searchUniversity=="University Of Pennsylvania"  && pennsylvaniaUniversityArray[studentPosition]==1 && studentStatusPennsylvaniaUni[studentPosition]!="")
                {
                    system("cls");
                    dashboardMenu();
                    pennsylvaniaAnsMenu();
                    DashboardFileAnswers(studentPosition,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
                    pennsylvaniaAns(studentPosition,submitFilePennsylvania,studentStatusPennsylvaniaUni, startTermPennsylvania,admissionPlanPennsylvania,major1Florida,major2Pennsylvania,siblingAttentedPennsylvania, campusResidencePennsylvania, Q8Pennsylvania);
                    break;
                }

            }
        }
        else
        {
            break;
        }

    }
    else
    {
        gotoxy(21,18);
        cout<<"No Files are ready yet, provide all information,press any key to go back";
        getch();
        break;
    }
    }

}


void dashboardMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                     Student ID:                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##     SwiftAdmit Questions                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Full Name:                                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Date Of Birth:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Birth Country:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Address:                                                                                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Phone Number:                                                                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Visa Type, F1 or B1:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Mother's Name:                                                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Mother's Phone Number:                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       9. Mother's Occupation:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       10. Father's Name:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       11. Father's Phone Number:                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       12. Father's Occupation:                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       13. Current or most recent secondary/high school:                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       14. O-level grades:                                                                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       15. A-level grades:                                                                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       16. SAT Score:                                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       17. Activity 1:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       18. Activity 2:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       19. Activity 3:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       20. Activity 4:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       21. Activity 5:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       22. Essay type:                                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       23. Personal Statement:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##     Financial Aid and Scholarships                                                                                                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Jack Kent Cooke Foundation Scholarship, Applied?                                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. BigFuture Scholarship, Applied?                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Name:                                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Total Family Income per annum(In Dollars):                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Total Members In Household:                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Total Family Educational Expense per annum(In Dollars):                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Total Tax paid per annum(In Dollars)                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Scholarship at any stage in your earlier education:                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void DashboardFileAnswers(int studentPosition,string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string motherName[],string motherPhone[],string motherOccupation[],string fatherName[],string fatherPhone[],string fatherOccupation[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[],int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[])
{
    gotoxy(53,17);
    cout<<studentName[studentPosition];
    gotoxy(53,19);
    cout<<dOB[studentPosition];
    gotoxy(53,21);
    cout<<birthCountry[studentPosition];
    gotoxy(53,23);
    cout<<address[studentPosition];
    gotoxy(53,25);
    cout<<phoneNumber[studentPosition];
    gotoxy(53,27);
    cout<<visaType[studentPosition];
    gotoxy(53,29);
    cout<<motherName[studentPosition];
    gotoxy(53,31);
    cout<<motherPhone[studentPosition];
    gotoxy(53,33);
    cout<<motherOccupation[studentPosition];
    gotoxy(53,35);
    cout<<fatherName[studentPosition];
    gotoxy(53,37);
    cout<<fatherPhone[studentPosition];
    gotoxy(53,39);
    cout<<fatherOccupation[studentPosition];
    gotoxy(75,41);
    cout<<highSchool[studentPosition];
    gotoxy(35,44);
    cout<<OlevelGrades[studentPosition];
    gotoxy(35,48);
    cout<<AlevelGrades[studentPosition];
    gotoxy(43,51);
    cout<<satScore[studentPosition];
    
    printDataWithinSpecificCoord(act1[studentPosition],30,120,54,56);
    
    printDataWithinSpecificCoord(act2[studentPosition],30,120,58,60);
    
    printDataWithinSpecificCoord(act3[studentPosition],30,120,62,64);
    
    printDataWithinSpecificCoord(act4[studentPosition],30,120,66,68);
    
    printDataWithinSpecificCoord(act5[studentPosition],30,120,70,72);
    gotoxy(45,73);
    cout<<personalStatementType[studentPosition];
  
    printDataWithinSpecificCoord(personalStatement[studentPosition],30,120,76,83);
    gotoxy(75,86);
    if(scholarship1[studentPosition]==1)
    {
        cout<<"  Yes";
    }
    else if (scholarship1[studentPosition]==0)
    {
        cout<<"  No";
    }
    gotoxy(75,88);
    if(scholarship2[studentPosition]==1)
    {
        cout<<"  Yes";
    }
    else if (scholarship2[studentPosition]==0)
    {
        cout<<"  No";
    }
    gotoxy(40,90);
    cout<<financialAidName[studentPosition];
    gotoxy(75,92);
    cout<<totalFamilyIncome[studentPosition];
    gotoxy(57,94);
    cout<<householdMembers[studentPosition];
    gotoxy(84,96);
    cout<<educationalExpense[studentPosition];
    gotoxy(67,98);
    cout<<tax[studentPosition];
    gotoxy(35,101);
    cout<<previousScholarshipDetail[studentPosition];

}



void georgiaAnsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Georgia State University Questions                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. How do you first learned about Georgia State University?                                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void georgiaAns(int studentPosition,int submitFileGeorgia[],string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[])
{
    gotoxy(70,107);
    cout<<studentStatusGeorgiaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermGeorgia[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanGeorgia[studentPosition];
    gotoxy(70,113);
    cout<<major1Georgia[studentPosition];
    gotoxy(70,115);
    cout<<major2Georgia[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedGeorgia[studentPosition];
    gotoxy(82,119);
    cout<<campusResidenceGeorgia[studentPosition];
    gotoxy(32,122);
    cout<<learnedAboutGeorgia[studentPosition];
    if(submitFileGeorgia[studentPosition]==0)
    {
        gotoxy(30,124);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileGeorgia="";
        cin>>askForSubmitFileGeorgia;
        if(askForSubmitFileGeorgia=="Yes" || askForSubmitFileGeorgia=="yes")
        {
            submitFileGeorgia[studentPosition]=1;
        }
        
    }
    if(submitFileGeorgia[studentPosition]==1)
    {
    gotoxy(30,125);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

    




}

void bostonAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Boston University Questions                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Why did you choose to apply to Boston University?(Express in less than 300 words)                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void bostonAns(int studentPosition,int submitFileBoston[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[])
{
    gotoxy(70,107);
    cout<<studentStatusBostonUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermBoston[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanBoston[studentPosition];
    gotoxy(70,113);
    cout<<major1Boston[studentPosition];
    gotoxy(70,115);
    cout<<major2Boston[studentPosition];
    gotoxy(957,117);
    cout<<siblingAttentedBoston[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceBoston[studentPosition];
    printDataWithinSpecificCoord(whyBoston[studentPosition],30,130,122,124); 
    if(submitFileBoston[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileBoston="";
        cin>>askForSubmitFileBoston;
        if(askForSubmitFileBoston=="Yes" || askForSubmitFileBoston=="yes")
        {
            submitFileBoston[studentPosition]=1;
        }
        
    }
    if(submitFileBoston[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }
    


}

void stanfordAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Stanford University Questions                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Tell us why you are pursuing your selected major.?(Express in less than 300 words)                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void stanfordAns(int studentPosition,int submitFileStanford[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[])
{
    gotoxy(70,107);
    cout<<studentStatusStanfordUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermStanford[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanStanford[studentPosition];
    gotoxy(70,113);
    cout<<major1Stanford[studentPosition];
    gotoxy(70,115);
    cout<<major2Stanford[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedStanford[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceStanford[studentPosition];
    
    printDataWithinSpecificCoord(whyThisMajorStanford[studentPosition],30,130,122,124);
    if(submitFileStanford[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileStanford="";
        cin>>askForSubmitFileStanford;
        if(askForSubmitFileStanford=="Yes" || askForSubmitFileStanford=="yes")
        {
            submitFileStanford[studentPosition]=1;
        }
        
    }
    if(submitFileStanford[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }
    


}

void harvardAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Harvard University Questions                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Briefly describe an intellectual experience that was important to you.?(Express in less than 300 words)                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void harvardAns(int studentPosition,int submitFileHarvard[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[])
{
    gotoxy(70,107);
    cout<<studentStatusHarvardUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermHarvard[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanHarvard[studentPosition];
    gotoxy(70,113);
    cout<<major1Harvard[studentPosition];
    gotoxy(70,115);
    cout<<major2Harvard[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedHarvard[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceHarvard[studentPosition];
    printDataWithinSpecificCoord(briefExperienceHarvard[studentPosition],30,130,122,124);
    
    if(submitFileHarvard[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileHarvard="";
        cin>>askForSubmitFileHarvard;
        if(askForSubmitFileHarvard=="Yes" || askForSubmitFileHarvard=="yes")
        {
            submitFileHarvard[studentPosition]=1;
        }
        
    }
    if(submitFileHarvard[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void princetonAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Princeton University Questions                                                                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. What is a new skill you would like to learn in college.?(Express in less than 300 words)                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void princetonAns(int studentPosition,int submitFilePrinceton[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[])
{
    gotoxy(70,107);
    cout<<studentStatusPrincetonUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermPrinceton[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanPrinceton[studentPosition];
    gotoxy(70,113);
    cout<<major1Princeton[studentPosition];
    gotoxy(70,115);
    cout<<major2Princeton[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedPrinceton[studentPosition];
    gotoxy(83,119);
    cout<<campusResidencePrinceton[studentPosition];
    printDataWithinSpecificCoord(newSkillPrinceton[studentPosition],30,130,122,124);
    if(submitFilePrinceton[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFilePrinceton="";
        cin>>askForSubmitFilePrinceton;
        if(askForSubmitFilePrinceton=="Yes" || askForSubmitFilePrinceton=="yes")
        {
            submitFilePrinceton[studentPosition]=1;
        }
        
    }
    if(submitFilePrinceton[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }
    


}

void yaleAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Yale University Questions                                                                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Other than a family member, who is someone who has had a significant influence on you?.?(Express in less than 300 words)  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void yaleAns(int studentPosition,int submitFileYale[],string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[])
{
    gotoxy(70,107);
    cout<<studentStatusYaleUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermYale[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanYale[studentPosition];
    gotoxy(70,113);
    cout<<major1Yale[studentPosition];
    gotoxy(70,115);
    cout<<major2Yale[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedYale[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceYale[studentPosition];
    printDataWithinSpecificCoord(memberInfluenceYale[studentPosition],30,130,122,124);
    if(submitFileYale[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileYale="";
        cin>>askForSubmitFileYale;
        if(askForSubmitFileYale=="Yes" || askForSubmitFileYale=="yes")
        {
            submitFileYale[studentPosition]=1;
        }
        
    }
    if(submitFileYale[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void newyorkAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Newyork University Questions                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Why do you want to persue your education at Newyork University.?                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void newyorkAns(int studentPosition,int submitFileNewyork[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[])
{
    gotoxy(70,107);
    cout<<studentStatusNewyorkUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermNewyork[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanNewyork[studentPosition];
    gotoxy(70,113);
    cout<<major1Newyork[studentPosition];
    gotoxy(70,115);
    cout<<major2Newyork[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedNewyork[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceNewyork[studentPosition];
    printDataWithinSpecificCoord(whyNyu[studentPosition],30,130,122,124);
    if(submitFileNewyork[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileNewyork="";
        cin>>askForSubmitFileNewyork;
        if(askForSubmitFileNewyork=="Yes" || askForSubmitFileNewyork=="yes")
        {
            submitFileNewyork[studentPosition]=1;
        }
        
    }
    if(submitFileNewyork[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void columbiaAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Columbia University Questions                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. describe an obstacles you have faced and discuss the personal qualities, skills you have developed as a result?           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void columbiaAns(int studentPosition,int submitFileColumbia[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[])
{
    gotoxy(70,107);
    cout<<studentStatusColumbiaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermColumbia[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanColumbia[studentPosition];
    gotoxy(70,113);
    cout<<major1Columbia[studentPosition];
    gotoxy(70,115);
    cout<<major2Columbia[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedColumbia[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceColumbia[studentPosition];
    printDataWithinSpecificCoord(obstaclesFacedColumbia[studentPosition],30,130,122,124);
    if(submitFileColumbia[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileColumbia="";
        cin>>askForSubmitFileColumbia;
        if(askForSubmitFileColumbia=="Yes" || askForSubmitFileColumbia=="yes")
        {
            submitFileColumbia[studentPosition]=1;
        }
        
    }
    if(submitFileColumbia[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void cornellAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Cornell University Questions                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Describe the topics or issues that you care about and why they are important to you?                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void cornellAns(int studentPosition,int submitFileCornell[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[])
{
    gotoxy(70,107);
    cout<<studentStatusCornellUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermCornell[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanCornell[studentPosition];
    gotoxy(70,113);
    cout<<major1Cornell[studentPosition];
    gotoxy(70,115);
    cout<<major2Cornell[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedCornell[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceCornell[studentPosition];
    
    printDataWithinSpecificCoord(takaboutIssuesCornell[studentPosition],30,130,122,124);
    if(submitFileCornell[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileCornell="";
        cin>>askForSubmitFileCornell;
        if(askForSubmitFileCornell=="Yes" || askForSubmitFileCornell=="yes")
        {
            submitFileCornell[studentPosition]=1;
        }
        
    }
    if(submitFileCornell[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void californiaAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    California University Questions                                                                                                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. What is your greatest talent or skill? How have you developed, demonstrated that talent over time?                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void californiaAns(int studentPosition,int submitFileCalifornia[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[])
{
    gotoxy(70,107);
    cout<<studentStatusCaliforniaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermCalifornia[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanCalifornia[studentPosition];
    gotoxy(70,113);
    cout<<major1California[studentPosition];
    gotoxy(70,115);
    cout<<major2California[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedCalifornia[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceCalifornia[studentPosition];
   
    printDataWithinSpecificCoord(talentCalifornia[studentPosition],30,130,122,124);
    if(submitFileCalifornia[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileCalifornia="";
        cin>>askForSubmitFileCalifornia;
        if(askForSubmitFileCalifornia=="Yes" || askForSubmitFileCalifornia=="yes")
        {
            submitFileCalifornia[studentPosition]=1;
        }
        
    }
    if(submitFileCalifornia[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void brownAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Brown University Questions                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. What have you done to make your school or your community a better place?                                                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void brownAns(int studentPosition,int submitFileBrown[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[])
{
    gotoxy(70,107);
    cout<<studentStatusBrownUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermBrown[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanBrown[studentPosition];
    gotoxy(70,113);
    cout<<major1Brown[studentPosition];
    gotoxy(70,115);
    cout<<major2Brown[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedBrown[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceBrown[studentPosition];
  
    printDataWithinSpecificCoord(communityBrown[studentPosition],30,130,122,124);
    if(submitFileBrown[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileBrown="";
        cin>>askForSubmitFileBrown;
        if(askForSubmitFileBrown=="Yes" || askForSubmitFileBrown=="yes")
        {
            submitFileBrown[studentPosition]=1;
        }
        
    }
    if(submitFileBrown[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void michiganAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Michigan University Questions                                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Describe how you have taken advantage of a significant education opportunity to overcome an educational barrier           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void michiganAns(int studentPosition,int submitFileMichigan[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[])
{
    gotoxy(70,107);
    cout<<studentStatusMichiganUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermMichigan[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanMichigan[studentPosition];
    gotoxy(70,113);
    cout<<major1Michigan[studentPosition];
    gotoxy(70,115);
    cout<<major2Michigan[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedMichigan[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceMichigan[studentPosition];
    
    printDataWithinSpecificCoord(Q8Michigan[studentPosition],30,130,122,124);
    if(submitFileMichigan[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileMichigan="";
        cin>>askForSubmitFileMichigan;
        if(askForSubmitFileMichigan=="Yes" || askForSubmitFileMichigan=="yes")
        {
            submitFileMichigan[studentPosition]=1;
        }
        
    }
    if(submitFileMichigan[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void dartmouthAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Dartmouth College Questions                                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. What inspires you to attend Dartmouth College                                                                             ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void dartmouthAns(int studentPosition,int submitFileDartmouth[],string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[])
{
    gotoxy(70,107);
    cout<<studentStatusDartmouthUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermDartmouth[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanDartmouth[studentPosition];
    gotoxy(70,113);
    cout<<major1Dartmouth[studentPosition];
    gotoxy(70,115);
    cout<<major2Dartmouth[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedDartmouth[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceDartmouth[studentPosition];
 
    printDataWithinSpecificCoord(Q8Dartmouth[studentPosition],30,130,122,124);
    if(submitFileDartmouth[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileDartmouth="";
        cin>>askForSubmitFileDartmouth;
        if(askForSubmitFileDartmouth=="Yes" || askForSubmitFileDartmouth=="yes")
        {
            submitFileDartmouth[studentPosition]=1;
        }
        
    }
    if(submitFileDartmouth[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void floridaAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Florida University Questions                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. What inspires you to attend Florida University                                                                            ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";

SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void floridaAns(int studentPosition,int submitFileFlorida[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[])
{
    gotoxy(70,107);
    cout<<studentStatusFloridaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermFlorida[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanFlorida[studentPosition];
    gotoxy(70,113);
    cout<<major1Florida[studentPosition];
    gotoxy(70,115);
    cout<<major2Florida[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedFlorida[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceFlorida[studentPosition];
    
    printDataWithinSpecificCoord(Q8Florida[studentPosition],30,130,122,124);
    if(submitFileFlorida[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFileFlorida="";
        cin>>askForSubmitFileFlorida;
        if(askForSubmitFileFlorida=="Yes" || askForSubmitFileFlorida=="yes")
        {
            submitFileFlorida[studentPosition]=1;
        }
        
    }
    if(submitFileFlorida[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}

void pennsylvaniaAnsMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##    Pennsylvania University Questions                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Student Status(Full Time or Part Time):                                                                                   ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Prefered Start Term:                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Admission Plan:                                                                                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       4. Major of Interest(First preference):                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       5. Major of Interest(Second preference):                                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       6. Have any of your sibling or relative have attented Georgia State?                                                         ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       7. Do you want to be considered for on campus residence?                                                                     ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       8. Why do you intend to persue in the major you desire?                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

void pennsylvaniaAns(int studentPosition,int submitFilePennsylvania[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[])
{
    gotoxy(70,107);
    cout<<studentStatusPennsylvaniaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermPennsylvania[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanPennsylvania[studentPosition];
    gotoxy(70,113);
    cout<<major1Pennsylvania[studentPosition];
    gotoxy(70,115);
    cout<<major2Pennsylvania[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedPennsylvania[studentPosition];
    gotoxy(83,119);
    cout<<campusResidencePennsylvania[studentPosition];
 
    printDataWithinSpecificCoord(Q8Pennsylvania[studentPosition],30,130,122,124);
    if(submitFilePennsylvania[studentPosition]==0)
    {
        gotoxy(30,126);
        cout<<"Do you want to submit this file, Enter Yes or No: ";
        string askForSubmitFilePennsylvania="";
        cin>>askForSubmitFilePennsylvania;
        if(askForSubmitFilePennsylvania=="Yes" || askForSubmitFilePennsylvania=="yes")
        {
            submitFilePennsylvania[studentPosition]=1;
        }
        
    }
    if(submitFilePennsylvania[studentPosition]==1)
    {
    gotoxy(30,127);
    cout<<"Your File is submitted, press any key to go back";
    getch();
    }

}


/*College Representative functions*/
void universityRepresentativeSignUp()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                    University Representative                                                       ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Enter UserName:                                                                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Enter Password:                                                    Note: Password must be greater than 8 characters,     ##             ###"<<endl;
cout<<"###             ##                                                                                    contain atleast one capital letter,             ##             ###"<<endl;
cout<<"###             ##                                                                                    one digit, and one special character            ##             ###"<<endl;
cout<<"###             ##                                                                                    and it should contain no space                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Conform Password:                                                                                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void universityRepresentativeSignIn()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                 University Representative                                ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter UserName:                                                                 ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter Password:                                                                 ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


bool cheakUniversityName(string universityName)
{
    bool cheak=false;
    if(universityName=="Georgia State University" || universityName=="Boston University" || universityName=="Stanford University" || universityName=="Harvard University" || universityName=="Princeton University" || universityName=="Yale University" || universityName=="Newyork University" || universityName=="Columbia University" || universityName=="Cornell University" || universityName=="University Of California" || universityName=="Brown University" || universityName=="University Of Michigan" || universityName=="Dartmouth College" || universityName=="University Of Florida" || universityName=="University Of Pennsylvania")
    {
        cheak=true;
    }

}

void uniRepHeader()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*now in this function the university representative of any university can veiw the files of all the students which have submitted their files to that university
and then the university can make decesion regarding all the students*/
void mainUniRepFunction(int studentPosition,int submitFileGeorgia[],int submitFileBoston[],int submitFileStanford[],int submitFileHarvard[],int submitFilePrinceton[],int submitFileYale[],int submitFileNewyork[],int submitFileColumbia[],int submitFileCornell[],int submitFileCalifornia[],int submitFileBrown[],int submitFileMichigan[],int submitFileDartmouth[],int submitFileFlorida[],
int submitFilePennsylvania[],int decesionGeorgiaUni[],int decesionBostonUni[],int decesionStanfordUni[],int decesionHarvardUni[],int decesionPrincetonUni[],int decesionYaleUni[],int decesionNewyorkUni[],int decesionColumbiaUni[],int decesionCornellUni[],int decesionCaliforniaUni[],int decesionBrownUni[],int decesionMichiganUni[],int decesionDartmouthUni[],int decesionFloridaUni[],int decesionPennsylvaniaUni[],
string arrayForStudentEmailCheakGeorgia[],string arrayForStudentEmailCheakBoston[],string arrayForStudentEmailCheakStanford[],string arrayForStudentEmailCheakHarvard[],string arrayForStudentEmailCheakPrinceton[],string arrayForStudentEmailCheakYale[],string arrayForStudentEmailCheakNewyork[],string arrayForStudentEmailCheakColumbia[],string arrayForStudentEmailCheakCornell[],
string arrayForStudentEmailCheakCalifornia[],string arrayForStudentEmailCheakBrown[],string arrayForStudentEmailCheakMichigan[],string arrayForStudentEmailCheakDartmouth[],string arrayForStudentEmailCheakFlorida[],string arrayForStudentEmailCheakPennsylvania[],int &arrayForStudentEmailCheakLengthGeorgia ,int &arrayForStudentEmailCheakLengthBoston,int &arrayForStudentEmailCheakLengthStanford,
int &arrayForStudentEmailCheakLengthHarvard,int &arrayForStudentEmailCheakLengthPrinceton,int &arrayForStudentEmailCheakLengthYale,int &arrayForStudentEmailCheakLengthNewyork,int &arrayForStudentEmailCheakLengthColumbia,int &arrayForStudentEmailCheakLengthCornell,int &arrayForStudentEmailCheakLengthCalifornia,int &arrayForStudentEmailCheakLengthBrown,int &arrayForStudentEmailCheakLengthMichigan,
int &arrayForStudentEmailCheakLengthDartmouth,int &arrayForStudentEmailCheakLengthFlorida,int &arrayForStudentEmailCheakLengthPennsylvania,string studentEmail[],string studentName[],string dOB[],string phoneNumber[],string address[],string birthCountry[],string visaType[],string highSchool[],string OlevelGrades[],string AlevelGrades[],string satScore[],string motherName[],string motherPhone[],string motherOccupation[],
string fatherName[],string fatherPhone[],string fatherOccupation[],string act1[],string act2[],string act3[],string act4[],string act5[],string personalStatementType[],string personalStatement[],int scholarship1[],int scholarship2[],string financialAidName[],string totalFamilyIncome[],string householdMembers[],string householdExpense[],string educationalExpense[],string tax[],string previousScholarshipDetail[],string studentStatusGeorgiaUni[],string startTermGeorgia[],
string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[],string studentStatusBostonUni[],
string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],
string whyThisMajorStanford[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[],
string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],
string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],
string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[]
,string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],
string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[])
{
    while(true)
    {
        system("cls");
        mainUniRepMenu();
        string askForOption="";
        gotoxy(110,35);
        cin>>askForOption;
        while (askForOption!="1" && askForOption!="2" && askForOption!="3" && askForOption!="4" && askForOption!="5" && askForOption!="6" && askForOption!="7" && askForOption!="8" && askForOption!="9" && askForOption!="10" && askForOption!="11" && askForOption!="12" && askForOption!="13" && askForOption!="14" && askForOption!="15" && askForOption!="exit" && askForOption!="Exit")
        {
            gotoxy(30,36);
            cout<<"Invalid option, enter option again: ";
            gotoxy(67,36);
            cout<<"                                  ";
            gotoxy(67,36);
            cin>>askForOption;
            if (askForOption=="1" || askForOption=="2" || askForOption=="3" || askForOption!="4" || askForOption!="5" || askForOption!="6" || askForOption!="7" || askForOption!="8" || askForOption!="9" || askForOption!="10" || askForOption!="11" || askForOption!="12" || askForOption!="13" || askForOption!="14" || askForOption!="15" || askForOption!="exit" || askForOption!="Exit")
            break;
        }
    

    if(askForOption=="1")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Georgia State University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileGeorgia[z]==1 && (decesionGeorgiaUni[z]==1 || decesionGeorgiaUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileGeorgia[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakGeorgia[arrayForStudentEmailCheakLengthGeorgia]=studentEmail[z];
            arrayForStudentEmailCheakLengthGeorgia++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepGeorgia(arrayForStudentEmailCheakGeorgia,askFromUniRep,arrayForStudentEmailCheakLengthGeorgia);
            if(decesionGeorgiaUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusGeorgiaUni[studentPositionForUniRep]!="")
            
            {
            system("cls");
            dashboardMenu();
            georgiaAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            georgiaAnsForUniRep(studentPositionForUniRep,decesionGeorgiaUni,studentStatusGeorgiaUni, startTermGeorgia,admissionPlanGeorgia,major1Georgia,major2Georgia,siblingAttentedGeorgia,campusResidenceGeorgia,learnedAboutGeorgia);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="2")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Boston University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileBoston[z]==1 && (decesionBostonUni[z]==1 || decesionBostonUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileBoston[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakBoston[arrayForStudentEmailCheakLengthBoston]=studentEmail[z];
            arrayForStudentEmailCheakLengthBoston++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepBoston(arrayForStudentEmailCheakBoston,askFromUniRep,arrayForStudentEmailCheakLengthBoston);
            if(decesionBostonUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusBostonUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            bostonAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            bostonAnsForUniRep(studentPositionForUniRep,decesionBostonUni,studentStatusBostonUni, startTermBoston,admissionPlanBoston,major1Boston,major2Boston,siblingAttentedBoston,campusResidenceBoston,whyBoston);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="3")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Stanford University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileStanford[z]==1 && (decesionStanfordUni[z]==1 || decesionStanfordUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileStanford[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakStanford[arrayForStudentEmailCheakLengthStanford]=studentEmail[z];
            arrayForStudentEmailCheakLengthStanford++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepStanford(arrayForStudentEmailCheakStanford,askFromUniRep,arrayForStudentEmailCheakLengthStanford);
            if(decesionStanfordUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusStanfordUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            stanfordAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            stanfordAnsForUniRep(studentPositionForUniRep,decesionStanfordUni,studentStatusStanfordUni, startTermStanford,admissionPlanStanford,major1Stanford,major2Stanford,siblingAttentedStanford,campusResidenceStanford,whyThisMajorStanford);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="4")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Harvard University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileHarvard[z]==1 && (decesionHarvardUni[z]==1 || decesionHarvardUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileHarvard[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakHarvard[arrayForStudentEmailCheakLengthHarvard]=studentEmail[z];
            arrayForStudentEmailCheakLengthHarvard++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepHarvard(arrayForStudentEmailCheakHarvard,askFromUniRep,arrayForStudentEmailCheakLengthHarvard);
            if(decesionHarvardUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusHarvardUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            harvardAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            harvardAnsForUniRep(studentPositionForUniRep,decesionHarvardUni,studentStatusHarvardUni, startTermHarvard,admissionPlanHarvard,major1Harvard,major2Harvard,siblingAttentedHarvard,campusResidenceHarvard,briefExperienceHarvard);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="5")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Princeton University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFilePrinceton[z]==1 && (decesionPrincetonUni[z]==1 || decesionPrincetonUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFilePrinceton[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakPrinceton[arrayForStudentEmailCheakLengthPrinceton]=studentEmail[z];
            arrayForStudentEmailCheakLengthPrinceton++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepPrinceton(arrayForStudentEmailCheakPrinceton,askFromUniRep,arrayForStudentEmailCheakLengthPrinceton);
            if(decesionPrincetonUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusPrincetonUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            princetonAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            princetonAnsForUniRep(studentPositionForUniRep,decesionPrincetonUni,studentStatusPrincetonUni, startTermPrinceton,admissionPlanPrinceton,major1Princeton,major2Princeton,siblingAttentedPrinceton,campusResidencePrinceton,newSkillPrinceton);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="6")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Yale University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileYale[z]==1 && (decesionYaleUni[z]==1 || decesionYaleUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileYale[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakYale[arrayForStudentEmailCheakLengthYale]=studentEmail[z];
            arrayForStudentEmailCheakLengthYale++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepYale(arrayForStudentEmailCheakYale,askFromUniRep,arrayForStudentEmailCheakLengthYale);
            if(decesionYaleUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusYaleUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            yaleAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            yaleAnsForUniRep(studentPositionForUniRep,decesionYaleUni,studentStatusYaleUni, startTermYale,admissionPlanYale,major1Yale,major2Yale,siblingAttentedYale,campusResidenceYale,memberInfluenceYale);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="7")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Newyork University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileNewyork[z]==1 && (decesionNewyorkUni[z]==1 || decesionNewyorkUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileNewyork[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakNewyork[arrayForStudentEmailCheakLengthNewyork]=studentEmail[z];
            arrayForStudentEmailCheakLengthNewyork++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepNewyork(arrayForStudentEmailCheakNewyork,askFromUniRep,arrayForStudentEmailCheakLengthNewyork);
            if(decesionNewyorkUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusNewyorkUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            newyorkAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            newyorkAnsForUniRep(studentPositionForUniRep,decesionNewyorkUni,studentStatusNewyorkUni, startTermNewyork,admissionPlanNewyork,major1Newyork,major2Newyork,siblingAttentedNewyork,campusResidenceNewyork,whyNyu);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="8")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Columbia University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileColumbia[z]==1 && (decesionColumbiaUni[z]==1 || decesionColumbiaUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileColumbia[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakColumbia[arrayForStudentEmailCheakLengthColumbia]=studentEmail[z];
            arrayForStudentEmailCheakLengthColumbia++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepColumbia(arrayForStudentEmailCheakColumbia,askFromUniRep,arrayForStudentEmailCheakLengthColumbia);
            if(decesionColumbiaUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusColumbiaUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            columbiaAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            columbiaAnsForUniRep(studentPositionForUniRep,decesionColumbiaUni,studentStatusColumbiaUni, startTermColumbia,admissionPlanColumbia,major1Columbia,major2Columbia,siblingAttentedColumbia,campusResidenceColumbia,obstaclesFacedColumbia);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="9")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"Cornell University";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileCornell[z]==1 && (decesionCornellUni[z]==1 || decesionCornellUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileCornell[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakCornell[arrayForStudentEmailCheakLengthCornell]=studentEmail[z];
            arrayForStudentEmailCheakLengthCornell++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepCornell(arrayForStudentEmailCheakCornell,askFromUniRep,arrayForStudentEmailCheakLengthCornell);
            if(decesionCornellUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusCornellUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            cornellAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            cornellAnsForUniRep(studentPositionForUniRep,decesionCornellUni,studentStatusCornellUni, startTermCornell,admissionPlanCornell,major1Cornell,major2Cornell,siblingAttentedCornell,campusResidenceCornell,takaboutIssuesCornell);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption=="10")
    {
        while(true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60,12);
            cout<<"University Of California";
            int x=20,y=17;
            for(int z=0;z<100;z++)
            {
            if(submitFileCalifornia[z]==1 && (decesionCaliforniaUni[z]==1 || decesionCaliforniaUni[z]==0))
            {
            gotoxy(x,y);
            cout<<studentEmail[z]<<"   (Decesion Made)";
            y++;
            } 
            else if(submitFileCalifornia[z]==1)
            {  
            gotoxy(x,y);
            cout<<studentEmail[z];
            y++;
            arrayForStudentEmailCheakCalifornia[arrayForStudentEmailCheakLengthCalifornia]=studentEmail[z];
            arrayForStudentEmailCheakLengthCalifornia++;
            } 
            }
            
            gotoxy(x,y+2);
            cout<<"Do you want to continue or Exit,Enter Yes to continue and No to exit: ";
            string askForContinue="";
            cin>>askForContinue;
            if(askForContinue=="Yes" || askForContinue=="yes")
            {
            gotoxy(x,y+5);
            cout<<"Enter the Student Email from the above list for which you want to veiw file and make decesion: ";
            string askFromUniRep="";
            cin>>askFromUniRep;
            while(true)
            {
            int studentPositionForUniRep=cheakStudentEmailforUniRepCalifornia(arrayForStudentEmailCheakCalifornia,askFromUniRep,arrayForStudentEmailCheakLengthCalifornia);
            if(decesionCaliforniaUni[studentPositionForUniRep]==-1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusCaliforniaUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            californiaAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep,studentName,dOB,phoneNumber,address,birthCountry,visaType,highSchool,OlevelGrades,AlevelGrades,satScore,motherName,motherPhone,motherOccupation,fatherName,fatherPhone, fatherOccupation,act1,act2,act3,act4, act5,personalStatementType,personalStatement,scholarship1,scholarship2,financialAidName,totalFamilyIncome,householdMembers,householdExpense,educationalExpense,tax,previousScholarshipDetail);
            californiaAnsForUniRep(studentPositionForUniRep,decesionCaliforniaUni,studentStatusCaliforniaUni, startTermCalifornia,admissionPlanCalifornia,major1California,major2California,siblingAttentedCalifornia,campusResidenceCalifornia,talentCalifornia);
            break;
            }
            else
            { 
            system("cls");
            uniRepHeader();
            gotoxy(20,14);
            cout<<"Either Decesion has already been made for this student or this student is not included in list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }

    }

    else if(askForOption == "11")
    {
        while (true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60, 12);
            cout << "Brown University";
            int x = 20, y = 17;
            for (int z = 0; z < 100; z++)
            {
            if (submitFileBrown[z] == 1 && (decesionBrownUni[z] == 1 || decesionBrownUni[z] == 0))
            {
            gotoxy(x, y);
            cout << studentEmail[z] << "   (Decision Made)";
            y++;
            }
            else if (submitFileBrown[z] == 1)
            {
            gotoxy(x, y);
            cout << studentEmail[z];
            y++;
            arrayForStudentEmailCheakBrown[arrayForStudentEmailCheakLengthBrown] = studentEmail[z];
            arrayForStudentEmailCheakLengthBrown++;
            }
            }

            gotoxy(x, y + 2);
            cout << "Do you want to continue or Exit, Enter Yes to continue and No to exit: ";
            string askForContinue = "";
            cin >> askForContinue;
            if (askForContinue == "Yes" || askForContinue == "yes")
            {
            gotoxy(x, y + 5);
            cout << "Enter the Student Email from the above list for which you want to view file and make decision: ";
            string askFromUniRep = "";
            cin >> askFromUniRep;
            while (true)
            {
            int studentPositionForUniRep = cheakStudentEmailforUniRepBrown(arrayForStudentEmailCheakBrown, askFromUniRep, arrayForStudentEmailCheakLengthBrown);
            if (decesionBrownUni[studentPositionForUniRep] == -1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusBrownUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            brownAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep, studentName, dOB, phoneNumber, address, birthCountry, visaType, highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail);
            brownAnsForUniRep(studentPositionForUniRep, decesionBrownUni, studentStatusBrownUni, startTermBrown, admissionPlanBrown, major1Brown, major2Brown, siblingAttentedBrown, campusResidenceBrown, communityBrown);
            break;
            }
            else
            {
            system("cls");
            uniRepHeader();
            gotoxy(20, 14);
            cout << "Either Decision has already been made for this student or this student is not included in the list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }
    }

    else if(askForOption == "12")
    {
        while (true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60, 12);
            cout << "Michigan University";
            int x = 20, y = 17;
            for (int z = 0; z < 100; z++)
            {
            if (submitFileMichigan[z] == 1 && (decesionMichiganUni[z] == 1 || decesionMichiganUni[z] == 0))
            {
            gotoxy(x, y);
            cout << studentEmail[z] << "   (Decision Made)";
            y++;
            }
            else if (submitFileMichigan[z] == 1)
            {
            gotoxy(x, y);
            cout << studentEmail[z];
            y++;
            arrayForStudentEmailCheakMichigan[arrayForStudentEmailCheakLengthMichigan] = studentEmail[z];
            arrayForStudentEmailCheakLengthMichigan++;
            }
            }

            gotoxy(x, y + 2);
            cout << "Do you want to continue or Exit, Enter Yes to continue and No to exit: ";
            string askForContinue = "";
            cin >> askForContinue;
            if (askForContinue == "Yes" || askForContinue == "yes")
            {
            gotoxy(x, y + 5);
            cout << "Enter the Student Email from the above list for which you want to view file and make decision: ";
            string askFromUniRep = "";
            cin >> askFromUniRep;
            while (true)
            {
            int studentPositionForUniRep = cheakStudentEmailforUniRepMichigan(arrayForStudentEmailCheakMichigan, askFromUniRep, arrayForStudentEmailCheakLengthMichigan);
            if (decesionMichiganUni[studentPositionForUniRep] == -1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusMichiganUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            michiganAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep, studentName, dOB, phoneNumber, address, birthCountry, visaType, highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail);
            michiganAnsForUniRep(studentPositionForUniRep, decesionMichiganUni, studentStatusMichiganUni, startTermMichigan, admissionPlanMichigan, major1Michigan, major2Michigan, siblingAttentedMichigan, campusResidenceMichigan, Q8Michigan);
            break;
            }
            else
            {
            system("cls");
            uniRepHeader();
            gotoxy(20, 14);
            cout << "Either Decision has already been made for this student or this student is not included in the list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }
    }

    else if(askForOption == "13")
    {
        while (true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60, 12);
            cout << "Dartmouth College";
            int x = 20, y = 17;
            for (int z = 0; z < 100; z++)
            {
            if (submitFileDartmouth[z] == 1 && (decesionDartmouthUni[z] == 1 || decesionDartmouthUni[z] == 0))
            {
            gotoxy(x, y);
            cout << studentEmail[z] << "   (Decision Made)";
            y++;
            }
            else if (submitFileDartmouth[z] == 1)
            {
            gotoxy(x, y);
            cout << studentEmail[z];
            y++;
            arrayForStudentEmailCheakDartmouth[arrayForStudentEmailCheakLengthDartmouth] = studentEmail[z];
            arrayForStudentEmailCheakLengthDartmouth++;
            }
            }

            gotoxy(x, y + 2);
            cout << "Do you want to continue or Exit, Enter Yes to continue and No to exit: ";
            string askForContinue = "";
            cin >> askForContinue;
            if (askForContinue == "Yes" || askForContinue == "yes")
            {
            gotoxy(x, y + 5);
            cout << "Enter the Student Email from the above list for which you want to view file and make decision: ";
            string askFromUniRep = "";
            cin >> askFromUniRep;
            while (true)
            {
            int studentPositionForUniRep = cheakStudentEmailforUniRepDartmouth(arrayForStudentEmailCheakDartmouth, askFromUniRep, arrayForStudentEmailCheakLengthDartmouth);
            if (decesionDartmouthUni[studentPositionForUniRep] == -1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusDartmouthUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            dartmouthAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep, studentName, dOB, phoneNumber, address, birthCountry, visaType, highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail);
            dartmouthAnsForUniRep(studentPositionForUniRep, decesionDartmouthUni, studentStatusDartmouthUni, startTermDartmouth, admissionPlanDartmouth, major1Dartmouth, major2Dartmouth, siblingAttentedDartmouth, campusResidenceDartmouth, Q8Dartmouth);
            break;
            }
            else
            {
            system("cls");
            uniRepHeader();
            gotoxy(20, 14);
            cout << "Either Decision has already been made for this student or this student is not included in the list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }
    }
    
    else if(askForOption == "14")
    {
        while (true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60, 12);
            cout << "University Of Florida";
            int x = 20, y = 17;
            for (int z = 0; z < 100; z++)
            {
            if (submitFileFlorida[z] == 1 && (decesionFloridaUni[z] == 1 || decesionFloridaUni[z] == 0))
            {
            gotoxy(x, y);
            cout << studentEmail[z] << "   (Decision Made)";
            y++;
            }
            else if (submitFileFlorida[z] == 1)
            {
            gotoxy(x, y);
            cout << studentEmail[z];
            y++;
            arrayForStudentEmailCheakFlorida[arrayForStudentEmailCheakLengthFlorida] = studentEmail[z];
            arrayForStudentEmailCheakLengthFlorida++;
            }
            }

            gotoxy(x, y + 2);
            cout << "Do you want to continue or Exit, Enter Yes to continue and No to exit: ";
            string askForContinue = "";
            cin >> askForContinue;
            if (askForContinue == "Yes" || askForContinue == "yes")
            {
            gotoxy(x, y + 5);
            cout << "Enter the Student Email from the above list for which you want to view file and make decision: ";
            string askFromUniRep = "";
            cin >> askFromUniRep;
            while (true)
            {
            int studentPositionForUniRep = cheakStudentEmailforUniRepFlorida(arrayForStudentEmailCheakFlorida, askFromUniRep, arrayForStudentEmailCheakLengthFlorida);
            if (decesionFloridaUni[studentPositionForUniRep] == -1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusFloridaUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            floridaAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep, studentName, dOB, phoneNumber, address, birthCountry, visaType, highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail);
            floridaAnsForUniRep(studentPositionForUniRep, decesionFloridaUni, studentStatusFloridaUni, startTermFlorida, admissionPlanFlorida, major1Florida, major2Florida, siblingAttentedFlorida, campusResidenceFlorida, Q8Florida);
            break;
            }
            else
            {
            system("cls");
            uniRepHeader();
            gotoxy(20, 14);
            cout << "Either Decision has already been made for this student or this student is not included in the list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
            break;
            }
        }
    }
    
    else if(askForOption == "15")
    {
        while (true)
        {
            system("cls");
            uniRepHeader();
            gotoxy(60, 12);
            cout << "University Of Pennsylvania";
            int x = 20, y = 17;
            for (int z = 0; z < 100; z++)
            {
            if (submitFilePennsylvania[z] == 1 && (decesionPennsylvaniaUni[z] == 1 || decesionPennsylvaniaUni[z] == 0))
            {
            gotoxy(x, y);
            cout << studentEmail[z] << "   (Decision Made)";
            y++;
            }
            else if (submitFilePennsylvania[z] == 1)
            {
            gotoxy(x, y);
            cout << studentEmail[z];
            y++;
            arrayForStudentEmailCheakPennsylvania[arrayForStudentEmailCheakLengthPennsylvania] = studentEmail[z];
            arrayForStudentEmailCheakLengthPennsylvania++;
            }
            }

            gotoxy(x, y + 2);
            cout << "Do you want to continue or Exit, Enter Yes to continue and No to exit: ";
            string askForContinue = "";
            cin >> askForContinue;
            if (askForContinue == "Yes" || askForContinue == "yes")
            {
            gotoxy(x, y + 5);
            cout << "Enter the Student Email from the above list for which you want to view file and make decision: ";
            string askFromUniRep = "";
            cin >> askFromUniRep;
            while (true)
            {
            int studentPositionForUniRep = cheakStudentEmailforUniRepPennsylvania(arrayForStudentEmailCheakPennsylvania, askFromUniRep, arrayForStudentEmailCheakLengthPennsylvania);
            if (decesionPennsylvaniaUni[studentPositionForUniRep] == -1 && studentName[studentPositionForUniRep]!="" && financialAidName[studentPositionForUniRep]!="" && studentStatusPennsylvaniaUni[studentPositionForUniRep]!="")
            {
            system("cls");
            dashboardMenu();
            pennsylvaniaAnsMenu();
            DashboardFileAnswers(studentPositionForUniRep, studentName, dOB, phoneNumber, address, birthCountry, visaType, highSchool, OlevelGrades, AlevelGrades, satScore, motherName, motherPhone, motherOccupation, fatherName, fatherPhone, fatherOccupation, act1, act2, act3, act4, act5, personalStatementType, personalStatement, scholarship1, scholarship2, financialAidName, totalFamilyIncome, householdMembers, householdExpense, educationalExpense, tax, previousScholarshipDetail);
            pennsylvaniaAnsForUniRep(studentPositionForUniRep, decesionPennsylvaniaUni, studentStatusPennsylvaniaUni, startTermPennsylvania, admissionPlanPennsylvania, major1Pennsylvania, major2Pennsylvania, siblingAttentedPennsylvania, campusResidencePennsylvania, Q8Pennsylvania);
            break;
            }
            else
            {
            system("cls");
            uniRepHeader();
            gotoxy(20, 14);
            cout << "Either Decision has already been made for this student or this student is not included in the list, press any key to go back ";
            getch();
            break;
            }
            }
            }
            else
            {
                break;
            }
        }
    }

    else if(askForOption=="Exit" || askForOption=="exit")
    {
        break;
    }
    }
}

void mainUniRepMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                 University Representative                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##   Universities:                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##        1. Georgia State University                                                                                                 ##             ###"<<endl;
cout<<"###             ##        2. Boston University                                                                                                        ##             ###"<<endl;
cout<<"###             ##        3. Stanford University                                                                                                      ##             ###"<<endl;
cout<<"###             ##        4. Harvard University                                                                                                       ##             ###"<<endl;
cout<<"###             ##        5. Princeton University                                                                                                     ##             ###"<<endl;
cout<<"###             ##        6. Yale University                                                                                                          ##             ###"<<endl;
cout<<"###             ##        7. Newyork University                                                                                                       ##             ###"<<endl;
cout<<"###             ##        8. Columbia University                                                                                                      ##             ###"<<endl;
cout<<"###             ##        9. Cornell University                                                                                                       ##             ###"<<endl;
cout<<"###             ##        10. University Of California                                                                                                ##             ###"<<endl;
cout<<"###             ##        11. Brown University                                                                                                        ##             ###"<<endl;
cout<<"###             ##        12. Michigan University                                                                                                     ##             ###"<<endl;
cout<<"###             ##        13. Dartmouth College                                                                                                       ##             ###"<<endl;
cout<<"###             ##        14. University Of Florida                                                                                                   ##             ###"<<endl;
cout<<"###             ##        15. University Of Pennsylvania                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##        Enter Option to continue(e.g. 2 for Boston University) and Enter Exit to log out:                                           ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


/*functions that provide the index of the particular student to be used in other functions*/
int cheakStudentEmailforUniRepGeorgia(string arrayForStudentEmailCheakGeorgia[],string str,int arrayForStudentEmailCheakLengthGeorgia)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthGeorgia;a>=0;a--)
    {
        if(arrayForStudentEmailCheakGeorgia[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepBoston(string arrayForStudentEmailCheakBoston[],string str,int arrayForStudentEmailCheakLengthBoston)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthBoston;a>=0;a--)
    {
        if(arrayForStudentEmailCheakBoston[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepStanford(string arrayForStudentEmailCheakStanford[],string str,int arrayForStudentEmailCheakLengthStanford)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthStanford;a>=0;a--)
    {
        if(arrayForStudentEmailCheakStanford[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepHarvard(string arrayForStudentEmailCheakHarvard[],string str,int arrayForStudentEmailCheakLengthHarvard)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthHarvard;a>=0;a--)
    {
        if(arrayForStudentEmailCheakHarvard[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepPrinceton(string arrayForStudentEmailCheakPrinceton[],string str,int arrayForStudentEmailCheakLengthPrinceton)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthPrinceton;a>=0;a--)
    {
        if(arrayForStudentEmailCheakPrinceton[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepYale(string arrayForStudentEmailCheakYale[],string str,int arrayForStudentEmailCheakLengthYale)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthYale;a>=0;a--)
    {
        if(arrayForStudentEmailCheakYale[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepNewyork(string arrayForStudentEmailCheakNewyork[],string str,int arrayForStudentEmailCheakLengthNewyork)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthNewyork;a>=0;a--)
    {
        if(arrayForStudentEmailCheakNewyork[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepColumbia(string arrayForStudentEmailCheakColumbia[],string str,int arrayForStudentEmailCheakLengthColumbia)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthColumbia;a>=0;a--)
    {
        if(arrayForStudentEmailCheakColumbia[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepCornell(string arrayForStudentEmailCheakCornell[],string str,int arrayForStudentEmailCheakLengthCornell)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthCornell;a>=0;a--)
    {
        if(arrayForStudentEmailCheakCornell[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepCalifornia(string arrayForStudentEmailCheakCalifornia[],string str,int arrayForStudentEmailCheakLengthCalifornia)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthCalifornia;a>=0;a--)
    {
        if(arrayForStudentEmailCheakCalifornia[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepBrown(string arrayForStudentEmailCheakBrown[],string str,int arrayForStudentEmailCheakLengthBrown)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthBrown;a>=0;a--)
    {
        if(arrayForStudentEmailCheakBrown[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepMichigan(string arrayForStudentEmailCheakMichigan[],string str,int arrayForStudentEmailCheakLengthMichigan)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthMichigan;a>=0;a--)
    {
        if(arrayForStudentEmailCheakMichigan[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepDartmouth(string arrayForStudentEmailCheakDartmouth[],string str,int arrayForStudentEmailCheakLengthDartmouth)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthDartmouth;a>=0;a--)
    {
        if(arrayForStudentEmailCheakDartmouth[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepFlorida(string arrayForStudentEmailCheakFlorida[],string str,int arrayForStudentEmailCheakLengthFlorida)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthFlorida;a>=0;a--)
    {
        if(arrayForStudentEmailCheakFlorida[a]==str)
        {
            value=a;
        }
    }
return value;
}

int cheakStudentEmailforUniRepPennsylvania(string arrayForStudentEmailCheakPennsylvania[],string str,int arrayForStudentEmailCheakLengthPennsylvania)
{
    int value=0;
    for(int a=arrayForStudentEmailCheakLengthPennsylvania;a>=0;a--)
    {
        if(arrayForStudentEmailCheakPennsylvania[a]==str)
        {
            value=a;
        }
    }
return value;
}

/*functions for the files to be veiwed the university representative and make the decesion*/

void georgiaAnsForUniRep(int studentPosition,int decesionGeorgiaUni[],string studentStatusGeorgiaUni[],string startTermGeorgia[],string admissionPlanGeorgia[],string major1Georgia[],string major2Georgia[],string siblingAttentedGeorgia[],string campusResidenceGeorgia[],string learnedAboutGeorgia[])
{
    gotoxy(70,107);
    cout<<studentStatusGeorgiaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermGeorgia[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanGeorgia[studentPosition];
    gotoxy(70,113);
    cout<<major1Georgia[studentPosition];
    gotoxy(70,115);
    cout<<major2Georgia[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedGeorgia[studentPosition];
    gotoxy(82,119);
    cout<<campusResidenceGeorgia[studentPosition];
    gotoxy(32,122);
    cout<<learnedAboutGeorgia[studentPosition];
    
    gotoxy(30,124);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionGeorgiaUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionGeorgiaUni[studentPosition]=0;
    }
    gotoxy(30,125);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void bostonAnsForUniRep(int studentPosition,int decesionBostonUni[],string studentStatusBostonUni[],string startTermBoston[],string admissionPlanBoston[],string major1Boston[],string major2Boston[],string siblingAttentedBoston[],string campusResidenceBoston[],string whyBoston[])
{
    gotoxy(70,107);
    cout<<studentStatusBostonUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermBoston[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanBoston[studentPosition];
    gotoxy(70,113);
    cout<<major1Boston[studentPosition];
    gotoxy(70,115);
    cout<<major2Boston[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedBoston[studentPosition];
    gotoxy(82,119);
    cout<<campusResidenceBoston[studentPosition];
    
    printDataWithinSpecificCoord(whyBoston[studentPosition],30,130,122,124);
    
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionBostonUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionBostonUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void stanfordAnsForUniRep(int studentPosition,int decesionStanfordUni[],string studentStatusStanfordUni[],string startTermStanford[],string admissionPlanStanford[],string major1Stanford[],string major2Stanford[],string siblingAttentedStanford[],string campusResidenceStanford[],string whyThisMajorStanford[])
{
    gotoxy(70,107);
    cout<<studentStatusStanfordUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermStanford[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanStanford[studentPosition];
    gotoxy(70,113);
    cout<<major1Stanford[studentPosition];
    gotoxy(70,115);
    cout<<major2Stanford[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedStanford[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceStanford[studentPosition];

    printDataWithinSpecificCoord(whyThisMajorStanford[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionStanfordUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionStanfordUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
    


}

void harvardAnsForUniRep(int studentPosition,int decesionHarvardUni[],string studentStatusHarvardUni[],string startTermHarvard[],string admissionPlanHarvard[],string major1Harvard[],string major2Harvard[],string siblingAttentedHarvard[],string campusResidenceHarvard[],string briefExperienceHarvard[])
{
    gotoxy(70,107);
    cout<<studentStatusHarvardUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermHarvard[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanHarvard[studentPosition];
    gotoxy(70,113);
    cout<<major1Harvard[studentPosition];
    gotoxy(70,115);
    cout<<major2Harvard[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedHarvard[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceHarvard[studentPosition];
   
    printDataWithinSpecificCoord(briefExperienceHarvard[studentPosition],30,130,122,124);
        
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionHarvardUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionHarvardUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
    

}

void princetonAnsForUniRep(int studentPosition,int decesionPrincetonUni[],string studentStatusPrincetonUni[],string startTermPrinceton[],string admissionPlanPrinceton[],string major1Princeton[],string major2Princeton[],string siblingAttentedPrinceton[],string campusResidencePrinceton[],string newSkillPrinceton[])
{
    gotoxy(70,107);
    cout<<studentStatusPrincetonUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermPrinceton[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanPrinceton[studentPosition];
    gotoxy(70,113);
    cout<<major1Princeton[studentPosition];
    gotoxy(70,115);
    cout<<major2Princeton[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedPrinceton[studentPosition];
    gotoxy(83,119);
    cout<<campusResidencePrinceton[studentPosition];

    printDataWithinSpecificCoord(newSkillPrinceton[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionPrincetonUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionPrincetonUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
    
}

void yaleAnsForUniRep(int studentPosition,int decesionYaleUni[],string studentStatusYaleUni[],string startTermYale[],string admissionPlanYale[],string major1Yale[],string major2Yale[],string siblingAttentedYale[],string campusResidenceYale[],string memberInfluenceYale[])
{
    gotoxy(70,107);
    cout<<studentStatusYaleUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermYale[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanYale[studentPosition];
    gotoxy(70,113);
    cout<<major1Yale[studentPosition];
    gotoxy(70,115);
    cout<<major2Yale[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedYale[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceYale[studentPosition];

    printDataWithinSpecificCoord(memberInfluenceYale[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionYaleUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionYaleUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void newyorkAnsForUniRep(int studentPosition,int decesionNewyorkUni[],string studentStatusNewyorkUni[],string startTermNewyork[],string admissionPlanNewyork[],string major1Newyork[],string major2Newyork[],string siblingAttentedNewyork[],string campusResidenceNewyork[],string whyNyu[])
{
    gotoxy(70,107);
    cout<<studentStatusNewyorkUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermNewyork[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanNewyork[studentPosition];
    gotoxy(70,113);
    cout<<major1Newyork[studentPosition];
    gotoxy(70,115);
    cout<<major2Newyork[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedNewyork[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceNewyork[studentPosition];

    printDataWithinSpecificCoord(whyNyu[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionNewyorkUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionNewyorkUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void columbiaAnsForUniRep(int studentPosition,int decesionColumbiaUni[],string studentStatusColumbiaUni[],string startTermColumbia[],string admissionPlanColumbia[],string major1Columbia[],string major2Columbia[],string siblingAttentedColumbia[],string campusResidenceColumbia[],string obstaclesFacedColumbia[])
{
    gotoxy(70,107);
    cout<<studentStatusColumbiaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermColumbia[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanColumbia[studentPosition];
    gotoxy(70,113);
    cout<<major1Columbia[studentPosition];
    gotoxy(70,115);
    cout<<major2Columbia[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedColumbia[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceColumbia[studentPosition];

    printDataWithinSpecificCoord(obstaclesFacedColumbia[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionColumbiaUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionColumbiaUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();

}

void cornellAnsForUniRep(int studentPosition,int decesionCornellUni[],string studentStatusCornellUni[],string startTermCornell[],string admissionPlanCornell[],string major1Cornell[],string major2Cornell[],string siblingAttentedCornell[],string campusResidenceCornell[],string takaboutIssuesCornell[])
{
    gotoxy(70,107);
    cout<<studentStatusCornellUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermCornell[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanCornell[studentPosition];
    gotoxy(70,113);
    cout<<major1Cornell[studentPosition];
    gotoxy(70,115);
    cout<<major2Cornell[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedCornell[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceCornell[studentPosition];

    printDataWithinSpecificCoord(takaboutIssuesCornell[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionCornellUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionCornellUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void californiaAnsForUniRep(int studentPosition,int decesionCaliforniaUni[],string studentStatusCaliforniaUni[],string startTermCalifornia[],string admissionPlanCalifornia[],string major1California[],string major2California[],string siblingAttentedCalifornia[],string campusResidenceCalifornia[],string talentCalifornia[])
{
    gotoxy(70,107);
    cout<<studentStatusCaliforniaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermCalifornia[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanCalifornia[studentPosition];
    gotoxy(70,113);
    cout<<major1California[studentPosition];
    gotoxy(70,115);
    cout<<major2California[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedCalifornia[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceCalifornia[studentPosition];

    printDataWithinSpecificCoord(talentCalifornia[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionCaliforniaUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionCaliforniaUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void brownAnsForUniRep(int studentPosition,int decesionBrownUni[],string studentStatusBrownUni[],string startTermBrown[],string admissionPlanBrown[],string major1Brown[],string major2Brown[],string siblingAttentedBrown[],string campusResidenceBrown[],string communityBrown[])
{
    gotoxy(70,107);
    cout<<studentStatusBrownUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermBrown[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanBrown[studentPosition];
    gotoxy(70,113);
    cout<<major1Brown[studentPosition];
    gotoxy(70,115);
    cout<<major2Brown[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedBrown[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceBrown[studentPosition];

    printDataWithinSpecificCoord(communityBrown[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionBrownUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionBrownUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void michiganAnsForUniRep(int studentPosition,int decesionMichiganUni[],string studentStatusMichiganUni[],string startTermMichigan[],string admissionPlanMichigan[],string major1Michigan[],string major2Michigan[],string siblingAttentedMichigan[],string campusResidenceMichigan[],string Q8Michigan[])
{
    gotoxy(70,107);
    cout<<studentStatusMichiganUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermMichigan[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanMichigan[studentPosition];
    gotoxy(70,113);
    cout<<major1Michigan[studentPosition];
    gotoxy(70,115);
    cout<<major2Michigan[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedMichigan[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceMichigan[studentPosition];

    printDataWithinSpecificCoord(Q8Michigan[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionMichiganUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionMichiganUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void dartmouthAnsForUniRep(int studentPosition,int decesionDartmouthUni[],string studentStatusDartmouthUni[],string startTermDartmouth[],string admissionPlanDartmouth[],string major1Dartmouth[],string major2Dartmouth[],string siblingAttentedDartmouth[],string campusResidenceDartmouth[],string Q8Dartmouth[])
{
    gotoxy(70,107);
    cout<<studentStatusDartmouthUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermDartmouth[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanDartmouth[studentPosition];
    gotoxy(70,113);
    cout<<major1Dartmouth[studentPosition];
    gotoxy(70,115);
    cout<<major2Dartmouth[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedDartmouth[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceDartmouth[studentPosition];

    printDataWithinSpecificCoord(Q8Dartmouth[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionDartmouthUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionDartmouthUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void floridaAnsForUniRep(int studentPosition,int decesionFloridaUni[],string studentStatusFloridaUni[],string startTermFlorida[],string admissionPlanFlorida[],string major1Florida[],string major2Florida[],string siblingAttentedFlorida[],string campusResidenceFlorida[],string Q8Florida[])
{
    gotoxy(70,107);
    cout<<studentStatusFloridaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermFlorida[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanFlorida[studentPosition];
    gotoxy(70,113);
    cout<<major1Florida[studentPosition];
    gotoxy(70,115);
    cout<<major2Florida[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedFlorida[studentPosition];
    gotoxy(83,119);
    cout<<campusResidenceFlorida[studentPosition];

    printDataWithinSpecificCoord(Q8Florida[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionFloridaUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionFloridaUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}

void pennsylvaniaAnsForUniRep(int studentPosition,int decesionPennsylvaniaUni[],string studentStatusPennsylvaniaUni[],string startTermPennsylvania[],string admissionPlanPennsylvania[],string major1Pennsylvania[],string major2Pennsylvania[],string siblingAttentedPennsylvania[],string campusResidencePennsylvania[],string Q8Pennsylvania[])
{
    gotoxy(70,107);
    cout<<studentStatusPennsylvaniaUni[studentPosition];
    gotoxy(70,109);
    cout<<startTermPennsylvania[studentPosition];
    gotoxy(70,111);
    cout<<admissionPlanPennsylvania[studentPosition];
    gotoxy(70,113);
    cout<<major1Pennsylvania[studentPosition];
    gotoxy(70,115);
    cout<<major2Pennsylvania[studentPosition];
    gotoxy(95,117);
    cout<<siblingAttentedPennsylvania[studentPosition];
    gotoxy(83,119);
    cout<<campusResidencePennsylvania[studentPosition];

    printDataWithinSpecificCoord(Q8Pennsylvania[studentPosition],30,130,122,124);
    
    gotoxy(30,126);
    cout<<"Plz make decesion regarding this student, Enter Yes if this student is accepted,otherwise enter No ";
    string askForDecesion="";
    cin>>askForDecesion;
    if(askForDecesion=="yes" || askForDecesion=="Yes")
    {
        decesionPennsylvaniaUni[studentPosition]=1;
    }
    else if(askForDecesion=="no" || askForDecesion=="No")
    {
        decesionPennsylvaniaUni[studentPosition]=0;
    }
    gotoxy(30,127);
    cout<<"You have made decesion for this student, press any key to exit";
    getch();
}


bool cheakForUniNameInSignUp(string uniRepName[],int lengthOfuniRepNameArray,string uniRepNameForSignUp)
{
    bool cheak=false;
    for(int i=0;i<15;i++)
    {
        if (uniRepName[i]==uniRepNameForSignUp)
        {
            cheak=true;
        }
    }
    return cheak;
}

/*Admin Functions Start*/

void adminSignUpMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Administrator                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Enter UserName:                                                                                                          ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Enter Password:                                                    Note: Password must be greater than 8 characters,     ##             ###"<<endl;
cout<<"###             ##                                                                                    contain atleast one capital letter,             ##             ###"<<endl;
cout<<"###             ##                                                                                    one digit, and one special character            ##             ###"<<endl;
cout<<"###             ##                                                                                    and it should contain no space                  ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##           Conform Password:                                                                                                        ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void adminSignInMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                      Administrator                                       ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter UserName:                                                                 ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||          Enter Password:                                                                 ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||                                                                                          ||                      ##             ###"<<endl;
cout<<"###             ##                ||oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo||                      ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void mainAdminMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                        Administrator                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       1. Update University Rankings                                                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       2. Veiw FeedBack From Students                                                                                               ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       3. Exit                                                                                                                      ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##       Enter Option to continue:                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void updateRankingsMenu()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
cout<<"===================================== _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ========================================="<<endl;
cout<<"=====================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|========================================="<<endl;
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###                                  |_|  ____          _  __ _      _       _           _ _     _   _                      |_|                                      ###"<<endl;
cout<<"###                                  |_| / ___|_      _(_)/ _| |_   / \\   __| |_ __ ___ (_) |_  | \\ | | _____  ___   _ ___  |_|                                      ###"<<endl;
cout<<"###                                  |_| \\___ \\ \\ /\\ / / | |_| __| / _ \\ / _` | '_ ` _ \\| | __| |  \\| |/ _ \\ \\/ / | | / __| |_|                                      ###"<<endl;
cout<<"###                                  |_|  ___) \\ V  V /| |  _| |_ / ___ \\ (_| | | | | | | | |_  | |\\  |  __/>  <| |_| \\__ \\ |_|                                      ###"<<endl;
cout<<"###                                  |_| |____/ \\_/\\_/ |_|_|  \\__/_/   \\_\\__,_|_| |_| |_|_|\\__| |_| \\_|\\___/_/\\_\\\\__,_|___/ |_|                                      ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
cout<<"###                                  |_|                                                                                    |_|                                      ###"<<endl;
cout<<"###==================================|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|======================================###"<<endl;
cout<<"###==================================|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|======================================###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                       Administrator                                                                ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##   Universities:                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##        1. Georgia State University                                                                                                 ##             ###"<<endl;
cout<<"###             ##        2. Boston University                                                                                                        ##             ###"<<endl;
cout<<"###             ##        3. Stanford University                                                                                                      ##             ###"<<endl;
cout<<"###             ##        4. Harvard University                                                                                                       ##             ###"<<endl;
cout<<"###             ##        5. Princeton University                                                                                                     ##             ###"<<endl;
cout<<"###             ##        6. Yale University                                                                                                          ##             ###"<<endl;
cout<<"###             ##        7. Newyork University                                                                                                       ##             ###"<<endl;
cout<<"###             ##        8. Columbia University                                                                                                      ##             ###"<<endl;
cout<<"###             ##        9. Cornell University                                                                                                       ##             ###"<<endl;
cout<<"###             ##        10. University Of California                                                                                                ##             ###"<<endl;
cout<<"###             ##        11. Brown University                                                                                                        ##             ###"<<endl;
cout<<"###             ##        12. Michigan University                                                                                                     ##             ###"<<endl;
cout<<"###             ##        13. Dartmouth College                                                                                                       ##             ###"<<endl;
cout<<"###             ##        14. University Of Florida                                                                                                   ##             ###"<<endl;
cout<<"###             ##        15. University Of Pennsylvania                                                                                              ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##        Enter Option for which you want to Update Rankings(e.g. 2 for Boston University) and Enter Exit to log out:                 ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###             ##                                                                                                                                    ##             ###"<<endl;
cout<<"###==================================================================================================================================================================###"<<endl;
cout<<"###==================================================================================================================================================================###";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
/*function for update university*/
void updateUniversityRankings(int &qsRankingGeorgia,int &qsRankingBoston,int &qsRankingStanford,int &qsRankingHarvard,int &qsRankingPrinceton,int &qsRankingYale,int &qsRankingNewyork,int &qsRankingColumbia,int &qsRankingCornell,int &qsRankingCalifornia,int &qsRankingBrown,int &qsRankingMichigan,int &qsRankingDartmouth,int &qsRankingFlorida,int &qsRankingPennsylvania,
    int &thRankingGeorgia,int &thRankingBoston,int &thRankingStanford,int &thRankingHarvard,int &thRankingPrinceton,int &thRankingYale,int &thRankingNewyork,int &thRankingColumbia,int &thRankingCornell,int &thRankingCalifornia,int &thRankingBrown,int &thRankingMichigan,int &thRankingDartmouth,int &thRankingFlorida,int &thRankingPennsylvania )

{
    while(true)
    {
    system("cls");
    updateRankingsMenu();
    string askForOption="";
    gotoxy(134,35);
    cin>>askForOption;
    while (askForOption!="1" && askForOption!="2" && askForOption!="3" && askForOption!="4" && askForOption!="5" && askForOption!="6" && askForOption!="7" && askForOption!="8" && askForOption!="9" && askForOption!="10" && askForOption!="11" && askForOption!="12" && askForOption!="13" && askForOption!="14" && askForOption!="15" && askForOption!="exit" && askForOption!="Exit")
    {
    gotoxy(30,36);
    cout<<"Invalid option, enter option again: ";
    gotoxy(67,36);
    cout<<"                                    ";
    gotoxy(67,36);
    cin>>askForOption;
    if (askForOption=="1" || askForOption=="2" || askForOption=="3" || askForOption!="4" || askForOption!="5" || askForOption!="6" || askForOption!="7" || askForOption!="8" || askForOption!="9" || askForOption!="10" || askForOption!="11" || askForOption!="12" || askForOption!="13" || askForOption!="14" || askForOption!="15" || askForOption!="exit" || askForOption!="Exit")
    break;
    }

    if (askForOption=="1")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingGeorgia;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingGeorgia;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="2")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingBoston;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingBoston;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="3")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingStanford;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingStanford;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="4")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingHarvard;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingHarvard;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="5")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingPrinceton;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingPrinceton;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="6")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingYale;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingYale;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="7")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingNewyork;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingNewyork;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="8")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingColumbia;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingColumbia;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="9")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingCornell;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingCornell;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="10")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingCalifornia;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingCalifornia;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="11")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingBrown;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingBrown;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="12")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingMichigan;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingMichigan;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="13")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingDartmouth;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingDartmouth;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="14")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingFlorida;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingFlorida;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if (askForOption=="15")
    {
        system("cls");
        uniRepHeader();
        gotoxy(30,15);
        cout<<"Enter new QS World Rankings: ";
        cin>>qsRankingPennsylvania;
        gotoxy(30,17);
        cout << "Enter new Times Higher Education Rankings: ";
        cin>>thRankingPennsylvania;
        gotoxy(30,19);
        cout << "Rankings updated successfully,press any key to go back";
        getch();

    }
    else if(askForOption=="Exit" || askForOption=="exit")
    {
        break;
    }

    }
    



}


void veiwFeedback(string studentFeedback[],string studentEmail[])
{
    while(true)
    {
        system("cls");
        uniRepHeader();
        gotoxy(20,14);
        cout<<"Do you want to continue or exit, Enter yes to continue and No to exit";
        string askForContinue;
        int x=10,y=19;
        cin>>askForContinue;
        if(askForContinue=="Yes" || askForContinue=="yes")
        {
        gotoxy(5,16);
        cout<<"Students Feedback:";
        for(int i=0;i<100;i++)
        {
            
            if(studentFeedback[i]!="")
            {
                gotoxy(x,y);
                cout<<studentEmail[i];
                gotoxy(x,y+1);
                cout<<studentFeedback[i];
                y=y+2;

            }
            cout<<endl;
        }
        getch();
        }
        else
        {
            break;
        }
        
    }
}

void generateColors()
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
  for (int k = 1; k < 255; k++)
  {
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);
    cout << k << " Learning is never done without errors and defeat!" << endl;
  }
}