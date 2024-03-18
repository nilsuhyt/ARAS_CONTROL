# ARAS_CONTROL
> [!NOTE]
> Telemtri paketi için oluşturulan structtan gelen verilerin tutulması için Aras_Control struct yapısını oluşturduk.
> Bu struct yapısı için test isminde bir değişken tanımladık.
> 
> ```
> typedef struct {
> int16_t carrier_landing_speed;
> int16_t payload_landing_speed;
> uint32_t carrier_pressure;
> float payload_GPS_Latitude;
> float payload_GPS_Longitude;
> float payload_GPS_Altitude;
> uint8_t Seperation_State;
> }Aras_Control;
>Aras_Control test;
> ```

Test değişkeni altındaki verilerin kontrolunü sağlamak için  **uint8_t toplam**
