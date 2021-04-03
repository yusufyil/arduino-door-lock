# arduino-door-lock
This is my school project for alarm and a door system.
---------------simulation link--------------
https://www.tinkercad.com/things/kVaC3qjtVfd
--------------------------------------------
-------TR kod acıklaması-----------
bu projede güvenlik sistemi olan bir kapıyı simüle ettim.
servo motor kapıyı, buton güvenlik sisteminin acık veya kapalı olmasını, led sistemin durumunu temsil ediyor.
eger butona basılmıs ise(basılı tutuluyor ise, simülasyonda shift tusuna basarken sol fare tıklamasıyla yapılabiliyor) sistem aktive oluyor ve led yeşile dönüyor.
led yeşilken ve kullanıcının kapıya uzaklığına göre sesin tonu ve çalma frekansı değişiyor, kapının önüne gelirse kapı açılıyor.
led kırmızıyken sistem kapalı, alarm açık oluyor. kullanıcı kapıya çok yaklaşırsa alarm çalıyor.
-------ENG code explanation---------
in this project i simulated a security system for an entrance door.
the button represents on/of switch, the servo represents dooor, the buzzer represents alarm.
the alarm system can be activated by pushing button(shift + left click). if a person get closer more than 100 cm, buzzer will make noise when the system off.
if a person get closer mor than 100 cm. the door will open and buzeer will make ryhtmic sounds depending on distance.
