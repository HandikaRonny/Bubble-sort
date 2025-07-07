# Bubble-sort

## Mengapa Bubble Sort Memiliki Kompleksitas O(n²)?

**Bubble Sort** adalah algoritma pengurutan sederhana yang bekerja dengan cara **membandingkan dua elemen yang bersebelahan**, lalu menukarnya jika urutannya salah. Proses ini dilakukan secara berulang sampai seluruh data dalam array berada dalam urutan yang benar.

Algoritma ini menggunakan **dua loop bersarang (nested loop)**:
- Loop luar menjalankan proses penyisiran (`pass`) sebanyak `n - 1` kali
- Loop dalam melakukan perbandingan antar elemen sebanyak `n - i - 1` kali di setiap pass

Jika ada `n` elemen, maka jumlah perbandingan dalam kasus terburuk adalah:

(n - 1) + (n - 2) + (n - 3) + ... + 1 = n(n - 1)/2


Jumlah ini termasuk dalam pertumbuhan kuadrat, atau disebut **kompleksitas waktu O(n²)**.

### Contoh Sederhana

Misalnya ada array dengan 5 elemen:

[5, 3, 1, 4, 2]


Maka proses Bubble Sort akan:
- Membandingkan dan mungkin menukar 4 kali pada pass pertama
- 3 kali pada pass kedua
- 2 kali pada pass ketiga
- 1 kali pada pass keempat

Total = **10 perbandingan** untuk 5 elemen  
Jika datanya 10 elemen → bisa jadi **45 perbandingan**  
Jika 100 elemen → bisa mencapai **4.950 perbandingan**

### Kesimpulan

Karena jumlah perbandingan bertambah secara kuadrat seiring bertambahnya data, **Bubble Sort memiliki kompleksitas waktu O(n²)**. Ini menjadikannya **tidak efisien untuk dataset besar**, dan lebih cocok digunakan untuk tujuan pembelajaran atau dataset kecil.
