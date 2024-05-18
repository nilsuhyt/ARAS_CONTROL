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
> float payload_GPS_Altitude; // !!Veri gelip gelmediğini 0 ile kontrol ettik. 
> uint8_t Seperation_State;
> }Aras_Control;
>Aras_Control test;
> ```

Test değişkeni altındaki verilerin kontrolunü sağlamak için  **uint8_t toplam** adında bir değişken tanımladık.

![Ekran görüntüsü 2024-03-22 232344](https://github.com/nilsuhyt/ARAS_CONTROL/assets/158216829/2db0baa2-beae-4dad-adf7-cd99550bef87)

Toplam değişkeninin değerini binary sayı sistemine çevirdiğimizde kontrol ettiğimiz değerlerin hangisinin hatalı olduğunu görebileceğiz.

> [!TIP]
> 1. Taşıyıcı iniş hızında sapma durumu
> 2. Görev yükü iniş hızı istenilen değerde
> 3. Taşıyıcı basınç bilgisi alınıyor
> 4. Görev yükünden konum verisi alınamama durumu
> 5. Ayrılma gerçekleşmedi
>    
>  **toplam** değişkeni 19 değerini alır
> 
>  Binary sayı sisteminde hata [ 1 0 0 1 1] şeklinde gözükür
