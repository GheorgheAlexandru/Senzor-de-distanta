# Senzor de Distanță Ultrasonic cu Arduino

Un sistem de detecție a distanței bazat pe Arduino folosind un senzor ultrasonic HC-SR04. 
Proiectul detectează proximitatea obiectelor (până la 10cm) și oferă feedback în timp real prin:
- Sunete de avertizare ajustabile (frecvența crește pe măsură ce obiectele se apropie)
- Indicator LED
- Afișare a măsurătorilor de distanță în consola serială

Cu cât obiectul este mai apropiat, cu atât mai rapid este ritmul bipului (intervale de 100-250ms).
Perfect pentru robotică, asistență la parcare sau aplicații de evitare a obstacolelor.

## Componente

- HC-SR04 (senzor ultrasonic)
- Arduino Uno
- 1x LED
- 1x Rezistență 220Ω
- 1x Buzzer
- Cabluri de conexiune

## Cum funcționează

1. Senzorul emite un impuls ultrasonic
2. Măsoară timpul necesar pentru ca ecoul să se întoarcă
3. Distanța este calculată și afișată în consola serială
4. Când distanța este mai mică de 10cm, buzzer-ul și LED-ul se activează
5. Frecvența alarmei se adaptează în funcție de proximitate

## Aplicații

- Măsurători de distanță în industrie
- Proiecte de robotică
- Sisteme de evitare a obstacolelor
- Dispozitive de siguranță