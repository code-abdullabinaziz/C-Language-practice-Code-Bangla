সি-প্রোগ্রামিং বা অন্য যেকোনো ল্যাঙ্গুয়েজে Float এবং Double উভয়ই দশমিক সংখ্যা (Fractional numbers) সংরক্ষণের জন্য ব্যবহৃত হয়।

কিন্তু এদের মধ্যে মূল পার্থক্য হলো এদের Precision বা নিখুঁত মান ধরে রাখার ক্ষমতা এবং মেমরি ব্যবহারের পরিমাণের ওপর।

Float: এটি মেমরিতে সাধারণত ৪ বাইট (৩২ বিট) জায়গা নেয়।

Double: এটি মেমরিতে ৮ বাইট (৬৪ বিট) জায়গা নেয়। অর্থাৎ এটি ফ্লোট-এর দ্বিগুণ জায়গা দখল করে।

Float: এটি দশমিকের পর প্রায় ৬ থেকে ৭ ঘর পর্যন্ত সঠিক মান দিতে পারে।

Double: এটি দশমিকের পর প্রায় ১৫ থেকে ১৬ ঘর পর্যন্ত নিখুঁত মান দিতে পারে।

Float: যখন মেমরি বা র‍্যাম (RAM) কম থাকে এবং খুব বেশি নিখুঁত মানের প্রয়োজন হয় না (যেমন: গ্রাফিক্স কার্ডের কাজ বা সাধারণ হিসাব), তখন এটি ব্যবহার করা হয়।

Double: বৈজ্ঞানিক গণনা (Scientific Calculation), জটিল গাণিতিক হিসাব বা আর্থিক লেনদেনের ক্ষেত্রে যেখানে দশমিকের পরের মানগুলো খুব গুরুত্বপূর্ণ, সেখানে ডাবল ব্যবহার করা হয়।

   
//float Data Types
#include <stdio.h>
#include <strings.h>
   int main() {
   float a = 123.123456789;

   printf("float value = %.9f\n", a); //wrong output: 123.123458862;
   return 0;
}

//double Data Types
#include <stdio.h>

int main()
{
   double b = 123.123456789123456;

   printf("double value = %.15lf\n", b); //wrong output: 123.123456789123450
   return 0;
}

//right output

/*
//float Data Types
#include <stdio.h>
#include <strings.h>
   int main() {
   float a = 123.123456789;

   printf("float value = %.5f\n", a);
   return 0;
}

//double Data Types
#include <stdio.h>

int main()
{
   double b = 123.123456789123456;

   printf("double value = %.9lf\n", b);
   return 0;
}

*/


১. রাউন্ডিংয়ের "গোল্ডেন রুল"
   
প্রোগ্রামিংয়ে যখন দশমিকের ঘর নির্দিষ্ট করে দেওয়া হয়, তখন কম্পিউটার সবসময় তার পরের ঘরটি (Next Digit) চেক করে।
   
সংখ্যা: 123.12342 6 789

এখানে ৫ম ঘর হলো: 2

এবং ৬ষ্ঠ ঘর (যেটি বাদ পড়বে) হলো: 6

নিয়মটি হলো: যদি বাদ পড়া প্রথম ঘরটি ৫ বা তার বেশি হয়, তবে আগের ঘরের সাথে ১ যোগ হবে।
যেহেতু এখানে ৬ষ্ঠ ঘরটি 6, যা ৫-এর চেয়ে বড়, তাই এটি ৫ম ঘরের 2-এর সাথে ১ যোগ করে সেটিকে 3 বানিয়ে দিয়েছে।

৩. যদি ৬ না হয়ে ৪ হতো?
   
যদি কোডটি এমন হতো: float a = 123.123424...
   
তাহলে ৬ষ্ঠ ঘরটি হতো 4। যেহেতু ৪ সংখ্যাটি ৫-এর ছোট, তাই কম্পিউটার কিছুই যোগ করত না। তখন আউটপুট আসত: 123.12342



#include <stdio.h>

int main() {
    float f = 1.23f;
    double d = 1.23;

    printf("float  (8 ghor): %.8f\n", f);
    printf("double (8 ghor): %.8lf\n\n", d);

    printf("float  (15 ghor): %.15f\n", f);
    printf("double (15 ghor): %.15lf\n", d);

    return 0;
}




   
-----------
double-এর ক্ষেত্রেও ঠিক একই নিয়ম কাজ করে। সি ল্যাঙ্গুয়েজে float, double বা long double—সব ধরনের ডেসিমাল (দশমিক)

ডাটা টাইপের জন্যই printf একই রাউন্ডিং (Rounding) নিয়ম অনুসরণ করে।

#include <stdio.h>
int main() {
    double x = 123.123426789; // এখানেও ৫ম ঘরের পরে ৬ আছে
    double y = 123.123424789; // এখানে ৫ম ঘরের পরে ৪ আছে

    printf("Result 1 (Round Up):   %.5lf\n", x); 
    printf("Result 2 (No Change):  %.5lf\n", y);

    return 0;
}
