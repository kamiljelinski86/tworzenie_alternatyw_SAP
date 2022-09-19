#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "parametry.h"

 
using namespace std;


// PAUZA: 1 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_1_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}



int main(int argc, char** argv) {
	
   setlocale( LC_ALL, "" ); 
   
    char x = 't';
	char y;
	char znak;
    
    int max_czynnosci;
    int pauza;
    string nazwa_paczki;

int a, b, c, os_x, os_y;



do {
    
system( "cls" ); 

//string indeks_wyrobu;
//cout<<"Wpisz indeks wyrobu (np: 50-0000-0000-00000): ";
//std::cin>>indeks_wyrobu; 

cout<<"SZTAPLOWANIE KRZESE£ I SIEDZISK"<<std::endl;
cout<<"==========================================================================="<<endl;



string indeks_glowny;
cout<<"1. Indeks g³owny: ";
std::cin>>indeks_glowny;


string symbol_wyrobu;
cout<<"2. Symbol wyrobu (np: SHS01): ";
std::cin>>symbol_wyrobu; 


int liczba_sztaplowania;
cout<<"3. Liczba siedzisk w paczce (2/3/4): ";
std::cin>>liczba_sztaplowania; 

int wiersze_paczek;
cout<<"4. Liczba paczek w specyfikacji:"<<std::endl;
cout<<"   - 1 (np. 1 X PACZKA 2SZT+1SZT)"<<std::endl;
cout<<"   - 2 (np. 2 X PACZKA 2SZT+1SZT)"<<std::endl;
cout<<"   - 8 - 2 PACZKI - UKP1"<<std::endl;
cout<<"   - 9 - 4 PACZKI - NEW SCHOOL"<<std::endl;
cout<<"4. Liczba paczek: ";
std::cin>>wiersze_paczek; 


string numer_alternatywy;
cout<<"5. Numer pierwszej alternatywy do utworzenia (np: 5): ";
std::cin>>numer_alternatywy; 


int liczba_alternatyw;
cout<<"6. Maksymalna liczba alternatyw (np: 99 - max: 301): ";
std::cin>>liczba_alternatyw; 


cout<<"7. Czas przerwy miêdzy czynnoœciami (1 = 0,2 sek.- zalecane: 2): ";
std::cin>>max_czynnosci;
cout <<"\n";



int alternatywa = atoi(numer_alternatywy.c_str());

string wielkosc_partii = numer_alternatywy;

int partia = atoi(numer_alternatywy.c_str());

int alternatywa_poprzednia = atoi(numer_alternatywy.c_str());
    
int paczka = atoi(numer_alternatywy.c_str());

string numer_alternatywy_poprzedniej;
string specyfikacja_liczba_paczek;


//===============================================================================================================================================================================


// Klikam na puste miejscu SAP
SetCursorPos( PUSTE_POLE_SAP_2 ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
        
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /
    
    
pauza_1_1(max_czynnosci);    


//WPISYWANIE - CS01
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x53, 0, 0, 0); // S	       
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


const char* indeks_glowny_tekst = indeks_glowny.c_str();


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_glowny_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_glowny_tekst) + 1); //text size + \0 character
    memcpy(indeks_glowny_zmienna,indeks_glowny_tekst,strlen(indeks_glowny_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_glowny_zmienna);
        CloseClipboard();
    }
}

    
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V - WKLEJANIE
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   

	
pauza_1_1(max_czynnosci);


//WCISKANIE - TAB
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
	keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
          keybd_event(0x59, 0, 0, 0); // Y	       
	keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
	keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
	keybd_event(0x30, 0, 0, 0); // 0	       
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
	keybd_event(0x30, 0, 0, 0); // 0	       
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
	keybd_event(0x31, 0, 0, 0); // 1	       
	keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 

	
pauza_1_1(max_czynnosci);


//WPISYWANIE - 3
//------------------------------------------------------------------------------	
keybd_event(0x33, 0, 0, 0); // 3	       
keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ  


do {
          
          
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);      
          

//system( "cls" );   


    switch( alternatywa )
    {
    case 1: numer_alternatywy = "1"; break;
    case 2: numer_alternatywy = "2"; break;
    case 3: numer_alternatywy = "3"; break;
    case 4: numer_alternatywy = "4"; break;
    case 5: numer_alternatywy = "5"; break;
    case 6: numer_alternatywy = "6"; break;
    case 7: numer_alternatywy = "7"; break;
    case 8: numer_alternatywy = "8"; break;
    case 9: numer_alternatywy = "9"; break;
    case 10: numer_alternatywy = "10"; break;
    case 11: numer_alternatywy = "11"; break;
    case 12: numer_alternatywy = "12"; break;
    case 13: numer_alternatywy = "13"; break;
    case 14: numer_alternatywy = "14"; break;
    case 15: numer_alternatywy = "15"; break;
    case 16: numer_alternatywy = "16"; break;
    case 17: numer_alternatywy = "17"; break;
    case 18: numer_alternatywy = "18"; break;
    case 19: numer_alternatywy = "19"; break;
    case 20: numer_alternatywy = "20"; break;
    case 21: numer_alternatywy = "21"; break;
    case 22: numer_alternatywy = "22"; break;
    case 23: numer_alternatywy = "23"; break;
    case 24: numer_alternatywy = "24"; break;
    case 25: numer_alternatywy = "25"; break;
    case 26: numer_alternatywy = "26"; break;
    case 27: numer_alternatywy = "27"; break;
    case 28: numer_alternatywy = "28"; break;
    case 29: numer_alternatywy = "29"; break;
    case 30: numer_alternatywy = "30"; break;
    case 31: numer_alternatywy = "31"; break;
    case 32: numer_alternatywy = "32"; break;
    case 33: numer_alternatywy = "33"; break;
    case 34: numer_alternatywy = "34"; break;
    case 35: numer_alternatywy = "35"; break;
    case 36: numer_alternatywy = "36"; break;
    case 37: numer_alternatywy = "37"; break;
    case 38: numer_alternatywy = "38"; break;
    case 39: numer_alternatywy = "39"; break;
    case 40: numer_alternatywy = "40"; break;
    case 41: numer_alternatywy = "41"; break;
    case 42: numer_alternatywy = "42"; break;
    case 43: numer_alternatywy = "43"; break;
    case 44: numer_alternatywy = "44"; break;
    case 45: numer_alternatywy = "45"; break;
    case 46: numer_alternatywy = "46"; break;
    case 47: numer_alternatywy = "47"; break;
    case 48: numer_alternatywy = "48"; break;
    case 49: numer_alternatywy = "49"; break;
    case 50: numer_alternatywy = "50"; break;
    case 51: numer_alternatywy = "51"; break;
    case 52: numer_alternatywy = "52"; break;
    case 53: numer_alternatywy = "53"; break;
    case 54: numer_alternatywy = "54"; break;
    case 55: numer_alternatywy = "55"; break;
    case 56: numer_alternatywy = "56"; break;
    case 57: numer_alternatywy = "57"; break;
    case 58: numer_alternatywy = "58"; break;
    case 59: numer_alternatywy = "59"; break;
    case 60: numer_alternatywy = "60"; break;
    case 61: numer_alternatywy = "61"; break;
    case 62: numer_alternatywy = "62"; break;
    case 63: numer_alternatywy = "63"; break;
    case 64: numer_alternatywy = "64"; break;
    case 65: numer_alternatywy = "65"; break;
    case 66: numer_alternatywy = "66"; break;
    case 67: numer_alternatywy = "67"; break;
    case 68: numer_alternatywy = "68"; break;
    case 69: numer_alternatywy = "69"; break;
    case 70: numer_alternatywy = "70"; break;
    case 71: numer_alternatywy = "71"; break;
    case 72: numer_alternatywy = "72"; break;
    case 73: numer_alternatywy = "73"; break;
    case 74: numer_alternatywy = "74"; break;
    case 75: numer_alternatywy = "75"; break;
    case 76: numer_alternatywy = "76"; break;
    case 77: numer_alternatywy = "77"; break;
    case 78: numer_alternatywy = "78"; break;
    case 79: numer_alternatywy = "79"; break;
    case 80: numer_alternatywy = "80"; break;
    case 81: numer_alternatywy = "81"; break;
    case 82: numer_alternatywy = "82"; break;
    case 83: numer_alternatywy = "83"; break;
    case 84: numer_alternatywy = "84"; break;
    case 85: numer_alternatywy = "85"; break;
    case 86: numer_alternatywy = "86"; break;
    case 87: numer_alternatywy = "87"; break;
    case 88: numer_alternatywy = "88"; break;
    case 89: numer_alternatywy = "89"; break;
    case 90: numer_alternatywy = "90"; break;
    case 91: numer_alternatywy = "91"; break;
    case 92: numer_alternatywy = "92"; break;
    case 93: numer_alternatywy = "93"; break;
    case 94: numer_alternatywy = "94"; break;
    case 95: numer_alternatywy = "95"; break;
    case 96: numer_alternatywy = "96"; break;
    case 97: numer_alternatywy = "97"; break;
    case 98: numer_alternatywy = "98"; break;
    case 99: numer_alternatywy = "99"; break;
    case 100: numer_alternatywy = "A0"; break;
    case 101: numer_alternatywy = "A1"; break;
    case 102: numer_alternatywy = "A2"; break;
    case 103: numer_alternatywy = "A3"; break;
    case 104: numer_alternatywy = "A4"; break;
    case 105: numer_alternatywy = "A5"; break;
    case 106: numer_alternatywy = "A6"; break;
    case 107: numer_alternatywy = "A7"; break;
    case 108: numer_alternatywy = "A8"; break;
    case 109: numer_alternatywy = "A9"; break;
    case 110: numer_alternatywy = "B0"; break;
    case 111: numer_alternatywy = "B1"; break;
    case 112: numer_alternatywy = "B2"; break;
    case 113: numer_alternatywy = "B3"; break;
    case 114: numer_alternatywy = "B4"; break;
    case 115: numer_alternatywy = "B5"; break;
    case 116: numer_alternatywy = "B6"; break;
    case 117: numer_alternatywy = "B7"; break;
    case 118: numer_alternatywy = "B8"; break;
    case 119: numer_alternatywy = "B9"; break;
    case 120: numer_alternatywy = "C0"; break;
    case 121: numer_alternatywy = "C1"; break;
    case 122: numer_alternatywy = "C2"; break;
    case 123: numer_alternatywy = "C3"; break;
    case 124: numer_alternatywy = "C4"; break;
    case 125: numer_alternatywy = "C5"; break;
    case 126: numer_alternatywy = "C6"; break;
    case 127: numer_alternatywy = "C7"; break;
    case 128: numer_alternatywy = "C8"; break;
    case 129: numer_alternatywy = "C9"; break;
    case 130: numer_alternatywy = "D0"; break;
    case 131: numer_alternatywy = "D1"; break;
    case 132: numer_alternatywy = "D2"; break;
    case 133: numer_alternatywy = "D3"; break;
    case 134: numer_alternatywy = "D4"; break;
    case 135: numer_alternatywy = "D5"; break;
    case 136: numer_alternatywy = "D6"; break;
    case 137: numer_alternatywy = "D7"; break;
    case 138: numer_alternatywy = "D8"; break;
    case 139: numer_alternatywy = "D9"; break;
    case 140: numer_alternatywy = "E0"; break;
    case 141: numer_alternatywy = "E1"; break;
    case 142: numer_alternatywy = "E2"; break;
    case 143: numer_alternatywy = "E3"; break;
    case 144: numer_alternatywy = "E4"; break;
    case 145: numer_alternatywy = "E5"; break;
    case 146: numer_alternatywy = "E6"; break;
    case 147: numer_alternatywy = "E7"; break;
    case 148: numer_alternatywy = "E8"; break;
    case 149: numer_alternatywy = "E9"; break;
    case 150: numer_alternatywy = "F0"; break;
    case 151: numer_alternatywy = "F1"; break;
    case 152: numer_alternatywy = "F2"; break;
    case 153: numer_alternatywy = "F3"; break;
    case 154: numer_alternatywy = "F4"; break;
    case 155: numer_alternatywy = "F5"; break;
    case 156: numer_alternatywy = "F6"; break;
    case 157: numer_alternatywy = "F7"; break;
    case 158: numer_alternatywy = "F8"; break;
    case 159: numer_alternatywy = "F9"; break;
    case 160: numer_alternatywy = "G0"; break;
    case 161: numer_alternatywy = "G1"; break;
    case 162: numer_alternatywy = "G2"; break;
    case 163: numer_alternatywy = "G3"; break;
    case 164: numer_alternatywy = "G4"; break;
    case 165: numer_alternatywy = "G5"; break;
    case 166: numer_alternatywy = "G6"; break;
    case 167: numer_alternatywy = "G7"; break;
    case 168: numer_alternatywy = "G8"; break;
    case 169: numer_alternatywy = "G9"; break;
    case 170: numer_alternatywy = "H0"; break;
    case 171: numer_alternatywy = "H1"; break;
    case 172: numer_alternatywy = "H2"; break;
    case 173: numer_alternatywy = "H3"; break;
    case 174: numer_alternatywy = "H4"; break;
    case 175: numer_alternatywy = "H5"; break;
    case 176: numer_alternatywy = "H6"; break;
    case 177: numer_alternatywy = "H7"; break;
    case 178: numer_alternatywy = "H8"; break;
    case 179: numer_alternatywy = "H9"; break;
    case 180: numer_alternatywy = "I0"; break;
    case 181: numer_alternatywy = "I1"; break;
    case 182: numer_alternatywy = "I2"; break;
    case 183: numer_alternatywy = "I3"; break;
    case 184: numer_alternatywy = "I4"; break;
    case 185: numer_alternatywy = "I5"; break;
    case 186: numer_alternatywy = "I6"; break;
    case 187: numer_alternatywy = "I7"; break;
    case 188: numer_alternatywy = "I8"; break;
    case 189: numer_alternatywy = "I9"; break;
    case 190: numer_alternatywy = "J0"; break;
    case 191: numer_alternatywy = "J1"; break;
    case 192: numer_alternatywy = "J2"; break;
    case 193: numer_alternatywy = "J3"; break;
    case 194: numer_alternatywy = "J4"; break;
    case 195: numer_alternatywy = "J5"; break;
    case 196: numer_alternatywy = "J6"; break;
    case 197: numer_alternatywy = "J7"; break;
    case 198: numer_alternatywy = "J8"; break;
    case 199: numer_alternatywy = "J9"; break;
    case 200: numer_alternatywy = "K0"; break;
    case 201: numer_alternatywy = "K1"; break;
    case 202: numer_alternatywy = "K2"; break;
    case 203: numer_alternatywy = "K3"; break;
    case 204: numer_alternatywy = "K4"; break;
    case 205: numer_alternatywy = "K5"; break;
    case 206: numer_alternatywy = "K6"; break;
    case 207: numer_alternatywy = "K7"; break;
    case 208: numer_alternatywy = "K8"; break;
    case 209: numer_alternatywy = "K9"; break;
    case 210: numer_alternatywy = "L0"; break;
    case 211: numer_alternatywy = "L1"; break;
    case 212: numer_alternatywy = "L2"; break;
    case 213: numer_alternatywy = "L3"; break;
    case 214: numer_alternatywy = "L4"; break;
    case 215: numer_alternatywy = "L5"; break;
    case 216: numer_alternatywy = "L6"; break;
    case 217: numer_alternatywy = "L7"; break;
    case 218: numer_alternatywy = "L8"; break;
    case 219: numer_alternatywy = "L9"; break;
    case 220: numer_alternatywy = "M0"; break;
    case 221: numer_alternatywy = "M1"; break;
    case 222: numer_alternatywy = "M2"; break;
    case 223: numer_alternatywy = "M3"; break;
    case 224: numer_alternatywy = "M4"; break;
    case 225: numer_alternatywy = "M5"; break;
    case 226: numer_alternatywy = "M6"; break;
    case 227: numer_alternatywy = "M7"; break;
    case 228: numer_alternatywy = "M8"; break;
    case 229: numer_alternatywy = "M9"; break;
    case 230: numer_alternatywy = "N0"; break;
    case 231: numer_alternatywy = "N1"; break;
    case 232: numer_alternatywy = "N2"; break;
    case 233: numer_alternatywy = "N3"; break;
    case 234: numer_alternatywy = "N4"; break;
    case 235: numer_alternatywy = "N5"; break;
    case 236: numer_alternatywy = "N6"; break;
    case 237: numer_alternatywy = "N7"; break;
    case 238: numer_alternatywy = "N8"; break;
    case 239: numer_alternatywy = "N9"; break;
    case 240: numer_alternatywy = "O0"; break;
    case 241: numer_alternatywy = "O1"; break;
    case 242: numer_alternatywy = "O2"; break;
    case 243: numer_alternatywy = "O3"; break;
    case 244: numer_alternatywy = "O4"; break;
    case 245: numer_alternatywy = "O5"; break;
    case 246: numer_alternatywy = "O6"; break;
    case 247: numer_alternatywy = "O7"; break;
    case 248: numer_alternatywy = "O8"; break;
    case 249: numer_alternatywy = "O9"; break;
    case 250: numer_alternatywy = "P0"; break;
    case 251: numer_alternatywy = "P1"; break;
    case 252: numer_alternatywy = "P2"; break;
    case 253: numer_alternatywy = "P3"; break;
    case 254: numer_alternatywy = "P4"; break;
    case 255: numer_alternatywy = "P5"; break;
    case 256: numer_alternatywy = "P6"; break;
    case 257: numer_alternatywy = "P7"; break;
    case 258: numer_alternatywy = "P8"; break;
    case 259: numer_alternatywy = "P9"; break;
    case 260: numer_alternatywy = "R0"; break;
    case 261: numer_alternatywy = "R1"; break;
    case 262: numer_alternatywy = "R2"; break;
    case 263: numer_alternatywy = "R3"; break;
    case 264: numer_alternatywy = "R4"; break;
    case 265: numer_alternatywy = "R5"; break;
    case 266: numer_alternatywy = "R6"; break;
    case 267: numer_alternatywy = "R7"; break;
    case 268: numer_alternatywy = "R8"; break;
    case 269: numer_alternatywy = "R9"; break;
    case 270: numer_alternatywy = "S0"; break;
    case 271: numer_alternatywy = "S1"; break;
    case 272: numer_alternatywy = "S2"; break;
    case 273: numer_alternatywy = "S3"; break;
    case 274: numer_alternatywy = "S4"; break;
    case 275: numer_alternatywy = "S5"; break;
    case 276: numer_alternatywy = "S6"; break;
    case 277: numer_alternatywy = "S7"; break;
    case 278: numer_alternatywy = "S8"; break;
    case 279: numer_alternatywy = "S9"; break;
    case 280: numer_alternatywy = "T0"; break;
    case 281: numer_alternatywy = "T1"; break;
    case 282: numer_alternatywy = "T2"; break;
    case 283: numer_alternatywy = "T3"; break;
    case 284: numer_alternatywy = "T4"; break;
    case 285: numer_alternatywy = "T5"; break;
    case 286: numer_alternatywy = "T6"; break;
    case 287: numer_alternatywy = "T7"; break;
    case 288: numer_alternatywy = "T8"; break;
    case 289: numer_alternatywy = "T9"; break;
    case 290: numer_alternatywy = "U0"; break;
    case 291: numer_alternatywy = "U1"; break;
    case 292: numer_alternatywy = "U2"; break;
    case 293: numer_alternatywy = "U3"; break;
    case 294: numer_alternatywy = "U4"; break;
    case 295: numer_alternatywy = "U5"; break;
    case 296: numer_alternatywy = "U6"; break;
    case 297: numer_alternatywy = "U7"; break;
    case 298: numer_alternatywy = "U8"; break;
    case 299: numer_alternatywy = "U9"; break;
    case 300: numer_alternatywy = "W0"; break;
    case 301: numer_alternatywy = "W1"; break;
    }
    
    switch( partia )
    {    
    case 1: wielkosc_partii = "1"; break;
    case 2: wielkosc_partii = "2"; break;
    case 3: wielkosc_partii = "3"; break;
    case 4: wielkosc_partii = "4"; break;
    case 5: wielkosc_partii = "5"; break;
    case 6: wielkosc_partii = "6"; break;
    case 7: wielkosc_partii = "7"; break;
    case 8: wielkosc_partii = "8"; break;
    case 9: wielkosc_partii = "9"; break;
    case 10: wielkosc_partii = "10"; break;
    case 11: wielkosc_partii = "11"; break;
    case 12: wielkosc_partii = "12"; break;
    case 13: wielkosc_partii = "13"; break;
    case 14: wielkosc_partii = "14"; break;
    case 15: wielkosc_partii = "15"; break;
    case 16: wielkosc_partii = "16"; break;
    case 17: wielkosc_partii = "17"; break;
    case 18: wielkosc_partii = "18"; break;
    case 19: wielkosc_partii = "19"; break;
    case 20: wielkosc_partii = "20"; break;
    case 21: wielkosc_partii = "21"; break;
    case 22: wielkosc_partii = "22"; break;
    case 23: wielkosc_partii = "23"; break;
    case 24: wielkosc_partii = "24"; break;
    case 25: wielkosc_partii = "25"; break;
    case 26: wielkosc_partii = "26"; break;
    case 27: wielkosc_partii = "27"; break;
    case 28: wielkosc_partii = "28"; break;
    case 29: wielkosc_partii = "29"; break;
    case 30: wielkosc_partii = "30"; break;
    case 31: wielkosc_partii = "31"; break;
    case 32: wielkosc_partii = "32"; break;
    case 33: wielkosc_partii = "33"; break;
    case 34: wielkosc_partii = "34"; break;
    case 35: wielkosc_partii = "35"; break;
    case 36: wielkosc_partii = "36"; break;
    case 37: wielkosc_partii = "37"; break;
    case 38: wielkosc_partii = "38"; break;
    case 39: wielkosc_partii = "39"; break;
    case 40: wielkosc_partii = "40"; break;
    case 41: wielkosc_partii = "41"; break;
    case 42: wielkosc_partii = "42"; break;
    case 43: wielkosc_partii = "43"; break;
    case 44: wielkosc_partii = "44"; break;
    case 45: wielkosc_partii = "45"; break;
    case 46: wielkosc_partii = "46"; break;
    case 47: wielkosc_partii = "47"; break;
    case 48: wielkosc_partii = "48"; break;
    case 49: wielkosc_partii = "49"; break;
    case 50: wielkosc_partii = "50"; break;
    case 51: wielkosc_partii = "51"; break;
    case 52: wielkosc_partii = "52"; break;
    case 53: wielkosc_partii = "53"; break;
    case 54: wielkosc_partii = "54"; break;
    case 55: wielkosc_partii = "55"; break;
    case 56: wielkosc_partii = "56"; break;
    case 57: wielkosc_partii = "57"; break;
    case 58: wielkosc_partii = "58"; break;
    case 59: wielkosc_partii = "59"; break;
    case 60: wielkosc_partii = "60"; break;
    case 61: wielkosc_partii = "61"; break;
    case 62: wielkosc_partii = "62"; break;
    case 63: wielkosc_partii = "63"; break;
    case 64: wielkosc_partii = "64"; break;
    case 65: wielkosc_partii = "65"; break;
    case 66: wielkosc_partii = "66"; break;
    case 67: wielkosc_partii = "67"; break;
    case 68: wielkosc_partii = "68"; break;
    case 69: wielkosc_partii = "69"; break;
    case 70: wielkosc_partii = "70"; break;
    case 71: wielkosc_partii = "71"; break;
    case 72: wielkosc_partii = "72"; break;
    case 73: wielkosc_partii = "73"; break;
    case 74: wielkosc_partii = "74"; break;
    case 75: wielkosc_partii = "75"; break;
    case 76: wielkosc_partii = "76"; break;
    case 77: wielkosc_partii = "77"; break;
    case 78: wielkosc_partii = "78"; break;
    case 79: wielkosc_partii = "79"; break;
    case 80: wielkosc_partii = "80"; break;
    case 81: wielkosc_partii = "81"; break;
    case 82: wielkosc_partii = "82"; break;
    case 83: wielkosc_partii = "83"; break;
    case 84: wielkosc_partii = "84"; break;
    case 85: wielkosc_partii = "85"; break;
    case 86: wielkosc_partii = "86"; break;
    case 87: wielkosc_partii = "87"; break;
    case 88: wielkosc_partii = "88"; break;
    case 89: wielkosc_partii = "89"; break;
    case 90: wielkosc_partii = "90"; break;
    case 91: wielkosc_partii = "91"; break;
    case 92: wielkosc_partii = "92"; break;
    case 93: wielkosc_partii = "93"; break;
    case 94: wielkosc_partii = "94"; break;
    case 95: wielkosc_partii = "95"; break;
    case 96: wielkosc_partii = "96"; break;
    case 97: wielkosc_partii = "97"; break;
    case 98: wielkosc_partii = "98"; break;
    case 99: wielkosc_partii = "99"; break;
    case 100: wielkosc_partii = "100"; break;
    case 101: wielkosc_partii = "101"; break;
    case 102: wielkosc_partii = "102"; break;
    case 103: wielkosc_partii = "103"; break;
    case 104: wielkosc_partii = "104"; break;
    case 105: wielkosc_partii = "105"; break;
    case 106: wielkosc_partii = "106"; break;
    case 107: wielkosc_partii = "107"; break;
    case 108: wielkosc_partii = "108"; break;
    case 109: wielkosc_partii = "109"; break;
    case 110: wielkosc_partii = "110"; break;
    case 111: wielkosc_partii = "111"; break;
    case 112: wielkosc_partii = "112"; break;
    case 113: wielkosc_partii = "113"; break;
    case 114: wielkosc_partii = "114"; break;
    case 115: wielkosc_partii = "115"; break;
    case 116: wielkosc_partii = "116"; break;
    case 117: wielkosc_partii = "117"; break;
    case 118: wielkosc_partii = "118"; break;
    case 119: wielkosc_partii = "119"; break;
    case 120: wielkosc_partii = "120"; break;
    case 121: wielkosc_partii = "121"; break;
    case 122: wielkosc_partii = "122"; break;
    case 123: wielkosc_partii = "123"; break;
    case 124: wielkosc_partii = "124"; break;
    case 125: wielkosc_partii = "125"; break;
    case 126: wielkosc_partii = "126"; break;
    case 127: wielkosc_partii = "127"; break;
    case 128: wielkosc_partii = "128"; break;
    case 129: wielkosc_partii = "129"; break;
    case 130: wielkosc_partii = "130"; break;
    case 131: wielkosc_partii = "131"; break;
    case 132: wielkosc_partii = "132"; break;
    case 133: wielkosc_partii = "133"; break;
    case 134: wielkosc_partii = "134"; break;
    case 135: wielkosc_partii = "135"; break;
    case 136: wielkosc_partii = "136"; break;
    case 137: wielkosc_partii = "137"; break;
    case 138: wielkosc_partii = "138"; break;
    case 139: wielkosc_partii = "139"; break;
    case 140: wielkosc_partii = "140"; break;
    case 141: wielkosc_partii = "141"; break;
    case 142: wielkosc_partii = "142"; break;
    case 143: wielkosc_partii = "143"; break;
    case 144: wielkosc_partii = "144"; break;
    case 145: wielkosc_partii = "145"; break;
    case 146: wielkosc_partii = "146"; break;
    case 147: wielkosc_partii = "147"; break;
    case 148: wielkosc_partii = "148"; break;
    case 149: wielkosc_partii = "149"; break;
    case 150: wielkosc_partii = "150"; break;
    case 151: wielkosc_partii = "151"; break;
    case 152: wielkosc_partii = "152"; break;
    case 153: wielkosc_partii = "153"; break;
    case 154: wielkosc_partii = "154"; break;
    case 155: wielkosc_partii = "155"; break;
    case 156: wielkosc_partii = "156"; break;
    case 157: wielkosc_partii = "157"; break;
    case 158: wielkosc_partii = "158"; break;
    case 159: wielkosc_partii = "159"; break;
    case 160: wielkosc_partii = "160"; break;
    case 161: wielkosc_partii = "161"; break;
    case 162: wielkosc_partii = "162"; break;
    case 163: wielkosc_partii = "163"; break;
    case 164: wielkosc_partii = "164"; break;
    case 165: wielkosc_partii = "165"; break;
    case 166: wielkosc_partii = "166"; break;
    case 167: wielkosc_partii = "167"; break;
    case 168: wielkosc_partii = "168"; break;
    case 169: wielkosc_partii = "169"; break;
    case 170: wielkosc_partii = "170"; break;
    case 171: wielkosc_partii = "171"; break;
    case 172: wielkosc_partii = "172"; break;
    case 173: wielkosc_partii = "173"; break;
    case 174: wielkosc_partii = "174"; break;
    case 175: wielkosc_partii = "175"; break;
    case 176: wielkosc_partii = "176"; break;
    case 177: wielkosc_partii = "177"; break;
    case 178: wielkosc_partii = "178"; break;
    case 179: wielkosc_partii = "179"; break;
    case 180: wielkosc_partii = "180"; break;
    case 181: wielkosc_partii = "181"; break;
    case 182: wielkosc_partii = "182"; break;
    case 183: wielkosc_partii = "183"; break;
    case 184: wielkosc_partii = "184"; break;
    case 185: wielkosc_partii = "185"; break;
    case 186: wielkosc_partii = "186"; break;
    case 187: wielkosc_partii = "187"; break;
    case 188: wielkosc_partii = "188"; break;
    case 189: wielkosc_partii = "189"; break;
    case 190: wielkosc_partii = "190"; break;
    case 191: wielkosc_partii = "191"; break;
    case 192: wielkosc_partii = "192"; break;
    case 193: wielkosc_partii = "193"; break;
    case 194: wielkosc_partii = "194"; break;
    case 195: wielkosc_partii = "195"; break;
    case 196: wielkosc_partii = "196"; break;
    case 197: wielkosc_partii = "197"; break;
    case 198: wielkosc_partii = "198"; break;
    case 199: wielkosc_partii = "199"; break;
    case 200: wielkosc_partii = "200"; break;
    case 201: wielkosc_partii = "201"; break;
    case 202: wielkosc_partii = "202"; break;
    case 203: wielkosc_partii = "203"; break;
    case 204: wielkosc_partii = "204"; break;
    case 205: wielkosc_partii = "205"; break;
    case 206: wielkosc_partii = "206"; break;
    case 207: wielkosc_partii = "207"; break;
    case 208: wielkosc_partii = "208"; break;
    case 209: wielkosc_partii = "209"; break;
    case 210: wielkosc_partii = "210"; break;
    case 211: wielkosc_partii = "211"; break;
    case 212: wielkosc_partii = "212"; break;
    case 213: wielkosc_partii = "213"; break;
    case 214: wielkosc_partii = "214"; break;
    case 215: wielkosc_partii = "215"; break;
    case 216: wielkosc_partii = "216"; break;
    case 217: wielkosc_partii = "217"; break;
    case 218: wielkosc_partii = "218"; break;
    case 219: wielkosc_partii = "219"; break;
    case 220: wielkosc_partii = "220"; break;
    case 221: wielkosc_partii = "221"; break;
    case 222: wielkosc_partii = "222"; break;
    case 223: wielkosc_partii = "223"; break;
    case 224: wielkosc_partii = "224"; break;
    case 225: wielkosc_partii = "225"; break;
    case 226: wielkosc_partii = "226"; break;
    case 227: wielkosc_partii = "227"; break;
    case 228: wielkosc_partii = "228"; break;
    case 229: wielkosc_partii = "229"; break;
    case 230: wielkosc_partii = "230"; break;
    case 231: wielkosc_partii = "231"; break;
    case 232: wielkosc_partii = "232"; break;
    case 233: wielkosc_partii = "233"; break;
    case 234: wielkosc_partii = "234"; break;
    case 235: wielkosc_partii = "235"; break;
    case 236: wielkosc_partii = "236"; break;
    case 237: wielkosc_partii = "237"; break;
    case 238: wielkosc_partii = "238"; break;
    case 239: wielkosc_partii = "239"; break;
    case 240: wielkosc_partii = "240"; break;
    case 241: wielkosc_partii = "241"; break;
    case 242: wielkosc_partii = "242"; break;
    case 243: wielkosc_partii = "243"; break;
    case 244: wielkosc_partii = "244"; break;
    case 245: wielkosc_partii = "245"; break;
    case 246: wielkosc_partii = "246"; break;
    case 247: wielkosc_partii = "247"; break;
    case 248: wielkosc_partii = "248"; break;
    case 249: wielkosc_partii = "249"; break;
    case 250: wielkosc_partii = "250"; break;
    case 251: wielkosc_partii = "251"; break;
    case 252: wielkosc_partii = "252"; break;
    case 253: wielkosc_partii = "253"; break;
    case 254: wielkosc_partii = "254"; break;
    case 255: wielkosc_partii = "255"; break;
    case 256: wielkosc_partii = "256"; break;
    case 257: wielkosc_partii = "257"; break;
    case 258: wielkosc_partii = "258"; break;
    case 259: wielkosc_partii = "259"; break;
    case 260: wielkosc_partii = "260"; break;
    case 261: wielkosc_partii = "261"; break;
    case 262: wielkosc_partii = "262"; break;
    case 263: wielkosc_partii = "263"; break;
    case 264: wielkosc_partii = "264"; break;
    case 265: wielkosc_partii = "265"; break;
    case 266: wielkosc_partii = "266"; break;
    case 267: wielkosc_partii = "267"; break;
    case 268: wielkosc_partii = "268"; break;
    case 269: wielkosc_partii = "269"; break;
    case 270: wielkosc_partii = "270"; break;
    case 271: wielkosc_partii = "271"; break;
    case 272: wielkosc_partii = "272"; break;
    case 273: wielkosc_partii = "273"; break;
    case 274: wielkosc_partii = "274"; break;
    case 275: wielkosc_partii = "275"; break;
    case 276: wielkosc_partii = "276"; break;
    case 277: wielkosc_partii = "277"; break;
    case 278: wielkosc_partii = "278"; break;
    case 279: wielkosc_partii = "279"; break;
    case 280: wielkosc_partii = "280"; break;
    case 281: wielkosc_partii = "281"; break;
    case 282: wielkosc_partii = "282"; break;
    case 283: wielkosc_partii = "283"; break;
    case 284: wielkosc_partii = "284"; break;
    case 285: wielkosc_partii = "285"; break;
    case 286: wielkosc_partii = "286"; break;
    case 287: wielkosc_partii = "287"; break;
    case 288: wielkosc_partii = "288"; break;
    case 289: wielkosc_partii = "289"; break;
    case 290: wielkosc_partii = "290"; break;
    case 291: wielkosc_partii = "291"; break;
    case 292: wielkosc_partii = "292"; break;
    case 293: wielkosc_partii = "293"; break;
    case 294: wielkosc_partii = "294"; break;
    case 295: wielkosc_partii = "295"; break;
    case 296: wielkosc_partii = "296"; break;
    case 297: wielkosc_partii = "297"; break;
    case 298: wielkosc_partii = "298"; break;
    case 299: wielkosc_partii = "299"; break;
    case 300: wielkosc_partii = "300"; break;
    case 301: wielkosc_partii = "301"; break;
    }


if (liczba_sztaplowania == 4)
{
	
    switch( alternatywa_poprzednia )
    {
    case 1: numer_alternatywy_poprzedniej = "0"; break;
    case 2: numer_alternatywy_poprzedniej = "1"; break;
    case 3: numer_alternatywy_poprzedniej = "2"; break;
    case 4: numer_alternatywy_poprzedniej = "3"; break;
    case 5: numer_alternatywy_poprzedniej = "4"; break;
    case 6: numer_alternatywy_poprzedniej = "5"; break;
    case 7: numer_alternatywy_poprzedniej = "6"; break;
    case 8: numer_alternatywy_poprzedniej = "4"; break;
    case 9: numer_alternatywy_poprzedniej = "5"; break;
    case 10: numer_alternatywy_poprzedniej = "6"; break;
    case 11: numer_alternatywy_poprzedniej = "7"; break;
    case 12: numer_alternatywy_poprzedniej = "8"; break;
    case 13: numer_alternatywy_poprzedniej = "9"; break;
    case 14: numer_alternatywy_poprzedniej = "10"; break;
    case 15: numer_alternatywy_poprzedniej = "11"; break;
    case 16: numer_alternatywy_poprzedniej = "12"; break;
    case 17: numer_alternatywy_poprzedniej = "13"; break;
    case 18: numer_alternatywy_poprzedniej = "14"; break;
    case 19: numer_alternatywy_poprzedniej = "15"; break;
    case 20: numer_alternatywy_poprzedniej = "16"; break;
    case 21: numer_alternatywy_poprzedniej = "17"; break;
    case 22: numer_alternatywy_poprzedniej = "18"; break;
    case 23: numer_alternatywy_poprzedniej = "19"; break;
    case 24: numer_alternatywy_poprzedniej = "20"; break;
    case 25: numer_alternatywy_poprzedniej = "21"; break;
    case 26: numer_alternatywy_poprzedniej = "22"; break;
    case 27: numer_alternatywy_poprzedniej = "23"; break;
    case 28: numer_alternatywy_poprzedniej = "24"; break;
    case 29: numer_alternatywy_poprzedniej = "25"; break;
    case 30: numer_alternatywy_poprzedniej = "26"; break;
    case 31: numer_alternatywy_poprzedniej = "27"; break;
    case 32: numer_alternatywy_poprzedniej = "28"; break;
    case 33: numer_alternatywy_poprzedniej = "29"; break;
    case 34: numer_alternatywy_poprzedniej = "30"; break;
    case 35: numer_alternatywy_poprzedniej = "31"; break;
    case 36: numer_alternatywy_poprzedniej = "32"; break;
    case 37: numer_alternatywy_poprzedniej = "33"; break;
    case 38: numer_alternatywy_poprzedniej = "34"; break;
    case 39: numer_alternatywy_poprzedniej = "35"; break;
    case 40: numer_alternatywy_poprzedniej = "36"; break;
    case 41: numer_alternatywy_poprzedniej = "37"; break;
    case 42: numer_alternatywy_poprzedniej = "38"; break;
    case 43: numer_alternatywy_poprzedniej = "39"; break;
    case 44: numer_alternatywy_poprzedniej = "40"; break;
    case 45: numer_alternatywy_poprzedniej = "41"; break;
    case 46: numer_alternatywy_poprzedniej = "42"; break;
    case 47: numer_alternatywy_poprzedniej = "43"; break;
    case 48: numer_alternatywy_poprzedniej = "44"; break;
    case 49: numer_alternatywy_poprzedniej = "45"; break;
    case 50: numer_alternatywy_poprzedniej = "46"; break;
    case 51: numer_alternatywy_poprzedniej = "47"; break;
    case 52: numer_alternatywy_poprzedniej = "48"; break;
    case 53: numer_alternatywy_poprzedniej = "49"; break;
    case 54: numer_alternatywy_poprzedniej = "50"; break;
    case 55: numer_alternatywy_poprzedniej = "51"; break;
    case 56: numer_alternatywy_poprzedniej = "52"; break;
    case 57: numer_alternatywy_poprzedniej = "53"; break;
    case 58: numer_alternatywy_poprzedniej = "54"; break;
    case 59: numer_alternatywy_poprzedniej = "55"; break;
    case 60: numer_alternatywy_poprzedniej = "56"; break;
    case 61: numer_alternatywy_poprzedniej = "57"; break;
    case 62: numer_alternatywy_poprzedniej = "58"; break;
    case 63: numer_alternatywy_poprzedniej = "59"; break;
    case 64: numer_alternatywy_poprzedniej = "60"; break;
    case 65: numer_alternatywy_poprzedniej = "61"; break;
    case 66: numer_alternatywy_poprzedniej = "62"; break;
    case 67: numer_alternatywy_poprzedniej = "63"; break;
    case 68: numer_alternatywy_poprzedniej = "64"; break;
    case 69: numer_alternatywy_poprzedniej = "65"; break;
    case 70: numer_alternatywy_poprzedniej = "66"; break;
    case 71: numer_alternatywy_poprzedniej = "67"; break;
    case 72: numer_alternatywy_poprzedniej = "68"; break;
    case 73: numer_alternatywy_poprzedniej = "69"; break;
    case 74: numer_alternatywy_poprzedniej = "70"; break;
    case 75: numer_alternatywy_poprzedniej = "71"; break;
    case 76: numer_alternatywy_poprzedniej = "72"; break;
    case 77: numer_alternatywy_poprzedniej = "73"; break;
    case 78: numer_alternatywy_poprzedniej = "74"; break;
    case 79: numer_alternatywy_poprzedniej = "75"; break;
    case 80: numer_alternatywy_poprzedniej = "76"; break;
    case 81: numer_alternatywy_poprzedniej = "77"; break;
    case 82: numer_alternatywy_poprzedniej = "78"; break;
    case 83: numer_alternatywy_poprzedniej = "79"; break;
    case 84: numer_alternatywy_poprzedniej = "80"; break;
    case 85: numer_alternatywy_poprzedniej = "81"; break;
    case 86: numer_alternatywy_poprzedniej = "82"; break;
    case 87: numer_alternatywy_poprzedniej = "83"; break;
    case 88: numer_alternatywy_poprzedniej = "84"; break;
    case 89: numer_alternatywy_poprzedniej = "85"; break;
    case 90: numer_alternatywy_poprzedniej = "86"; break;
    case 91: numer_alternatywy_poprzedniej = "87"; break;
    case 92: numer_alternatywy_poprzedniej = "88"; break;
    case 93: numer_alternatywy_poprzedniej = "89"; break;
    case 94: numer_alternatywy_poprzedniej = "90"; break;
    case 95: numer_alternatywy_poprzedniej = "91"; break;
    case 96: numer_alternatywy_poprzedniej = "92"; break;
    case 97: numer_alternatywy_poprzedniej = "93"; break;
    case 98: numer_alternatywy_poprzedniej = "94"; break;
    case 99: numer_alternatywy_poprzedniej = "95"; break;
    case 100: numer_alternatywy_poprzedniej = "96"; break;
    case 101: numer_alternatywy_poprzedniej = "97"; break;
    case 102: numer_alternatywy_poprzedniej = "98"; break;
    case 103: numer_alternatywy_poprzedniej = "99"; break;
    case 104: numer_alternatywy_poprzedniej = "A0"; break;
    case 105: numer_alternatywy_poprzedniej = "A1"; break;
    case 106: numer_alternatywy_poprzedniej = "A2"; break;
    case 107: numer_alternatywy_poprzedniej = "A3"; break;
    case 108: numer_alternatywy_poprzedniej = "A4"; break;
    case 109: numer_alternatywy_poprzedniej = "A5"; break;
    case 110: numer_alternatywy_poprzedniej = "A6"; break;
    case 111: numer_alternatywy_poprzedniej = "A7"; break;
    case 112: numer_alternatywy_poprzedniej = "A8"; break;
    case 113: numer_alternatywy_poprzedniej = "A9"; break;
    case 114: numer_alternatywy_poprzedniej = "B0"; break;
    case 115: numer_alternatywy_poprzedniej = "B1"; break;
    case 116: numer_alternatywy_poprzedniej = "B2"; break;
    case 117: numer_alternatywy_poprzedniej = "B3"; break;
    case 118: numer_alternatywy_poprzedniej = "B4"; break;
    case 119: numer_alternatywy_poprzedniej = "B5"; break;
    case 120: numer_alternatywy_poprzedniej = "B6"; break;
    case 121: numer_alternatywy_poprzedniej = "B7"; break;
    case 122: numer_alternatywy_poprzedniej = "B8"; break;
    case 123: numer_alternatywy_poprzedniej = "B9"; break;
    case 124: numer_alternatywy_poprzedniej = "C0"; break;
    case 125: numer_alternatywy_poprzedniej = "C1"; break;
    case 126: numer_alternatywy_poprzedniej = "C2"; break;
    case 127: numer_alternatywy_poprzedniej = "C3"; break;
    case 128: numer_alternatywy_poprzedniej = "C4"; break;
    case 129: numer_alternatywy_poprzedniej = "C5"; break;
    case 130: numer_alternatywy_poprzedniej = "C6"; break;
    case 131: numer_alternatywy_poprzedniej = "C7"; break;
    case 132: numer_alternatywy_poprzedniej = "C8"; break;
    case 133: numer_alternatywy_poprzedniej = "C9"; break;
    case 134: numer_alternatywy_poprzedniej = "D0"; break;
    case 135: numer_alternatywy_poprzedniej = "D1"; break;
    case 136: numer_alternatywy_poprzedniej = "D2"; break;
    case 137: numer_alternatywy_poprzedniej = "D3"; break;
    case 138: numer_alternatywy_poprzedniej = "D4"; break;
    case 139: numer_alternatywy_poprzedniej = "D5"; break;
    case 140: numer_alternatywy_poprzedniej = "D6"; break;
    case 141: numer_alternatywy_poprzedniej = "D7"; break;
    case 142: numer_alternatywy_poprzedniej = "D8"; break;
    case 143: numer_alternatywy_poprzedniej = "D9"; break;
    case 144: numer_alternatywy_poprzedniej = "E0"; break;
    case 145: numer_alternatywy_poprzedniej = "E1"; break;
    case 146: numer_alternatywy_poprzedniej = "E2"; break;
    case 147: numer_alternatywy_poprzedniej = "E3"; break;
    case 148: numer_alternatywy_poprzedniej = "E4"; break;
    case 149: numer_alternatywy_poprzedniej = "E5"; break;
    case 150: numer_alternatywy_poprzedniej = "E6"; break;
    case 151: numer_alternatywy_poprzedniej = "E7"; break;
    case 152: numer_alternatywy_poprzedniej = "E8"; break;
    case 153: numer_alternatywy_poprzedniej = "E9"; break;
    case 154: numer_alternatywy_poprzedniej = "F0"; break;
    case 155: numer_alternatywy_poprzedniej = "F1"; break;
    case 156: numer_alternatywy_poprzedniej = "F2"; break;
    case 157: numer_alternatywy_poprzedniej = "F3"; break;
    case 158: numer_alternatywy_poprzedniej = "F4"; break;
    case 159: numer_alternatywy_poprzedniej = "F5"; break;
    case 160: numer_alternatywy_poprzedniej = "F6"; break;
    case 161: numer_alternatywy_poprzedniej = "F7"; break;
    case 162: numer_alternatywy_poprzedniej = "F8"; break;
    case 163: numer_alternatywy_poprzedniej = "F9"; break;
    case 164: numer_alternatywy_poprzedniej = "G0"; break;
    case 165: numer_alternatywy_poprzedniej = "G1"; break;
    case 166: numer_alternatywy_poprzedniej = "G2"; break;
    case 167: numer_alternatywy_poprzedniej = "G3"; break;
    case 168: numer_alternatywy_poprzedniej = "G4"; break;
    case 169: numer_alternatywy_poprzedniej = "G5"; break;
    case 170: numer_alternatywy_poprzedniej = "G6"; break;
    case 171: numer_alternatywy_poprzedniej = "G7"; break;
    case 172: numer_alternatywy_poprzedniej = "G8"; break;
    case 173: numer_alternatywy_poprzedniej = "G9"; break;
    case 174: numer_alternatywy_poprzedniej = "H0"; break;
    case 175: numer_alternatywy_poprzedniej = "H1"; break;
    case 176: numer_alternatywy_poprzedniej = "H2"; break;
    case 177: numer_alternatywy_poprzedniej = "H3"; break;
    case 178: numer_alternatywy_poprzedniej = "H4"; break;
    case 179: numer_alternatywy_poprzedniej = "H5"; break;
    case 180: numer_alternatywy_poprzedniej = "H6"; break;
    case 181: numer_alternatywy_poprzedniej = "H7"; break;
    case 182: numer_alternatywy_poprzedniej = "H8"; break;
    case 183: numer_alternatywy_poprzedniej = "H9"; break;
    case 184: numer_alternatywy_poprzedniej = "I0"; break;
    case 185: numer_alternatywy_poprzedniej = "I1"; break;
    case 186: numer_alternatywy_poprzedniej = "I2"; break;
    case 187: numer_alternatywy_poprzedniej = "I3"; break;
    case 188: numer_alternatywy_poprzedniej = "I4"; break;
    case 189: numer_alternatywy_poprzedniej = "I5"; break;
    case 190: numer_alternatywy_poprzedniej = "I6"; break;
    case 191: numer_alternatywy_poprzedniej = "I7"; break;
    case 192: numer_alternatywy_poprzedniej = "I8"; break;
    case 193: numer_alternatywy_poprzedniej = "I9"; break;
    case 194: numer_alternatywy_poprzedniej = "J0"; break;
    case 195: numer_alternatywy_poprzedniej = "J1"; break;
    case 196: numer_alternatywy_poprzedniej = "J2"; break;
    case 197: numer_alternatywy_poprzedniej = "J3"; break;
    case 198: numer_alternatywy_poprzedniej = "J4"; break;
    case 199: numer_alternatywy_poprzedniej = "J5"; break;
    case 200: numer_alternatywy_poprzedniej = "J6"; break;
    case 201: numer_alternatywy_poprzedniej = "J7"; break;
    case 202: numer_alternatywy_poprzedniej = "J8"; break;
    case 203: numer_alternatywy_poprzedniej = "J9"; break;
    case 204: numer_alternatywy_poprzedniej = "K0"; break;
    case 205: numer_alternatywy_poprzedniej = "K1"; break;
    case 206: numer_alternatywy_poprzedniej = "K2"; break;
    case 207: numer_alternatywy_poprzedniej = "K3"; break;
    case 208: numer_alternatywy_poprzedniej = "K4"; break;
    case 209: numer_alternatywy_poprzedniej = "K5"; break;
    case 210: numer_alternatywy_poprzedniej = "K6"; break;
    case 211: numer_alternatywy_poprzedniej = "K7"; break;
    case 212: numer_alternatywy_poprzedniej = "K8"; break;
    case 213: numer_alternatywy_poprzedniej = "K9"; break;
    case 214: numer_alternatywy_poprzedniej = "L0"; break;
    case 215: numer_alternatywy_poprzedniej = "L1"; break;
    case 216: numer_alternatywy_poprzedniej = "L2"; break;
    case 217: numer_alternatywy_poprzedniej = "L3"; break;
    case 218: numer_alternatywy_poprzedniej = "L4"; break;
    case 219: numer_alternatywy_poprzedniej = "L5"; break;
    case 220: numer_alternatywy_poprzedniej = "L6"; break;
    case 221: numer_alternatywy_poprzedniej = "L7"; break;
    case 222: numer_alternatywy_poprzedniej = "L8"; break;
    case 223: numer_alternatywy_poprzedniej = "L9"; break;
    case 224: numer_alternatywy_poprzedniej = "M0"; break;
    case 225: numer_alternatywy_poprzedniej = "M1"; break;
    case 226: numer_alternatywy_poprzedniej = "M2"; break;
    case 227: numer_alternatywy_poprzedniej = "M3"; break;
    case 228: numer_alternatywy_poprzedniej = "M4"; break;
    case 229: numer_alternatywy_poprzedniej = "M5"; break;
    case 230: numer_alternatywy_poprzedniej = "M6"; break;
    case 231: numer_alternatywy_poprzedniej = "M7"; break;
    case 232: numer_alternatywy_poprzedniej = "M8"; break;
    case 233: numer_alternatywy_poprzedniej = "M9"; break;
    case 234: numer_alternatywy_poprzedniej = "N0"; break;
    case 235: numer_alternatywy_poprzedniej = "N1"; break;
    case 236: numer_alternatywy_poprzedniej = "N2"; break;
    case 237: numer_alternatywy_poprzedniej = "N3"; break;
    case 238: numer_alternatywy_poprzedniej = "N4"; break;
    case 239: numer_alternatywy_poprzedniej = "N5"; break;
    case 240: numer_alternatywy_poprzedniej = "N6"; break;
    case 241: numer_alternatywy_poprzedniej = "N7"; break;
    case 242: numer_alternatywy_poprzedniej = "N8"; break;
    case 243: numer_alternatywy_poprzedniej = "N9"; break;
    case 244: numer_alternatywy_poprzedniej = "O0"; break;
    case 245: numer_alternatywy_poprzedniej = "O1"; break;
    case 246: numer_alternatywy_poprzedniej = "O2"; break;
    case 247: numer_alternatywy_poprzedniej = "O3"; break;
    case 248: numer_alternatywy_poprzedniej = "O4"; break;
    case 249: numer_alternatywy_poprzedniej = "O5"; break;
    case 250: numer_alternatywy_poprzedniej = "O6"; break;
    case 251: numer_alternatywy_poprzedniej = "O7"; break;
    case 252: numer_alternatywy_poprzedniej = "O8"; break;
    case 253: numer_alternatywy_poprzedniej = "O9"; break;
    case 254: numer_alternatywy_poprzedniej = "P0"; break;
    case 255: numer_alternatywy_poprzedniej = "P1"; break;
    case 256: numer_alternatywy_poprzedniej = "P2"; break;
    case 257: numer_alternatywy_poprzedniej = "P3"; break;
    case 258: numer_alternatywy_poprzedniej = "P4"; break;
    case 259: numer_alternatywy_poprzedniej = "P5"; break;
    case 260: numer_alternatywy_poprzedniej = "P6"; break;
    case 261: numer_alternatywy_poprzedniej = "P7"; break;
    case 262: numer_alternatywy_poprzedniej = "P8"; break;
    case 263: numer_alternatywy_poprzedniej = "P9"; break;
    case 264: numer_alternatywy_poprzedniej = "R0"; break;
    case 265: numer_alternatywy_poprzedniej = "R1"; break;
    case 266: numer_alternatywy_poprzedniej = "R2"; break;
    case 267: numer_alternatywy_poprzedniej = "R3"; break;
    case 268: numer_alternatywy_poprzedniej = "R4"; break;
    case 269: numer_alternatywy_poprzedniej = "R5"; break;
    case 270: numer_alternatywy_poprzedniej = "R6"; break;
    case 271: numer_alternatywy_poprzedniej = "R7"; break;
    case 272: numer_alternatywy_poprzedniej = "R8"; break;
    case 273: numer_alternatywy_poprzedniej = "R9"; break;
    case 274: numer_alternatywy_poprzedniej = "S0"; break;
    case 275: numer_alternatywy_poprzedniej = "S1"; break;
    case 276: numer_alternatywy_poprzedniej = "S2"; break;
    case 277: numer_alternatywy_poprzedniej = "S3"; break;
    case 278: numer_alternatywy_poprzedniej = "S4"; break;
    case 279: numer_alternatywy_poprzedniej = "S5"; break;
    case 280: numer_alternatywy_poprzedniej = "S6"; break;
    case 281: numer_alternatywy_poprzedniej = "S7"; break;
    case 282: numer_alternatywy_poprzedniej = "S8"; break;
    case 283: numer_alternatywy_poprzedniej = "S9"; break;
    case 284: numer_alternatywy_poprzedniej = "T0"; break;
    case 285: numer_alternatywy_poprzedniej = "T1"; break;
    case 286: numer_alternatywy_poprzedniej = "T2"; break;
    case 287: numer_alternatywy_poprzedniej = "T3"; break;
    case 288: numer_alternatywy_poprzedniej = "T4"; break;
    case 289: numer_alternatywy_poprzedniej = "T5"; break;
    case 290: numer_alternatywy_poprzedniej = "T6"; break;
    case 291: numer_alternatywy_poprzedniej = "T7"; break;
    case 292: numer_alternatywy_poprzedniej = "T8"; break;
    case 293: numer_alternatywy_poprzedniej = "T9"; break;
    case 294: numer_alternatywy_poprzedniej = "U0"; break;
    case 295: numer_alternatywy_poprzedniej = "U1"; break;
    case 296: numer_alternatywy_poprzedniej = "U2"; break;
    case 297: numer_alternatywy_poprzedniej = "U3"; break;
    case 298: numer_alternatywy_poprzedniej = "U4"; break;
    case 299: numer_alternatywy_poprzedniej = "U5"; break;
    case 300: numer_alternatywy_poprzedniej = "U6"; break;
    case 301: numer_alternatywy_poprzedniej = "1"; break;
    }
    
    switch( paczka )
    {
    case 1: nazwa_paczki = "Paczka 1SZT"; break;
    case 2: nazwa_paczki = "Paczka 2SZT"; break;
    case 3: nazwa_paczki = "Paczka 3SZT"; break;
    case 4: nazwa_paczki = "Paczka 4SZT"; break;
    case 5: nazwa_paczki = "Paczka 4SZT+1SZT"; break;
    case 6: nazwa_paczki = "Paczka 4SZT+2SZT"; break;
    case 7: nazwa_paczki = "Paczka 4SZT+3SZT"; break;
    case 8: nazwa_paczki = "Paczka 2x4SZT"; break;
    case 9: nazwa_paczki = "Paczka 2x4SZT+1SZT"; break;
    case 10: nazwa_paczki = "Paczka 2x4SZT+2SZT"; break;
    case 11: nazwa_paczki = "Paczka 2x4SZT+3SZT"; break;
    case 12: nazwa_paczki = "Paczka 3x4SZT"; break;
    case 13: nazwa_paczki = "Paczka 3x4SZT+1SZT"; break;
    case 14: nazwa_paczki = "Paczka 3x4SZT+2SZT"; break;
    case 15: nazwa_paczki = "Paczka 3x4SZT+3SZT"; break;
    case 16: nazwa_paczki = "Paczka 4x4SZT"; break;
    case 17: nazwa_paczki = "Paczka 4x4SZT+1SZT"; break;
    case 18: nazwa_paczki = "Paczka 4x4SZT+2SZT"; break;
    case 19: nazwa_paczki = "Paczka 4x4SZT+3SZT"; break;
    case 20: nazwa_paczki = "Paczka 5x4SZT"; break;
    case 21: nazwa_paczki = "Paczka 5x4SZT+1SZT"; break;
    case 22: nazwa_paczki = "Paczka 5x4SZT+2SZT"; break;
    case 23: nazwa_paczki = "Paczka 5x4SZT+3SZT"; break;
    case 24: nazwa_paczki = "Paczka 6x4SZT"; break;
    case 25: nazwa_paczki = "Paczka 6x4SZT+1SZT"; break;
    case 26: nazwa_paczki = "Paczka 6x4SZT+2SZT"; break;
    case 27: nazwa_paczki = "Paczka 6x4SZT+3SZT"; break;
    case 28: nazwa_paczki = "Paczka 7x4SZT"; break;
    case 29: nazwa_paczki = "Paczka 7x4SZT+1SZT"; break;
    case 30: nazwa_paczki = "Paczka 7x4SZT+2SZT"; break;
    case 31: nazwa_paczki = "Paczka 7x4SZT+3SZT"; break;
    case 32: nazwa_paczki = "Paczka 8x4SZT"; break;
    case 33: nazwa_paczki = "Paczka 8x4SZT+1SZT"; break;
    case 34: nazwa_paczki = "Paczka 8x4SZT+2SZT"; break;
    case 35: nazwa_paczki = "Paczka 8x4SZT+3SZT"; break;
    case 36: nazwa_paczki = "Paczka 9x4SZT"; break;
    case 37: nazwa_paczki = "Paczka 9x4SZT+1SZT"; break;
    case 38: nazwa_paczki = "Paczka 9x4SZT+2SZT"; break;
    case 39: nazwa_paczki = "Paczka 9x4SZT+3SZT"; break;
    case 40: nazwa_paczki = "Paczka 10x4SZT"; break;
    case 41: nazwa_paczki = "Paczka 10x4SZT+1SZT"; break;
    case 42: nazwa_paczki = "Paczka 10x4SZT+2SZT"; break;
    case 43: nazwa_paczki = "Paczka 10x4SZT+3SZT"; break;
    case 44: nazwa_paczki = "Paczka 11x4SZT"; break;
    case 45: nazwa_paczki = "Paczka 11x4SZT+1SZT"; break;
    case 46: nazwa_paczki = "Paczka 11x4SZT+2SZT"; break;
    case 47: nazwa_paczki = "Paczka 11x4SZT+3SZT"; break;
    case 48: nazwa_paczki = "Paczka 12x4SZT"; break;
    case 49: nazwa_paczki = "Paczka 12x4SZT+1SZT"; break;
    case 50: nazwa_paczki = "Paczka 12x4SZT+2SZT"; break;
    case 51: nazwa_paczki = "Paczka 12x4SZT+3SZT"; break;
    case 52: nazwa_paczki = "Paczka 13x4SZT"; break;
    case 53: nazwa_paczki = "Paczka 13x4SZT+1SZT"; break;
    case 54: nazwa_paczki = "Paczka 13x4SZT+2SZT"; break;
    case 55: nazwa_paczki = "Paczka 13x4SZT+3SZT"; break;
    case 56: nazwa_paczki = "Paczka 14x4SZT"; break;
    case 57: nazwa_paczki = "Paczka 14x4SZT+1SZT"; break;
    case 58: nazwa_paczki = "Paczka 14x4SZT+2SZT"; break;
    case 59: nazwa_paczki = "Paczka 14x4SZT+3SZT"; break;
    case 60: nazwa_paczki = "Paczka 15x4SZT"; break;
    case 61: nazwa_paczki = "Paczka 15x4SZT+1SZT"; break;
    case 62: nazwa_paczki = "Paczka 15x4SZT+2SZT"; break;
    case 63: nazwa_paczki = "Paczka 15x4SZT+3SZT"; break;
    case 64: nazwa_paczki = "Paczka 16x4SZT"; break;
    case 65: nazwa_paczki = "Paczka 16x4SZT+1SZT"; break;
    case 66: nazwa_paczki = "Paczka 16x4SZT+2SZT"; break;
    case 67: nazwa_paczki = "Paczka 16x4SZT+3SZT"; break;
    case 68: nazwa_paczki = "Paczka 17x4SZT"; break;
    case 69: nazwa_paczki = "Paczka 17x4SZT+1SZT"; break;
    case 70: nazwa_paczki = "Paczka 17x4SZT+2SZT"; break;
    case 71: nazwa_paczki = "Paczka 17x4SZT+3SZT"; break;
    case 72: nazwa_paczki = "Paczka 18x4SZT"; break;
    case 73: nazwa_paczki = "Paczka 18x4SZT+1SZT"; break;
    case 74: nazwa_paczki = "Paczka 18x4SZT+2SZT"; break;
    case 75: nazwa_paczki = "Paczka 18x4SZT+3SZT"; break;
    case 76: nazwa_paczki = "Paczka 19x4SZT"; break;
    case 77: nazwa_paczki = "Paczka 19x4SZT+1SZT"; break;
    case 78: nazwa_paczki = "Paczka 19x4SZT+2SZT"; break;
    case 79: nazwa_paczki = "Paczka 19x4SZT+3SZT"; break;
    case 80: nazwa_paczki = "Paczka 20x4SZT"; break;
    case 81: nazwa_paczki = "Paczka 20x4SZT+1SZT"; break;
    case 82: nazwa_paczki = "Paczka 20x4SZT+2SZT"; break;
    case 83: nazwa_paczki = "Paczka 20x4SZT+3SZT"; break;
    case 84: nazwa_paczki = "Paczka 21x4SZT"; break;
    case 85: nazwa_paczki = "Paczka 21x4SZT+1SZT"; break;
    case 86: nazwa_paczki = "Paczka 21x4SZT+2SZT"; break;
    case 87: nazwa_paczki = "Paczka 21x4SZT+3SZT"; break;
    case 88: nazwa_paczki = "Paczka 22x4SZT"; break;
    case 89: nazwa_paczki = "Paczka 22x4SZT+1SZT"; break;
    case 90: nazwa_paczki = "Paczka 22x4SZT+2SZT"; break;
    case 91: nazwa_paczki = "Paczka 22x4SZT+3SZT"; break;
    case 92: nazwa_paczki = "Paczka 23x4SZT"; break;
    case 93: nazwa_paczki = "Paczka 23x4SZT+1SZT"; break;
    case 94: nazwa_paczki = "Paczka 23x4SZT+2SZT"; break;
    case 95: nazwa_paczki = "Paczka 23x4SZT+3SZT"; break;
    case 96: nazwa_paczki = "Paczka 24x4SZT"; break;
    case 97: nazwa_paczki = "Paczka 24x4SZT+1SZT"; break;
    case 98: nazwa_paczki = "Paczka 24x4SZT+2SZT"; break;
    case 99: nazwa_paczki = "Paczka 24x4SZT+3SZT"; break;
    case 100: nazwa_paczki = "Paczka 25x4SZT"; break;
    case 101: nazwa_paczki = "Paczka 25x4SZT+1SZT"; break;
    case 102: nazwa_paczki = "Paczka 25x4SZT+2SZT"; break;
    case 103: nazwa_paczki = "Paczka 25x4SZT+3SZT"; break;
    case 104: nazwa_paczki = "Paczka 26x4SZT"; break;
    case 105: nazwa_paczki = "Paczka 26x4SZT+1SZT"; break;
    case 106: nazwa_paczki = "Paczka 26x4SZT+2SZT"; break;
    case 107: nazwa_paczki = "Paczka 26x4SZT+3SZT"; break;
    case 108: nazwa_paczki = "Paczka 27x4SZT"; break;
    case 109: nazwa_paczki = "Paczka 27x4SZT+1SZT"; break;
    case 110: nazwa_paczki = "Paczka 27x4SZT+2SZT"; break;
    case 111: nazwa_paczki = "Paczka 27x4SZT+3SZT"; break;
    case 112: nazwa_paczki = "Paczka 28x4SZT"; break;
    case 113: nazwa_paczki = "Paczka 28x4SZT+1SZT"; break;
    case 114: nazwa_paczki = "Paczka 28x4SZT+2SZT"; break;
    case 115: nazwa_paczki = "Paczka 28x4SZT+3SZT"; break;
    case 116: nazwa_paczki = "Paczka 29x4SZT"; break;
    case 117: nazwa_paczki = "Paczka 29x4SZT+1SZT"; break;
    case 118: nazwa_paczki = "Paczka 29x4SZT+2SZT"; break;
    case 119: nazwa_paczki = "Paczka 29x4SZT+3SZT"; break;
    case 120: nazwa_paczki = "Paczka 30x4SZT"; break;
    case 121: nazwa_paczki = "Paczka 30x4SZT+1SZT"; break;
    case 122: nazwa_paczki = "Paczka 30x4SZT+2SZT"; break;
    case 123: nazwa_paczki = "Paczka 30x4SZT+3SZT"; break;
    case 124: nazwa_paczki = "Paczka 31x4SZT"; break;
    case 125: nazwa_paczki = "Paczka 31x4SZT+1SZT"; break;
    case 126: nazwa_paczki = "Paczka 31x4SZT+2SZT"; break;
    case 127: nazwa_paczki = "Paczka 31x4SZT+3SZT"; break;
    case 128: nazwa_paczki = "Paczka 32x4SZT"; break;
    case 129: nazwa_paczki = "Paczka 32x4SZT+1SZT"; break;
    case 130: nazwa_paczki = "Paczka 32x4SZT+2SZT"; break;
    case 131: nazwa_paczki = "Paczka 32x4SZT+3SZT"; break;
    case 132: nazwa_paczki = "Paczka 33x4SZT"; break;
    case 133: nazwa_paczki = "Paczka 33x4SZT+1SZT"; break;
    case 134: nazwa_paczki = "Paczka 33x4SZT+2SZT"; break;
    case 135: nazwa_paczki = "Paczka 33x4SZT+3SZT"; break;
    case 136: nazwa_paczki = "Paczka 34x4SZT"; break;
    case 137: nazwa_paczki = "Paczka 34x4SZT+1SZT"; break;
    case 138: nazwa_paczki = "Paczka 34x4SZT+2SZT"; break;
    case 139: nazwa_paczki = "Paczka 34x4SZT+3SZT"; break;
    case 140: nazwa_paczki = "Paczka 35x4SZT"; break;
    case 141: nazwa_paczki = "Paczka 35x4SZT+1SZT"; break;
    case 142: nazwa_paczki = "Paczka 35x4SZT+2SZT"; break;
    case 143: nazwa_paczki = "Paczka 35x4SZT+3SZT"; break;
    case 144: nazwa_paczki = "Paczka 36x4SZT"; break;
    case 145: nazwa_paczki = "Paczka 36x4SZT+1SZT"; break;
    case 146: nazwa_paczki = "Paczka 36x4SZT+2SZT"; break;
    case 147: nazwa_paczki = "Paczka 36x4SZT+3SZT"; break;
    case 148: nazwa_paczki = "Paczka 37x4SZT"; break;
    case 149: nazwa_paczki = "Paczka 37x4SZT+1SZT"; break;
    case 150: nazwa_paczki = "Paczka 37x4SZT+2SZT"; break;
    case 151: nazwa_paczki = "Paczka 37x4SZT+3SZT"; break;
    case 152: nazwa_paczki = "Paczka 38x4SZT"; break;
    case 153: nazwa_paczki = "Paczka 38x4SZT+1SZT"; break;
    case 154: nazwa_paczki = "Paczka 38x4SZT+2SZT"; break;
    case 155: nazwa_paczki = "Paczka 38x4SZT+3SZT"; break;
    case 156: nazwa_paczki = "Paczka 39x4SZT"; break;
    case 157: nazwa_paczki = "Paczka 39x4SZT+1SZT"; break;
    case 158: nazwa_paczki = "Paczka 39x4SZT+2SZT"; break;
    case 159: nazwa_paczki = "Paczka 39x4SZT+3SZT"; break;
    case 160: nazwa_paczki = "Paczka 40x4SZT"; break;
    case 161: nazwa_paczki = "Paczka 40x4SZT+1SZT"; break;
    case 162: nazwa_paczki = "Paczka 40x4SZT+2SZT"; break;
    case 163: nazwa_paczki = "Paczka 40x4SZT+3SZT"; break;
    case 164: nazwa_paczki = "Paczka 41x4SZT"; break;
    case 165: nazwa_paczki = "Paczka 41x4SZT+1SZT"; break;
    case 166: nazwa_paczki = "Paczka 41x4SZT+2SZT"; break;
    case 167: nazwa_paczki = "Paczka 41x4SZT+3SZT"; break;
    case 168: nazwa_paczki = "Paczka 42x4SZT"; break;
    case 169: nazwa_paczki = "Paczka 42x4SZT+1SZT"; break;
    case 170: nazwa_paczki = "Paczka 42x4SZT+2SZT"; break;
    case 171: nazwa_paczki = "Paczka 42x4SZT+3SZT"; break;
    case 172: nazwa_paczki = "Paczka 43x4SZT"; break;
    case 173: nazwa_paczki = "Paczka 43x4SZT+1SZT"; break;
    case 174: nazwa_paczki = "Paczka 43x4SZT+2SZT"; break;
    case 175: nazwa_paczki = "Paczka 43x4SZT+3SZT"; break;
    case 176: nazwa_paczki = "Paczka 44x4SZT"; break;
    case 177: nazwa_paczki = "Paczka 44x4SZT+1SZT"; break;
    case 178: nazwa_paczki = "Paczka 44x4SZT+2SZT"; break;
    case 179: nazwa_paczki = "Paczka 44x4SZT+3SZT"; break;
    case 180: nazwa_paczki = "Paczka 45x4SZT"; break;
    case 181: nazwa_paczki = "Paczka 45x4SZT+1SZT"; break;
    case 182: nazwa_paczki = "Paczka 45x4SZT+2SZT"; break;
    case 183: nazwa_paczki = "Paczka 45x4SZT+3SZT"; break;
    case 184: nazwa_paczki = "Paczka 46x4SZT"; break;
    case 185: nazwa_paczki = "Paczka 46x4SZT+1SZT"; break;
    case 186: nazwa_paczki = "Paczka 46x4SZT+2SZT"; break;
    case 187: nazwa_paczki = "Paczka 46x4SZT+3SZT"; break;
    case 188: nazwa_paczki = "Paczka 47x4SZT"; break;
    case 189: nazwa_paczki = "Paczka 47x4SZT+1SZT"; break;
    case 190: nazwa_paczki = "Paczka 47x4SZT+2SZT"; break;
    case 191: nazwa_paczki = "Paczka 47x4SZT+3SZT"; break;
    case 192: nazwa_paczki = "Paczka 48x4SZT"; break;
    case 193: nazwa_paczki = "Paczka 48x4SZT+1SZT"; break;
    case 194: nazwa_paczki = "Paczka 48x4SZT+2SZT"; break;
    case 195: nazwa_paczki = "Paczka 48x4SZT+3SZT"; break;
    case 196: nazwa_paczki = "Paczka 49x4SZT"; break;
    case 197: nazwa_paczki = "Paczka 49x4SZT+1SZT"; break;
    case 198: nazwa_paczki = "Paczka 49x4SZT+2SZT"; break;
    case 199: nazwa_paczki = "Paczka 49x4SZT+3SZT"; break;
    case 200: nazwa_paczki = "Paczka 50x4SZT"; break;
    case 201: nazwa_paczki = "Paczka 50x4SZT+1SZT"; break;
    case 202: nazwa_paczki = "Paczka 50x4SZT+2SZT"; break;
    case 203: nazwa_paczki = "Paczka 50x4SZT+3SZT"; break;
    case 204: nazwa_paczki = "Paczka 51x4SZT"; break;
    case 205: nazwa_paczki = "Paczka 51x4SZT+1SZT"; break;
    case 206: nazwa_paczki = "Paczka 51x4SZT+2SZT"; break;
    case 207: nazwa_paczki = "Paczka 51x4SZT+3SZT"; break;
    case 208: nazwa_paczki = "Paczka 52x4SZT"; break;
    case 209: nazwa_paczki = "Paczka 52x4SZT+1SZT"; break;
    case 210: nazwa_paczki = "Paczka 52x4SZT+2SZT"; break;
    case 211: nazwa_paczki = "Paczka 52x4SZT+3SZT"; break;
    case 212: nazwa_paczki = "Paczka 53x4SZT"; break;
    case 213: nazwa_paczki = "Paczka 53x4SZT+1SZT"; break;
    case 214: nazwa_paczki = "Paczka 53x4SZT+2SZT"; break;
    case 215: nazwa_paczki = "Paczka 53x4SZT+3SZT"; break;
    case 216: nazwa_paczki = "Paczka 54x4SZT"; break;
    case 217: nazwa_paczki = "Paczka 54x4SZT+1SZT"; break;
    case 218: nazwa_paczki = "Paczka 54x4SZT+2SZT"; break;
    case 219: nazwa_paczki = "Paczka 54x4SZT+3SZT"; break;
    case 220: nazwa_paczki = "Paczka 55x4SZT"; break;
    case 221: nazwa_paczki = "Paczka 55x4SZT+1SZT"; break;
    case 222: nazwa_paczki = "Paczka 55x4SZT+2SZT"; break;
    case 223: nazwa_paczki = "Paczka 55x4SZT+3SZT"; break;
    case 224: nazwa_paczki = "Paczka 56x4SZT"; break;
    case 225: nazwa_paczki = "Paczka 56x4SZT+1SZT"; break;
    case 226: nazwa_paczki = "Paczka 56x4SZT+2SZT"; break;
    case 227: nazwa_paczki = "Paczka 56x4SZT+3SZT"; break;
    case 228: nazwa_paczki = "Paczka 57x4SZT"; break;
    case 229: nazwa_paczki = "Paczka 57x4SZT+1SZT"; break;
    case 230: nazwa_paczki = "Paczka 57x4SZT+2SZT"; break;
    case 231: nazwa_paczki = "Paczka 57x4SZT+3SZT"; break;
    case 232: nazwa_paczki = "Paczka 58x4SZT"; break;
    case 233: nazwa_paczki = "Paczka 58x4SZT+1SZT"; break;
    case 234: nazwa_paczki = "Paczka 58x4SZT+2SZT"; break;
    case 235: nazwa_paczki = "Paczka 58x4SZT+3SZT"; break;
    case 236: nazwa_paczki = "Paczka 59x4SZT"; break;
    case 237: nazwa_paczki = "Paczka 59x4SZT+1SZT"; break;
    case 238: nazwa_paczki = "Paczka 59x4SZT+2SZT"; break;
    case 239: nazwa_paczki = "Paczka 69x4SZT+3SZT"; break;
    case 240: nazwa_paczki = "Paczka 60x4SZT"; break;
    case 241: nazwa_paczki = "Paczka 60x4SZT+1SZT"; break;
    case 242: nazwa_paczki = "Paczka 60x4SZT+2SZT"; break;
    case 243: nazwa_paczki = "Paczka 60x4SZT+3SZT"; break;
    case 244: nazwa_paczki = "Paczka 61x4SZT"; break;
    case 245: nazwa_paczki = "Paczka 61x4SZT+1SZT"; break;
    case 246: nazwa_paczki = "Paczka 61x4SZT+2SZT"; break;
    case 247: nazwa_paczki = "Paczka 61x4SZT+3SZT"; break;
    case 248: nazwa_paczki = "Paczka 62x4SZT"; break;
    case 249: nazwa_paczki = "Paczka 62x4SZT+1SZT"; break;
    case 250: nazwa_paczki = "Paczka 62x4SZT+2SZT"; break;
    case 251: nazwa_paczki = "Paczka 62x4SZT+3SZT"; break;
    case 252: nazwa_paczki = "Paczka 63x4SZT"; break;
    case 253: nazwa_paczki = "Paczka 63x4SZT+1SZT"; break;
    case 254: nazwa_paczki = "Paczka 63x4SZT+2SZT"; break;
    case 255: nazwa_paczki = "Paczka 63x4SZT+3SZT"; break;
    case 256: nazwa_paczki = "Paczka 64x4SZT"; break;
    case 257: nazwa_paczki = "Paczka 64x4SZT+1SZT"; break;
    case 258: nazwa_paczki = "Paczka 64x4SZT+2SZT"; break;
    case 259: nazwa_paczki = "Paczka 64x4SZT+3SZT"; break;
    case 260: nazwa_paczki = "Paczka 65x4SZT"; break;
    case 261: nazwa_paczki = "Paczka 65x4SZT+1SZT"; break;
    case 262: nazwa_paczki = "Paczka 65x4SZT+2SZT"; break;
    case 263: nazwa_paczki = "Paczka 65x4SZT+3SZT"; break;
    case 264: nazwa_paczki = "Paczka 66x4SZT"; break;
    case 265: nazwa_paczki = "Paczka 66x4SZT+1SZT"; break;
    case 266: nazwa_paczki = "Paczka 66x4SZT+2SZT"; break;
    case 267: nazwa_paczki = "Paczka 66x4SZT+3SZT"; break;
    case 268: nazwa_paczki = "Paczka 67x4SZT"; break;
    case 269: nazwa_paczki = "Paczka 67x4SZT+1SZT"; break;
    case 270: nazwa_paczki = "Paczka 67x4SZT+2SZT"; break;
    case 271: nazwa_paczki = "Paczka 67x4SZT+3SZT"; break;
    case 272: nazwa_paczki = "Paczka 68x4SZT"; break;
    case 273: nazwa_paczki = "Paczka 68x4SZT+1SZT"; break;
    case 274: nazwa_paczki = "Paczka 68x4SZT+2SZT"; break;
    case 275: nazwa_paczki = "Paczka 68x4SZT+3SZT"; break;
    case 276: nazwa_paczki = "Paczka 69x4SZT"; break;
    case 277: nazwa_paczki = "Paczka 69x4SZT+1SZT"; break;
    case 278: nazwa_paczki = "Paczka 69x4SZT+2SZT"; break;
    case 279: nazwa_paczki = "Paczka 69x4SZT+3SZT"; break;
    case 280: nazwa_paczki = "Paczka 70x4SZT"; break;
    case 281: nazwa_paczki = "Paczka 70x4SZT+1SZT"; break;
    case 282: nazwa_paczki = "Paczka 70x4SZT+2SZT"; break;
    case 283: nazwa_paczki = "Paczka 70x4SZT+3SZT"; break;
    case 284: nazwa_paczki = "Paczka 71x4SZT"; break;
    case 285: nazwa_paczki = "Paczka 71x4SZT+1SZT"; break;
    case 286: nazwa_paczki = "Paczka 71x4SZT+2SZT"; break;
    case 287: nazwa_paczki = "Paczka 71x4SZT+3SZT"; break;
    case 288: nazwa_paczki = "Paczka 72x4SZT"; break;
    case 289: nazwa_paczki = "Paczka 72x4SZT+1SZT"; break;
    case 290: nazwa_paczki = "Paczka 72x4SZT+2SZT"; break;
    case 291: nazwa_paczki = "Paczka 72x4SZT+3SZT"; break;
    case 292: nazwa_paczki = "Paczka 73x4SZT"; break;
    case 293: nazwa_paczki = "Paczka 73x4SZT+1SZT"; break;
    case 294: nazwa_paczki = "Paczka 73x4SZT+2SZT"; break;
    case 295: nazwa_paczki = "Paczka 73x4SZT+3SZT"; break;
    case 296: nazwa_paczki = "Paczka 74x4SZT"; break;
    case 297: nazwa_paczki = "Paczka 74x4SZT+1SZT"; break;
    case 298: nazwa_paczki = "Paczka 74x4SZT+2SZT"; break;
    case 299: nazwa_paczki = "Paczka 74x4SZT+3SZT"; break;
    case 300: nazwa_paczki = "Paczka 75x4SZT"; break;
    case 301: nazwa_paczki = "Paczka 301 do 9999"; break;
    }
    
    switch( alternatywa )
    {	
    case 5: specyfikacja_liczba_paczek = "1"; break;
    case 6: specyfikacja_liczba_paczek = "1"; break;
    case 7: specyfikacja_liczba_paczek = "1"; break;
    case 8: specyfikacja_liczba_paczek = "2"; break;
    case 9: specyfikacja_liczba_paczek = "2"; break;
    case 10: specyfikacja_liczba_paczek = "2"; break;
    case 11: specyfikacja_liczba_paczek = "2"; break;
    case 12: specyfikacja_liczba_paczek = "3"; break;
    case 13: specyfikacja_liczba_paczek = "3"; break;
    case 14: specyfikacja_liczba_paczek = "3"; break;
    case 15: specyfikacja_liczba_paczek = "3"; break;
    case 16: specyfikacja_liczba_paczek = "4"; break;
    case 17: specyfikacja_liczba_paczek = "4"; break;
    case 18: specyfikacja_liczba_paczek = "4"; break;
    case 19: specyfikacja_liczba_paczek = "4"; break;
    case 20: specyfikacja_liczba_paczek = "5"; break;
    case 21: specyfikacja_liczba_paczek = "5"; break;
    case 22: specyfikacja_liczba_paczek = "5"; break;
    case 23: specyfikacja_liczba_paczek = "5"; break;
    case 24: specyfikacja_liczba_paczek = "6"; break;
    case 25: specyfikacja_liczba_paczek = "6"; break;
    case 26: specyfikacja_liczba_paczek = "6"; break;
    case 27: specyfikacja_liczba_paczek = "6"; break;
    case 28: specyfikacja_liczba_paczek = "7"; break;
    case 29: specyfikacja_liczba_paczek = "7"; break;
    case 30: specyfikacja_liczba_paczek = "7"; break;
    case 31: specyfikacja_liczba_paczek = "7"; break;
    case 32: specyfikacja_liczba_paczek = "8"; break;
    case 33: specyfikacja_liczba_paczek = "8"; break;
    case 34: specyfikacja_liczba_paczek = "8"; break;
    case 35: specyfikacja_liczba_paczek = "8"; break;
    case 36: specyfikacja_liczba_paczek = "9"; break;
    case 37: specyfikacja_liczba_paczek = "9"; break;
    case 38: specyfikacja_liczba_paczek = "9"; break;
    case 39: specyfikacja_liczba_paczek = "9"; break;
    case 40: specyfikacja_liczba_paczek = "10"; break;
    case 41: specyfikacja_liczba_paczek = "10"; break;
    case 42: specyfikacja_liczba_paczek = "10"; break;
    case 43: specyfikacja_liczba_paczek = "10"; break;
    case 44: specyfikacja_liczba_paczek = "11"; break;
    case 45: specyfikacja_liczba_paczek = "11"; break;
    case 46: specyfikacja_liczba_paczek = "11"; break;
    case 47: specyfikacja_liczba_paczek = "11"; break;
    case 48: specyfikacja_liczba_paczek = "12"; break;
    case 49: specyfikacja_liczba_paczek = "12"; break;
    case 50: specyfikacja_liczba_paczek = "12"; break;
    case 51: specyfikacja_liczba_paczek = "12"; break;
    case 52: specyfikacja_liczba_paczek = "13"; break;
    case 53: specyfikacja_liczba_paczek = "13"; break;
    case 54: specyfikacja_liczba_paczek = "13"; break;
    case 55: specyfikacja_liczba_paczek = "13"; break;
    case 56: specyfikacja_liczba_paczek = "14"; break;
    case 57: specyfikacja_liczba_paczek = "14"; break;
    case 58: specyfikacja_liczba_paczek = "14"; break;
    case 59: specyfikacja_liczba_paczek = "14"; break;
    case 60: specyfikacja_liczba_paczek = "15"; break;
    case 61: specyfikacja_liczba_paczek = "15"; break;
    case 62: specyfikacja_liczba_paczek = "15"; break;
    case 63: specyfikacja_liczba_paczek = "15"; break;
    case 64: specyfikacja_liczba_paczek = "16"; break;
    case 65: specyfikacja_liczba_paczek = "16"; break;
    case 66: specyfikacja_liczba_paczek = "16"; break;
    case 67: specyfikacja_liczba_paczek = "16"; break;
    case 68: specyfikacja_liczba_paczek = "17"; break;
    case 69: specyfikacja_liczba_paczek = "17"; break;
    case 70: specyfikacja_liczba_paczek = "17"; break;
    case 71: specyfikacja_liczba_paczek = "17"; break;
    case 72: specyfikacja_liczba_paczek = "18"; break;
    case 73: specyfikacja_liczba_paczek = "18"; break;
    case 74: specyfikacja_liczba_paczek = "18"; break;
    case 75: specyfikacja_liczba_paczek = "18"; break;
    case 76: specyfikacja_liczba_paczek = "19"; break;
    case 77: specyfikacja_liczba_paczek = "19"; break;
    case 78: specyfikacja_liczba_paczek = "19"; break;
    case 79: specyfikacja_liczba_paczek = "19"; break;
    case 80: specyfikacja_liczba_paczek = "20"; break;
    case 81: specyfikacja_liczba_paczek = "20"; break;
    case 82: specyfikacja_liczba_paczek = "20"; break;
    case 83: specyfikacja_liczba_paczek = "20"; break;
    case 84: specyfikacja_liczba_paczek = "21"; break;
    case 85: specyfikacja_liczba_paczek = "21"; break;
    case 86: specyfikacja_liczba_paczek = "21"; break;
    case 87: specyfikacja_liczba_paczek = "21"; break;
    case 88: specyfikacja_liczba_paczek = "22"; break;
    case 89: specyfikacja_liczba_paczek = "22"; break;
    case 90: specyfikacja_liczba_paczek = "22"; break;
    case 91: specyfikacja_liczba_paczek = "22"; break;
    case 92: specyfikacja_liczba_paczek = "23"; break;
    case 93: specyfikacja_liczba_paczek = "23"; break;
    case 94: specyfikacja_liczba_paczek = "23"; break;
    case 95: specyfikacja_liczba_paczek = "23"; break;
    case 96: specyfikacja_liczba_paczek = "24"; break;
    case 97: specyfikacja_liczba_paczek = "24"; break;
    case 98: specyfikacja_liczba_paczek = "24"; break;
    case 99: specyfikacja_liczba_paczek = "24"; break;
    case 100: specyfikacja_liczba_paczek = "25"; break;
    case 101: specyfikacja_liczba_paczek = "25"; break;
    case 102: specyfikacja_liczba_paczek = "25"; break;
    case 103: specyfikacja_liczba_paczek = "25"; break;
    case 104: specyfikacja_liczba_paczek = "26"; break;
    case 105: specyfikacja_liczba_paczek = "26"; break;
    case 106: specyfikacja_liczba_paczek = "26"; break;
    case 107: specyfikacja_liczba_paczek = "26"; break;
    case 108: specyfikacja_liczba_paczek = "27"; break;
    case 109: specyfikacja_liczba_paczek = "27"; break;
    case 110: specyfikacja_liczba_paczek = "27"; break;
    case 111: specyfikacja_liczba_paczek = "27"; break;
    case 112: specyfikacja_liczba_paczek = "28"; break;
    case 113: specyfikacja_liczba_paczek = "28"; break;
    case 114: specyfikacja_liczba_paczek = "28"; break;
    case 115: specyfikacja_liczba_paczek = "28"; break;
    case 116: specyfikacja_liczba_paczek = "29"; break;
    case 117: specyfikacja_liczba_paczek = "29"; break;
    case 118: specyfikacja_liczba_paczek = "29"; break;
    case 119: specyfikacja_liczba_paczek = "29"; break;
    case 120: specyfikacja_liczba_paczek = "30"; break;
    case 121: specyfikacja_liczba_paczek = "30"; break;
    case 122: specyfikacja_liczba_paczek = "30"; break;
    case 123: specyfikacja_liczba_paczek = "30"; break;
    case 124: specyfikacja_liczba_paczek = "31"; break;
    case 125: specyfikacja_liczba_paczek = "31"; break;
    case 126: specyfikacja_liczba_paczek = "31"; break;
    case 127: specyfikacja_liczba_paczek = "31"; break;
    case 128: specyfikacja_liczba_paczek = "32"; break;
    case 129: specyfikacja_liczba_paczek = "32"; break;
    case 130: specyfikacja_liczba_paczek = "32"; break;
    case 131: specyfikacja_liczba_paczek = "32"; break;
    case 132: specyfikacja_liczba_paczek = "33"; break;
    case 133: specyfikacja_liczba_paczek = "33"; break;
    case 134: specyfikacja_liczba_paczek = "33"; break;
    case 135: specyfikacja_liczba_paczek = "33"; break;
    case 136: specyfikacja_liczba_paczek = "34"; break;
    case 137: specyfikacja_liczba_paczek = "34"; break;
    case 138: specyfikacja_liczba_paczek = "34"; break;
    case 139: specyfikacja_liczba_paczek = "34"; break;
    case 140: specyfikacja_liczba_paczek = "35"; break;
    case 141: specyfikacja_liczba_paczek = "35"; break;
    case 142: specyfikacja_liczba_paczek = "35"; break;
    case 143: specyfikacja_liczba_paczek = "35"; break;
    case 144: specyfikacja_liczba_paczek = "36"; break;
    case 145: specyfikacja_liczba_paczek = "36"; break;
    case 146: specyfikacja_liczba_paczek = "36"; break;
    case 147: specyfikacja_liczba_paczek = "36"; break;
    case 148: specyfikacja_liczba_paczek = "37"; break;
    case 149: specyfikacja_liczba_paczek = "37"; break;
    case 150: specyfikacja_liczba_paczek = "37"; break;
    case 151: specyfikacja_liczba_paczek = "37"; break;
    case 152: specyfikacja_liczba_paczek = "38"; break;
    case 153: specyfikacja_liczba_paczek = "38"; break;
    case 154: specyfikacja_liczba_paczek = "38"; break;
    case 155: specyfikacja_liczba_paczek = "38"; break;
    case 156: specyfikacja_liczba_paczek = "39"; break;
    case 157: specyfikacja_liczba_paczek = "39"; break;
    case 158: specyfikacja_liczba_paczek = "39"; break;
    case 159: specyfikacja_liczba_paczek = "39"; break;
    case 160: specyfikacja_liczba_paczek = "40"; break;
    case 161: specyfikacja_liczba_paczek = "40"; break;
    case 162: specyfikacja_liczba_paczek = "40"; break;
    case 163: specyfikacja_liczba_paczek = "40"; break;
    case 164: specyfikacja_liczba_paczek = "41"; break;
    case 165: specyfikacja_liczba_paczek = "41"; break;
    case 166: specyfikacja_liczba_paczek = "41"; break;
    case 167: specyfikacja_liczba_paczek = "41"; break;
    case 168: specyfikacja_liczba_paczek = "42"; break;
    case 169: specyfikacja_liczba_paczek = "42"; break;
    case 170: specyfikacja_liczba_paczek = "42"; break;
    case 171: specyfikacja_liczba_paczek = "42"; break;
    case 172: specyfikacja_liczba_paczek = "43"; break;
    case 173: specyfikacja_liczba_paczek = "43"; break;
    case 174: specyfikacja_liczba_paczek = "43"; break;
    case 175: specyfikacja_liczba_paczek = "43"; break;
    case 176: specyfikacja_liczba_paczek = "44"; break;
    case 177: specyfikacja_liczba_paczek = "44"; break;
    case 178: specyfikacja_liczba_paczek = "44"; break;
    case 179: specyfikacja_liczba_paczek = "44"; break;
    case 180: specyfikacja_liczba_paczek = "45"; break;
    case 181: specyfikacja_liczba_paczek = "45"; break;
    case 182: specyfikacja_liczba_paczek = "45"; break;
    case 183: specyfikacja_liczba_paczek = "45"; break;
    case 184: specyfikacja_liczba_paczek = "46"; break;
    case 185: specyfikacja_liczba_paczek = "46"; break;
    case 186: specyfikacja_liczba_paczek = "46"; break;
    case 187: specyfikacja_liczba_paczek = "46"; break;
    case 188: specyfikacja_liczba_paczek = "47"; break;
    case 189: specyfikacja_liczba_paczek = "47"; break;
    case 190: specyfikacja_liczba_paczek = "47"; break;
    case 191: specyfikacja_liczba_paczek = "47"; break;
    case 192: specyfikacja_liczba_paczek = "48"; break;
    case 193: specyfikacja_liczba_paczek = "48"; break;
    case 194: specyfikacja_liczba_paczek = "48"; break;
    case 195: specyfikacja_liczba_paczek = "48"; break;
    case 196: specyfikacja_liczba_paczek = "49"; break;
    case 197: specyfikacja_liczba_paczek = "49"; break;
    case 198: specyfikacja_liczba_paczek = "49"; break;
    case 199: specyfikacja_liczba_paczek = "49"; break;
    case 200: specyfikacja_liczba_paczek = "50"; break;
    case 201: specyfikacja_liczba_paczek = "50"; break;
    case 202: specyfikacja_liczba_paczek = "50"; break;
    case 203: specyfikacja_liczba_paczek = "50"; break;
    case 204: specyfikacja_liczba_paczek = "51"; break;
    case 205: specyfikacja_liczba_paczek = "51"; break;
    case 206: specyfikacja_liczba_paczek = "51"; break;
    case 207: specyfikacja_liczba_paczek = "51"; break;
    case 208: specyfikacja_liczba_paczek = "52"; break;
    case 209: specyfikacja_liczba_paczek = "52"; break;
    case 210: specyfikacja_liczba_paczek = "52"; break;
    case 211: specyfikacja_liczba_paczek = "52"; break;
    case 212: specyfikacja_liczba_paczek = "53"; break;
    case 213: specyfikacja_liczba_paczek = "53"; break;
    case 214: specyfikacja_liczba_paczek = "53"; break;
    case 215: specyfikacja_liczba_paczek = "53"; break;
    case 216: specyfikacja_liczba_paczek = "54"; break;
    case 217: specyfikacja_liczba_paczek = "54"; break;
    case 218: specyfikacja_liczba_paczek = "54"; break;
    case 219: specyfikacja_liczba_paczek = "54"; break;
    case 220: specyfikacja_liczba_paczek = "55"; break;
    case 221: specyfikacja_liczba_paczek = "55"; break;
    case 222: specyfikacja_liczba_paczek = "55"; break;
    case 223: specyfikacja_liczba_paczek = "55"; break;
    case 224: specyfikacja_liczba_paczek = "56"; break;
    case 225: specyfikacja_liczba_paczek = "56"; break;
    case 226: specyfikacja_liczba_paczek = "56"; break;
    case 227: specyfikacja_liczba_paczek = "56"; break;
    case 228: specyfikacja_liczba_paczek = "57"; break;
    case 229: specyfikacja_liczba_paczek = "57"; break;
    case 230: specyfikacja_liczba_paczek = "57"; break;
    case 231: specyfikacja_liczba_paczek = "57"; break;
    case 232: specyfikacja_liczba_paczek = "58"; break;
    case 233: specyfikacja_liczba_paczek = "58"; break;
    case 234: specyfikacja_liczba_paczek = "58"; break;
    case 235: specyfikacja_liczba_paczek = "58"; break;
    case 236: specyfikacja_liczba_paczek = "59"; break;
    case 237: specyfikacja_liczba_paczek = "59"; break;
    case 238: specyfikacja_liczba_paczek = "59"; break;
    case 239: specyfikacja_liczba_paczek = "59"; break;
    case 240: specyfikacja_liczba_paczek = "60"; break;
    case 241: specyfikacja_liczba_paczek = "60"; break;
    case 242: specyfikacja_liczba_paczek = "60"; break;
    case 243: specyfikacja_liczba_paczek = "60"; break;
    case 244: specyfikacja_liczba_paczek = "61"; break;
    case 245: specyfikacja_liczba_paczek = "61"; break;
    case 246: specyfikacja_liczba_paczek = "61"; break;
    case 247: specyfikacja_liczba_paczek = "61"; break;
    case 248: specyfikacja_liczba_paczek = "62"; break;
    case 249: specyfikacja_liczba_paczek = "62"; break;
    case 250: specyfikacja_liczba_paczek = "62"; break;
    case 251: specyfikacja_liczba_paczek = "62"; break;
    case 252: specyfikacja_liczba_paczek = "63"; break;
    case 253: specyfikacja_liczba_paczek = "63"; break;
    case 254: specyfikacja_liczba_paczek = "63"; break;
    case 255: specyfikacja_liczba_paczek = "63"; break;
    case 256: specyfikacja_liczba_paczek = "64"; break;
    case 257: specyfikacja_liczba_paczek = "64"; break;
    case 258: specyfikacja_liczba_paczek = "64"; break;
    case 259: specyfikacja_liczba_paczek = "64"; break;
    case 260: specyfikacja_liczba_paczek = "65"; break;
    case 261: specyfikacja_liczba_paczek = "65"; break;
    case 262: specyfikacja_liczba_paczek = "65"; break;
    case 263: specyfikacja_liczba_paczek = "65"; break;
    case 264: specyfikacja_liczba_paczek = "66"; break;
    case 265: specyfikacja_liczba_paczek = "66"; break;
    case 266: specyfikacja_liczba_paczek = "66"; break;
    case 267: specyfikacja_liczba_paczek = "66"; break;
    case 268: specyfikacja_liczba_paczek = "67"; break;
    case 269: specyfikacja_liczba_paczek = "67"; break;
    case 270: specyfikacja_liczba_paczek = "67"; break;
    case 271: specyfikacja_liczba_paczek = "67"; break;
    case 272: specyfikacja_liczba_paczek = "68"; break;
    case 273: specyfikacja_liczba_paczek = "68"; break;
    case 274: specyfikacja_liczba_paczek = "68"; break;
    case 275: specyfikacja_liczba_paczek = "68"; break;
    case 276: specyfikacja_liczba_paczek = "69"; break;
    case 277: specyfikacja_liczba_paczek = "69"; break;
    case 278: specyfikacja_liczba_paczek = "69"; break;
    case 279: specyfikacja_liczba_paczek = "69"; break;
    case 280: specyfikacja_liczba_paczek = "70"; break;
    case 281: specyfikacja_liczba_paczek = "70"; break;
    case 282: specyfikacja_liczba_paczek = "70"; break;
    case 283: specyfikacja_liczba_paczek = "70"; break;
    case 284: specyfikacja_liczba_paczek = "71"; break;
    case 285: specyfikacja_liczba_paczek = "71"; break;
    case 286: specyfikacja_liczba_paczek = "71"; break;
    case 287: specyfikacja_liczba_paczek = "71"; break;
    case 288: specyfikacja_liczba_paczek = "72"; break;
    case 289: specyfikacja_liczba_paczek = "72"; break;
    case 290: specyfikacja_liczba_paczek = "72"; break;
    case 291: specyfikacja_liczba_paczek = "72"; break;
    case 292: specyfikacja_liczba_paczek = "73"; break;
    case 293: specyfikacja_liczba_paczek = "73"; break;
    case 294: specyfikacja_liczba_paczek = "73"; break;
    case 295: specyfikacja_liczba_paczek = "73"; break;
    case 296: specyfikacja_liczba_paczek = "74"; break;
    case 297: specyfikacja_liczba_paczek = "74"; break;
    case 298: specyfikacja_liczba_paczek = "74"; break;
    case 299: specyfikacja_liczba_paczek = "74"; break;
    case 300: specyfikacja_liczba_paczek = "75"; break;
    case 301: specyfikacja_liczba_paczek = "1"; break;
    }
    
}
	
if (liczba_sztaplowania == 3)
{

    switch( alternatywa_poprzednia )
    {
    case 1: numer_alternatywy_poprzedniej = "0"; break;
    case 2: numer_alternatywy_poprzedniej = "1"; break;
    case 3: numer_alternatywy_poprzedniej = "2"; break;
    case 4: numer_alternatywy_poprzedniej = "3"; break;
    case 5: numer_alternatywy_poprzedniej = "4"; break;
    case 6: numer_alternatywy_poprzedniej = "3"; break;
    case 7: numer_alternatywy_poprzedniej = "4"; break;
    case 8: numer_alternatywy_poprzedniej = "5"; break;
    case 9: numer_alternatywy_poprzedniej = "6"; break;
    case 10: numer_alternatywy_poprzedniej = "7"; break;
    case 11: numer_alternatywy_poprzedniej = "8"; break;
    case 12: numer_alternatywy_poprzedniej = "9"; break;
    case 13: numer_alternatywy_poprzedniej = "10"; break;
    case 14: numer_alternatywy_poprzedniej = "11"; break;
    case 15: numer_alternatywy_poprzedniej = "12"; break;
    case 16: numer_alternatywy_poprzedniej = "13"; break;
    case 17: numer_alternatywy_poprzedniej = "14"; break;
    case 18: numer_alternatywy_poprzedniej = "15"; break;
    case 19: numer_alternatywy_poprzedniej = "16"; break;
    case 20: numer_alternatywy_poprzedniej = "17"; break;
    case 21: numer_alternatywy_poprzedniej = "18"; break;
    case 22: numer_alternatywy_poprzedniej = "19"; break;
    case 23: numer_alternatywy_poprzedniej = "20"; break;
    case 24: numer_alternatywy_poprzedniej = "21"; break;
    case 25: numer_alternatywy_poprzedniej = "22"; break;
    case 26: numer_alternatywy_poprzedniej = "23"; break;
    case 27: numer_alternatywy_poprzedniej = "24"; break;
    case 28: numer_alternatywy_poprzedniej = "25"; break;
    case 29: numer_alternatywy_poprzedniej = "26"; break;
    case 30: numer_alternatywy_poprzedniej = "27"; break;
    case 31: numer_alternatywy_poprzedniej = "28"; break;
    case 32: numer_alternatywy_poprzedniej = "29"; break;
    case 33: numer_alternatywy_poprzedniej = "30"; break;
    case 34: numer_alternatywy_poprzedniej = "31"; break;
    case 35: numer_alternatywy_poprzedniej = "32"; break;
    case 36: numer_alternatywy_poprzedniej = "33"; break;
    case 37: numer_alternatywy_poprzedniej = "34"; break;
    case 38: numer_alternatywy_poprzedniej = "35"; break;
    case 39: numer_alternatywy_poprzedniej = "36"; break;
    case 40: numer_alternatywy_poprzedniej = "37"; break;
    case 41: numer_alternatywy_poprzedniej = "38"; break;
    case 42: numer_alternatywy_poprzedniej = "39"; break;
    case 43: numer_alternatywy_poprzedniej = "40"; break;
    case 44: numer_alternatywy_poprzedniej = "41"; break;
    case 45: numer_alternatywy_poprzedniej = "42"; break;
    case 46: numer_alternatywy_poprzedniej = "43"; break;
    case 47: numer_alternatywy_poprzedniej = "44"; break;
    case 48: numer_alternatywy_poprzedniej = "45"; break;
    case 49: numer_alternatywy_poprzedniej = "46"; break;
    case 50: numer_alternatywy_poprzedniej = "47"; break;
    case 51: numer_alternatywy_poprzedniej = "48"; break;
    case 52: numer_alternatywy_poprzedniej = "49"; break;
    case 53: numer_alternatywy_poprzedniej = "50"; break;
    case 54: numer_alternatywy_poprzedniej = "51"; break;
    case 55: numer_alternatywy_poprzedniej = "52"; break;
    case 56: numer_alternatywy_poprzedniej = "53"; break;
    case 57: numer_alternatywy_poprzedniej = "54"; break;
    case 58: numer_alternatywy_poprzedniej = "55"; break;
    case 59: numer_alternatywy_poprzedniej = "56"; break;
    case 60: numer_alternatywy_poprzedniej = "57"; break;
    case 61: numer_alternatywy_poprzedniej = "58"; break;
    case 62: numer_alternatywy_poprzedniej = "59"; break;
    case 63: numer_alternatywy_poprzedniej = "60"; break;
    case 64: numer_alternatywy_poprzedniej = "61"; break;
    case 65: numer_alternatywy_poprzedniej = "62"; break;
    case 66: numer_alternatywy_poprzedniej = "63"; break;
    case 67: numer_alternatywy_poprzedniej = "64"; break;
    case 68: numer_alternatywy_poprzedniej = "65"; break;
    case 69: numer_alternatywy_poprzedniej = "66"; break;
    case 70: numer_alternatywy_poprzedniej = "67"; break;
    case 71: numer_alternatywy_poprzedniej = "68"; break;
    case 72: numer_alternatywy_poprzedniej = "69"; break;
    case 73: numer_alternatywy_poprzedniej = "70"; break;
    case 74: numer_alternatywy_poprzedniej = "71"; break;
    case 75: numer_alternatywy_poprzedniej = "72"; break;
    case 76: numer_alternatywy_poprzedniej = "73"; break;
    case 77: numer_alternatywy_poprzedniej = "74"; break;
    case 78: numer_alternatywy_poprzedniej = "75"; break;
    case 79: numer_alternatywy_poprzedniej = "76"; break;
    case 80: numer_alternatywy_poprzedniej = "77"; break;
    case 81: numer_alternatywy_poprzedniej = "78"; break;
    case 82: numer_alternatywy_poprzedniej = "79"; break;
    case 83: numer_alternatywy_poprzedniej = "80"; break;
    case 84: numer_alternatywy_poprzedniej = "81"; break;
    case 85: numer_alternatywy_poprzedniej = "82"; break;
    case 86: numer_alternatywy_poprzedniej = "83"; break;
    case 87: numer_alternatywy_poprzedniej = "84"; break;
    case 88: numer_alternatywy_poprzedniej = "85"; break;
    case 89: numer_alternatywy_poprzedniej = "86"; break;
    case 90: numer_alternatywy_poprzedniej = "87"; break;
    case 91: numer_alternatywy_poprzedniej = "88"; break;
    case 92: numer_alternatywy_poprzedniej = "89"; break;
    case 93: numer_alternatywy_poprzedniej = "90"; break;
    case 94: numer_alternatywy_poprzedniej = "91"; break;
    case 95: numer_alternatywy_poprzedniej = "92"; break;
    case 96: numer_alternatywy_poprzedniej = "93"; break;
    case 97: numer_alternatywy_poprzedniej = "94"; break;
    case 98: numer_alternatywy_poprzedniej = "95"; break;
    case 99: numer_alternatywy_poprzedniej = "96"; break;
    case 100: numer_alternatywy_poprzedniej = "97"; break;
    case 101: numer_alternatywy_poprzedniej = "98"; break;
    case 102: numer_alternatywy_poprzedniej = "99"; break;
    case 103: numer_alternatywy_poprzedniej = "A0"; break;
    case 104: numer_alternatywy_poprzedniej = "A1"; break;
    case 105: numer_alternatywy_poprzedniej = "A2"; break;
    case 106: numer_alternatywy_poprzedniej = "A3"; break;
    case 107: numer_alternatywy_poprzedniej = "A4"; break;
    case 108: numer_alternatywy_poprzedniej = "A5"; break;
    case 109: numer_alternatywy_poprzedniej = "A6"; break;
    case 110: numer_alternatywy_poprzedniej = "A7"; break;
    case 111: numer_alternatywy_poprzedniej = "A8"; break;
    case 112: numer_alternatywy_poprzedniej = "A9"; break;
    case 113: numer_alternatywy_poprzedniej = "B0"; break;
    case 114: numer_alternatywy_poprzedniej = "B1"; break;
    case 115: numer_alternatywy_poprzedniej = "B2"; break;
    case 116: numer_alternatywy_poprzedniej = "B3"; break;
    case 117: numer_alternatywy_poprzedniej = "B4"; break;
    case 118: numer_alternatywy_poprzedniej = "B5"; break;
    case 119: numer_alternatywy_poprzedniej = "B6"; break;
    case 120: numer_alternatywy_poprzedniej = "B7"; break;
    case 121: numer_alternatywy_poprzedniej = "B8"; break;
    case 122: numer_alternatywy_poprzedniej = "B9"; break;
    case 123: numer_alternatywy_poprzedniej = "C0"; break;
    case 124: numer_alternatywy_poprzedniej = "C1"; break;
    case 125: numer_alternatywy_poprzedniej = "C2"; break;
    case 126: numer_alternatywy_poprzedniej = "C3"; break;
    case 127: numer_alternatywy_poprzedniej = "C4"; break;
    case 128: numer_alternatywy_poprzedniej = "C5"; break;
    case 129: numer_alternatywy_poprzedniej = "C6"; break;
    case 130: numer_alternatywy_poprzedniej = "C7"; break;
    case 131: numer_alternatywy_poprzedniej = "C8"; break;
    case 132: numer_alternatywy_poprzedniej = "C9"; break;
    case 133: numer_alternatywy_poprzedniej = "D0"; break;
    case 134: numer_alternatywy_poprzedniej = "D1"; break;
    case 135: numer_alternatywy_poprzedniej = "D2"; break;
    case 136: numer_alternatywy_poprzedniej = "D3"; break;
    case 137: numer_alternatywy_poprzedniej = "D4"; break;
    case 138: numer_alternatywy_poprzedniej = "D5"; break;
    case 139: numer_alternatywy_poprzedniej = "D6"; break;
    case 140: numer_alternatywy_poprzedniej = "D7"; break;
    case 141: numer_alternatywy_poprzedniej = "D8"; break;
    case 142: numer_alternatywy_poprzedniej = "D9"; break;
    case 143: numer_alternatywy_poprzedniej = "E0"; break;
    case 144: numer_alternatywy_poprzedniej = "E1"; break;
    case 145: numer_alternatywy_poprzedniej = "E2"; break;
    case 146: numer_alternatywy_poprzedniej = "E3"; break;
    case 147: numer_alternatywy_poprzedniej = "E4"; break;
    case 148: numer_alternatywy_poprzedniej = "E5"; break;
    case 149: numer_alternatywy_poprzedniej = "E6"; break;
    case 150: numer_alternatywy_poprzedniej = "E7"; break;
    case 151: numer_alternatywy_poprzedniej = "E8"; break;
    case 152: numer_alternatywy_poprzedniej = "E9"; break;
    case 153: numer_alternatywy_poprzedniej = "F0"; break;
    case 154: numer_alternatywy_poprzedniej = "F1"; break;
    case 155: numer_alternatywy_poprzedniej = "F2"; break;
    case 156: numer_alternatywy_poprzedniej = "F3"; break;
    case 157: numer_alternatywy_poprzedniej = "F4"; break;
    case 158: numer_alternatywy_poprzedniej = "F5"; break;
    case 159: numer_alternatywy_poprzedniej = "F6"; break;
    case 160: numer_alternatywy_poprzedniej = "F7"; break;
    case 161: numer_alternatywy_poprzedniej = "F8"; break;
    case 162: numer_alternatywy_poprzedniej = "F9"; break;
    case 163: numer_alternatywy_poprzedniej = "G0"; break;
    case 164: numer_alternatywy_poprzedniej = "G1"; break;
    case 165: numer_alternatywy_poprzedniej = "G2"; break;
    case 166: numer_alternatywy_poprzedniej = "G3"; break;
    case 167: numer_alternatywy_poprzedniej = "G4"; break;
    case 168: numer_alternatywy_poprzedniej = "G5"; break;
    case 169: numer_alternatywy_poprzedniej = "G6"; break;
    case 170: numer_alternatywy_poprzedniej = "G7"; break;
    case 171: numer_alternatywy_poprzedniej = "G8"; break;
    case 172: numer_alternatywy_poprzedniej = "G9"; break;
    case 173: numer_alternatywy_poprzedniej = "H0"; break;
    case 174: numer_alternatywy_poprzedniej = "H1"; break;
    case 175: numer_alternatywy_poprzedniej = "H2"; break;
    case 176: numer_alternatywy_poprzedniej = "H3"; break;
    case 177: numer_alternatywy_poprzedniej = "H4"; break;
    case 178: numer_alternatywy_poprzedniej = "H5"; break;
    case 179: numer_alternatywy_poprzedniej = "H6"; break;
    case 180: numer_alternatywy_poprzedniej = "H7"; break;
    case 181: numer_alternatywy_poprzedniej = "H8"; break;
    case 182: numer_alternatywy_poprzedniej = "H9"; break;
    case 183: numer_alternatywy_poprzedniej = "I0"; break;
    case 184: numer_alternatywy_poprzedniej = "I1"; break;
    case 185: numer_alternatywy_poprzedniej = "I2"; break;
    case 186: numer_alternatywy_poprzedniej = "I3"; break;
    case 187: numer_alternatywy_poprzedniej = "I4"; break;
    case 188: numer_alternatywy_poprzedniej = "I5"; break;
    case 189: numer_alternatywy_poprzedniej = "I6"; break;
    case 190: numer_alternatywy_poprzedniej = "I7"; break;
    case 191: numer_alternatywy_poprzedniej = "I8"; break;
    case 192: numer_alternatywy_poprzedniej = "I9"; break;
    case 193: numer_alternatywy_poprzedniej = "J0"; break;
    case 194: numer_alternatywy_poprzedniej = "J1"; break;
    case 195: numer_alternatywy_poprzedniej = "J2"; break;
    case 196: numer_alternatywy_poprzedniej = "J3"; break;
    case 197: numer_alternatywy_poprzedniej = "J4"; break;
    case 198: numer_alternatywy_poprzedniej = "J5"; break;
    case 199: numer_alternatywy_poprzedniej = "J6"; break;
    case 200: numer_alternatywy_poprzedniej = "J7"; break;
    case 201: numer_alternatywy_poprzedniej = "J8"; break;
    case 202: numer_alternatywy_poprzedniej = "J9"; break;
    case 203: numer_alternatywy_poprzedniej = "K0"; break;
    case 204: numer_alternatywy_poprzedniej = "K1"; break;
    case 205: numer_alternatywy_poprzedniej = "K2"; break;
    case 206: numer_alternatywy_poprzedniej = "K3"; break;
    case 207: numer_alternatywy_poprzedniej = "K4"; break;
    case 208: numer_alternatywy_poprzedniej = "K5"; break;
    case 209: numer_alternatywy_poprzedniej = "K6"; break;
    case 210: numer_alternatywy_poprzedniej = "K7"; break;
    case 211: numer_alternatywy_poprzedniej = "K8"; break;
    case 212: numer_alternatywy_poprzedniej = "K9"; break;
    case 213: numer_alternatywy_poprzedniej = "L0"; break;
    case 214: numer_alternatywy_poprzedniej = "L1"; break;
    case 215: numer_alternatywy_poprzedniej = "L2"; break;
    case 216: numer_alternatywy_poprzedniej = "L3"; break;
    case 217: numer_alternatywy_poprzedniej = "L4"; break;
    case 218: numer_alternatywy_poprzedniej = "L5"; break;
    case 219: numer_alternatywy_poprzedniej = "L6"; break;
    case 220: numer_alternatywy_poprzedniej = "L7"; break;
    case 221: numer_alternatywy_poprzedniej = "L8"; break;
    case 222: numer_alternatywy_poprzedniej = "L9"; break;
    case 223: numer_alternatywy_poprzedniej = "M0"; break;
    case 224: numer_alternatywy_poprzedniej = "M1"; break;
    case 225: numer_alternatywy_poprzedniej = "M2"; break;
    case 226: numer_alternatywy_poprzedniej = "M3"; break;
    case 227: numer_alternatywy_poprzedniej = "M4"; break;
    case 228: numer_alternatywy_poprzedniej = "M5"; break;
    case 229: numer_alternatywy_poprzedniej = "M6"; break;
    case 230: numer_alternatywy_poprzedniej = "M7"; break;
    case 231: numer_alternatywy_poprzedniej = "M8"; break;
    case 232: numer_alternatywy_poprzedniej = "M9"; break;
    case 233: numer_alternatywy_poprzedniej = "N0"; break;
    case 234: numer_alternatywy_poprzedniej = "N1"; break;
    case 235: numer_alternatywy_poprzedniej = "N2"; break;
    case 236: numer_alternatywy_poprzedniej = "N3"; break;
    case 237: numer_alternatywy_poprzedniej = "N4"; break;
    case 238: numer_alternatywy_poprzedniej = "N5"; break;
    case 239: numer_alternatywy_poprzedniej = "N6"; break;
    case 240: numer_alternatywy_poprzedniej = "N7"; break;
    case 241: numer_alternatywy_poprzedniej = "N8"; break;
    case 242: numer_alternatywy_poprzedniej = "N9"; break;
    case 243: numer_alternatywy_poprzedniej = "O0"; break;
    case 244: numer_alternatywy_poprzedniej = "O1"; break;
    case 245: numer_alternatywy_poprzedniej = "O2"; break;
    case 246: numer_alternatywy_poprzedniej = "O3"; break;
    case 247: numer_alternatywy_poprzedniej = "O4"; break;
    case 248: numer_alternatywy_poprzedniej = "O5"; break;
    case 249: numer_alternatywy_poprzedniej = "O6"; break;
    case 250: numer_alternatywy_poprzedniej = "O7"; break;
    case 251: numer_alternatywy_poprzedniej = "O8"; break;
    case 252: numer_alternatywy_poprzedniej = "O9"; break;
    case 253: numer_alternatywy_poprzedniej = "P0"; break;
    case 254: numer_alternatywy_poprzedniej = "P1"; break;
    case 255: numer_alternatywy_poprzedniej = "P2"; break;
    case 256: numer_alternatywy_poprzedniej = "P3"; break;
    case 257: numer_alternatywy_poprzedniej = "P4"; break;
    case 258: numer_alternatywy_poprzedniej = "P5"; break;
    case 259: numer_alternatywy_poprzedniej = "P6"; break;
    case 260: numer_alternatywy_poprzedniej = "P7"; break;
    case 261: numer_alternatywy_poprzedniej = "P8"; break;
    case 262: numer_alternatywy_poprzedniej = "P9"; break;
    case 263: numer_alternatywy_poprzedniej = "R0"; break;
    case 264: numer_alternatywy_poprzedniej = "R1"; break;
    case 265: numer_alternatywy_poprzedniej = "R2"; break;
    case 266: numer_alternatywy_poprzedniej = "R3"; break;
    case 267: numer_alternatywy_poprzedniej = "R4"; break;
    case 268: numer_alternatywy_poprzedniej = "R5"; break;
    case 269: numer_alternatywy_poprzedniej = "R6"; break;
    case 270: numer_alternatywy_poprzedniej = "R7"; break;
    case 271: numer_alternatywy_poprzedniej = "R8"; break;
    case 272: numer_alternatywy_poprzedniej = "R9"; break;
    case 273: numer_alternatywy_poprzedniej = "S0"; break;
    case 274: numer_alternatywy_poprzedniej = "S1"; break;
    case 275: numer_alternatywy_poprzedniej = "S2"; break;
    case 276: numer_alternatywy_poprzedniej = "S3"; break;
    case 277: numer_alternatywy_poprzedniej = "S4"; break;
    case 278: numer_alternatywy_poprzedniej = "S5"; break;
    case 279: numer_alternatywy_poprzedniej = "S6"; break;
    case 280: numer_alternatywy_poprzedniej = "S7"; break;
    case 281: numer_alternatywy_poprzedniej = "S8"; break;
    case 282: numer_alternatywy_poprzedniej = "S9"; break;
    case 283: numer_alternatywy_poprzedniej = "T0"; break;
    case 284: numer_alternatywy_poprzedniej = "T1"; break;
    case 285: numer_alternatywy_poprzedniej = "T2"; break;
    case 286: numer_alternatywy_poprzedniej = "T3"; break;
    case 287: numer_alternatywy_poprzedniej = "T4"; break;
    case 288: numer_alternatywy_poprzedniej = "T5"; break;
    case 289: numer_alternatywy_poprzedniej = "T6"; break;
    case 290: numer_alternatywy_poprzedniej = "T7"; break;
    case 291: numer_alternatywy_poprzedniej = "T8"; break;
    case 292: numer_alternatywy_poprzedniej = "T9"; break;
    case 293: numer_alternatywy_poprzedniej = "U0"; break;
    case 294: numer_alternatywy_poprzedniej = "U1"; break;
    case 295: numer_alternatywy_poprzedniej = "U2"; break;
    case 296: numer_alternatywy_poprzedniej = "U3"; break;
    case 297: numer_alternatywy_poprzedniej = "U4"; break;
    case 298: numer_alternatywy_poprzedniej = "U5"; break;
    case 299: numer_alternatywy_poprzedniej = "U6"; break;
    case 300: numer_alternatywy_poprzedniej = "U7"; break;
    case 301: numer_alternatywy_poprzedniej = "1"; break;
	}

    switch( paczka )
    {
    case 1: nazwa_paczki = "Paczka 1SZT"; break;
    case 2: nazwa_paczki = "Paczka 2SZT"; break;
    case 3: nazwa_paczki = "Paczka 3SZT"; break;
    case 4: nazwa_paczki = "Paczka 3SZT+1SZT"; break;
    case 5: nazwa_paczki = "Paczka 3SZT+2SZT"; break;
    case 6: nazwa_paczki = "Paczka 2x3SZT"; break;
    case 7: nazwa_paczki = "Paczka 2x3SZT+1SZT"; break;
    case 8: nazwa_paczki = "Paczka 2x3SZT+2SZT"; break;
    case 9: nazwa_paczki = "Paczka 3x3SZT"; break;
    case 10: nazwa_paczki = "Paczka 3x3SZT+1SZT"; break;
    case 11: nazwa_paczki = "Paczka 3x3SZT+2SZT"; break;
    case 12: nazwa_paczki = "Paczka 4x3SZT"; break;
    case 13: nazwa_paczki = "Paczka 4x3SZT+1SZT"; break;
    case 14: nazwa_paczki = "Paczka 4x3SZT+2SZT"; break;
    case 15: nazwa_paczki = "Paczka 5x3SZT"; break;
    case 16: nazwa_paczki = "Paczka 5x3SZT+1SZT"; break;
    case 17: nazwa_paczki = "Paczka 5x3SZT+2SZT"; break;
    case 18: nazwa_paczki = "Paczka 6x3SZT"; break;
    case 19: nazwa_paczki = "Paczka 6x3SZT+1SZT"; break;
    case 20: nazwa_paczki = "Paczka 6x3SZT+2SZT"; break;
    case 21: nazwa_paczki = "Paczka 7x3SZT"; break;
    case 22: nazwa_paczki = "Paczka 7x3SZT+1SZT"; break;
    case 23: nazwa_paczki = "Paczka 7x3SZT+2SZT"; break;
    case 24: nazwa_paczki = "Paczka 8x3SZT"; break;
    case 25: nazwa_paczki = "Paczka 8x3SZT+1SZT"; break;
    case 26: nazwa_paczki = "Paczka 8x3SZT+2SZT"; break;
    case 27: nazwa_paczki = "Paczka 9x3SZT"; break;
    case 28: nazwa_paczki = "Paczka 9x3SZT+1SZT"; break;
    case 29: nazwa_paczki = "Paczka 9x3SZT+2SZT"; break;
    case 30: nazwa_paczki = "Paczka 10x3SZT"; break;
    case 31: nazwa_paczki = "Paczka 10x3SZT+1SZT"; break;
    case 32: nazwa_paczki = "Paczka 10x3SZT+2SZT"; break;
    case 33: nazwa_paczki = "Paczka 11x3SZT"; break;
    case 34: nazwa_paczki = "Paczka 11x3SZT+1SZT"; break;
    case 35: nazwa_paczki = "Paczka 11x3SZT+2SZT"; break;
    case 36: nazwa_paczki = "Paczka 12x3SZT"; break;
    case 37: nazwa_paczki = "Paczka 12x3SZT+1SZT"; break;
    case 38: nazwa_paczki = "Paczka 12x3SZT+2SZT"; break;
    case 39: nazwa_paczki = "Paczka 13x3SZT"; break;
    case 40: nazwa_paczki = "Paczka 13x3SZT+1SZT"; break;
    case 41: nazwa_paczki = "Paczka 13x3SZT+2SZT"; break;
    case 42: nazwa_paczki = "Paczka 14x3SZT"; break;
    case 43: nazwa_paczki = "Paczka 14x3SZT+1SZT"; break;
    case 44: nazwa_paczki = "Paczka 14x3SZT+2SZT"; break;
    case 45: nazwa_paczki = "Paczka 15x3SZT"; break;
    case 46: nazwa_paczki = "Paczka 15x3SZT+1SZT"; break;
    case 47: nazwa_paczki = "Paczka 15x3SZT+2SZT"; break;
    case 48: nazwa_paczki = "Paczka 16x3SZT"; break;
    case 49: nazwa_paczki = "Paczka 16x3SZT+1SZT"; break;
    case 50: nazwa_paczki = "Paczka 16x3SZT+2SZT"; break;
    case 51: nazwa_paczki = "Paczka 17x3SZT"; break;
    case 52: nazwa_paczki = "Paczka 17x3SZT+1SZT"; break;
    case 53: nazwa_paczki = "Paczka 17x3SZT+2SZT"; break;
    case 54: nazwa_paczki = "Paczka 18x3SZT"; break;
    case 55: nazwa_paczki = "Paczka 18x3SZT+1SZT"; break;
    case 56: nazwa_paczki = "Paczka 18x3SZT+2SZT"; break;
    case 57: nazwa_paczki = "Paczka 19x3SZT"; break;
    case 58: nazwa_paczki = "Paczka 19x3SZT+1SZT"; break;
    case 59: nazwa_paczki = "Paczka 19x3SZT+2SZT"; break;
    case 60: nazwa_paczki = "Paczka 20x3SZT"; break;
    case 61: nazwa_paczki = "Paczka 20x3SZT+1SZT"; break;
    case 62: nazwa_paczki = "Paczka 20x3SZT+2SZT"; break;
    case 63: nazwa_paczki = "Paczka 21x3SZT"; break;
    case 64: nazwa_paczki = "Paczka 21x3SZT+1SZT"; break;
    case 65: nazwa_paczki = "Paczka 21x3SZT+2SZT"; break;
    case 66: nazwa_paczki = "Paczka 22x3SZT"; break;
    case 67: nazwa_paczki = "Paczka 22x3SZT+1SZT"; break;
    case 68: nazwa_paczki = "Paczka 22x3SZT+2SZT"; break;
    case 69: nazwa_paczki = "Paczka 23x3SZT"; break;
    case 70: nazwa_paczki = "Paczka 23x3SZT+1SZT"; break;
    case 71: nazwa_paczki = "Paczka 23x3SZT+2SZT"; break;
    case 72: nazwa_paczki = "Paczka 24x3SZT"; break;
    case 73: nazwa_paczki = "Paczka 24x3SZT+1SZT"; break;
    case 74: nazwa_paczki = "Paczka 24x3SZT+2SZT"; break;
    case 75: nazwa_paczki = "Paczka 25x3SZT"; break;
    case 76: nazwa_paczki = "Paczka 25x3SZT+1SZT"; break;
    case 77: nazwa_paczki = "Paczka 25x3SZT+2SZT"; break;
    case 78: nazwa_paczki = "Paczka 26x3SZT"; break;
    case 79: nazwa_paczki = "Paczka 26x3SZT+1SZT"; break;
    case 80: nazwa_paczki = "Paczka 26x3SZT+2SZT"; break;
    case 81: nazwa_paczki = "Paczka 27x3SZT"; break;
    case 82: nazwa_paczki = "Paczka 27x3SZT+1SZT"; break;
    case 83: nazwa_paczki = "Paczka 27x3SZT+2SZT"; break;
    case 84: nazwa_paczki = "Paczka 28x3SZT"; break;
    case 85: nazwa_paczki = "Paczka 28x3SZT+1SZT"; break;
    case 86: nazwa_paczki = "Paczka 28x3SZT+2SZT"; break;
    case 87: nazwa_paczki = "Paczka 29x3SZT"; break;
    case 88: nazwa_paczki = "Paczka 29x3SZT+1SZT"; break;
    case 89: nazwa_paczki = "Paczka 29x3SZT+2SZT"; break;
    case 90: nazwa_paczki = "Paczka 30x3SZT"; break;
    case 91: nazwa_paczki = "Paczka 30x3SZT+1SZT"; break;
    case 92: nazwa_paczki = "Paczka 30x3SZT+2SZT"; break;
    case 93: nazwa_paczki = "Paczka 31x3SZT"; break;
    case 94: nazwa_paczki = "Paczka 31x3SZT+1SZT"; break;
    case 95: nazwa_paczki = "Paczka 31x3SZT+2SZT"; break;
    case 96: nazwa_paczki = "Paczka 32x3SZT"; break;
    case 97: nazwa_paczki = "Paczka 32x3SZT+1SZT"; break;
    case 98: nazwa_paczki = "Paczka 32x3SZT+2SZT"; break;
    case 99: nazwa_paczki = "Paczka 33x3SZT"; break;
    case 100: nazwa_paczki = "Paczka 33x3SZT+1SZT"; break;
    case 101: nazwa_paczki = "Paczka 33x3SZT+2SZT"; break;
    case 102: nazwa_paczki = "Paczka 34x3SZT"; break;
    case 103: nazwa_paczki = "Paczka 34x3SZT+1SZT"; break;
    case 104: nazwa_paczki = "Paczka 34x3SZT+2SZT"; break;
    case 105: nazwa_paczki = "Paczka 35x3SZT"; break;
    case 106: nazwa_paczki = "Paczka 35x3SZT+1SZT"; break;
    case 107: nazwa_paczki = "Paczka 35x3SZT+2SZT"; break;
    case 108: nazwa_paczki = "Paczka 36x3SZT"; break;
    case 109: nazwa_paczki = "Paczka 36x3SZT+1SZT"; break;
    case 110: nazwa_paczki = "Paczka 36x3SZT+2SZT"; break;
    case 111: nazwa_paczki = "Paczka 37x3SZT"; break;
    case 112: nazwa_paczki = "Paczka 37x3SZT+1SZT"; break;
    case 113: nazwa_paczki = "Paczka 37x3SZT+2SZT"; break;
    case 114: nazwa_paczki = "Paczka 38x3SZT"; break;
    case 115: nazwa_paczki = "Paczka 38x3SZT+1SZT"; break;
    case 116: nazwa_paczki = "Paczka 38x3SZT+2SZT"; break;
    case 117: nazwa_paczki = "Paczka 39x3SZT"; break;
    case 118: nazwa_paczki = "Paczka 39x3SZT+1SZT"; break;
    case 119: nazwa_paczki = "Paczka 39x3SZT+2SZT"; break;
    case 120: nazwa_paczki = "Paczka 40x3SZT"; break;
    case 121: nazwa_paczki = "Paczka 40x3SZT+1SZT"; break;
    case 122: nazwa_paczki = "Paczka 40x3SZT+2SZT"; break;
    case 123: nazwa_paczki = "Paczka 41x3SZT"; break;
    case 124: nazwa_paczki = "Paczka 41x3SZT+1SZT"; break;
    case 125: nazwa_paczki = "Paczka 41x3SZT+2SZT"; break;
    case 126: nazwa_paczki = "Paczka 42x3SZT"; break;
    case 127: nazwa_paczki = "Paczka 42x3SZT+1SZT"; break;
    case 128: nazwa_paczki = "Paczka 42x3SZT+2SZT"; break;
    case 129: nazwa_paczki = "Paczka 43x3SZT"; break;
    case 130: nazwa_paczki = "Paczka 43x3SZT+1SZT"; break;
    case 131: nazwa_paczki = "Paczka 43x3SZT+2SZT"; break;
    case 132: nazwa_paczki = "Paczka 44x3SZT"; break;
    case 133: nazwa_paczki = "Paczka 44x3SZT+1SZT"; break;
    case 134: nazwa_paczki = "Paczka 44x3SZT+2SZT"; break;
    case 135: nazwa_paczki = "Paczka 45x3SZT"; break;
    case 136: nazwa_paczki = "Paczka 45x3SZT+1SZT"; break;
    case 137: nazwa_paczki = "Paczka 45x3SZT+2SZT"; break;
    case 138: nazwa_paczki = "Paczka 46x3SZT"; break;
    case 139: nazwa_paczki = "Paczka 46x3SZT+1SZT"; break;
    case 140: nazwa_paczki = "Paczka 46x3SZT+2SZT"; break;
    case 141: nazwa_paczki = "Paczka 47x3SZT"; break;
    case 142: nazwa_paczki = "Paczka 47x3SZT+1SZT"; break;
    case 143: nazwa_paczki = "Paczka 47x3SZT+2SZT"; break;
    case 144: nazwa_paczki = "Paczka 48x3SZT"; break;
    case 145: nazwa_paczki = "Paczka 48x3SZT+1SZT"; break;
    case 146: nazwa_paczki = "Paczka 48x3SZT+2SZT"; break;
    case 147: nazwa_paczki = "Paczka 49x3SZT"; break;
    case 148: nazwa_paczki = "Paczka 49x3SZT+1SZT"; break;
    case 149: nazwa_paczki = "Paczka 49x3SZT+2SZT"; break;
    case 150: nazwa_paczki = "Paczka 50x3SZT"; break;
    case 151: nazwa_paczki = "Paczka 50x3SZT+1SZT"; break;
    case 152: nazwa_paczki = "Paczka 50x3SZT+2SZT"; break;
    case 153: nazwa_paczki = "Paczka 51x3SZT"; break;
    case 154: nazwa_paczki = "Paczka 51x3SZT+1SZT"; break;
    case 155: nazwa_paczki = "Paczka 51x3SZT+2SZT"; break;
    case 156: nazwa_paczki = "Paczka 52x3SZT"; break;
    case 157: nazwa_paczki = "Paczka 52x3SZT+1SZT"; break;
    case 158: nazwa_paczki = "Paczka 52x3SZT+2SZT"; break;
    case 159: nazwa_paczki = "Paczka 53x3SZT"; break;
    case 160: nazwa_paczki = "Paczka 53x3SZT+1SZT"; break;
    case 161: nazwa_paczki = "Paczka 53x3SZT+2SZT"; break;
    case 162: nazwa_paczki = "Paczka 54x3SZT"; break;
    case 163: nazwa_paczki = "Paczka 54x3SZT+1SZT"; break;
    case 164: nazwa_paczki = "Paczka 54x3SZT+2SZT"; break;
    case 165: nazwa_paczki = "Paczka 55x3SZT"; break;
    case 166: nazwa_paczki = "Paczka 55x3SZT+1SZT"; break;
    case 167: nazwa_paczki = "Paczka 55x3SZT+2SZT"; break;
    case 168: nazwa_paczki = "Paczka 56x3SZT"; break;
    case 169: nazwa_paczki = "Paczka 56x3SZT+1SZT"; break;
    case 170: nazwa_paczki = "Paczka 56x3SZT+2SZT"; break;
    case 171: nazwa_paczki = "Paczka 57x3SZT"; break;
    case 172: nazwa_paczki = "Paczka 57x3SZT+1SZT"; break;
    case 173: nazwa_paczki = "Paczka 57x3SZT+2SZT"; break;
    case 174: nazwa_paczki = "Paczka 58x3SZT"; break;
    case 175: nazwa_paczki = "Paczka 58x3SZT+1SZT"; break;
    case 176: nazwa_paczki = "Paczka 58x3SZT+2SZT"; break;
    case 177: nazwa_paczki = "Paczka 59x3SZT"; break;
    case 178: nazwa_paczki = "Paczka 59x3SZT+1SZT"; break;
    case 179: nazwa_paczki = "Paczka 59x3SZT+2SZT"; break;
    case 180: nazwa_paczki = "Paczka 60x3SZT"; break;
    case 181: nazwa_paczki = "Paczka 60x3SZT+1SZT"; break;
    case 182: nazwa_paczki = "Paczka 60x3SZT+2SZT"; break;
    case 183: nazwa_paczki = "Paczka 61x3SZT"; break;
    case 184: nazwa_paczki = "Paczka 61x3SZT+1SZT"; break;
    case 185: nazwa_paczki = "Paczka 61x3SZT+2SZT"; break;
    case 186: nazwa_paczki = "Paczka 62x3SZT"; break;
    case 187: nazwa_paczki = "Paczka 62x3SZT+1SZT"; break;
    case 188: nazwa_paczki = "Paczka 62x3SZT+2SZT"; break;
    case 189: nazwa_paczki = "Paczka 63x3SZT"; break;
    case 190: nazwa_paczki = "Paczka 63x3SZT+1SZT"; break;
    case 191: nazwa_paczki = "Paczka 63x3SZT+2SZT"; break;
    case 192: nazwa_paczki = "Paczka 64x3SZT"; break;
    case 193: nazwa_paczki = "Paczka 64x3SZT+1SZT"; break;
    case 194: nazwa_paczki = "Paczka 64x3SZT+2SZT"; break;
    case 195: nazwa_paczki = "Paczka 65x3SZT"; break;
    case 196: nazwa_paczki = "Paczka 65x3SZT+1SZT"; break;
    case 197: nazwa_paczki = "Paczka 65x3SZT+2SZT"; break;
    case 198: nazwa_paczki = "Paczka 66x3SZT"; break;
    case 199: nazwa_paczki = "Paczka 66x3SZT+1SZT"; break;
    case 200: nazwa_paczki = "Paczka 6x3SZT+2SZT"; break;
    case 201: nazwa_paczki = "Paczka 67x3SZT"; break;
    case 202: nazwa_paczki = "Paczka 67x3SZT+1SZT"; break;
    case 203: nazwa_paczki = "Paczka 67x3SZT+2SZT"; break;
    case 204: nazwa_paczki = "Paczka 68x3SZT"; break;
    case 205: nazwa_paczki = "Paczka 68x3SZT+1SZT"; break;
    case 206: nazwa_paczki = "Paczka 68x3SZT+2SZT"; break;
    case 207: nazwa_paczki = "Paczka 69x3SZT"; break;
    case 208: nazwa_paczki = "Paczka 69x3SZT+1SZT"; break;
    case 209: nazwa_paczki = "Paczka 69x3SZT+2SZT"; break;
    case 210: nazwa_paczki = "Paczka 70x3SZT"; break;
    case 211: nazwa_paczki = "Paczka 70x3SZT+1SZT"; break;
    case 212: nazwa_paczki = "Paczka 70x3SZT+2SZT"; break;
    case 213: nazwa_paczki = "Paczka 71x3SZT"; break;
    case 214: nazwa_paczki = "Paczka 71x3SZT+1SZT"; break;
    case 215: nazwa_paczki = "Paczka 71x3SZT+2SZT"; break;
    case 216: nazwa_paczki = "Paczka 72x3SZT"; break;
    case 217: nazwa_paczki = "Paczka 72x3SZT+1SZT"; break;
    case 218: nazwa_paczki = "Paczka 72x3SZT+2SZT"; break;
    case 219: nazwa_paczki = "Paczka 73x3SZT"; break;
    case 220: nazwa_paczki = "Paczka 73x3SZT+1SZT"; break;
    case 221: nazwa_paczki = "Paczka 73x3SZT+2SZT"; break;
    case 222: nazwa_paczki = "Paczka 74x3SZT"; break;
    case 223: nazwa_paczki = "Paczka 74x3SZT+1SZT"; break;
    case 224: nazwa_paczki = "Paczka 74x3SZT+2SZT"; break;
    case 225: nazwa_paczki = "Paczka 75x3SZT"; break;
    case 226: nazwa_paczki = "Paczka 75x3SZT+1SZT"; break;
    case 227: nazwa_paczki = "Paczka 75x3SZT+2SZT"; break;
    case 228: nazwa_paczki = "Paczka 76x3SZT"; break;
    case 229: nazwa_paczki = "Paczka 76x3SZT+1SZT"; break;
    case 230: nazwa_paczki = "Paczka 76x3SZT+2SZT"; break;
    case 231: nazwa_paczki = "Paczka 77x3SZT"; break;
    case 232: nazwa_paczki = "Paczka 77x3SZT+1SZT"; break;
    case 233: nazwa_paczki = "Paczka 77x3SZT+2SZT"; break;
    case 234: nazwa_paczki = "Paczka 78x3SZT"; break;
    case 235: nazwa_paczki = "Paczka 78x3SZT+1SZT"; break;
    case 236: nazwa_paczki = "Paczka 78x3SZT+2SZT"; break;
    case 237: nazwa_paczki = "Paczka 79x3SZT"; break;
    case 238: nazwa_paczki = "Paczka 79x3SZT+1SZT"; break;
    case 239: nazwa_paczki = "Paczka 79x3SZT+2SZT"; break;
    case 240: nazwa_paczki = "Paczka 80x3SZT"; break;
    case 241: nazwa_paczki = "Paczka 80x3SZT+1SZT"; break;
    case 242: nazwa_paczki = "Paczka 80x3SZT+2SZT"; break;
    case 243: nazwa_paczki = "Paczka 81x3SZT"; break;
    case 244: nazwa_paczki = "Paczka 81x3SZT+1SZT"; break;
    case 245: nazwa_paczki = "Paczka 81x3SZT+2SZT"; break;
    case 246: nazwa_paczki = "Paczka 82x3SZT"; break;
    case 247: nazwa_paczki = "Paczka 82x3SZT+1SZT"; break;
    case 248: nazwa_paczki = "Paczka 82x3SZT+2SZT"; break;
    case 249: nazwa_paczki = "Paczka 83x3SZT"; break;
    case 250: nazwa_paczki = "Paczka 83x3SZT+1SZT"; break;
    case 251: nazwa_paczki = "Paczka 83x3SZT+2SZT"; break;
    case 252: nazwa_paczki = "Paczka 84x3SZT"; break;
    case 253: nazwa_paczki = "Paczka 84x3SZT+1SZT"; break;
    case 254: nazwa_paczki = "Paczka 84x3SZT+2SZT"; break;
    case 255: nazwa_paczki = "Paczka 85x3SZT"; break;
    case 256: nazwa_paczki = "Paczka 85x3SZT+1SZT"; break;
    case 257: nazwa_paczki = "Paczka 85x3SZT+2SZT"; break;
    case 258: nazwa_paczki = "Paczka 86x3SZT"; break;
    case 259: nazwa_paczki = "Paczka 86x3SZT+1SZT"; break;
    case 260: nazwa_paczki = "Paczka 86x3SZT+2SZT"; break;
    case 261: nazwa_paczki = "Paczka 87x3SZT"; break;
    case 262: nazwa_paczki = "Paczka 87x3SZT+1SZT"; break;
    case 263: nazwa_paczki = "Paczka 87x3SZT+2SZT"; break;
    case 264: nazwa_paczki = "Paczka 88x3SZT"; break;
    case 265: nazwa_paczki = "Paczka 88x3SZT+1SZT"; break;
    case 266: nazwa_paczki = "Paczka 88x3SZT+2SZT"; break;
    case 267: nazwa_paczki = "Paczka 89x3SZT"; break;
    case 268: nazwa_paczki = "Paczka 89x3SZT+1SZT"; break;
    case 269: nazwa_paczki = "Paczka 89x3SZT+2SZT"; break;
    case 270: nazwa_paczki = "Paczka 90x3SZT"; break;
    case 271: nazwa_paczki = "Paczka 90x3SZT+1SZT"; break;
    case 272: nazwa_paczki = "Paczka 90x3SZT+2SZT"; break;
    case 273: nazwa_paczki = "Paczka 91x3SZT"; break;
    case 274: nazwa_paczki = "Paczka 91x3SZT+1SZT"; break;
    case 275: nazwa_paczki = "Paczka 91x3SZT+2SZT"; break;
    case 276: nazwa_paczki = "Paczka 92x3SZT"; break;
    case 277: nazwa_paczki = "Paczka 92x3SZT+1SZT"; break;
    case 278: nazwa_paczki = "Paczka 92x3SZT+2SZT"; break;
    case 279: nazwa_paczki = "Paczka 93x3SZT"; break;
    case 280: nazwa_paczki = "Paczka 93x3SZT+1SZT"; break;
    case 281: nazwa_paczki = "Paczka 93x3SZT+2SZT"; break;
    case 282: nazwa_paczki = "Paczka 94x3SZT"; break;
    case 283: nazwa_paczki = "Paczka 94x3SZT+1SZT"; break;
    case 284: nazwa_paczki = "Paczka 94x3SZT+2SZT"; break;
    case 285: nazwa_paczki = "Paczka 95x3SZT"; break;
    case 286: nazwa_paczki = "Paczka 95x3SZT+1SZT"; break;
    case 287: nazwa_paczki = "Paczka 95x3SZT+2SZT"; break;
    case 288: nazwa_paczki = "Paczka 96x3SZT"; break;
    case 289: nazwa_paczki = "Paczka 96x3SZT+1SZT"; break;
    case 290: nazwa_paczki = "Paczka 96x3SZT+2SZT"; break;
    case 291: nazwa_paczki = "Paczka 97x3SZT"; break;
    case 292: nazwa_paczki = "Paczka 97x3SZT+1SZT"; break;
    case 293: nazwa_paczki = "Paczka 97x3SZT+2SZT"; break;
    case 294: nazwa_paczki = "Paczka 98x3SZT"; break;
    case 295: nazwa_paczki = "Paczka 98x3SZT+1SZT"; break;
    case 296: nazwa_paczki = "Paczka 98x3SZT+2SZT"; break;
    case 297: nazwa_paczki = "Paczka 99x3SZT"; break;
    case 298: nazwa_paczki = "Paczka 99x3SZT+1SZT"; break;
    case 299: nazwa_paczki = "Paczka 99x3SZT+2SZT"; break;
    case 300: nazwa_paczki = "Paczka 100x3SZT"; break;
    case 301: nazwa_paczki = "Paczka 301 do 9999"; break;
	}	

    switch( alternatywa )
    {
    case 4: specyfikacja_liczba_paczek = "1"; break;
    case 5: specyfikacja_liczba_paczek = "1"; break;
    case 6: specyfikacja_liczba_paczek = "2"; break;
    case 7: specyfikacja_liczba_paczek = "2"; break;
    case 8: specyfikacja_liczba_paczek = "2"; break;
    case 9: specyfikacja_liczba_paczek = "3"; break;
    case 10: specyfikacja_liczba_paczek = "3"; break;
    case 11: specyfikacja_liczba_paczek = "3"; break;
    case 12: specyfikacja_liczba_paczek = "4"; break;
    case 13: specyfikacja_liczba_paczek = "4"; break;
    case 14: specyfikacja_liczba_paczek = "4"; break;
    case 15: specyfikacja_liczba_paczek = "5"; break;
    case 16: specyfikacja_liczba_paczek = "5"; break;
    case 17: specyfikacja_liczba_paczek = "5"; break;
    case 18: specyfikacja_liczba_paczek = "6"; break;
    case 19: specyfikacja_liczba_paczek = "6"; break;
    case 20: specyfikacja_liczba_paczek = "6"; break;
    case 21: specyfikacja_liczba_paczek = "7"; break;
    case 22: specyfikacja_liczba_paczek = "7"; break;
    case 23: specyfikacja_liczba_paczek = "7"; break;
    case 24: specyfikacja_liczba_paczek = "8"; break;
    case 25: specyfikacja_liczba_paczek = "8"; break;
    case 26: specyfikacja_liczba_paczek = "8"; break;
    case 27: specyfikacja_liczba_paczek = "9"; break;
    case 28: specyfikacja_liczba_paczek = "9"; break;
    case 29: specyfikacja_liczba_paczek = "9"; break;
    case 30: specyfikacja_liczba_paczek = "10"; break;
    case 31: specyfikacja_liczba_paczek = "10"; break;
    case 32: specyfikacja_liczba_paczek = "10"; break;
    case 33: specyfikacja_liczba_paczek = "11"; break;
    case 34: specyfikacja_liczba_paczek = "11"; break;
    case 35: specyfikacja_liczba_paczek = "11"; break;
    case 36: specyfikacja_liczba_paczek = "12"; break;
    case 37: specyfikacja_liczba_paczek = "12"; break;
    case 38: specyfikacja_liczba_paczek = "12"; break;
    case 39: specyfikacja_liczba_paczek = "13"; break;
    case 40: specyfikacja_liczba_paczek = "13"; break;
    case 41: specyfikacja_liczba_paczek = "13"; break;
    case 42: specyfikacja_liczba_paczek = "14"; break;
    case 43: specyfikacja_liczba_paczek = "14"; break;
    case 44: specyfikacja_liczba_paczek = "14"; break;
    case 45: specyfikacja_liczba_paczek = "15"; break;
    case 46: specyfikacja_liczba_paczek = "15"; break;
    case 47: specyfikacja_liczba_paczek = "15"; break;
    case 48: specyfikacja_liczba_paczek = "16"; break;
    case 49: specyfikacja_liczba_paczek = "16"; break;
    case 50: specyfikacja_liczba_paczek = "16"; break;
    case 51: specyfikacja_liczba_paczek = "17"; break;
    case 52: specyfikacja_liczba_paczek = "17"; break;
    case 53: specyfikacja_liczba_paczek = "17"; break;
    case 54: specyfikacja_liczba_paczek = "18"; break;
    case 55: specyfikacja_liczba_paczek = "18"; break;
    case 56: specyfikacja_liczba_paczek = "18"; break;
    case 57: specyfikacja_liczba_paczek = "19"; break;
    case 58: specyfikacja_liczba_paczek = "19"; break;
    case 59: specyfikacja_liczba_paczek = "19"; break;
    case 60: specyfikacja_liczba_paczek = "20"; break;
    case 61: specyfikacja_liczba_paczek = "20"; break;
    case 62: specyfikacja_liczba_paczek = "20"; break;
    case 63: specyfikacja_liczba_paczek = "21"; break;
    case 64: specyfikacja_liczba_paczek = "21"; break;
    case 65: specyfikacja_liczba_paczek = "21"; break;
    case 66: specyfikacja_liczba_paczek = "22"; break;
    case 67: specyfikacja_liczba_paczek = "22"; break;
    case 68: specyfikacja_liczba_paczek = "22"; break;
    case 69: specyfikacja_liczba_paczek = "23"; break;
    case 70: specyfikacja_liczba_paczek = "23"; break;
    case 71: specyfikacja_liczba_paczek = "23"; break;
    case 72: specyfikacja_liczba_paczek = "24"; break;
    case 73: specyfikacja_liczba_paczek = "24"; break;
    case 74: specyfikacja_liczba_paczek = "24"; break;
    case 75: specyfikacja_liczba_paczek = "25"; break;
    case 76: specyfikacja_liczba_paczek = "25"; break;
    case 77: specyfikacja_liczba_paczek = "25"; break;
    case 78: specyfikacja_liczba_paczek = "26"; break;
    case 79: specyfikacja_liczba_paczek = "26"; break;
    case 80: specyfikacja_liczba_paczek = "26"; break;
    case 81: specyfikacja_liczba_paczek = "27"; break;
    case 82: specyfikacja_liczba_paczek = "27"; break;
    case 83: specyfikacja_liczba_paczek = "27"; break;
    case 84: specyfikacja_liczba_paczek = "28"; break;
    case 85: specyfikacja_liczba_paczek = "28"; break;
    case 86: specyfikacja_liczba_paczek = "28"; break;
    case 87: specyfikacja_liczba_paczek = "29"; break;
    case 88: specyfikacja_liczba_paczek = "29"; break;
    case 89: specyfikacja_liczba_paczek = "29"; break;
    case 90: specyfikacja_liczba_paczek = "30"; break;
    case 91: specyfikacja_liczba_paczek = "30"; break;
    case 92: specyfikacja_liczba_paczek = "30"; break;
    case 93: specyfikacja_liczba_paczek = "31"; break;
    case 94: specyfikacja_liczba_paczek = "31"; break;
    case 95: specyfikacja_liczba_paczek = "31"; break;
    case 96: specyfikacja_liczba_paczek = "32"; break;
    case 97: specyfikacja_liczba_paczek = "32"; break;
    case 98: specyfikacja_liczba_paczek = "32"; break;
    case 99: specyfikacja_liczba_paczek = "33"; break;
    case 100: specyfikacja_liczba_paczek = "33"; break;
    case 101: specyfikacja_liczba_paczek = "33"; break;
    case 102: specyfikacja_liczba_paczek = "34"; break;
    case 103: specyfikacja_liczba_paczek = "34"; break;
    case 104: specyfikacja_liczba_paczek = "34"; break;
    case 105: specyfikacja_liczba_paczek = "35"; break;
    case 106: specyfikacja_liczba_paczek = "35"; break;
    case 107: specyfikacja_liczba_paczek = "35"; break;
    case 108: specyfikacja_liczba_paczek = "36"; break;
    case 109: specyfikacja_liczba_paczek = "36"; break;
    case 110: specyfikacja_liczba_paczek = "36"; break;
    case 111: specyfikacja_liczba_paczek = "37"; break;
    case 112: specyfikacja_liczba_paczek = "37"; break;
    case 113: specyfikacja_liczba_paczek = "37"; break;
    case 114: specyfikacja_liczba_paczek = "38"; break;
    case 115: specyfikacja_liczba_paczek = "38"; break;
    case 116: specyfikacja_liczba_paczek = "38"; break;
    case 117: specyfikacja_liczba_paczek = "39"; break;
    case 118: specyfikacja_liczba_paczek = "39"; break;
    case 119: specyfikacja_liczba_paczek = "39"; break;
    case 120: specyfikacja_liczba_paczek = "40"; break;
    case 121: specyfikacja_liczba_paczek = "40"; break;
    case 122: specyfikacja_liczba_paczek = "40"; break;
    case 123: specyfikacja_liczba_paczek = "41"; break;
    case 124: specyfikacja_liczba_paczek = "41"; break;
    case 125: specyfikacja_liczba_paczek = "41"; break;
    case 126: specyfikacja_liczba_paczek = "42"; break;
    case 127: specyfikacja_liczba_paczek = "42"; break;
    case 128: specyfikacja_liczba_paczek = "42"; break;
    case 129: specyfikacja_liczba_paczek = "43"; break;
    case 130: specyfikacja_liczba_paczek = "43"; break;
    case 131: specyfikacja_liczba_paczek = "43"; break;
    case 132: specyfikacja_liczba_paczek = "44"; break;
    case 133: specyfikacja_liczba_paczek = "44"; break;
    case 134: specyfikacja_liczba_paczek = "44"; break;
    case 135: specyfikacja_liczba_paczek = "45"; break;
    case 136: specyfikacja_liczba_paczek = "45"; break;
    case 137: specyfikacja_liczba_paczek = "45"; break;
    case 138: specyfikacja_liczba_paczek = "46"; break;
    case 139: specyfikacja_liczba_paczek = "46"; break;
    case 140: specyfikacja_liczba_paczek = "46"; break;
    case 141: specyfikacja_liczba_paczek = "47"; break;
    case 142: specyfikacja_liczba_paczek = "47"; break;
    case 143: specyfikacja_liczba_paczek = "47"; break;
    case 144: specyfikacja_liczba_paczek = "48"; break;
    case 145: specyfikacja_liczba_paczek = "48"; break;
    case 146: specyfikacja_liczba_paczek = "48"; break;
    case 147: specyfikacja_liczba_paczek = "49"; break;
    case 148: specyfikacja_liczba_paczek = "49"; break;
    case 149: specyfikacja_liczba_paczek = "49"; break;
    case 150: specyfikacja_liczba_paczek = "50"; break;
    case 151: specyfikacja_liczba_paczek = "50"; break;
    case 152: specyfikacja_liczba_paczek = "50"; break;
    case 153: specyfikacja_liczba_paczek = "51"; break;
    case 154: specyfikacja_liczba_paczek = "51"; break;
    case 155: specyfikacja_liczba_paczek = "51"; break;
    case 156: specyfikacja_liczba_paczek = "52"; break;
    case 157: specyfikacja_liczba_paczek = "52"; break;
    case 158: specyfikacja_liczba_paczek = "52"; break;
    case 159: specyfikacja_liczba_paczek = "53"; break;
    case 160: specyfikacja_liczba_paczek = "53"; break;
    case 161: specyfikacja_liczba_paczek = "53"; break;
    case 162: specyfikacja_liczba_paczek = "54"; break;
    case 163: specyfikacja_liczba_paczek = "54"; break;
    case 164: specyfikacja_liczba_paczek = "54"; break;
    case 165: specyfikacja_liczba_paczek = "55"; break;
    case 166: specyfikacja_liczba_paczek = "55"; break;
    case 167: specyfikacja_liczba_paczek = "55"; break;
    case 168: specyfikacja_liczba_paczek = "56"; break;
    case 169: specyfikacja_liczba_paczek = "56"; break;
    case 170: specyfikacja_liczba_paczek = "56"; break;
    case 171: specyfikacja_liczba_paczek = "57"; break;
    case 172: specyfikacja_liczba_paczek = "57"; break;
    case 173: specyfikacja_liczba_paczek = "57"; break;
    case 174: specyfikacja_liczba_paczek = "58"; break;
    case 175: specyfikacja_liczba_paczek = "58"; break;
    case 176: specyfikacja_liczba_paczek = "58"; break;
    case 177: specyfikacja_liczba_paczek = "59"; break;
    case 178: specyfikacja_liczba_paczek = "59"; break;
    case 179: specyfikacja_liczba_paczek = "59"; break;
    case 180: specyfikacja_liczba_paczek = "60"; break;
    case 181: specyfikacja_liczba_paczek = "60"; break;
    case 182: specyfikacja_liczba_paczek = "60"; break;
    case 183: specyfikacja_liczba_paczek = "61"; break;
    case 184: specyfikacja_liczba_paczek = "61"; break;
    case 185: specyfikacja_liczba_paczek = "61"; break;
    case 186: specyfikacja_liczba_paczek = "62"; break;
    case 187: specyfikacja_liczba_paczek = "62"; break;
    case 188: specyfikacja_liczba_paczek = "62"; break;
    case 189: specyfikacja_liczba_paczek = "63"; break;
    case 190: specyfikacja_liczba_paczek = "63"; break;
    case 191: specyfikacja_liczba_paczek = "63"; break;
    case 192: specyfikacja_liczba_paczek = "64"; break;
    case 193: specyfikacja_liczba_paczek = "64"; break;
    case 194: specyfikacja_liczba_paczek = "64"; break;
    case 195: specyfikacja_liczba_paczek = "65"; break;
    case 196: specyfikacja_liczba_paczek = "65"; break;
    case 197: specyfikacja_liczba_paczek = "65"; break;
    case 198: specyfikacja_liczba_paczek = "66"; break;
    case 199: specyfikacja_liczba_paczek = "66"; break;
    case 200: specyfikacja_liczba_paczek = "66"; break;
    case 201: specyfikacja_liczba_paczek = "67"; break;
    case 202: specyfikacja_liczba_paczek = "67"; break;
    case 203: specyfikacja_liczba_paczek = "67"; break;
    case 204: specyfikacja_liczba_paczek = "68"; break;
    case 205: specyfikacja_liczba_paczek = "68"; break;
    case 206: specyfikacja_liczba_paczek = "68"; break;
    case 207: specyfikacja_liczba_paczek = "69"; break;
    case 208: specyfikacja_liczba_paczek = "69"; break;
    case 209: specyfikacja_liczba_paczek = "69"; break;
    case 210: specyfikacja_liczba_paczek = "70"; break;
    case 211: specyfikacja_liczba_paczek = "70"; break;
    case 212: specyfikacja_liczba_paczek = "70"; break;
    case 213: specyfikacja_liczba_paczek = "71"; break;
    case 214: specyfikacja_liczba_paczek = "71"; break;
    case 215: specyfikacja_liczba_paczek = "71"; break;
    case 216: specyfikacja_liczba_paczek = "72"; break;
    case 217: specyfikacja_liczba_paczek = "72"; break;
    case 218: specyfikacja_liczba_paczek = "72"; break;
    case 219: specyfikacja_liczba_paczek = "73"; break;
    case 220: specyfikacja_liczba_paczek = "73"; break;
    case 221: specyfikacja_liczba_paczek = "73"; break;
    case 222: specyfikacja_liczba_paczek = "74"; break;
    case 223: specyfikacja_liczba_paczek = "74"; break;
    case 224: specyfikacja_liczba_paczek = "74"; break;
    case 225: specyfikacja_liczba_paczek = "75"; break;
    case 226: specyfikacja_liczba_paczek = "75"; break;
    case 227: specyfikacja_liczba_paczek = "75"; break;
    case 228: specyfikacja_liczba_paczek = "76"; break;
    case 229: specyfikacja_liczba_paczek = "76"; break;
    case 230: specyfikacja_liczba_paczek = "76"; break;
    case 231: specyfikacja_liczba_paczek = "77"; break;
    case 232: specyfikacja_liczba_paczek = "77"; break;
    case 233: specyfikacja_liczba_paczek = "77"; break;
    case 234: specyfikacja_liczba_paczek = "78"; break;
    case 235: specyfikacja_liczba_paczek = "78"; break;
    case 236: specyfikacja_liczba_paczek = "78"; break;
    case 237: specyfikacja_liczba_paczek = "79"; break;
    case 238: specyfikacja_liczba_paczek = "79"; break;
    case 239: specyfikacja_liczba_paczek = "79"; break;
    case 240: specyfikacja_liczba_paczek = "80"; break;
    case 241: specyfikacja_liczba_paczek = "80"; break;
    case 242: specyfikacja_liczba_paczek = "80"; break;
    case 243: specyfikacja_liczba_paczek = "81"; break;
    case 244: specyfikacja_liczba_paczek = "81"; break;
    case 245: specyfikacja_liczba_paczek = "81"; break;
    case 246: specyfikacja_liczba_paczek = "82"; break;
    case 247: specyfikacja_liczba_paczek = "82"; break;
    case 248: specyfikacja_liczba_paczek = "82"; break;
    case 249: specyfikacja_liczba_paczek = "83"; break;
    case 250: specyfikacja_liczba_paczek = "83"; break;
    case 251: specyfikacja_liczba_paczek = "83"; break;
    case 252: specyfikacja_liczba_paczek = "84"; break;
    case 253: specyfikacja_liczba_paczek = "84"; break;
    case 254: specyfikacja_liczba_paczek = "84"; break;
    case 255: specyfikacja_liczba_paczek = "85"; break;
    case 256: specyfikacja_liczba_paczek = "85"; break;
    case 257: specyfikacja_liczba_paczek = "85"; break;
    case 258: specyfikacja_liczba_paczek = "86"; break;
    case 259: specyfikacja_liczba_paczek = "86"; break;
    case 260: specyfikacja_liczba_paczek = "86"; break;
    case 261: specyfikacja_liczba_paczek = "87"; break;
    case 262: specyfikacja_liczba_paczek = "87"; break;
    case 263: specyfikacja_liczba_paczek = "87"; break;
    case 264: specyfikacja_liczba_paczek = "88"; break;
    case 265: specyfikacja_liczba_paczek = "88"; break;
    case 266: specyfikacja_liczba_paczek = "88"; break;
    case 267: specyfikacja_liczba_paczek = "89"; break;
    case 268: specyfikacja_liczba_paczek = "89"; break;
    case 269: specyfikacja_liczba_paczek = "89"; break;
    case 270: specyfikacja_liczba_paczek = "90"; break;
    case 271: specyfikacja_liczba_paczek = "90"; break;
    case 272: specyfikacja_liczba_paczek = "90"; break;
    case 273: specyfikacja_liczba_paczek = "91"; break;
    case 274: specyfikacja_liczba_paczek = "91"; break;
    case 275: specyfikacja_liczba_paczek = "91"; break;
    case 276: specyfikacja_liczba_paczek = "92"; break;
    case 277: specyfikacja_liczba_paczek = "92"; break;
    case 278: specyfikacja_liczba_paczek = "92"; break;
    case 279: specyfikacja_liczba_paczek = "93"; break;
    case 280: specyfikacja_liczba_paczek = "93"; break;
    case 281: specyfikacja_liczba_paczek = "93"; break;
    case 282: specyfikacja_liczba_paczek = "94"; break;
    case 283: specyfikacja_liczba_paczek = "94"; break;
    case 284: specyfikacja_liczba_paczek = "94"; break;
    case 285: specyfikacja_liczba_paczek = "95"; break;
    case 286: specyfikacja_liczba_paczek = "95"; break;
    case 287: specyfikacja_liczba_paczek = "95"; break;
    case 288: specyfikacja_liczba_paczek = "96"; break;
    case 289: specyfikacja_liczba_paczek = "96"; break;
    case 290: specyfikacja_liczba_paczek = "96"; break;
    case 291: specyfikacja_liczba_paczek = "97"; break;
    case 292: specyfikacja_liczba_paczek = "97"; break;
    case 293: specyfikacja_liczba_paczek = "97"; break;
    case 294: specyfikacja_liczba_paczek = "98"; break;
    case 295: specyfikacja_liczba_paczek = "98"; break;
    case 296: specyfikacja_liczba_paczek = "98"; break;
    case 297: specyfikacja_liczba_paczek = "99"; break;
    case 298: specyfikacja_liczba_paczek = "99"; break;
    case 299: specyfikacja_liczba_paczek = "99"; break;
    case 300: specyfikacja_liczba_paczek = "100"; break;
    case 301: specyfikacja_liczba_paczek = "1"; break;
	}

}

if (liczba_sztaplowania == 2)
{
	
    switch( alternatywa_poprzednia )
    {	
    case 1: numer_alternatywy_poprzedniej = "0"; break;
    case 2: numer_alternatywy_poprzedniej = "1"; break;
    case 3: numer_alternatywy_poprzedniej = "2"; break;
    case 4: numer_alternatywy_poprzedniej = "2"; break;
    case 5: numer_alternatywy_poprzedniej = "3"; break;
    case 6: numer_alternatywy_poprzedniej = "4"; break;
    case 7: numer_alternatywy_poprzedniej = "5"; break;
    case 8: numer_alternatywy_poprzedniej = "6"; break;
    case 9: numer_alternatywy_poprzedniej = "7"; break;
    case 10: numer_alternatywy_poprzedniej = "8"; break;
    case 11: numer_alternatywy_poprzedniej = "9"; break;
    case 12: numer_alternatywy_poprzedniej = "10"; break;
    case 13: numer_alternatywy_poprzedniej = "11"; break;
    case 14: numer_alternatywy_poprzedniej = "12"; break;
    case 15: numer_alternatywy_poprzedniej = "13"; break;
    case 16: numer_alternatywy_poprzedniej = "14"; break;
    case 17: numer_alternatywy_poprzedniej = "15"; break;
    case 18: numer_alternatywy_poprzedniej = "16"; break;
    case 19: numer_alternatywy_poprzedniej = "17"; break;
    case 20: numer_alternatywy_poprzedniej = "18"; break;
    case 21: numer_alternatywy_poprzedniej = "19"; break;
    case 22: numer_alternatywy_poprzedniej = "20"; break;
    case 23: numer_alternatywy_poprzedniej = "21"; break;
    case 24: numer_alternatywy_poprzedniej = "22"; break;
    case 25: numer_alternatywy_poprzedniej = "23"; break;
    case 26: numer_alternatywy_poprzedniej = "24"; break;
    case 27: numer_alternatywy_poprzedniej = "25"; break;
    case 28: numer_alternatywy_poprzedniej = "26"; break;
    case 29: numer_alternatywy_poprzedniej = "27"; break;
    case 30: numer_alternatywy_poprzedniej = "28"; break;
    case 31: numer_alternatywy_poprzedniej = "29"; break;
    case 32: numer_alternatywy_poprzedniej = "30"; break;
    case 33: numer_alternatywy_poprzedniej = "31"; break;
    case 34: numer_alternatywy_poprzedniej = "32"; break;
    case 35: numer_alternatywy_poprzedniej = "33"; break;
    case 36: numer_alternatywy_poprzedniej = "34"; break;
    case 37: numer_alternatywy_poprzedniej = "35"; break;
    case 38: numer_alternatywy_poprzedniej = "36"; break;
    case 39: numer_alternatywy_poprzedniej = "37"; break;
    case 40: numer_alternatywy_poprzedniej = "38"; break;
    case 41: numer_alternatywy_poprzedniej = "39"; break;
    case 42: numer_alternatywy_poprzedniej = "40"; break;
    case 43: numer_alternatywy_poprzedniej = "41"; break;
    case 44: numer_alternatywy_poprzedniej = "42"; break;
    case 45: numer_alternatywy_poprzedniej = "43"; break;
    case 46: numer_alternatywy_poprzedniej = "44"; break;
    case 47: numer_alternatywy_poprzedniej = "45"; break;
    case 48: numer_alternatywy_poprzedniej = "46"; break;
    case 49: numer_alternatywy_poprzedniej = "47"; break;
    case 50: numer_alternatywy_poprzedniej = "48"; break;
    case 51: numer_alternatywy_poprzedniej = "49"; break;
    case 52: numer_alternatywy_poprzedniej = "50"; break;
    case 53: numer_alternatywy_poprzedniej = "51"; break;
    case 54: numer_alternatywy_poprzedniej = "52"; break;
    case 55: numer_alternatywy_poprzedniej = "53"; break;
    case 56: numer_alternatywy_poprzedniej = "54"; break;
    case 57: numer_alternatywy_poprzedniej = "55"; break;
    case 58: numer_alternatywy_poprzedniej = "56"; break;
    case 59: numer_alternatywy_poprzedniej = "57"; break;
    case 60: numer_alternatywy_poprzedniej = "58"; break;
    case 61: numer_alternatywy_poprzedniej = "59"; break;
    case 62: numer_alternatywy_poprzedniej = "60"; break;
    case 63: numer_alternatywy_poprzedniej = "61"; break;
    case 64: numer_alternatywy_poprzedniej = "62"; break;
    case 65: numer_alternatywy_poprzedniej = "63"; break;
    case 66: numer_alternatywy_poprzedniej = "64"; break;
    case 67: numer_alternatywy_poprzedniej = "65"; break;
    case 68: numer_alternatywy_poprzedniej = "66"; break;
    case 69: numer_alternatywy_poprzedniej = "67"; break;
    case 70: numer_alternatywy_poprzedniej = "68"; break;
    case 71: numer_alternatywy_poprzedniej = "69"; break;
    case 72: numer_alternatywy_poprzedniej = "70"; break;
    case 73: numer_alternatywy_poprzedniej = "71"; break;
    case 74: numer_alternatywy_poprzedniej = "72"; break;
    case 75: numer_alternatywy_poprzedniej = "73"; break;
    case 76: numer_alternatywy_poprzedniej = "74"; break;
    case 77: numer_alternatywy_poprzedniej = "75"; break;
    case 78: numer_alternatywy_poprzedniej = "76"; break;
    case 79: numer_alternatywy_poprzedniej = "77"; break;
    case 80: numer_alternatywy_poprzedniej = "78"; break;
    case 81: numer_alternatywy_poprzedniej = "79"; break;
    case 82: numer_alternatywy_poprzedniej = "80"; break;
    case 83: numer_alternatywy_poprzedniej = "81"; break;
    case 84: numer_alternatywy_poprzedniej = "82"; break;
    case 85: numer_alternatywy_poprzedniej = "83"; break;
    case 86: numer_alternatywy_poprzedniej = "84"; break;
    case 87: numer_alternatywy_poprzedniej = "85"; break;
    case 88: numer_alternatywy_poprzedniej = "86"; break;
    case 89: numer_alternatywy_poprzedniej = "87"; break;
    case 90: numer_alternatywy_poprzedniej = "88"; break;
    case 91: numer_alternatywy_poprzedniej = "89"; break;
    case 92: numer_alternatywy_poprzedniej = "90"; break;
    case 93: numer_alternatywy_poprzedniej = "91"; break;
    case 94: numer_alternatywy_poprzedniej = "92"; break;
    case 95: numer_alternatywy_poprzedniej = "93"; break;
    case 96: numer_alternatywy_poprzedniej = "94"; break;
    case 97: numer_alternatywy_poprzedniej = "95"; break;
    case 98: numer_alternatywy_poprzedniej = "96"; break;
    case 99: numer_alternatywy_poprzedniej = "97"; break;
    case 100: numer_alternatywy_poprzedniej = "98"; break;
    case 101: numer_alternatywy_poprzedniej = "99"; break;
    case 102: numer_alternatywy_poprzedniej = "A0"; break;
    case 103: numer_alternatywy_poprzedniej = "A1"; break;
    case 104: numer_alternatywy_poprzedniej = "A2"; break;
    case 105: numer_alternatywy_poprzedniej = "A3"; break;
    case 106: numer_alternatywy_poprzedniej = "A4"; break;
    case 107: numer_alternatywy_poprzedniej = "A5"; break;
    case 108: numer_alternatywy_poprzedniej = "A6"; break;
    case 109: numer_alternatywy_poprzedniej = "A7"; break;
    case 110: numer_alternatywy_poprzedniej = "A8"; break;
    case 111: numer_alternatywy_poprzedniej = "A9"; break;
    case 112: numer_alternatywy_poprzedniej = "B0"; break;
    case 113: numer_alternatywy_poprzedniej = "B1"; break;
    case 114: numer_alternatywy_poprzedniej = "B2"; break;
    case 115: numer_alternatywy_poprzedniej = "B3"; break;
    case 116: numer_alternatywy_poprzedniej = "B4"; break;
    case 117: numer_alternatywy_poprzedniej = "B5"; break;
    case 118: numer_alternatywy_poprzedniej = "B6"; break;
    case 119: numer_alternatywy_poprzedniej = "B7"; break;
    case 120: numer_alternatywy_poprzedniej = "B8"; break;
    case 121: numer_alternatywy_poprzedniej = "B9"; break;
    case 122: numer_alternatywy_poprzedniej = "C0"; break;
    case 123: numer_alternatywy_poprzedniej = "C1"; break;
    case 124: numer_alternatywy_poprzedniej = "C2"; break;
    case 125: numer_alternatywy_poprzedniej = "C3"; break;
    case 126: numer_alternatywy_poprzedniej = "C4"; break;
    case 127: numer_alternatywy_poprzedniej = "C5"; break;
    case 128: numer_alternatywy_poprzedniej = "C6"; break;
    case 129: numer_alternatywy_poprzedniej = "C7"; break;
    case 130: numer_alternatywy_poprzedniej = "C8"; break;
    case 131: numer_alternatywy_poprzedniej = "C9"; break;
    case 132: numer_alternatywy_poprzedniej = "D0"; break;
    case 133: numer_alternatywy_poprzedniej = "D1"; break;
    case 134: numer_alternatywy_poprzedniej = "D2"; break;
    case 135: numer_alternatywy_poprzedniej = "D3"; break;
    case 136: numer_alternatywy_poprzedniej = "D4"; break;
    case 137: numer_alternatywy_poprzedniej = "D5"; break;
    case 138: numer_alternatywy_poprzedniej = "D6"; break;
    case 139: numer_alternatywy_poprzedniej = "D7"; break;
    case 140: numer_alternatywy_poprzedniej = "D8"; break;
    case 141: numer_alternatywy_poprzedniej = "D9"; break;
    case 142: numer_alternatywy_poprzedniej = "E0"; break;
    case 143: numer_alternatywy_poprzedniej = "E1"; break;
    case 144: numer_alternatywy_poprzedniej = "E2"; break;
    case 145: numer_alternatywy_poprzedniej = "E3"; break;
    case 146: numer_alternatywy_poprzedniej = "E4"; break;
    case 147: numer_alternatywy_poprzedniej = "E5"; break;
    case 148: numer_alternatywy_poprzedniej = "E6"; break;
    case 149: numer_alternatywy_poprzedniej = "E7"; break;
    case 150: numer_alternatywy_poprzedniej = "E8"; break;
    case 151: numer_alternatywy_poprzedniej = "E9"; break;
    case 152: numer_alternatywy_poprzedniej = "F0"; break;
    case 153: numer_alternatywy_poprzedniej = "F1"; break;
    case 154: numer_alternatywy_poprzedniej = "F2"; break;
    case 155: numer_alternatywy_poprzedniej = "F3"; break;
    case 156: numer_alternatywy_poprzedniej = "F4"; break;
    case 157: numer_alternatywy_poprzedniej = "F5"; break;
    case 158: numer_alternatywy_poprzedniej = "F6"; break;
    case 159: numer_alternatywy_poprzedniej = "F7"; break;
    case 160: numer_alternatywy_poprzedniej = "F8"; break;
    case 161: numer_alternatywy_poprzedniej = "F9"; break;
    case 162: numer_alternatywy_poprzedniej = "G0"; break;
    case 163: numer_alternatywy_poprzedniej = "G1"; break;
    case 164: numer_alternatywy_poprzedniej = "G2"; break;
    case 165: numer_alternatywy_poprzedniej = "G3"; break;
    case 166: numer_alternatywy_poprzedniej = "G4"; break;
    case 167: numer_alternatywy_poprzedniej = "G5"; break;
    case 168: numer_alternatywy_poprzedniej = "G6"; break;
    case 169: numer_alternatywy_poprzedniej = "G7"; break;
    case 170: numer_alternatywy_poprzedniej = "G8"; break;
    case 171: numer_alternatywy_poprzedniej = "G9"; break;
    case 172: numer_alternatywy_poprzedniej = "H0"; break;
    case 173: numer_alternatywy_poprzedniej = "H1"; break;
    case 174: numer_alternatywy_poprzedniej = "H2"; break;
    case 175: numer_alternatywy_poprzedniej = "H3"; break;
    case 176: numer_alternatywy_poprzedniej = "H4"; break;
    case 177: numer_alternatywy_poprzedniej = "H5"; break;
    case 178: numer_alternatywy_poprzedniej = "H6"; break;
    case 179: numer_alternatywy_poprzedniej = "H7"; break;
    case 180: numer_alternatywy_poprzedniej = "H8"; break;
    case 181: numer_alternatywy_poprzedniej = "H9"; break;
    case 182: numer_alternatywy_poprzedniej = "I0"; break;
    case 183: numer_alternatywy_poprzedniej = "I1"; break;
    case 184: numer_alternatywy_poprzedniej = "I2"; break;
    case 185: numer_alternatywy_poprzedniej = "I3"; break;
    case 186: numer_alternatywy_poprzedniej = "I4"; break;
    case 187: numer_alternatywy_poprzedniej = "I5"; break;
    case 188: numer_alternatywy_poprzedniej = "I6"; break;
    case 189: numer_alternatywy_poprzedniej = "I7"; break;
    case 190: numer_alternatywy_poprzedniej = "I8"; break;
    case 191: numer_alternatywy_poprzedniej = "I9"; break;
    case 192: numer_alternatywy_poprzedniej = "J0"; break;
    case 193: numer_alternatywy_poprzedniej = "J1"; break;
    case 194: numer_alternatywy_poprzedniej = "J2"; break;
    case 195: numer_alternatywy_poprzedniej = "J3"; break;
    case 196: numer_alternatywy_poprzedniej = "J4"; break;
    case 197: numer_alternatywy_poprzedniej = "J5"; break;
    case 198: numer_alternatywy_poprzedniej = "J6"; break;
    case 199: numer_alternatywy_poprzedniej = "J7"; break;
    case 200: numer_alternatywy_poprzedniej = "J8"; break;
    case 201: numer_alternatywy_poprzedniej = "J9"; break;
    case 202: numer_alternatywy_poprzedniej = "K0"; break;
    case 203: numer_alternatywy_poprzedniej = "K1"; break;
    case 204: numer_alternatywy_poprzedniej = "K2"; break;
    case 205: numer_alternatywy_poprzedniej = "K3"; break;
    case 206: numer_alternatywy_poprzedniej = "K4"; break;
    case 207: numer_alternatywy_poprzedniej = "K5"; break;
    case 208: numer_alternatywy_poprzedniej = "K6"; break;
    case 209: numer_alternatywy_poprzedniej = "K7"; break;
    case 210: numer_alternatywy_poprzedniej = "K8"; break;
    case 211: numer_alternatywy_poprzedniej = "K9"; break;
    case 212: numer_alternatywy_poprzedniej = "L0"; break;
    case 213: numer_alternatywy_poprzedniej = "L1"; break;
    case 214: numer_alternatywy_poprzedniej = "L2"; break;
    case 215: numer_alternatywy_poprzedniej = "L3"; break;
    case 216: numer_alternatywy_poprzedniej = "L4"; break;
    case 217: numer_alternatywy_poprzedniej = "L5"; break;
    case 218: numer_alternatywy_poprzedniej = "L6"; break;
    case 219: numer_alternatywy_poprzedniej = "L7"; break;
    case 220: numer_alternatywy_poprzedniej = "L8"; break;
    case 221: numer_alternatywy_poprzedniej = "L9"; break;
    case 222: numer_alternatywy_poprzedniej = "M0"; break;
    case 223: numer_alternatywy_poprzedniej = "M1"; break;
    case 224: numer_alternatywy_poprzedniej = "M2"; break;
    case 225: numer_alternatywy_poprzedniej = "M3"; break;
    case 226: numer_alternatywy_poprzedniej = "M4"; break;
    case 227: numer_alternatywy_poprzedniej = "M5"; break;
    case 228: numer_alternatywy_poprzedniej = "M6"; break;
    case 229: numer_alternatywy_poprzedniej = "M7"; break;
    case 230: numer_alternatywy_poprzedniej = "M8"; break;
    case 231: numer_alternatywy_poprzedniej = "M9"; break;
    case 232: numer_alternatywy_poprzedniej = "N0"; break;
    case 233: numer_alternatywy_poprzedniej = "N1"; break;
    case 234: numer_alternatywy_poprzedniej = "N2"; break;
    case 235: numer_alternatywy_poprzedniej = "N3"; break;
    case 236: numer_alternatywy_poprzedniej = "N4"; break;
    case 237: numer_alternatywy_poprzedniej = "N5"; break;
    case 238: numer_alternatywy_poprzedniej = "N6"; break;
    case 239: numer_alternatywy_poprzedniej = "N7"; break;
    case 240: numer_alternatywy_poprzedniej = "N8"; break;
    case 241: numer_alternatywy_poprzedniej = "N9"; break;
    case 242: numer_alternatywy_poprzedniej = "O0"; break;
    case 243: numer_alternatywy_poprzedniej = "O1"; break;
    case 244: numer_alternatywy_poprzedniej = "O2"; break;
    case 245: numer_alternatywy_poprzedniej = "O3"; break;
    case 246: numer_alternatywy_poprzedniej = "O4"; break;
    case 247: numer_alternatywy_poprzedniej = "O5"; break;
    case 248: numer_alternatywy_poprzedniej = "O6"; break;
    case 249: numer_alternatywy_poprzedniej = "O7"; break;
    case 250: numer_alternatywy_poprzedniej = "O8"; break;
    case 251: numer_alternatywy_poprzedniej = "O9"; break;
    case 252: numer_alternatywy_poprzedniej = "P0"; break;
    case 253: numer_alternatywy_poprzedniej = "P1"; break;
    case 254: numer_alternatywy_poprzedniej = "P2"; break;
    case 255: numer_alternatywy_poprzedniej = "P3"; break;
    case 256: numer_alternatywy_poprzedniej = "P4"; break;
    case 257: numer_alternatywy_poprzedniej = "P5"; break;
    case 258: numer_alternatywy_poprzedniej = "P6"; break;
    case 259: numer_alternatywy_poprzedniej = "P7"; break;
    case 260: numer_alternatywy_poprzedniej = "P8"; break;
    case 261: numer_alternatywy_poprzedniej = "P9"; break;
    case 262: numer_alternatywy_poprzedniej = "R0"; break;
    case 263: numer_alternatywy_poprzedniej = "R1"; break;
    case 264: numer_alternatywy_poprzedniej = "R2"; break;
    case 265: numer_alternatywy_poprzedniej = "R3"; break;
    case 266: numer_alternatywy_poprzedniej = "R4"; break;
    case 267: numer_alternatywy_poprzedniej = "R5"; break;
    case 268: numer_alternatywy_poprzedniej = "R6"; break;
    case 269: numer_alternatywy_poprzedniej = "R7"; break;
    case 270: numer_alternatywy_poprzedniej = "R8"; break;
    case 271: numer_alternatywy_poprzedniej = "R9"; break;
    case 272: numer_alternatywy_poprzedniej = "S0"; break;
    case 273: numer_alternatywy_poprzedniej = "S1"; break;
    case 274: numer_alternatywy_poprzedniej = "S2"; break;
    case 275: numer_alternatywy_poprzedniej = "S3"; break;
    case 276: numer_alternatywy_poprzedniej = "S4"; break;
    case 277: numer_alternatywy_poprzedniej = "S5"; break;
    case 278: numer_alternatywy_poprzedniej = "S6"; break;
    case 279: numer_alternatywy_poprzedniej = "S7"; break;
    case 280: numer_alternatywy_poprzedniej = "S8"; break;
    case 281: numer_alternatywy_poprzedniej = "S9"; break;
    case 282: numer_alternatywy_poprzedniej = "T0"; break;
    case 283: numer_alternatywy_poprzedniej = "T1"; break;
    case 284: numer_alternatywy_poprzedniej = "T2"; break;
    case 285: numer_alternatywy_poprzedniej = "T3"; break;
    case 286: numer_alternatywy_poprzedniej = "T4"; break;
    case 287: numer_alternatywy_poprzedniej = "T5"; break;
    case 288: numer_alternatywy_poprzedniej = "T6"; break;
    case 289: numer_alternatywy_poprzedniej = "T7"; break;
    case 290: numer_alternatywy_poprzedniej = "T8"; break;
    case 291: numer_alternatywy_poprzedniej = "T9"; break;
    case 292: numer_alternatywy_poprzedniej = "U0"; break;
    case 293: numer_alternatywy_poprzedniej = "U1"; break;
    case 294: numer_alternatywy_poprzedniej = "U2"; break;
    case 295: numer_alternatywy_poprzedniej = "U3"; break;
    case 296: numer_alternatywy_poprzedniej = "U4"; break;
    case 297: numer_alternatywy_poprzedniej = "U5"; break;
    case 298: numer_alternatywy_poprzedniej = "U6"; break;
    case 299: numer_alternatywy_poprzedniej = "U7"; break;
    case 300: numer_alternatywy_poprzedniej = "U8"; break;
    case 301: numer_alternatywy_poprzedniej = "1"; break;
	}

    switch( paczka )
    {
    case 1: nazwa_paczki = "Paczka 1SZT"; break;
    case 2: nazwa_paczki = "Paczka 2SZT"; break;
    case 3: nazwa_paczki = "Paczka 2SZT+1SZT"; break;
    case 4: nazwa_paczki = "Paczka 2x2SZT"; break;
    case 5: nazwa_paczki = "Paczka 2x2SZT+1SZT"; break;
    case 6: nazwa_paczki = "Paczka 3x2SZT"; break;
    case 7: nazwa_paczki = "Paczka 3x2SZT+1SZT"; break;
    case 8: nazwa_paczki = "Paczka 4x2SZT"; break;
    case 9: nazwa_paczki = "Paczka 4x2SZT+1SZT"; break;
    case 10: nazwa_paczki = "Paczka 5x2SZT"; break;
    case 11: nazwa_paczki = "Paczka 5x2SZT+1SZT"; break;
    case 12: nazwa_paczki = "Paczka 6x2SZT"; break;
    case 13: nazwa_paczki = "Paczka 6x2SZT+1SZT"; break;
    case 14: nazwa_paczki = "Paczka 7x2SZT"; break;
    case 15: nazwa_paczki = "Paczka 7x2SZT+1SZT"; break;
    case 16: nazwa_paczki = "Paczka 8x2SZT"; break;
    case 17: nazwa_paczki = "Paczka 8x2SZT+1SZT"; break;
    case 18: nazwa_paczki = "Paczka 9x2SZT"; break;
    case 19: nazwa_paczki = "Paczka 9x2SZT+1SZT"; break;
    case 20: nazwa_paczki = "Paczka 10x2SZT"; break;
    case 21: nazwa_paczki = "Paczka 10x2SZT+1SZT"; break;
    case 22: nazwa_paczki = "Paczka 11x2SZT"; break;
    case 23: nazwa_paczki = "Paczka 11x2SZT+1SZT"; break;
    case 24: nazwa_paczki = "Paczka 12x2SZT"; break;
    case 25: nazwa_paczki = "Paczka 12x2SZT+1SZT"; break;
    case 26: nazwa_paczki = "Paczka 13x2SZT"; break;
    case 27: nazwa_paczki = "Paczka 13x2SZT+1SZT"; break;
    case 28: nazwa_paczki = "Paczka 14x2SZT"; break;
    case 29: nazwa_paczki = "Paczka 14x2SZT+1SZT"; break;
    case 30: nazwa_paczki = "Paczka 15x2SZT"; break;
    case 31: nazwa_paczki = "Paczka 15x2SZT+1SZT"; break;
    case 32: nazwa_paczki = "Paczka 16x2SZT"; break;
    case 33: nazwa_paczki = "Paczka 16x2SZT+1SZT"; break;
    case 34: nazwa_paczki = "Paczka 17x2SZT"; break;
    case 35: nazwa_paczki = "Paczka 17x2SZT+1SZT"; break;
    case 36: nazwa_paczki = "Paczka 18x2SZT"; break;
    case 37: nazwa_paczki = "Paczka 18x2SZT+1SZT"; break;
    case 38: nazwa_paczki = "Paczka 19x2SZT"; break;
    case 39: nazwa_paczki = "Paczka 19x2SZT+1SZT"; break;
    case 40: nazwa_paczki = "Paczka 20x2SZT"; break;
    case 41: nazwa_paczki = "Paczka 20x2SZT+1SZT"; break;
    case 42: nazwa_paczki = "Paczka 21x2SZT"; break;
    case 43: nazwa_paczki = "Paczka 21x2SZT+1SZT"; break;
    case 44: nazwa_paczki = "Paczka 22x2SZT"; break;
    case 45: nazwa_paczki = "Paczka 22x2SZT+1SZT"; break;
    case 46: nazwa_paczki = "Paczka 23x2SZT"; break;
    case 47: nazwa_paczki = "Paczka 23x2SZT+1SZT"; break;
    case 48: nazwa_paczki = "Paczka 24x2SZT"; break;
    case 49: nazwa_paczki = "Paczka 24x2SZT+1SZT"; break;
    case 50: nazwa_paczki = "Paczka 25x2SZT"; break;
    case 51: nazwa_paczki = "Paczka 25x2SZT+1SZT"; break;
    case 52: nazwa_paczki = "Paczka 26x2SZT"; break;
    case 53: nazwa_paczki = "Paczka 26x2SZT+1SZT"; break;
    case 54: nazwa_paczki = "Paczka 27x2SZT"; break;
    case 55: nazwa_paczki = "Paczka 27x2SZT+1SZT"; break;
    case 56: nazwa_paczki = "Paczka 28x2SZT"; break;
    case 57: nazwa_paczki = "Paczka 28x2SZT+1SZT"; break;
    case 58: nazwa_paczki = "Paczka 29x2SZT"; break;
    case 59: nazwa_paczki = "Paczka 29x2SZT+1SZT"; break;
    case 60: nazwa_paczki = "Paczka 30x2SZT"; break;
    case 61: nazwa_paczki = "Paczka 30x2SZT+1SZT"; break;
    case 62: nazwa_paczki = "Paczka 31x2SZT"; break;
    case 63: nazwa_paczki = "Paczka 31x2SZT+1SZT"; break;
    case 64: nazwa_paczki = "Paczka 32x2SZT"; break;
    case 65: nazwa_paczki = "Paczka 32x2SZT+1SZT"; break;
    case 66: nazwa_paczki = "Paczka 33x2SZT"; break;
    case 67: nazwa_paczki = "Paczka 33x2SZT+1SZT"; break;
    case 68: nazwa_paczki = "Paczka 34x2SZT"; break;
    case 69: nazwa_paczki = "Paczka 34x2SZT+1SZT"; break;
    case 70: nazwa_paczki = "Paczka 35x2SZT"; break;
    case 71: nazwa_paczki = "Paczka 35x2SZT+1SZT"; break;
    case 72: nazwa_paczki = "Paczka 36x2SZT"; break;
    case 73: nazwa_paczki = "Paczka 36x2SZT+1SZT"; break;
    case 74: nazwa_paczki = "Paczka 37x2SZT"; break;
    case 75: nazwa_paczki = "Paczka 37x2SZT+1SZT"; break;
    case 76: nazwa_paczki = "Paczka 38x2SZT"; break;
    case 77: nazwa_paczki = "Paczka 38x2SZT+1SZT"; break;
    case 78: nazwa_paczki = "Paczka 39x2SZT"; break;
    case 79: nazwa_paczki = "Paczka 39x2SZT+1SZT"; break;
    case 80: nazwa_paczki = "Paczka 40x2SZT"; break;
    case 81: nazwa_paczki = "Paczka 40x2SZT+1SZT"; break;
    case 82: nazwa_paczki = "Paczka 41x2SZT"; break;
    case 83: nazwa_paczki = "Paczka 41x2SZT+1SZT"; break;
    case 84: nazwa_paczki = "Paczka 42x2SZT"; break;
    case 85: nazwa_paczki = "Paczka 42x2SZT+1SZT"; break;
    case 86: nazwa_paczki = "Paczka 43x2SZT"; break;
    case 87: nazwa_paczki = "Paczka 43x2SZT+1SZT"; break;
    case 88: nazwa_paczki = "Paczka 44x2SZT"; break;
    case 89: nazwa_paczki = "Paczka 44x2SZT+1SZT"; break;
    case 90: nazwa_paczki = "Paczka 45x2SZT"; break;
    case 91: nazwa_paczki = "Paczka 45x2SZT+1SZT"; break;
    case 92: nazwa_paczki = "Paczka 46x2SZT"; break;
    case 93: nazwa_paczki = "Paczka 46x2SZT+1SZT"; break;
    case 94: nazwa_paczki = "Paczka 47x2SZT"; break;
    case 95: nazwa_paczki = "Paczka 47x2SZT+1SZT"; break;
    case 96: nazwa_paczki = "Paczka 48x2SZT"; break;
    case 97: nazwa_paczki = "Paczka 48x2SZT+1SZT"; break;
    case 98: nazwa_paczki = "Paczka 49x2SZT"; break;
    case 99: nazwa_paczki = "Paczka 49x2SZT+1SZT"; break;
    case 100: nazwa_paczki = "Paczka 50x2SZT"; break;
    case 101: nazwa_paczki = "Paczka 50x2SZT+1SZT"; break;
    case 102: nazwa_paczki = "Paczka 51x2SZT"; break;
    case 103: nazwa_paczki = "Paczka 51x2SZT+1SZT"; break;
    case 104: nazwa_paczki = "Paczka 52x2SZT"; break;
    case 105: nazwa_paczki = "Paczka 52x2SZT+1SZT"; break;
    case 106: nazwa_paczki = "Paczka 53x2SZT"; break;
    case 107: nazwa_paczki = "Paczka 53x2SZT+1SZT"; break;
    case 108: nazwa_paczki = "Paczka 54x2SZT"; break;
    case 109: nazwa_paczki = "Paczka 54x2SZT+1SZT"; break;
    case 110: nazwa_paczki = "Paczka 55x2SZT"; break;
    case 111: nazwa_paczki = "Paczka 55x2SZT+1SZT"; break;
    case 112: nazwa_paczki = "Paczka 56x2SZT"; break;
    case 113: nazwa_paczki = "Paczka 56x2SZT+1SZT"; break;
    case 114: nazwa_paczki = "Paczka 57x2SZT"; break;
    case 115: nazwa_paczki = "Paczka 57x2SZT+1SZT"; break;
    case 116: nazwa_paczki = "Paczka 58x2SZT"; break;
    case 117: nazwa_paczki = "Paczka 58x2SZT+1SZT"; break;
    case 118: nazwa_paczki = "Paczka 59x2SZT"; break;
    case 119: nazwa_paczki = "Paczka 59x2SZT+1SZT"; break;
    case 120: nazwa_paczki = "Paczka 60x2SZT"; break;
    case 121: nazwa_paczki = "Paczka 60x2SZT+1SZT"; break;
    case 122: nazwa_paczki = "Paczka 61x2SZT"; break;
    case 123: nazwa_paczki = "Paczka 61x2SZT+1SZT"; break;
    case 124: nazwa_paczki = "Paczka 62x2SZT"; break;
    case 125: nazwa_paczki = "Paczka 62x2SZT+1SZT"; break;
    case 126: nazwa_paczki = "Paczka 63x2SZT"; break;
    case 127: nazwa_paczki = "Paczka 63x2SZT+1SZT"; break;
    case 128: nazwa_paczki = "Paczka 64x2SZT"; break;
    case 129: nazwa_paczki = "Paczka 64x2SZT+1SZT"; break;
    case 130: nazwa_paczki = "Paczka 65x2SZT"; break;
    case 131: nazwa_paczki = "Paczka 65x2SZT+1SZT"; break;
    case 132: nazwa_paczki = "Paczka 66x2SZT"; break;
    case 133: nazwa_paczki = "Paczka 66x2SZT+1SZT"; break;
    case 134: nazwa_paczki = "Paczka 67x2SZT"; break;
    case 135: nazwa_paczki = "Paczka 67x2SZT+1SZT"; break;
    case 136: nazwa_paczki = "Paczka 68x2SZT"; break;
    case 137: nazwa_paczki = "Paczka 68x2SZT+1SZT"; break;
    case 138: nazwa_paczki = "Paczka 69x2SZT"; break;
    case 139: nazwa_paczki = "Paczka 69x2SZT+1SZT"; break;
    case 140: nazwa_paczki = "Paczka 70x2SZT"; break;
    case 141: nazwa_paczki = "Paczka 70x2SZT+1SZT"; break;
    case 142: nazwa_paczki = "Paczka 71x2SZT"; break;
    case 143: nazwa_paczki = "Paczka 71x2SZT+1SZT"; break;
    case 144: nazwa_paczki = "Paczka 72x2SZT"; break;
    case 145: nazwa_paczki = "Paczka 72x2SZT+1SZT"; break;
    case 146: nazwa_paczki = "Paczka 73x2SZT"; break;
    case 147: nazwa_paczki = "Paczka 73x2SZT+1SZT"; break;
    case 148: nazwa_paczki = "Paczka 74x2SZT"; break;
    case 149: nazwa_paczki = "Paczka 74x2SZT+1SZT"; break;
    case 150: nazwa_paczki = "Paczka 75x2SZT"; break;
    case 151: nazwa_paczki = "Paczka 75x2SZT+1SZT"; break;
    case 152: nazwa_paczki = "Paczka 76x2SZT"; break;
    case 153: nazwa_paczki = "Paczka 76x2SZT+1SZT"; break;
    case 154: nazwa_paczki = "Paczka 77x2SZT"; break;
    case 155: nazwa_paczki = "Paczka 77x2SZT+1SZT"; break;
    case 156: nazwa_paczki = "Paczka 78x2SZT"; break;
    case 157: nazwa_paczki = "Paczka 78x2SZT+1SZT"; break;
    case 158: nazwa_paczki = "Paczka 79x2SZT"; break;
    case 159: nazwa_paczki = "Paczka 79x2SZT+1SZT"; break;
    case 160: nazwa_paczki = "Paczka 80x2SZT"; break;
    case 161: nazwa_paczki = "Paczka 80x2SZT+1SZT"; break;
    case 162: nazwa_paczki = "Paczka 81x2SZT"; break;
    case 163: nazwa_paczki = "Paczka 81x2SZT+1SZT"; break;
    case 164: nazwa_paczki = "Paczka 82x2SZT"; break;
    case 165: nazwa_paczki = "Paczka 82x2SZT+1SZT"; break;
    case 166: nazwa_paczki = "Paczka 83x2SZT"; break;
    case 167: nazwa_paczki = "Paczka 83x2SZT+1SZT"; break;
    case 168: nazwa_paczki = "Paczka 84x2SZT"; break;
    case 169: nazwa_paczki = "Paczka 84x2SZT+1SZT"; break;
    case 170: nazwa_paczki = "Paczka 85x2SZT"; break;
    case 171: nazwa_paczki = "Paczka 85x2SZT+1SZT"; break;
    case 172: nazwa_paczki = "Paczka 86x2SZT"; break;
    case 173: nazwa_paczki = "Paczka 86x2SZT+1SZT"; break;
    case 174: nazwa_paczki = "Paczka 87x2SZT"; break;
    case 175: nazwa_paczki = "Paczka 87x2SZT+1SZT"; break;
    case 176: nazwa_paczki = "Paczka 88x2SZT"; break;
    case 177: nazwa_paczki = "Paczka 88x2SZT+1SZT"; break;
    case 178: nazwa_paczki = "Paczka 89x2SZT"; break;
    case 179: nazwa_paczki = "Paczka 89x2SZT+1SZT"; break;
    case 180: nazwa_paczki = "Paczka 90x2SZT"; break;
    case 181: nazwa_paczki = "Paczka 90x2SZT+1SZT"; break;
    case 182: nazwa_paczki = "Paczka 91x2SZT"; break;
    case 183: nazwa_paczki = "Paczka 91x2SZT+1SZT"; break;
    case 184: nazwa_paczki = "Paczka 92x2SZT"; break;
    case 185: nazwa_paczki = "Paczka 92x2SZT+1SZT"; break;
    case 186: nazwa_paczki = "Paczka 93x2SZT"; break;
    case 187: nazwa_paczki = "Paczka 93x2SZT+1SZT"; break;
    case 188: nazwa_paczki = "Paczka 94x2SZT"; break;
    case 189: nazwa_paczki = "Paczka 94x2SZT+1SZT"; break;
    case 190: nazwa_paczki = "Paczka 95x2SZT"; break;
    case 191: nazwa_paczki = "Paczka 95x2SZT+1SZT"; break;
    case 192: nazwa_paczki = "Paczka 96x2SZT"; break;
    case 193: nazwa_paczki = "Paczka 96x2SZT+1SZT"; break;
    case 194: nazwa_paczki = "Paczka 97x2SZT"; break;
    case 195: nazwa_paczki = "Paczka 97x2SZT+1SZT"; break;
    case 196: nazwa_paczki = "Paczka 98x2SZT"; break;
    case 197: nazwa_paczki = "Paczka 98x2SZT+1SZT"; break;
    case 198: nazwa_paczki = "Paczka 99x2SZT"; break;
    case 199: nazwa_paczki = "Paczka 99x2SZT+1SZT"; break;
    case 200: nazwa_paczki = "Paczka 100x2SZT"; break;
    case 201: nazwa_paczki = "Paczka 100x2SZT+1SZT"; break;
    case 202: nazwa_paczki = "Paczka 101x2SZT"; break;
    case 203: nazwa_paczki = "Paczka 101x2SZT+1SZT"; break;
    case 204: nazwa_paczki = "Paczka 102x2SZT"; break;
    case 205: nazwa_paczki = "Paczka 102x2SZT+1SZT"; break;
    case 206: nazwa_paczki = "Paczka 103x2SZT"; break;
    case 207: nazwa_paczki = "Paczka 103x2SZT+1SZT"; break;
    case 208: nazwa_paczki = "Paczka 104x2SZT"; break;
    case 209: nazwa_paczki = "Paczka 104x2SZT+1SZT"; break;
    case 210: nazwa_paczki = "Paczka 105x2SZT"; break;
    case 211: nazwa_paczki = "Paczka 105x2SZT+1SZT"; break;
    case 212: nazwa_paczki = "Paczka 106x2SZT"; break;
    case 213: nazwa_paczki = "Paczka 106x2SZT+1SZT"; break;
    case 214: nazwa_paczki = "Paczka 107x2SZT"; break;
    case 215: nazwa_paczki = "Paczka 107x2SZT+1SZT"; break;
    case 216: nazwa_paczki = "Paczka 108x2SZT"; break;
    case 217: nazwa_paczki = "Paczka 108x2SZT+1SZT"; break;
    case 218: nazwa_paczki = "Paczka 109x2SZT"; break;
    case 219: nazwa_paczki = "Paczka 109x2SZT+1SZT"; break;
    case 220: nazwa_paczki = "Paczka 110x2SZT"; break;
    case 221: nazwa_paczki = "Paczka 110x2SZT+1SZT"; break;
    case 222: nazwa_paczki = "Paczka 111x2SZT"; break;
    case 223: nazwa_paczki = "Paczka 111x2SZT+1SZT"; break;
    case 224: nazwa_paczki = "Paczka 112x2SZT"; break;
    case 225: nazwa_paczki = "Paczka 112x2SZT+1SZT"; break;
    case 226: nazwa_paczki = "Paczka 113x2SZT"; break;
    case 227: nazwa_paczki = "Paczka 113x2SZT+1SZT"; break;
    case 228: nazwa_paczki = "Paczka 114x2SZT"; break;
    case 229: nazwa_paczki = "Paczka 114x2SZT+1SZT"; break;
    case 230: nazwa_paczki = "Paczka 115x2SZT"; break;
    case 231: nazwa_paczki = "Paczka 115x2SZT+1SZT"; break;
    case 232: nazwa_paczki = "Paczka 116x2SZT"; break;
    case 233: nazwa_paczki = "Paczka 116x2SZT+1SZT"; break;
    case 234: nazwa_paczki = "Paczka 117x2SZT"; break;
    case 235: nazwa_paczki = "Paczka 117x2SZT+1SZT"; break;
    case 236: nazwa_paczki = "Paczka 118x2SZT"; break;
    case 237: nazwa_paczki = "Paczka 118x2SZT+1SZT"; break;
    case 238: nazwa_paczki = "Paczka 119x2SZT"; break;
    case 239: nazwa_paczki = "Paczka 119x2SZT+1SZT"; break;
    case 240: nazwa_paczki = "Paczka 120x2SZT"; break;
    case 241: nazwa_paczki = "Paczka 120x2SZT+1SZT"; break;
    case 242: nazwa_paczki = "Paczka 121x2SZT"; break;
    case 243: nazwa_paczki = "Paczka 121x2SZT+1SZT"; break;
    case 244: nazwa_paczki = "Paczka 122x2SZT"; break;
    case 245: nazwa_paczki = "Paczka 122x2SZT+1SZT"; break;
    case 246: nazwa_paczki = "Paczka 123x2SZT"; break;
    case 247: nazwa_paczki = "Paczka 123x2SZT+1SZT"; break;
    case 248: nazwa_paczki = "Paczka 124x2SZT"; break;
    case 249: nazwa_paczki = "Paczka 124x2SZT+1SZT"; break;
    case 250: nazwa_paczki = "Paczka 125x2SZT"; break;
    case 251: nazwa_paczki = "Paczka 125x2SZT+1SZT"; break;
    case 252: nazwa_paczki = "Paczka 126x2SZT"; break;
    case 253: nazwa_paczki = "Paczka 126x2SZT+1SZT"; break;
    case 254: nazwa_paczki = "Paczka 127x2SZT"; break;
    case 255: nazwa_paczki = "Paczka 127x2SZT+1SZT"; break;
    case 256: nazwa_paczki = "Paczka 128x2SZT"; break;
    case 257: nazwa_paczki = "Paczka 128x2SZT+1SZT"; break;
    case 258: nazwa_paczki = "Paczka 129x2SZT"; break;
    case 259: nazwa_paczki = "Paczka 129x2SZT+1SZT"; break;
    case 260: nazwa_paczki = "Paczka 130x2SZT"; break;
    case 261: nazwa_paczki = "Paczka 130x2SZT+1SZT"; break;
    case 262: nazwa_paczki = "Paczka 131x2SZT"; break;
    case 263: nazwa_paczki = "Paczka 131x2SZT+1SZT"; break;
    case 264: nazwa_paczki = "Paczka 132x2SZT"; break;
    case 265: nazwa_paczki = "Paczka 132x2SZT+1SZT"; break;
    case 266: nazwa_paczki = "Paczka 133x2SZT"; break;
    case 267: nazwa_paczki = "Paczka 133x2SZT+1SZT"; break;
    case 268: nazwa_paczki = "Paczka 134x2SZT"; break;
    case 269: nazwa_paczki = "Paczka 134x2SZT+1SZT"; break;
    case 270: nazwa_paczki = "Paczka 135x2SZT"; break;
    case 271: nazwa_paczki = "Paczka 135x2SZT+1SZT"; break;
    case 272: nazwa_paczki = "Paczka 136x2SZT"; break;
    case 273: nazwa_paczki = "Paczka 136x2SZT+1SZT"; break;
    case 274: nazwa_paczki = "Paczka 137x2SZT"; break;
    case 275: nazwa_paczki = "Paczka 137x2SZT+1SZT"; break;
    case 276: nazwa_paczki = "Paczka 138x2SZT"; break;
    case 277: nazwa_paczki = "Paczka 138x2SZT+1SZT"; break;
    case 278: nazwa_paczki = "Paczka 139x2SZT"; break;
    case 279: nazwa_paczki = "Paczka 139x2SZT+1SZT"; break;
    case 280: nazwa_paczki = "Paczka 140x2SZT"; break;
    case 281: nazwa_paczki = "Paczka 140x2SZT+1SZT"; break;
    case 282: nazwa_paczki = "Paczka 141x2SZT"; break;
    case 283: nazwa_paczki = "Paczka 141x2SZT+1SZT"; break;
    case 284: nazwa_paczki = "Paczka 142x2SZT"; break;
    case 285: nazwa_paczki = "Paczka 142x2SZT+1SZT"; break;
    case 286: nazwa_paczki = "Paczka 143x2SZT"; break;
    case 287: nazwa_paczki = "Paczka 143x2SZT+1SZT"; break;
    case 288: nazwa_paczki = "Paczka 144x2SZT"; break;
    case 289: nazwa_paczki = "Paczka 144x2SZT+1SZT"; break;
    case 290: nazwa_paczki = "Paczka 145x2SZT"; break;
    case 291: nazwa_paczki = "Paczka 145x2SZT+1SZT"; break;
    case 292: nazwa_paczki = "Paczka 146x2SZT"; break;
    case 293: nazwa_paczki = "Paczka 146x2SZT+1SZT"; break;
    case 294: nazwa_paczki = "Paczka 147x2SZT"; break;
    case 295: nazwa_paczki = "Paczka 147x2SZT+1SZT"; break;
    case 296: nazwa_paczki = "Paczka 148x2SZT"; break;
    case 297: nazwa_paczki = "Paczka 148x2SZT+1SZT"; break;
    case 298: nazwa_paczki = "Paczka 149x2SZT"; break;
    case 299: nazwa_paczki = "Paczka 149x2SZT+1SZT"; break;
    case 300: nazwa_paczki = "Paczka 150x2SZT"; break;
    case 301: nazwa_paczki = "Paczka 301 do 9999"; break;
	}
	
    switch( alternatywa )
    {
    case 4: specyfikacja_liczba_paczek = "2"; break;
    case 5: specyfikacja_liczba_paczek = "2"; break;
    case 6: specyfikacja_liczba_paczek = "3"; break;
    case 7: specyfikacja_liczba_paczek = "3"; break;
    case 8: specyfikacja_liczba_paczek = "4"; break;
    case 9: specyfikacja_liczba_paczek = "4"; break;
    case 10: specyfikacja_liczba_paczek = "5"; break;
    case 11: specyfikacja_liczba_paczek = "5"; break;
    case 12: specyfikacja_liczba_paczek = "6"; break;
    case 13: specyfikacja_liczba_paczek = "6"; break;
    case 14: specyfikacja_liczba_paczek = "7"; break;
    case 15: specyfikacja_liczba_paczek = "7"; break;
    case 16: specyfikacja_liczba_paczek = "8"; break;
    case 17: specyfikacja_liczba_paczek = "8"; break;
    case 18: specyfikacja_liczba_paczek = "9"; break;
    case 19: specyfikacja_liczba_paczek = "9"; break;
    case 20: specyfikacja_liczba_paczek = "10"; break;
    case 21: specyfikacja_liczba_paczek = "10"; break;
    case 22: specyfikacja_liczba_paczek = "11"; break;
    case 23: specyfikacja_liczba_paczek = "11"; break;
    case 24: specyfikacja_liczba_paczek = "12"; break;
    case 25: specyfikacja_liczba_paczek = "12"; break;
    case 26: specyfikacja_liczba_paczek = "13"; break;
    case 27: specyfikacja_liczba_paczek = "13"; break;
    case 28: specyfikacja_liczba_paczek = "14"; break;
    case 29: specyfikacja_liczba_paczek = "14"; break;
    case 30: specyfikacja_liczba_paczek = "15"; break;
    case 31: specyfikacja_liczba_paczek = "15"; break;
    case 32: specyfikacja_liczba_paczek = "16"; break;
    case 33: specyfikacja_liczba_paczek = "16"; break;
    case 34: specyfikacja_liczba_paczek = "17"; break;
    case 35: specyfikacja_liczba_paczek = "17"; break;
    case 36: specyfikacja_liczba_paczek = "18"; break;
    case 37: specyfikacja_liczba_paczek = "18"; break;
    case 38: specyfikacja_liczba_paczek = "19"; break;
    case 39: specyfikacja_liczba_paczek = "19"; break;
    case 40: specyfikacja_liczba_paczek = "20"; break;
    case 41: specyfikacja_liczba_paczek = "20"; break;
    case 42: specyfikacja_liczba_paczek = "21"; break;
    case 43: specyfikacja_liczba_paczek = "21"; break;
    case 44: specyfikacja_liczba_paczek = "22"; break;
    case 45: specyfikacja_liczba_paczek = "22"; break;
    case 46: specyfikacja_liczba_paczek = "23"; break;
    case 47: specyfikacja_liczba_paczek = "23"; break;
    case 48: specyfikacja_liczba_paczek = "24"; break;
    case 49: specyfikacja_liczba_paczek = "24"; break;
    case 50: specyfikacja_liczba_paczek = "25"; break;
    case 51: specyfikacja_liczba_paczek = "25"; break;
    case 52: specyfikacja_liczba_paczek = "26"; break;
    case 53: specyfikacja_liczba_paczek = "26"; break;
    case 54: specyfikacja_liczba_paczek = "27"; break;
    case 55: specyfikacja_liczba_paczek = "27"; break;
    case 56: specyfikacja_liczba_paczek = "28"; break;
    case 57: specyfikacja_liczba_paczek = "28"; break;
    case 58: specyfikacja_liczba_paczek = "29"; break;
    case 59: specyfikacja_liczba_paczek = "29"; break;
    case 60: specyfikacja_liczba_paczek = "30"; break;
    case 61: specyfikacja_liczba_paczek = "30"; break;
    case 62: specyfikacja_liczba_paczek = "31"; break;
    case 63: specyfikacja_liczba_paczek = "31"; break;
    case 64: specyfikacja_liczba_paczek = "32"; break;
    case 65: specyfikacja_liczba_paczek = "32"; break;
    case 66: specyfikacja_liczba_paczek = "33"; break;
    case 67: specyfikacja_liczba_paczek = "33"; break;
    case 68: specyfikacja_liczba_paczek = "34"; break;
    case 69: specyfikacja_liczba_paczek = "34"; break;
    case 70: specyfikacja_liczba_paczek = "35"; break;
    case 71: specyfikacja_liczba_paczek = "35"; break;
    case 72: specyfikacja_liczba_paczek = "36"; break;
    case 73: specyfikacja_liczba_paczek = "36"; break;
    case 74: specyfikacja_liczba_paczek = "37"; break;
    case 75: specyfikacja_liczba_paczek = "37"; break;
    case 76: specyfikacja_liczba_paczek = "38"; break;
    case 77: specyfikacja_liczba_paczek = "38"; break;
    case 78: specyfikacja_liczba_paczek = "39"; break;
    case 79: specyfikacja_liczba_paczek = "39"; break;
    case 80: specyfikacja_liczba_paczek = "40"; break;
    case 81: specyfikacja_liczba_paczek = "40"; break;
    case 82: specyfikacja_liczba_paczek = "41"; break;
    case 83: specyfikacja_liczba_paczek = "41"; break;
    case 84: specyfikacja_liczba_paczek = "42"; break;
    case 85: specyfikacja_liczba_paczek = "42"; break;
    case 86: specyfikacja_liczba_paczek = "43"; break;
    case 87: specyfikacja_liczba_paczek = "43"; break;
    case 88: specyfikacja_liczba_paczek = "44"; break;
    case 89: specyfikacja_liczba_paczek = "44"; break;
    case 90: specyfikacja_liczba_paczek = "45"; break;
    case 91: specyfikacja_liczba_paczek = "45"; break;
    case 92: specyfikacja_liczba_paczek = "46"; break;
    case 93: specyfikacja_liczba_paczek = "46"; break;
    case 94: specyfikacja_liczba_paczek = "47"; break;
    case 95: specyfikacja_liczba_paczek = "47"; break;
    case 96: specyfikacja_liczba_paczek = "48"; break;
    case 97: specyfikacja_liczba_paczek = "48"; break;
    case 98: specyfikacja_liczba_paczek = "49"; break;
    case 99: specyfikacja_liczba_paczek = "49"; break;
    case 100: specyfikacja_liczba_paczek = "50"; break;
    case 101: specyfikacja_liczba_paczek = "50"; break;
    case 102: specyfikacja_liczba_paczek = "51"; break;
    case 103: specyfikacja_liczba_paczek = "51"; break;
    case 104: specyfikacja_liczba_paczek = "52"; break;
    case 105: specyfikacja_liczba_paczek = "52"; break;
    case 106: specyfikacja_liczba_paczek = "53"; break;
    case 107: specyfikacja_liczba_paczek = "53"; break;
    case 108: specyfikacja_liczba_paczek = "54"; break;
    case 109: specyfikacja_liczba_paczek = "54"; break;
    case 110: specyfikacja_liczba_paczek = "55"; break;
    case 111: specyfikacja_liczba_paczek = "55"; break;
    case 112: specyfikacja_liczba_paczek = "56"; break;
    case 113: specyfikacja_liczba_paczek = "56"; break;
    case 114: specyfikacja_liczba_paczek = "57"; break;
    case 115: specyfikacja_liczba_paczek = "57"; break;
    case 116: specyfikacja_liczba_paczek = "58"; break;
    case 117: specyfikacja_liczba_paczek = "58"; break;
    case 118: specyfikacja_liczba_paczek = "59"; break;
    case 119: specyfikacja_liczba_paczek = "59"; break;
    case 120: specyfikacja_liczba_paczek = "60"; break;
    case 121: specyfikacja_liczba_paczek = "60"; break;
    case 122: specyfikacja_liczba_paczek = "61"; break;
    case 123: specyfikacja_liczba_paczek = "61"; break;
    case 124: specyfikacja_liczba_paczek = "62"; break;
    case 125: specyfikacja_liczba_paczek = "62"; break;
    case 126: specyfikacja_liczba_paczek = "63"; break;
    case 127: specyfikacja_liczba_paczek = "63"; break;
    case 128: specyfikacja_liczba_paczek = "64"; break;
    case 129: specyfikacja_liczba_paczek = "64"; break;
    case 130: specyfikacja_liczba_paczek = "65"; break;
    case 131: specyfikacja_liczba_paczek = "65"; break;
    case 132: specyfikacja_liczba_paczek = "66"; break;
    case 133: specyfikacja_liczba_paczek = "66"; break;
    case 134: specyfikacja_liczba_paczek = "67"; break;
    case 135: specyfikacja_liczba_paczek = "67"; break;
    case 136: specyfikacja_liczba_paczek = "68"; break;
    case 137: specyfikacja_liczba_paczek = "68"; break;
    case 138: specyfikacja_liczba_paczek = "69"; break;
    case 139: specyfikacja_liczba_paczek = "69"; break;
    case 140: specyfikacja_liczba_paczek = "70"; break;
    case 141: specyfikacja_liczba_paczek = "70"; break;
    case 142: specyfikacja_liczba_paczek = "71"; break;
    case 143: specyfikacja_liczba_paczek = "71"; break;
    case 144: specyfikacja_liczba_paczek = "72"; break;
    case 145: specyfikacja_liczba_paczek = "72"; break;
    case 146: specyfikacja_liczba_paczek = "73"; break;
    case 147: specyfikacja_liczba_paczek = "73"; break;
    case 148: specyfikacja_liczba_paczek = "74"; break;
    case 149: specyfikacja_liczba_paczek = "74"; break;
    case 150: specyfikacja_liczba_paczek = "75"; break;
    case 151: specyfikacja_liczba_paczek = "75"; break;
    case 152: specyfikacja_liczba_paczek = "76"; break;
    case 153: specyfikacja_liczba_paczek = "76"; break;
    case 154: specyfikacja_liczba_paczek = "77"; break;
    case 155: specyfikacja_liczba_paczek = "77"; break;
    case 156: specyfikacja_liczba_paczek = "78"; break;
    case 157: specyfikacja_liczba_paczek = "78"; break;
    case 158: specyfikacja_liczba_paczek = "79"; break;
    case 159: specyfikacja_liczba_paczek = "79"; break;
    case 160: specyfikacja_liczba_paczek = "80"; break;
    case 161: specyfikacja_liczba_paczek = "80"; break;
    case 162: specyfikacja_liczba_paczek = "81"; break;
    case 163: specyfikacja_liczba_paczek = "81"; break;
    case 164: specyfikacja_liczba_paczek = "82"; break;
    case 165: specyfikacja_liczba_paczek = "82"; break;
    case 166: specyfikacja_liczba_paczek = "83"; break;
    case 167: specyfikacja_liczba_paczek = "83"; break;
    case 168: specyfikacja_liczba_paczek = "84"; break;
    case 169: specyfikacja_liczba_paczek = "84"; break;
    case 170: specyfikacja_liczba_paczek = "85"; break;
    case 171: specyfikacja_liczba_paczek = "85"; break;
    case 172: specyfikacja_liczba_paczek = "86"; break;
    case 173: specyfikacja_liczba_paczek = "86"; break;
    case 174: specyfikacja_liczba_paczek = "87"; break;
    case 175: specyfikacja_liczba_paczek = "87"; break;
    case 176: specyfikacja_liczba_paczek = "88"; break;
    case 177: specyfikacja_liczba_paczek = "88"; break;
    case 178: specyfikacja_liczba_paczek = "89"; break;
    case 179: specyfikacja_liczba_paczek = "89"; break;
    case 180: specyfikacja_liczba_paczek = "90"; break;
    case 181: specyfikacja_liczba_paczek = "90"; break;
    case 182: specyfikacja_liczba_paczek = "91"; break;
    case 183: specyfikacja_liczba_paczek = "91"; break;
    case 184: specyfikacja_liczba_paczek = "92"; break;
    case 185: specyfikacja_liczba_paczek = "92"; break;
    case 186: specyfikacja_liczba_paczek = "93"; break;
    case 187: specyfikacja_liczba_paczek = "93"; break;
    case 188: specyfikacja_liczba_paczek = "94"; break;
    case 189: specyfikacja_liczba_paczek = "94"; break;
    case 190: specyfikacja_liczba_paczek = "95"; break;
    case 191: specyfikacja_liczba_paczek = "95"; break;
    case 192: specyfikacja_liczba_paczek = "96"; break;
    case 193: specyfikacja_liczba_paczek = "96"; break;
    case 194: specyfikacja_liczba_paczek = "97"; break;
    case 195: specyfikacja_liczba_paczek = "97"; break;
    case 196: specyfikacja_liczba_paczek = "98"; break;
    case 197: specyfikacja_liczba_paczek = "98"; break;
    case 198: specyfikacja_liczba_paczek = "99"; break;
    case 199: specyfikacja_liczba_paczek = "99"; break;
    case 200: specyfikacja_liczba_paczek = "100"; break;
    case 201: specyfikacja_liczba_paczek = "100"; break;
    case 202: specyfikacja_liczba_paczek = "101"; break;
    case 203: specyfikacja_liczba_paczek = "101"; break;
    case 204: specyfikacja_liczba_paczek = "102"; break;
    case 205: specyfikacja_liczba_paczek = "102"; break;
    case 206: specyfikacja_liczba_paczek = "103"; break;
    case 207: specyfikacja_liczba_paczek = "103"; break;
    case 208: specyfikacja_liczba_paczek = "104"; break;
    case 209: specyfikacja_liczba_paczek = "104"; break;
    case 210: specyfikacja_liczba_paczek = "105"; break;
    case 211: specyfikacja_liczba_paczek = "105"; break;
    case 212: specyfikacja_liczba_paczek = "106"; break;
    case 213: specyfikacja_liczba_paczek = "106"; break;
    case 214: specyfikacja_liczba_paczek = "107"; break;
    case 215: specyfikacja_liczba_paczek = "107"; break;
    case 216: specyfikacja_liczba_paczek = "108"; break;
    case 217: specyfikacja_liczba_paczek = "108"; break;
    case 218: specyfikacja_liczba_paczek = "109"; break;
    case 219: specyfikacja_liczba_paczek = "109"; break;
    case 220: specyfikacja_liczba_paczek = "110"; break;
    case 221: specyfikacja_liczba_paczek = "110"; break;
    case 222: specyfikacja_liczba_paczek = "111"; break;
    case 223: specyfikacja_liczba_paczek = "111"; break;
    case 224: specyfikacja_liczba_paczek = "112"; break;
    case 225: specyfikacja_liczba_paczek = "112"; break;
    case 226: specyfikacja_liczba_paczek = "113"; break;
    case 227: specyfikacja_liczba_paczek = "113"; break;
    case 228: specyfikacja_liczba_paczek = "114"; break;
    case 229: specyfikacja_liczba_paczek = "114"; break;
    case 230: specyfikacja_liczba_paczek = "115"; break;
    case 231: specyfikacja_liczba_paczek = "115"; break;
    case 232: specyfikacja_liczba_paczek = "116"; break;
    case 233: specyfikacja_liczba_paczek = "116"; break;
    case 234: specyfikacja_liczba_paczek = "117"; break;
    case 235: specyfikacja_liczba_paczek = "117"; break;
    case 236: specyfikacja_liczba_paczek = "118"; break;
    case 237: specyfikacja_liczba_paczek = "118"; break;
    case 238: specyfikacja_liczba_paczek = "119"; break;
    case 239: specyfikacja_liczba_paczek = "119"; break;
    case 240: specyfikacja_liczba_paczek = "120"; break;
    case 241: specyfikacja_liczba_paczek = "120"; break;
    case 242: specyfikacja_liczba_paczek = "121"; break;
    case 243: specyfikacja_liczba_paczek = "121"; break;
    case 244: specyfikacja_liczba_paczek = "122"; break;
    case 245: specyfikacja_liczba_paczek = "122"; break;
    case 246: specyfikacja_liczba_paczek = "123"; break;
    case 247: specyfikacja_liczba_paczek = "123"; break;
    case 248: specyfikacja_liczba_paczek = "124"; break;
    case 249: specyfikacja_liczba_paczek = "124"; break;
    case 250: specyfikacja_liczba_paczek = "125"; break;
    case 251: specyfikacja_liczba_paczek = "125"; break;
    case 252: specyfikacja_liczba_paczek = "126"; break;
    case 253: specyfikacja_liczba_paczek = "126"; break;
    case 254: specyfikacja_liczba_paczek = "127"; break;
    case 255: specyfikacja_liczba_paczek = "127"; break;
    case 256: specyfikacja_liczba_paczek = "128"; break;
    case 257: specyfikacja_liczba_paczek = "128"; break;
    case 258: specyfikacja_liczba_paczek = "129"; break;
    case 259: specyfikacja_liczba_paczek = "129"; break;
    case 260: specyfikacja_liczba_paczek = "130"; break;
    case 261: specyfikacja_liczba_paczek = "130"; break;
    case 262: specyfikacja_liczba_paczek = "131"; break;
    case 263: specyfikacja_liczba_paczek = "131"; break;
    case 264: specyfikacja_liczba_paczek = "132"; break;
    case 265: specyfikacja_liczba_paczek = "132"; break;
    case 266: specyfikacja_liczba_paczek = "133"; break;
    case 267: specyfikacja_liczba_paczek = "133"; break;
    case 268: specyfikacja_liczba_paczek = "134"; break;
    case 269: specyfikacja_liczba_paczek = "134"; break;
    case 270: specyfikacja_liczba_paczek = "135"; break;
    case 271: specyfikacja_liczba_paczek = "135"; break;
    case 272: specyfikacja_liczba_paczek = "136"; break;
    case 273: specyfikacja_liczba_paczek = "136"; break;
    case 274: specyfikacja_liczba_paczek = "137"; break;
    case 275: specyfikacja_liczba_paczek = "137"; break;
    case 276: specyfikacja_liczba_paczek = "138"; break;
    case 277: specyfikacja_liczba_paczek = "138"; break;
    case 278: specyfikacja_liczba_paczek = "139"; break;
    case 279: specyfikacja_liczba_paczek = "139"; break;
    case 280: specyfikacja_liczba_paczek = "140"; break;
    case 281: specyfikacja_liczba_paczek = "140"; break;
    case 282: specyfikacja_liczba_paczek = "141"; break;
    case 283: specyfikacja_liczba_paczek = "141"; break;
    case 284: specyfikacja_liczba_paczek = "142"; break;
    case 285: specyfikacja_liczba_paczek = "142"; break;
    case 286: specyfikacja_liczba_paczek = "143"; break;
    case 287: specyfikacja_liczba_paczek = "143"; break;
    case 288: specyfikacja_liczba_paczek = "144"; break;
    case 289: specyfikacja_liczba_paczek = "144"; break;
    case 290: specyfikacja_liczba_paczek = "145"; break;
    case 291: specyfikacja_liczba_paczek = "145"; break;
    case 292: specyfikacja_liczba_paczek = "146"; break;
    case 293: specyfikacja_liczba_paczek = "146"; break;
    case 294: specyfikacja_liczba_paczek = "147"; break;
    case 295: specyfikacja_liczba_paczek = "147"; break;
    case 296: specyfikacja_liczba_paczek = "148"; break;
    case 297: specyfikacja_liczba_paczek = "148"; break;
    case 298: specyfikacja_liczba_paczek = "149"; break;
    case 299: specyfikacja_liczba_paczek = "149"; break;
    case 300: specyfikacja_liczba_paczek = "150"; break;
    case 301: specyfikacja_liczba_paczek = "1"; break;
	}

}


if (alternatywa == liczba_alternatyw) {

        
nazwa_paczki = "Paczka 99 do 9999";
 
          
}
	
cout<<"ALTERNATYWA - NUMER: " + wielkosc_partii + " - SYMBOL: " + numer_alternatywy + " - NAZWA: " + nazwa_paczki + " - ";;


pauza_1_1(max_czynnosci);


// Klikam na puste miejscu SAP
SetCursorPos( PUSTE_POLE_SAP_2 ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
    

pauza_1_1(max_czynnosci);


//wklej numer alternatywy
const char* numer_alternatywy_tekst = numer_alternatywy.c_str();

{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  


pauza_1_1(max_czynnosci);


//Otwieranie - Kopiowanie wzorca
keybd_event(0x76, 0, 0, 0); // F7             
keybd_event(0x76, 0, KEYEVENTF_KEYUP, 0); // F7

	
pauza_1_1(max_czynnosci);


keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER


pauza_1_1(max_czynnosci);


//rozpoznawanie koloru
//------------------------------------------------------------------------------
        os_x = 1250;
        os_y = 350;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


a = rr;
b = gg;
c = bb;
    

pauza_1_1(max_czynnosci);


 }   while (KOLOR_NIEBIESKI_1_RGB_1); //kolor niebieski
//rozpoznawanie koloru
//------------------------------------------------------------------------------


const char* numer_alternatywy_poprzedniej_tekst = numer_alternatywy_poprzedniej.c_str();

{
    HGLOBAL numer_alternatywy_poprzedniej_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_poprzedniej_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_poprzedniej_zmienna,numer_alternatywy_poprzedniej_tekst,strlen(numer_alternatywy_poprzedniej_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_poprzedniej_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


if (alternatywa == liczba_alternatyw) {
    

//Wpisywanie - 1
keybd_event(0x31, 0, 0, 0); // 1             
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1


}

else {


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  


}
	

pauza_1_1(max_czynnosci);
	

    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER
     
    
    
//rozpoznanie koloru
        os_x = 1350;
        os_y = 310;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


a = rr;
b = gg;
c = bb;
   
    

pauza_1_1(max_czynnosci);



 }   while (KOLOR_SZARY_4_RGB_1); //kolor szary
//rozpoznanie koloru


pauza_1_1(max_czynnosci);


// Zaznaczenie wszytkich 
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3  
	

pauza_1_1(max_czynnosci);


// Kopiowanie 
keybd_event(0x74, 0, 0, 0); // F5         
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5 
	

pauza_1_1(max_czynnosci);


//rozpoznanie koloru
        os_x = 1200;
        os_y = 390;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


    
    a = rr;
    b = gg;
    c = bb;
    
	
pauza_1_1(max_czynnosci);	


 }   while (KOLOR_SZARY_4_RGB_1); //kolor niebieski
//rozpoznanie koloru


// Nag³ówek 
keybd_event(0x75, 0, 0, 0); // F6         
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);	
	

//rozpoznanie koloru
        os_x = 1250;
        os_y = 350;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
	
pauza_1_1(max_czynnosci);	


 }   while (KOLOR_BIALY_1_RGB_1); 
//rozpoznanie koloru


keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//Wklejam symbol wyrobu
const char* symbol_wyrobu_tekst = symbol_wyrobu.c_str();

{
    HGLOBAL symbol_wyrobu_zmienna = GlobalAlloc(GMEM_FIXED,strlen(symbol_wyrobu_tekst) + 1); //text size + \0 character
    memcpy(symbol_wyrobu_zmienna,symbol_wyrobu_tekst,strlen(symbol_wyrobu_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,symbol_wyrobu_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);	


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	
	
pauza_1_1(max_czynnosci);	


keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 

	
pauza_1_1(max_czynnosci);


//nazwa paczki
const char* nazwa_paczki_tekst = nazwa_paczki.c_str();


{
    HGLOBAL nazwa_paczki_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_paczki_tekst) + 1); //text size + \0 character
    memcpy(nazwa_paczki_zmienna,nazwa_paczki_tekst,strlen(nazwa_paczki_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_paczki_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);	


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	
	
pauza_1_1(max_czynnosci);	


keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


const char* specyfikacja_liczba_paczek_tekst = specyfikacja_liczba_paczek.c_str();
const char* wielkosc_partii_tekst = wielkosc_partii.c_str();


string wielkosc_poczatkowa = "1";
const char* wielkosc_poczatkowa_tekst = wielkosc_poczatkowa.c_str();

if (alternatywa == liczba_alternatyw) {
    
{
    HGLOBAL wielkosc_poczatkowa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wielkosc_poczatkowa_tekst) + 1); //text size + \0 character
    memcpy(wielkosc_poczatkowa_zmienna,wielkosc_poczatkowa_tekst,strlen(wielkosc_poczatkowa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wielkosc_poczatkowa_zmienna);
        CloseClipboard();
    }
}


}


else {

//Wklejam wielkoœæ partii
{
    HGLOBAL wielkosc_partii_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wielkosc_partii_tekst) + 1); //text size + \0 character
    memcpy(wielkosc_partii_zmienna,wielkosc_partii_tekst,strlen(wielkosc_partii_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wielkosc_partii_zmienna);
        CloseClipboard();
    }
}

}

	
pauza_1_1(max_czynnosci);	


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	
	
pauza_1_1(max_czynnosci);	
	
	
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


{
    HGLOBAL wielkosc_partii_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wielkosc_partii_tekst) + 1); //text size + \0 character
    memcpy(wielkosc_partii_zmienna,wielkosc_partii_tekst,strlen(wielkosc_partii_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wielkosc_partii_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);	


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	
	
pauza_1_1(max_czynnosci);	
	
	
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


string wielkosc_koncowa = "9999";
const char* wielkosc_koncowa_tekst = wielkosc_koncowa.c_str();


if (alternatywa == liczba_alternatyw)
{
    
{
    HGLOBAL wielkosc_koncowa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wielkosc_koncowa_tekst) + 1); //text size + \0 character
    memcpy(wielkosc_koncowa_zmienna,wielkosc_koncowa_tekst,strlen(wielkosc_koncowa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wielkosc_koncowa_zmienna);
        CloseClipboard();
    }
}
    
	
pauza_1_1(max_czynnosci);	


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  


}


else {


{
    HGLOBAL wielkosc_partii_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wielkosc_partii_tekst) + 1); //text size + \0 character
    memcpy(wielkosc_partii_zmienna,wielkosc_partii_tekst,strlen(wielkosc_partii_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wielkosc_partii_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);	


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
}

	
pauza_1_1(max_czynnosci);	


// Pozycja
keybd_event(0x74, 0, 0, 0); // F5         
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5 


pauza_1_1(max_czynnosci);


//rozpoznanie koloru
        os_x = 1200;
        os_y = 390;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


a = rr;
b = gg;
c = bb;
    
    
pauza_1_1(max_czynnosci);


 }   while (KOLOR_SZARY_4_RGB_1); //kolor niebieski
//rozpoznanie koloru



string tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie;

if (alternatywa > 4 && liczba_sztaplowania == 4 || alternatywa > 3 && liczba_sztaplowania == 3 || alternatywa > 3 && liczba_sztaplowania == 2 )
{
	

//===============================================================================================================================================================================
	
	
//1 paczka//
if (wiersze_paczek == 1)
{

	
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);
	
	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


if (alternatywa == liczba_alternatyw) {
    

//Wpisywanie - 1
keybd_event(0x31, 0, 0, 0); // 1             
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1


}

else {


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  


}
	
	
}


//===============================================================================================================================================================================

//2 paczki//
if (wiersze_paczek == 2)
{
	

keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   
	

pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
}


//===============================================================================================================================================================================


//4 paczka - NEW SCHOOL//
if (wiersze_paczek == 9 && liczba_sztaplowania == 4)
{
    
    if (numer_alternatywy == "8" || numer_alternatywy == "12" || numer_alternatywy == "16" || numer_alternatywy == "20" || numer_alternatywy == "24" ||
        numer_alternatywy == "28" || numer_alternatywy == "32" || numer_alternatywy == "36" || numer_alternatywy == "40" || numer_alternatywy == "44" ||
        numer_alternatywy == "48" || numer_alternatywy == "52" || numer_alternatywy == "56" || numer_alternatywy == "60" || numer_alternatywy == "64" ||
        numer_alternatywy == "68" || numer_alternatywy == "72" || numer_alternatywy == "76" || numer_alternatywy == "80" || numer_alternatywy == "84" ||
        numer_alternatywy == "88" || numer_alternatywy == "92" || numer_alternatywy == "96" || numer_alternatywy == "100" || numer_alternatywy == "104" ||
        numer_alternatywy == "108" || numer_alternatywy == "112" || numer_alternatywy == "116" || numer_alternatywy == "120" || numer_alternatywy == "124" ||
        numer_alternatywy == "128" || numer_alternatywy == "132" || numer_alternatywy == "136" || numer_alternatywy == "140" || numer_alternatywy == "144" ||
        numer_alternatywy == "148" || numer_alternatywy == "152" || numer_alternatywy == "156" || numer_alternatywy == "160" || numer_alternatywy == "164" ||
        numer_alternatywy == "168" || numer_alternatywy == "172" || numer_alternatywy == "176" || numer_alternatywy == "180" || numer_alternatywy == "184" ||
        numer_alternatywy == "188" || numer_alternatywy == "192" || numer_alternatywy == "196" || numer_alternatywy == "200")
    
{
    
    
if  (numer_alternatywy == "200")
{


keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	
	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


}


else
{  
    
	
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	
	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


}


}

else {
  
    
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);

	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);

	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


	// Wklejam 
    keybd_event(0x11, 0, 0, 0); // CTRL
	keybd_event(0x56, 0, 0, 0); // V              
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V    
    
}


}


//===============================================================================================================================================================================


//3 paczka - NEW SCHOOL//
if (wiersze_paczek == 9 && liczba_sztaplowania == 3)
{
    
    if (numer_alternatywy == "6" || numer_alternatywy == "9" || numer_alternatywy == "12" || numer_alternatywy == "15" || numer_alternatywy == "18" ||
        numer_alternatywy == "21" || numer_alternatywy == "24" || numer_alternatywy == "27" || numer_alternatywy == "30" || numer_alternatywy == "33" ||
        numer_alternatywy == "36" || numer_alternatywy == "39" || numer_alternatywy == "42" || numer_alternatywy == "45" || numer_alternatywy == "48" ||
        numer_alternatywy == "51" || numer_alternatywy == "54" || numer_alternatywy == "57" || numer_alternatywy == "60" || numer_alternatywy == "63" ||
        numer_alternatywy == "66" || numer_alternatywy == "69" || numer_alternatywy == "72" || numer_alternatywy == "75" || numer_alternatywy == "78" ||
        numer_alternatywy == "81" || numer_alternatywy == "84" || numer_alternatywy == "87" || numer_alternatywy == "90" || numer_alternatywy == "93" ||
        numer_alternatywy == "96" || numer_alternatywy == "99" || numer_alternatywy == "102" || numer_alternatywy == "105" || numer_alternatywy == "108" ||
        numer_alternatywy == "111" || numer_alternatywy == "114" || numer_alternatywy == "117" || numer_alternatywy == "120" || numer_alternatywy == "123" ||
        numer_alternatywy == "126" || numer_alternatywy == "129" || numer_alternatywy == "132" || numer_alternatywy == "135" || numer_alternatywy == "138" ||
        numer_alternatywy == "141" || numer_alternatywy == "144" || numer_alternatywy == "147" || numer_alternatywy == "150" || numer_alternatywy == "153" ||
        numer_alternatywy == "156" || numer_alternatywy == "159" || numer_alternatywy == "162" || numer_alternatywy == "165" || numer_alternatywy == "168" ||
        numer_alternatywy == "171" || numer_alternatywy == "174" || numer_alternatywy == "177" || numer_alternatywy == "180" || numer_alternatywy == "183" ||
        numer_alternatywy == "186" || numer_alternatywy == "189" || numer_alternatywy == "192" || numer_alternatywy == "195" || numer_alternatywy == "198" ||
        numer_alternatywy == "201" || numer_alternatywy == "204" || numer_alternatywy == "207" || numer_alternatywy == "210" || numer_alternatywy == "213" ||
        numer_alternatywy == "216" || numer_alternatywy == "219" || numer_alternatywy == "222" || numer_alternatywy == "225" || numer_alternatywy == "228" ||
        numer_alternatywy == "231" || numer_alternatywy == "234" || numer_alternatywy == "237" || numer_alternatywy == "240" || numer_alternatywy == "243" ||
        numer_alternatywy == "246" || numer_alternatywy == "249" || numer_alternatywy == "252" || numer_alternatywy == "255" || numer_alternatywy == "258" ||
        numer_alternatywy == "261" || numer_alternatywy == "264" || numer_alternatywy == "267" || numer_alternatywy == "270" || numer_alternatywy == "273" ||
        numer_alternatywy == "276" || numer_alternatywy == "279" || numer_alternatywy == "282" || numer_alternatywy == "285" || numer_alternatywy == "288" ||
        numer_alternatywy == "291" || numer_alternatywy == "294" || numer_alternatywy == "297" || numer_alternatywy == "300")
    
{
    
    
if  (numer_alternatywy == "300")
{


keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	
	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


}


else
{  
    
	
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);

	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


}


}

else {
    
    
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);

	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);

	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V    
    
    
}


}


//===============================================================================================================================================================================


//2 paczki - UKP1//
if (wiersze_paczek == 8)
{
    
    if (numer_alternatywy == "2" || numer_alternatywy == "4" || numer_alternatywy == "6" || numer_alternatywy == "8" || numer_alternatywy == "10" || 
    numer_alternatywy == "12" || numer_alternatywy == "14" || numer_alternatywy == "16" || numer_alternatywy == "18" || numer_alternatywy == "20" ||
    numer_alternatywy == "22" || numer_alternatywy == "24" || numer_alternatywy == "26" || numer_alternatywy == "28" || numer_alternatywy == "30" ||
    numer_alternatywy == "32" || numer_alternatywy == "34" || numer_alternatywy == "36" || numer_alternatywy == "38" || numer_alternatywy == "40" ||
    numer_alternatywy == "42" || numer_alternatywy == "44" || numer_alternatywy == "46" || numer_alternatywy == "48" || numer_alternatywy == "50" ||
    numer_alternatywy == "52" || numer_alternatywy == "54" || numer_alternatywy == "56" || numer_alternatywy == "58" || numer_alternatywy == "60" ||
    numer_alternatywy == "62" || numer_alternatywy == "64" || numer_alternatywy == "66" || numer_alternatywy == "68" || numer_alternatywy == "70" ||
    numer_alternatywy == "72" || numer_alternatywy == "74" || numer_alternatywy == "76" || numer_alternatywy == "78" || numer_alternatywy == "80" ||
    numer_alternatywy == "82" || numer_alternatywy == "84" || numer_alternatywy == "86" || numer_alternatywy == "88" || numer_alternatywy == "90" ||
    numer_alternatywy == "92" || numer_alternatywy == "94" || numer_alternatywy == "96" || numer_alternatywy == "98" || numer_alternatywy == "100" ||
    numer_alternatywy == "102" || numer_alternatywy == "104" || numer_alternatywy == "106" || numer_alternatywy == "108" || numer_alternatywy == "110" || 
    numer_alternatywy == "112" || numer_alternatywy == "114" || numer_alternatywy == "116" || numer_alternatywy == "118" || numer_alternatywy == "120" ||
    numer_alternatywy == "122" || numer_alternatywy == "124" || numer_alternatywy == "126" || numer_alternatywy == "128" || numer_alternatywy == "130" ||
    numer_alternatywy == "132" || numer_alternatywy == "134" || numer_alternatywy == "136" || numer_alternatywy == "138" || numer_alternatywy == "140" ||
    numer_alternatywy == "142" || numer_alternatywy == "144" || numer_alternatywy == "146" || numer_alternatywy == "148" || numer_alternatywy == "150" ||
    numer_alternatywy == "152" || numer_alternatywy == "154" || numer_alternatywy == "156" || numer_alternatywy == "158" || numer_alternatywy == "160" ||
    numer_alternatywy == "162" || numer_alternatywy == "164" || numer_alternatywy == "166" || numer_alternatywy == "168" || numer_alternatywy == "170" ||
    numer_alternatywy == "172" || numer_alternatywy == "174" || numer_alternatywy == "176" || numer_alternatywy == "178" || numer_alternatywy == "180" ||
    numer_alternatywy == "182" || numer_alternatywy == "184" || numer_alternatywy == "186" || numer_alternatywy == "188" || numer_alternatywy == "190" ||
    numer_alternatywy == "192" || numer_alternatywy == "194" || numer_alternatywy == "196" || numer_alternatywy == "198" || numer_alternatywy == "200")
    
{
    
    
if  (numer_alternatywy == "200")
{


keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	
	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
}

else
{  
    

keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	
	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 	
	

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	

pauza_1_1(max_czynnosci);


}


}

else {
    
    
keybd_event(0x09, 0, 0, 0); // TAB              
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

	
//Wklejam numer alternatywy
{
    HGLOBAL specyfikacja_liczba_paczek_zmienna = GlobalAlloc(GMEM_FIXED,strlen(specyfikacja_liczba_paczek_tekst) + 1); //text size + \0 character
    memcpy(specyfikacja_liczba_paczek_zmienna,specyfikacja_liczba_paczek_tekst,strlen(specyfikacja_liczba_paczek_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,specyfikacja_liczba_paczek_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  		


pauza_1_1(max_czynnosci);
	

// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	

pauza_1_1(max_czynnosci);

	
// Schodzê na materia³
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
		

pauza_1_1(max_czynnosci);


// Zaznaczam stary indeks klasy
keybd_event(0x11, 0, 0, 0); // CTRL                  
keybd_event(0x41, 0, 0, 0); // A                
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A   


pauza_1_1(max_czynnosci);


//Wklejam numer alternatywy
{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam 
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V              
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
   
    
}


}

else
{
          
}


pauza_1_1(max_czynnosci);


// Wciskam - ZAPAMIÊTUJÊ
keybd_event(0x11, 0, 0, 0); // CTRL                 
keybd_event(0x53, 0, 0, 0); // S                 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S 

	
//rozpoznanie koloru
        os_x = 1250;
        os_y = 390;
         
do
{        
         
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


a = rr;
b = gg;
c = bb;
    

pauza_1_1(max_czynnosci);


}   while (KOLOR_BIALY_1_RGB_1);  

//cout << "red: " << a <<std::endl;
//cout << "green: " << b <<std::endl;
//cout << "blue: " << c <<std::endl;
	
cout<<"UTWORZONA"<<std::endl;

}

else {


cout<<"Zmieñ specyfikacjê i wciœniej (t/n): ";
std::cin>>tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie;


}

if (tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie == "t")
{
	

pauza_1_1(max_czynnosci);


// Klikam na puste miejscu SAP
SetCursorPos( PUSTE_POLE_SAP_2 ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
    

pauza_1_1(max_czynnosci);


// Wciskam - ZAPAMIÊTUJÊ
keybd_event(0x11, 0, 0, 0); // CTRL                 
keybd_event(0x53, 0, 0, 0); // S                 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S 

	
cout<<" - UTWORZONA"<<std::endl;
	
}


else {
          
}

	
//rozpoznanie koloru
        os_x = 1250;
        os_y = 390;
         
do
{        
         
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


a = rr;
b = gg;
c = bb;
    

pauza_1_1(max_czynnosci);


 }   while (KOLOR_BIALY_1_RGB_1);  
//rozpoznanie koloru
 
         
alternatywa++;  
alternatywa_poprzednia++;
paczka++; 
partia++;   

}
           

while( x == 't' && alternatywa <= liczba_alternatyw);	
    
    
cout<<" "<<std::endl;
cout<<"Powtórzyæ program (t/n): ";
std::cin >> y;
      
            
}
        
    
while( y == 't' );

if( y != 't' ) {
        
Sleep (250);
cout<<" "<<std::endl;
cout<<"Koniec programu"<<std::endl;
        
}


Sleep(100000);    
    
	
return 0;

}
