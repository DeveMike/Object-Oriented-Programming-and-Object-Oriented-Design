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