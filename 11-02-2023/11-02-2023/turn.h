#pragma once
#include "priority.h"
#include <map>
#include <queue>
//אלישבע טופיק ויעל אילוז
//תודה רבה
using namespace std;
 	 template<class T>
     class turn
     {
         map<priority, queue<T>> tor;

     public:
         void enqueue(T t, priority p)
         {
             this->tor[p].push(t);
         }
         T dequeue()
         {
             if (tor[high].size() > 0)
             {
                 T a = tor[high].front();
                 this->tor[high].pop();
                 return a;
             }
             else {
                 if (this->tor[normal].size() > 0)
                 {
                     T a = tor[normal].front();
                     this->tor[normal].pop();
                     return a;
                 }
                 else {
                     if (this->tor[low].size() > 0)
                     {
                         T a = tor[low].front();
                         this->tor[low].pop();
                         return a;
                     }
                     else {
                         throw "errrrorrr";
                     }
                 }
             }
         }
         int count()
         {
         
                 return   this->tor[high].size() + this->tor[normal].size() + this->tor[low].size();
          
         }
     };

