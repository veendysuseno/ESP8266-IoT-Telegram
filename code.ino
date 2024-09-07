/* Program Komunikasi IoT Telegram */

#include "CTBot.h"
CTBot myBot;

String ssid = "Veendy-Suseno";      //nama ssid wifi kalian
String pass = "Admin12345";         //password wifi kalian
String token = "XXXX";              //token bot baru kalian
const int id = XXXX;                //id telegram kalian

void setup(){
    Serial.begin(9600);
    Serial.println("Starting TelegramBot...");
    myBot.wifiConnect(ssid, pass);
    myBot.setTelegramToken(token);
    if (myBot.testConnection()) {
        Serial.println("Koneksi Bagus");
    } else {
        Serial.println("Koneksi Jelek");
    }
    myBot.sendMessage(id, "Hello from Indobot!");
    Serial.println("Pesan Terkirim");
}

void loop() {
}