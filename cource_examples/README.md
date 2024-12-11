# Olio-ohjelmoinnin esimerkkitehtäviä

## Esim1

Demosin Gitin käyttöä

## Esim2

Esimerkkejä funktioista ja header-/cpp-tiedostojen käytöstä

## Esim3

Kertoman ja binomikertoimen laskeminen. 

## try_catch_esim

Sovelluksessa on factorial-metodi, jolle on määritelty virhetilanne (eli kun n<0) joka "nostaa" runtime_errorin. 
Tällöin tarvitaan <b>stdexcept</b> kirjasto
Funktion toteutus on siis seuraava:
<pre>
#include &lt;stdexcept&gt;

int factorial(int n)
{
    if(n<0){
        //jos n < 0 nostetaan runtime error
        throw std::runtime_error("n ei saa olla negatiivinen.");
    }
    else{
        int result=1;
        for(int row=1; row <= n; row++){
            result= row*result;
        }
        return result;
    }
}

</pre>
Tällaista metodia kutsuttaessa kannattaa käyttää <b>try-catch rakennetta</b> seuraavasti:
<pre>
    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        result = factorial(num);
        cout << "Luvun " << num << " kertoma = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
</pre>

Kun poikkeus eli **exception** esiintyy, hypätään tuohon catch-lohkoon. Siinä luon olion nimeltään **e**.
Tuollaisella oliolla on metodi **what()**, joka tulostaa sen virheilmoituksen, joka factorial funktiossa määriteltiin.

Katso video https://youtu.be/Y0G3n5nCQI0

## if_else_if

Esimerkki siitä miten yksittäisen if-lauseet on usein järkevää korvata if-else sarjalla.
Katso video https://youtu.be/Z2OklZcqJe4

## Esim5

Esimerkissä havainnollistetaan eri tapoja luoda olio: eli 
<ul>
<li>Automaattinen olio</li>
<li>Dynaaminen olio</li>
<li>Smart pointterilla luotu Dynaaminen olio</li>
</ul>

## Esim6

Esimerkissä havainnollistetaan funktion ylikuormittamista. Ja siis tässä esimerkissä Luokan Student konstruktorista on kaksi eri versiota:
<ul>
<li>Student(string, string, string, int)</li>
<li>Student()</li>
</ul>
Lisäksi setAge()-metodiin on lisätty ehto, että age arvon tulisi olla positiivinen.

## Esim7

Oliolistan luonti **vectorin** avulla. Esimerkissä luodaan Cat-luokka, josta sitten luodaan kolme oliota.
Nämä kolme oliota lisätään catList nimiseen vektoriin. Nyt listan käsittelyssä voidaan hyödyntää for-looppia.
Tästä olisi tietysti enemmän hyötyä, jos olioita olisi esimerkiksi 100.

## Esim8

Esimerkissä havainnollistetaan **perintää**. Siinä luodaan kantaluokka **Animal**, josta periytetään luokat **Cat** ja **Elephant**.
Ideana on, että Animal luokkaan tulee kaikille yhteiset ominaisuudet ja Cat- ja Elephant-luokkaan, niiden erityisominaisuuksia.

Esimerkissä myös havainnollistetaan **metodin ylikirjoittamista**. Kantaluokassa Animal määritellään metodi printData, jonka perivät luokat voivat halutessaan ylikirjoittaa. Cat-luokassa printData on ylikirjoitettu, mutta Elephant-luokassa ei. Joten Elephant-luokan oliot käyttävät Animal-luokan printData-metodia.

## kooste1

ClassRoom luokka sisältää Student-luokan olioita. Esimerkissä luodaan kolme Student-luokan oliota pinoon ja niitä ei siis tarvitse itse deletoida. Yksi Student olio luodaan dynaamiseen muistiin ja se tuhotaan ClassRoom luokan destruktorissa.

## kooste2

LoginForn luokka sisältää Form luokan olion. Tarkoitus oli esitellä kuinka graafisia Qt-sovelluksia tehdessä Form-luokan sisällä luodaan uusi Form luokan olio. Esimerkistä ei tullut niin selkeä, kuin olin suunnitellut.

## qt_parent_example

Esimerkissä FisrtClass luokassa luodaan SecondClass olio, jolle annetaan parent-olioksi, nykyinen olio.

## http_example

Luokassa tehdään http-request ja käytetään signal-slot systeemiä ja muutetaan http-response json-objektiksi.

## perinta_esim.

Esimerkissä on kantaluokka **Animal** ja perivä luokka **Dog**. Dog-luokassa ylikirjoitetaan Animal luokan metodi **callOut**.

Jos jostain syystä halutaan luoda Dog-luokan olio lauseella
<pre>
Animal *objD=new Dog;
</pre>
on **Animal luokan destruktori määriteltävä virtuaaliseksi**.
Ja edellä siis objD on Animal-luokan osoitin, joka osoittaa Dog-tyyppistä oliota.

Huom!

<ul>
<li>Jos Animal-luokassa on virtuaalisia funktioita, ja niitä kutsutaan objD-osoittimen kautta, kutsutaan Dog-luokan ylikirjoittamaa versiota.</li>
<li>Jos funktiot eivät ole virtuaalisia, kutsutaan Animal-luokan versiota, vaikka kyseessä olisi Dog-olio.</li>
</ul>

## GrahicalApp1

Qt Widget sovellus, jossa luetaan tekstiä LineEdit:stä (teksti laatikko) ja tulostetaan tekstiä labeliin.
Esimerkissä harjoitellaan myös toisen ikkunan (Widgetin) avaamista ja datan vientiä siihen.