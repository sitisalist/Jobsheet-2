# Jobsheet-2

A. ESP32 Capacitive Touch Sensor

6. Buatlah program agar LED menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh.


https://user-images.githubusercontent.com/121160420/208930725-213c5362-43e7-4b6d-9c80-32e1564d5c7f.mp4

7. Buatlah program agar ketika sensor disentuh, LED menyala Blink.


https://user-images.githubusercontent.com/121160420/208930853-f0141a48-e599-4ec2-95e6-5a35fe3e1ddd.mp4

8. Buatlah program agar ketika LED menyala, maka pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh.

video

9. Tambahkan 2 LED sehingga pada rangkaian terdapat 3 LED. Buatlah program agar ketika sensor disentuh, LED menyala menjadi running LED. Nyala running LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu.


https://user-images.githubusercontent.com/121160420/208932568-ab22639c-d7eb-4fb5-b3a6-2b01a678e870.mp4

B. Mengakses Sensor DHT 11 (Single Wire / BUS)

Buatlah program seperti pada script di bawah ini untuk mengakses sensor DHT11. Kemudian upload program tersebut pada ESP32 dan dokumentasikan hasilnya.

video

Buatlah program agar ketika suhu rungan mencapai 30 derajat celcius, maka ESP32 akan menyalakan LED Merah dan buzzer secara beep (blink). Apabila suhu dibawah 30 derajat, ESP32 akan mematikan buzzer dan menyalakan LED berbentuk running LED seperti pada Percobaan A. Kemudian dokumentasikan hasilnya.

video

C. Mengakses Sensor RFID (SPI Communication)

Dekatkan kartu atau Tag RFID ke RFID Reader. Amati dan analisis cara kerja 
programnya.

https://user-images.githubusercontent.com/121160420/208937062-2d83273d-8f6e-453e-8a50-b71be1f8956a.mp4

Buatlah program agar Tag RFID yang terbaca sebelumya dapat digunakan untuk hak akses. Apabila Tag RFID didekatkan pada Reader, maka LED Hijau akan menyala, servo akan bergerak ke kanan (lalu kembali ke posisi semula setelah 3 detik) dan di Serial Monitor akan tertampil pesan “Akses Diterima, Silahkan Masuk”. Apabila Tag RFID tidak dikenali, maka LED Merah akan menyala, servo tidak bergerak dan di Serial Monitor akan tertampil pesan “Akses Ditolak”. Gunakan Tag RFID lain untuk mencoba.

https://user-images.githubusercontent.com/121160420/208937924-84b1f17e-c04c-48cc-a4ee-7574ff1fd393.mp4
