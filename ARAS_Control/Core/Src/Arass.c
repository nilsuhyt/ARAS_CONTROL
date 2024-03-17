/*
 * Arass.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Nilsu Hayta
 */

#include<stdio.h>
#include"Arass.h"


typedef struct {
int16_t carrier_landing_speed;
int16_t payload_landing_speed;
uint32_t carrier_pressure;
float payload_GPS_Latitude;
float payload_GPS_Longitude;
float payload_GPS_Altitude;
uint8_t Seperation_State;
}Aras_Control;

Aras_Control test;

//Aras algoritması uydu yazılımına entegre edildiğinde aşağıdaki veriler telemetri paketi için
//oluşturulan structan extern edilecektir.Deneme maksatlı bu verilere değerler atanmıştır.
//Telemetri paketi için oluşturulan structaki verilerde yapılan değişiklik bu kısıma da yansıtılmalıdır.

int16_t Carrier_Landing_Speed =12;
int16_t Payload_Landing_Speed =9;
uint32_t Carrier_Pressure=10;
float Payload_GPS_Latitude=10;
float Payload_GPS_Longitude=10;
float Payload_GPS_Altitude=10;
uint8_t Seperation_Sequence=1;
uint8_t toplam ;


uint8_t ArasControlFunction()
{
	test.carrier_landing_speed = Carrier_Landing_Speed ;
	test.payload_landing_speed = Payload_Landing_Speed ;
	test.carrier_pressure = Carrier_Pressure;
	test.payload_GPS_Latitude = Payload_GPS_Latitude;
	test.payload_GPS_Longitude= Payload_GPS_Longitude;
	test.payload_GPS_Altitude=Payload_GPS_Altitude;
	test.Seperation_State = Seperation_Sequence;


	//TASIYICI INIS HIZI //

          if ((12 <= test.carrier_landing_speed ) && (test.carrier_landing_speed <= 14))
           {
             toplam = 0;
           }
          else
           {
    	     toplam+=16;
           }
     //GOREV YUKU INIS HIZI

          if ((6 <= test.payload_landing_speed) && (test.payload_landing_speed<= 8 ))
           {

           }
          else
           {
        	 toplam+=8;
           }
     //TASIYICI BASINC BILGISI

          if (test.carrier_pressure !=0)
           {

           }
          else
           {
        	  toplam+=4;
           }
     //GOREV YUKU KONUM BILGISI

          if (test.payload_GPS_Latitude!=0)
           {
        	 if(test.payload_GPS_Longitude!=0)
        	 {
        		 if(test.payload_GPS_Altitude!=0)
        		 {

        		 }
        	 }

           }
          else
           {
        	  toplam+=2;
           }
     //AYRILMA DURUMU

          if (test.Seperation_State==1)
           {

           }
          else
           {
        	  toplam+=1;
           }

 return toplam;

}


