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

Test değişkeni altındaki verilerin kontrolunü sağlamak için  **uint8_t toplam** adında bir değişken tanımladık.

![Ekran görüntüsü 2024-03-22 232344](https://github.com/nilsuhyt/ARAS_CONTROL/assets/158216829/2db0baa2-beae-4dad-adf7-cd99550bef87)

