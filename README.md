
# arduino-door-lock
This is my school project for alarm and a door system.<br />
---------------simulation link--------------<br />
https://www.tinkercad.com/things/kVaC3qjtVfd<br />
--------------------------------------------<br />
-------TR kod acıklaması-----------<br />
bu projede güvenlik sistemi olan bir kapıyı simüle ettim.<br />
servo motor kapıyı, buton güvenlik sisteminin acık veya kapalı olmasını, led sistemin durumunu temsil ediyor.<br />
eger butona basılmıs ise(basılı tutuluyor ise, simülasyonda shift tusuna basarken sol fare tıklamasıyla yapılabiliyor) sistem aktive oluyor ve led yeşile dönüyor.<br />
led yeşilken ve kullanıcının kapıya uzaklığına göre sesin tonu ve çalma frekansı değişiyor, kapının önüne gelirse kapı açılıyor.<br />
led kırmızıyken sistem kapalı, alarm açık oluyor. kullanıcı kapıya çok yaklaşırsa alarm çalıyor.<br />
-------ENG code explanation---------<br />
in this project i simulated a security system for an entrance door.<br />
the button represents on/of switch, the servo represents dooor, the buzzer represents alarm.<br />
the alarm system can be activated by pushing button(shift + left click). if a person get closer more than 100 cm, buzzer will make noise when the system off.<br />
if system turned on and a person get closer more than 100 cm the door will open and buzeer will make ryhtmic sounds depending on distance.<br />
![Daring Fulffy-Rottis](https://user-images.githubusercontent.com/77054769/113489830-208a2e80-94cf-11eb-9088-07882fc545c0.png)
