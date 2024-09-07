# ESP8266 IoT Telegram

## Description:

- Telegram is a chat messaging application that allows users to send secret chat messages that are end-to-end encrypted for added security. The Telegram chat application has a clean interface and has various features, one of which can be used for IoT.

## Steps to Set Up a Telegram Bot

- First install the ArduinoJson and CTBot libraries on the Arduino IDE via the Library Manager. <br/>
- On Telegram, search for BotFather. <br/>
  ![BotFather Telegram Bot](img/1.png)<br/>

- Open BotFather > click Start > type /newbot > name the bot > give the bot a username > Save the token given to be entered into the program later. To enter the newly created bot, you can click the link given in the section after "You will find it at ...", and once you are in you can type /start. <br/>
  ![BotFather Telegram Bot](img/2.png)<br/>
- New bot creation image. <br/>

  ![BotFather Telegram Bot](img/3.png)<br/>

- Image of the token obtained

- After that, we need our Telegram ID by: searching for IDBot > clicking Start > typing /getid.
  ![BotFather Telegram Bot](img/4.png)<br/>
- Telegram ID image obtained

## Component (Tools & Materials):

- NodeMCU ESP8266 = 1 unit;

## Interface:

![Interface](img/5.interface.png)<br/>

## Conclusion:

- In this project, NodeMCU ESP8266 will send a “Hello from Indobot” message to our telegram.
