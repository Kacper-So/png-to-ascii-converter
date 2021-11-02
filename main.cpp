//Kacper Sobczak
//IMG PNG (600/200)
//Ustawienia cmd :
//czcionka : Copnsolas Rosmiar : 5
//uk³¹d : rozmiar buforu :1000/300 rozmiar okna : 960 /211

#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <time.h>
#include <cmath>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>

using namespace std;

void generator(int b)
{
    if(b>=0 && b<=3)
        cout<<"$";
    if(b>3 && b<=7)
        cout<<"@";
    if(b>7 && b<=11)
        cout<<"B";
    if(b>11 && b<=15)
        cout<<"%";
    if(b>15 && b<=19)
        cout<<"8";
    if(b>19 && b<=23)
        cout<<"&";
    if(b>23 && b<=27)
        cout<<"W";
    if(b>27 && b<=31)
        cout<<"M";
    if(b>31 && b<=35)
        cout<<"#";
    if(b>35 && b<=39)
        cout<<"*";
    if(b>39 && b<=44)
        cout<<"o";
    if(b>44 && b<=48)
        cout<<"a";
    if(b>48 && b<=52)
        cout<<"h";
    if(b>52 && b<=56)
        cout<<"k";
    if(b>56 && b<=60)
        cout<<"b";
    if(b>60 && b<=64)
        cout<<"d";
    if(b>64 && b<=68)
        cout<<"p";
    if(b>68 && b<=72)
        cout<<"q";
    if(b>72 && b<=76)
        cout<<"w";
    if(b>76 && b<=80)
        cout<<"m";
    if(b>80 && b<=84)
        cout<<"Z";
    if(b>84 && b<=88)
        cout<<"O";
    if(b>88 && b<=92)
        cout<<"0";
    if(b>92 && b<=96)
        cout<<"Q";
    if(b>96 && b<=100)
        cout<<"L";
    if(b>100 && b<=104)
        cout<<"C";
    if(b>104 && b<=108)
        cout<<"J";
    if(b>108 && b<=112)
        cout<<"U";
    if(b>112 && b<=116)
        cout<<"Y";
    if(b>116 && b<=120)
        cout<<"X";
    if(b>120 && b<=124)
        cout<<"z";
    if(b>124 && b<=128)
        cout<<"c";
    if(b>128 && b<=132)
        cout<<"v";
    if(b>132 && b<=136)
        cout<<"u";
    if(b>136 && b<=140)
        cout<<"n";
    if(b>140 && b<=144)
        cout<<"x";
    if(b>144 && b<=148)
        cout<<"r";
    if(b>148 && b<=152)
        cout<<"j";
    if(b>152 && b<=156)
        cout<<"f";
    if(b>156 && b<=160)
        cout<<"t";
    if(b>160 && b<=164)
        cout<<"/";
    if(b>164 && b<=168)
        cout<<"\\";
    if(b>168 && b<=172)
        cout<<"|";
    if(b>172 && b<=176)
        cout<<"(";
    if(b>176 && b<=180)
        cout<<")";
    if(b>180 && b<=184)
        cout<<"1";
    if(b>184 && b<=188)
        cout<<"{";
    if(b>188 && b<=192)
        cout<<"}";
    if(b>192 && b<=196)
        cout<<"[";
    if(b>196 && b<=200)
        cout<<"]";
    if(b>200 && b<=204)
        cout<<"?";
    if(b>204 && b<=208)
        cout<<"-";
    if(b>208 && b<=212)
        cout<<"_";
    if(b>212 && b<=216)
        cout<<"+";
    if(b>216 && b<=220)
        cout<<"~";
    if(b>220 && b<=224)
        cout<<"<";
    if(b>224 && b<=228)
        cout<<">";
    if(b>228 && b<=232)
        cout<<"i";
    if(b>232 && b<=236)
        cout<<"!";
    if(b>236 && b<=240)
        cout<<"1";
    if(b>240 && b<=244)
        cout<<"I";
    if(b>244 && b<=248)
        cout<<";";
    if(b>248 && b<=252)
        cout<<":";
    if(b>252 && b<=255)
        cout<<",";
}

int main()
{
    int a,h,scale;
    sf::Image img;
    sf::Color color;
    img.loadFromFile("img.png");
    sf::Vector2u img_size=img.getSize();
    a=img_size.x;
    h=img_size.y;
    for(int i=0;i<=h;i++)
    {
        for(int j=0;j<=a;j++)
        {
            color=img.getPixel(j,i);
            generator(color.r*0.299+color.g*0.587+color.b*0.114);
        }
        cout<<endl;
    }
}
