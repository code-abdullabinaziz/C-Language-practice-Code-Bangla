সি ল্যাঙ্গুয়েজে (C Language) Data Type (ডাটা টাইপ) হলো এমন একটি নির্দেশক, যা কম্পাইলারকে বলে দেয় 

একটি ভেরিয়েবলের ভেতরে কী ধরণের তথ্য বা ডেটা জমা রাখা হচ্ছে এবং 

সেই ডেটার জন্য মেমোরিতে (RAM) ঠিক কতটুকু জায়গা (Bytes) বরাদ্দ করতে হবে।




সি ল্যাঙ্গুয়েজে ডাটা টাইপ কত প্রকার? (Classification)

সি ল্যাঙ্গুয়েজে ডাটা টাইপকে প্রধানত ৪টি ভাগে ভাগ করা যায়:

Primary / Primitive Data Types (মৌলিক ডাটা টাইপ): এগুলো সি ল্যাঙ্গুয়েজের একদম বিল্ট-ইন বা মূল ডাটা টাইপ।

Data Type Modifiers (ডাটা টাইপ মডিফায়ার)
    
Derived Data Types (লব্ধ ডাটা টাইপ): মৌলিক ডাটা টাইপগুলোর ওপর ভিত্তি করে এগুলো তৈরি হয়।

User-Defined Data Types (ইউজার-ডিফাইন্ড ডাটা টাইপ): প্রোগ্রামার নিজে নিজের সুবিধা অনুযায়ী এই টাইপগুলো তৈরি করে নেয়।

Void Data Type: এর মানে হলো "Empty" বা কোনো টাইপ নেই (সাধারণত ফাংশনের রিটার্ন টাইপ হিসেবে ব্যবহৃত হয়)।


১. Primary / Primitive Data Types (সবচেয়ে গুরুত্বপূর্ণ)

কোড লেখার সময় সবচেয়ে বেশি এই ৪টি মৌলিক ডাটা টাইপ ব্যবহার করা হয়

Primary বা Primitive Data Type (মৌলিক ডাটা টাইপ) বলা হয় সি ল্যাঙ্গুয়েজের একদম বিল্ট-ইন বা আদিম ডাটা টাইপগুলোকে,
যেগুলো সি ল্যাঙ্গুয়েজে আগে থেকেই তৈরি করা আছে 
এবং যেগুলোকে অন্য কোনো ডাটা টাইপের সাহায্য ছাড়া একদম স্বাধীনভাবে ব্যবহার করা যায়।




সি ল্যাঙ্গুয়েজের ৪টি মূল Primitive Data Type:

int (Integer)
কাজ: যেকোনো পজিটিভ বা নেগেটিভ পূর্ণসংখ্যা (যার কোনো দশমিক অংশ নেই) জমা রাখতে এটি ব্যবহৃত হয়।

সাইজ: সাধারণত 4 Bytes (৩২ বিট)।

উদাহরণ: int roll = 15; বা int temperature = -5;


float (Floating-point)
কাজ: ছোট বা সাধারণ দশমিক সংখ্যা (Fractional Numbers) মেমোরিতে রাখার জন্য এটি ব্যবহৃত হয়। 
এটি দশমিকের পর ৬ থেকে ৭ ঘর পর্যন্ত নিখুঁত মান দিতে পারে।

সাইজ: 4 Bytes (৩২ বিট)।

উদাহরণ: float gpa = 3.89; বা float price = 120.50;


double (Double precision floating-point)
    
কাজ: এটিও দশমিক সংখ্যার জন্যই ব্যবহৃত হয়, তবে যদি সংখ্যাটি 
অনেক বড় হয় কিংবা দশমিকের পর অনেক বেশি ঘরপর্যন্ত নিখুঁত মানের প্রয়োজন হয় 
(যেমন বিজ্ঞানের কোনো হিসাব বা পাই-এর মান), তখন এটি ব্যবহার করা হয়। এটি দশমিকের পর ১৫ ঘর পর্যন্ত নিখুঁত মান ধরে রাখতে পারে।

সাইজ: 8 Bytes (৬৪ বিট)।

উদাহরণ: double pi = 3.141592653589793;


char (Character)
    
কাজ: যেকোনো একটি একক ক্যারেক্টার, লেটার, নম্বর বা স্পেশাল সিম্বলকে সিঙ্গেল কোটেশনের (' ') ভেতরে জমা রাখতে এটি ব্যবহৃত হয়।

সাইজ: 1 Byte (৮ বিট)।

উদাহরণ: char status = 'A'; বা char symbol = '$';






২. Data Type Modifiers (ডাটা টাইপ মডিফায়ার)

মূল ডাটা টাইপগুলোর মেমোরি সাইজ বা মানের রেঞ্জ ছোট/বড় করার জন্য এই মডিফায়ারগুলো মূল ডাটা টাইপের আগে বসানো হয়:

signed: ধনাত্মক ও ঋণাত্মক (Positive/Negative) দুই ধরণের সংখ্যাই রাখতে পারে (ডিফল্টভাব থাকে)।

unsigned: শুধু শূন্য এবং ধনাত্মক সংখ্যা রাখতে পারে (ঋণাত্মক সংখ্যা রাখা যায় না, ফলে ধনাত্মক দিকের রেঞ্জ দ্বিগুণ হয়ে যায়)।

short: মেমোরি সাইজ কমিয়ে অর্ধেক করে ফেলে (যেমন: short int ২ বাইট নেয়)।

long: মেমোরি সাইজ বাড়িয়ে বড় সংখ্যা রাখার ব্যবস্থা করে (যেমন: long int বা long long int ৮ বাইট পর্যন্ত নেয়)।


মডিফায়ারসহ সব ভ্যারিয়েশন (All Combinations):

signed char (1 Byte)

unsigned char (1 Byte)

short int বা short (2 Bytes)

unsigned short int (2 Bytes)

int / signed int (2 or 4 Bytes)

unsigned int (2 or 4 Bytes)

long int / long (4 Bytes)

unsigned long int (4 Bytes)

long long int (8 Bytes)

unsigned long long int (8 Bytes)

float (4 Bytes)

double (8 Bytes)

long double (10, 12 or 16 Bytes depending on compiler)





৩. Derived Data Types (লব্ধ ডাটা টাইপ)

যখন এক বা একাধিক মৌলিক ডাটা টাইপকে জোড়া দিয়ে নতুন কোনো ফরম্যাট তৈরি করা হয়, তখন তাকে ডেরাইভড ডাটা টাইপ বলে।

Array (অ্যারে): একই ধরণের একাধিক ডেটা একসাথে রাখার জন্য (যেমন আমরা স্ট্রিং তৈরির জন্য char name[20]; ব্যবহার করি)।

Pointer (পয়েন্টার): যা কোনো ডেটা না রেখে অন্য কোনো ভেরিয়েবলের মেমোরি অ্যাড্রেস বা ঠিকানা ধরে রাখে।

Function (ফাংশন): নির্দিষ্ট কোনো কাজের জন্য তৈরি করা কোড ব্লক।





৪. User-Defined Data Types (ব্যবহারকারী-নির্ধারিত ডাটা টাইপ)

বড় প্রজেক্ট বা সফটওয়্যার তৈরি করার সময় প্রোগ্রামার নিজের ডেটা স্ট্রাকচার সাজানোর জন্য এগুলো তৈরি করে:

struct (Structure): ভিন্ন ভিন্ন ডাটা টাইপকে একসাথে একটি প্যাকেজ বানানোর জন্য (যেমন স্টুডেন্টের আইডি, নাম, জিপিএ একসাথে রাখা)।

union: স্ট্রাকচারের মতোই, তবে এটি মেমোরি বাঁচানোর জন্য একই জায়গা শেয়ার করে কাজ করে।

typedef / enum: কোডকে আরও সহজ করে চেনার জন্য কাস্টম নাম বা লিস্ট তৈরি করা।





৫. Void / Empty Data Type 

void: এর অর্থ হলো "কোনো মান নেই" (No value / Empty)। সাধারণত কোনো ফাংশন থেকে মান
রিটার্ন না করলে তার ডাটা টাইপ void দেওয়া হয় (যেমন: void main()) 
অথবা মেমোরি পয়েন্টার হিসেবে (void *ptr) ব্যবহার করা হয়।

#include <stdio.h>

int main() {
    int studentId = 101;       // Primary Type: int
    float examScore = 85.5;    // Primary Type: float
    char finalGrade = 'A';     // Primary Type: char

    printf("ID: %d, Score: %.1f, Grade: %c\n", studentId, examScore, finalGrade);
    return 0;
}



Boolean Data Type-----

মূল বা আদি সি ল্যাঙ্গুয়েজে (ANSI C বা C89 ভার্সনে) সরাসরি bool নামে কোনো ডাটা টাইপ ছিল না। 
তখন সত্য বা মিথ্যা বোঝানোর জন্য পূর্ণসংখ্যা ব্যবহার করা হতো—0 মানে মিথ্যা (False) এবং 
0 বাদে অন্য যেকোনো সংখ্যা (সাধারণত 1) মানে সত্য (True)।

কিন্তু ১৯৯৯ সালে যখন সি-এর নতুন ভার্সন C99 আসে, তখন সি ল্যাঙ্গুয়েজে অফিশিয়ালি বুলিয়ান ডাটা টাইপ যোগ করা হয়।


সি ল্যাঙ্গুয়েজে bool ব্যবহারের নিয়ম
সি-তে বুলিয়ান টাইপ ব্যবহার করার দুটি উপায় আছে:

উপায় ১: আধুনিক নিয়ম (stdbool.h হেডার ফাইল ব্যবহার করে)
এটি সবচেয়ে সহজ এবং মডার্ন উপায়। কোডের শুরুতে  জাস্ট #include <stdbool.h> লিখতে হবে।
এটি যোগ করলে অন্য সব ল্যাঙ্গুয়েজের মতো সরাসরি bool, true, এবং false শব্দগুলো ব্যবহার করা যাবে।


#include <stdio.h>
#include <stdbool.h> // bool, true, false ব্যবহার করার জন্য এই হেডার ফাইল লাগবে

int main() {
    bool isPassed = true;
    bool isFailed = false;

    //  bool এর মান প্রিন্ট করতে ফরম্যাট স্পেসিফায়ার হিসেবে %d ব্যবহার করতে হয়
    printf("Passed Status: %d\n", isPassed); // আউটপুট আসবে: 1
    printf("Failed Status: %d\n", isFailed); // আউটপুট আসবে: 0

    // কন্ডিশনে ব্যবহার:
    if (isPassed) {
        printf("Congratulations! You passed the exam.\n");
    }

    return 0;
}


২: ব্যাকগ্রাউন্ডের আসল রূপ (_Bool ব্যবহার করে)

যদি কোনো হেডার ফাইল (stdbool.h) ছাড়া সরাসরি সি-এর নিজস্ব বিল্ট-ইন কিউওয়ার্ড ব্যবহার করতে, 
তবে লিখতে হবে _Bool ( শুরুতে একটা আন্ডারস্কোর এবং বড় হাতের B)। 
তবে এটি true বা false চেনে না, একে 1 বা 0 দিয়ে এসাইন করতে হয়।
    

#include <stdio.h>

int main() {
    _Bool isRaining = 1; // 1 মানে true

    if (isRaining) {
        printf("Take an umbrella!\n");
    }
    return 0;
}

বুলিয়ান ডেটা কেবল 0 বা 1 (যা ১টি বিট বা Bit) হলেই প্রকাশ করা সম্ভব। কিন্তু মেমোরি বা র‍্যামের 
    
সবচেয়ে ছোট এড্রেসযোগ্য ইউনিট হলো ১ বাইট (1 Byte)। তাই সি ল্যাঙ্গুয়েজে একটি bool ভেরিয়েবল 

মেমোরিতে ১ বাইট বা ৮ বিট জায়গা বরাদ্দ করে।

কিন্তু সি ল্যাঙ্গুয়েজে এই #include <stdbool.h> এর বিষয়টা একটু ইউনিক।


C++ এ যেমন cout << boolalpha লিখলে সরাসরি true বা false প্রিন্ট হয়, C ল্যাঙ্গুয়েজে printf
এর জন্য তেমন কোনো সরাসরি বিল্ট-ইন কি-ওয়ার্ড নেই। 
C-তে %d ব্যবহার করলে সবসময় 1 বা 0-ই প্রিন্ট হবে।


তবে C ল্যাঙ্গুয়েজে 1 এর জায়গায় true প্রিন্ট করার সবচেয়ে সহজ ও জনপ্রিয় ৩টি উপায় নিচে দেওয়া হলো:

উপায় ১: Ternary Operator (সবচেয়ে সহজ ও সেরা উপায়)

টার্নারি বা শর্টকার্ট if-else ব্যবহার করে এক লাইনেই 1 হলে "true" এবং 0 হলে "false" স্ক্রিনে দেখানো যায়:

#include <stdio.h>
#include <stdbool.h> 

int main() {
    bool isPassed = true;  
    bool isFailed = false; 

    // %s ব্যবহার করা হয়েছে কারণ "true" বা "false" একটি স্ট্রিং (String)
    printf("Boolean value: %s\n", isPassed ? "true" : "false");  
    printf("Boolean value: %s\n", isFailed ? "true" : "false"); 

    return 0;
}

Boolean value: true
Boolean value: false



১. %s কেন ব্যবহার করা হলো?
C ল্যাঙ্গুয়েজে %d ব্যবহার করা হয় ইনটিজার বা পূর্ণসংখ্যার (যেমন 1, 0, 45) জন্য।

কিন্তু যখন আমরা স্ক্রিনে কোনো টেক্সট বা স্ট্রিং (যেমন "true" বা "false") প্রিন্ট করতে চাই, 
তখন সি কম্পাইলারকে বোঝাতে হয় যে আমরা একটি String পাঠাচ্ছি। তাই ফরমেট স্পেসিফায়ার হিসেবে %s (s = String) ব্যবহার করা হয়েছে।

%d দিলে আউটপুট আসত: 1 বা 0

%s দেওয়ার কারণে আউটপুট আসছে টেক্সট: "true" বা "false"

২. টারনারি অপারেটরের ড্রায় রান (Dry Run)
কোডের এই অংশটি লক্ষ্য করুন:isTrue ? "true" : "false"

টারনারি অপারেটরের সাধারণ সিনট্যাক্স বা নিয়ম হলো:শর্ত ? সত্য_হলে_মান : মিথ্যা_হলে_মান

ধাপ ১: isTrue-এর ভ্যালু চেক করা
প্রোগ্রামের শুরুতে আপনার ডিক্লেয়ার করা ছিল: bool isTrue = true;

কম্পিউটার জানে যে true মানে মেমোরিতে 1 (যা একটি সত্য মান)।

ধাপ ২: শর্ত মূল্যায়ন (Condition Evaluation)
কম্পিউটার যখন isTrue ? ... অংশটি প্রসেস করে, তখন দেখে শর্তটি True (বা 1) নাকি False (বা 0)।

যেহেতু isTrue-এর মান 1 (সত্য), তাই কম্পিউটার ?-এর ঠিক পরের অংশটিকে বেছে নেয় এবং কোলন (:)-এর পরের অংশটিকে সম্পূর্ণ বাদ দিয়ে দেয়।

ধাপ ৩: মান রিটার্ন করা
?-এর পর দেওয়া আছে "true"।

তাই পুরো isTrue ? "true" : "false" অংশটির বদলে স্ক্রিনে প্রিন্ট করার জন্য মেমোরি থেকে "true" টেক্সটটি বেছে নেওয়া হয়।

ধাপ ৪: %s-এ মান বসানো
%s-এর জায়গায় এই নির্বাচিত টেক্সট "true" বসে যায়।

ফলে স্ক্রিনে প্রিন্ট হয়: isTrue: true

আপনার কোডের দ্বিতীয় লাইনের ভুল ও সংশোধন:
আপনার দেওয়া কোডে দ্বিতীয় লাইনে একটি ছোট ভুল আছে:printf("isFalse: %s\n", isFalse);

এখানে আপনি %s ব্যবহার করেছেন, কিন্তু টারনারি অপারেটর দেননি। ফলে কম্পাইলার একটি টেক্সট (%s) আশা করছে, 
কিন্তু পাচ্ছেন ইনটিজার মান 0 (কারণ isFalse = false)—এর ফলে এটি রান করার সময় ক্র্যাশ করতে পারে বা গার্বেজ ভ্যালু দেখাবে।

সঠিক লাইনটি হবে:


printf("isFalse: %s\n", isFalse ? "true" : "false");

এখানে isFalse-এর ড্রায় রান কেমন হবে?

isFalse-এর মান 0 (মিথ্যা)।

টারনারি অপারেটর দেখবে শর্তটি False।

তাই এটি প্রথম মান "true" বাদ দিয়ে কোলন (:)-এর পরের মান "false"-কে বেছে নেবে।

%s-এর জায়গায় "false" বসে আউটপুট দেবে: isFalse: false







    




#include <stdio.h>
int main() {
    // Create variables
    int num1 = 5; // Integer (whole number)
    int num2 = 10;
    float myFloatNum = 5.99f; // Floating point number
    double balance = 52.125487;
    char myLetter = 'D';     // Character
    printf("Number are %d, %d\n", num1, num2);
    printf("Balance is: %.2lf\n", balance);



    
    // Print variables
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    return 0;
}

১. %c দেওয়ার কারণে কেন চরিত্র বা অক্ষর (Character) আসল?
কম্পিউটার বা প্রসেসর কিন্তু আমাদের মতো 'A', 'B', 'C' বা কোনো অক্ষর সরাসরি বোঝে না; কম্পিউটার কেবল সংখ্যা (0 এবং 1) বোঝে।

তাই প্রোগ্রামিং ভাষায় (বিশেষ করে C-তে) প্রতিটি অক্ষরের জন্য একটি নির্দিষ্ট সংখ্যা নির্ধারিত করা আছে, যেটিকে ASCII Table (American Standard Code for Information Interchange) বলা হয়।

ASCII চার্ট অনুযায়ী:

65 মানে হলো অক্ষর 'A'

66 মানে হলো অক্ষর 'B'

67 মানে হলো অক্ষর 'C'

যখন  printf ফাংশনে %d দেন, তখন কম্পাইলার সংখ্যাটিকে সংখ্যা হিসেবেই (যেমন: 65) প্রিন্ট করে। 
আর যখন  %c (c = Character) দেন, তখন কম্পাইলারকে নির্দেশ দেন: "ভাই, ভেরিয়েবলের ভেতরে যে সংখ্যাটি আছে,
সেটি দিয়ে ASCII চার্ট চেক করো এবং ওই সংখ্যার বিপরীতে যে অক্ষরটি আছে সেটি প্রিন্ট করো!"

এ কারণেই 65 ইনপুট দিলেও স্ক্রিনে A প্রিন্ট হয়।

২. স্টেপ-বাই-স্টেপ ড্রায় রান (Dry Run)
ধরে নিই কোডের মূল কাঠาামোটি ঠিক এভাবে আছে:


#include <stdio.h>
int main() {
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    return 0;
}

ধাপ ১: ভেরিয়েবল ডিক্লেয়েশন ও মেমোরি অ্যাসাইনমেন্ট
char a = 65;

মেমোরিতে a নামের একটি ছোটকক্ষ (byte) তৈরি হলো এবং সেখানে বাইনারি আকারে সংখ্যা 65 জমা হলো।

char b = 66;

মেমোরিতে b ঘরে সংখ্যা 66 জমা হলো।

char c = 67;

মেমোরিতে c ঘরে সংখ্যা 67 জমা হলো।

ধাপ ২: প্রথম প্রিন্ট স্টেটমেন্ট (printf("%c\n", a);)
কম্পাইলার দেখল ভেরিয়েবল a-এর মান হলো 65।

ফরমেট স্পেসিফায়ার হলো %c।

কম্পাইলার ASCII চার্টে 65 নম্বর খুঁজলো এবং পেল 'A'।

আউটপুট স্ক্রিন: A প্রিন্ট হলো এবং নতুন লাইনে কার্সর চলে গেল (\n-এর জন্য)।

ধাপ ৩: দ্বিতীয় প্রিন্ট স্টেটমেন্ট (printf("%c\n", b);)
কম্পাইলার দেখল b-এর মান 66।

%c থাকার কারণে ASCII চার্ট থেকে 66 নম্বরের অক্ষর অর্থাৎ 'B' বেছে নিল।

আউটপুট স্ক্রিন: B প্রিন্ট হলো।

ধাপ ৪: তৃতীয় প্রিন্ট স্টেটমেন্ট (printf("%c\n", c);)
    
কম্পাইলার দেখল c-এর মান 67।

%c থাকার কারণে ASCII চার্ট থেকে 67 নম্বরের অক্ষর অর্থাৎ 'C' বেছে নিল।

আউটপুট স্ক্রিন: C প্রিন্ট হলো।

চূড়ান্ত আউটপুট:

A
B
C



/*
#include <stdio.h>
#include <string.h>
int main()
{
    char name [] = "Mohammad";
    int age = 25;
    strcpy(name, "Abdullah");
    age = 30;
    float height = 5.2;
    char village [] = "Changmary";
    char subject [] = "Programming";
    char gread = 'A';
    int num1, num2;
    num1 = 20, num2 = 30;
    printf("My name is: %s\n", name);
    printf("My age is: %d\n", age);
    printf("My height is: %.1f\n", height);
    printf("My village is: %s\n", village);
    printf("My subject is: %s\n", subject);
    printf("My gread is: %c\n", gread);
    printf("Num1 is = %d And Num2 is = %d\n", num1, num2);
    return 0;
}
*/

------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {

    char name[50];
    int age;
    float height;
    char village[50];
    char subject[50];
    char grade;
    float cgpa;
    int num1, num2;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    getchar();  // newline পরিষ্কার করার জন্য

    printf("Enter your village: ");
    fgets(village, sizeof(village), stdin);

    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n--------- Your Output ---------\n");
    printf("My name is: %s", name);
    printf("My age is: %d\n", age);
    printf("My height is: %.1f\n", height);
    printf("My village is: %s", village);
    printf("My subject is: %s", subject);
    printf("My grade is: %c\n", grade);
    printf("My CGPA is: %.2f\n", cgpa);
    printf("Num1 is: %d and Num2 is: %d\n", num1, num2);

    return 0;
}

কোডের এই অংশে ইউজার ইনপুট নেওয়ার সময় কীভাবে ডাটা প্রসেস হয় এবং কেন getchar() ব্যবহার করতে হয়েছে, 
তা বুঝতে হলে ইনপুট বাফার (Input Buffer) এর মেকানিজম বুঝতে হবে।

নিচে প্রতিটি লাইনের কাজ এবং Dry Run (ইনপুট বাফারের ভেতরে কী ঘটছে) ধাপে ধাপে ভেঙেো:

ইনপুট বাফার (Input Buffer) কী?
    
কিবোর্ড থেকে যখন কিছু টাইপ করে Enter চাপা হয়, তখন লেখাটি সরাসরি ভ্যারিয়েবলে যায় না। 
এটি প্রথমে কম্পিউটারের একটি সাময়িক মেমোরি যাকে "Input Buffer" বলা হয়, সেখানে গিয়ে জমা হয়।

যখন клавиатуре Enter চাপা হয়, তখন স্ক্রিনে একটি নতুন লাইন তৈরি হয় যা বাফারে \n (Newline Character) হিসেবে জমা হয়।

Line by Line Dry Run & ভেঙে ব্যাখ্যা 

১. fgets(name, sizeof(name), stdin);
কী করে: ইউজার থেকে স্পেসসহ পুরো এক লাইন লেখা ইনপুট হিসেবে নেয়।

name: যেখানে লেখাটি সেভ হবে।

sizeof(name): সর্বোচ্চ ৪৯টি ক্যারেক্টার নেবে (শেষ ক্যারেক্টার \0 বা Null এর জন্য)।

stdin: Standard Input (কিবোর্ড) থেকে ডাটা পড়বে।

Dry Run:

টাইপ: Abdullah এবং চাপলেন Enter

Input Buffer এ জমা হবে: Abdullah\n

fgets পুরো Abdullah\n লেখাটি পড়বে এবং name ভ্যারিয়েবলে বসিয়ে বাফারটিকে একদম খালি (Clean) করে দেবে।

বর্তমান Buffer অবস্থা: [খালি]

২. scanf("%d", &age);
কী করে: ইউজার থেকে একটি পূর্ণসংখ্যা (Integer) ইনপুট নেবে।

Dry Run:

টাইপ : 25 এবং চাপলেন Enter

Input Buffer এ জমা হবে: 25\n

scanf("%d") শুধু সংখ্যাটি (25) পড়ে নিয়ে age ভ্যারিয়েবলে রাখবে। কিন্তু সে কিন্তু \n (Enter) টি পড়ে না, বাফারে ফেলে রেখে দেয়!

বর্তমান Buffer অবস্থা: [\n] (এখানে একটি Enter আটকে আছে)


৩. scanf("%f", &height);

কী করে: ইউজার থেকে একটি দশমিক সংখ্যা (Float) ইনপুট নেবে।

Dry Run:

scanf শুরুতেই বাফারে থাকা আগের কোনো স্পেস বা \n থাকলে তা ইগনোর করে পরবর্তী নতুন ইনপুটের জন্য অপেক্ষা করে।

 টাইপ: 5.8 এবং চাপলেন Enter
    
Input Buffer এ জমা হবে: \n5.8\n ---scanf পড়ার পর অবশিষ্ট থাকবে: [\n]
    
height এর মান হলো 5.8

বর্তমান Buffer অবস্থা: [\n] (এখানে এখনো আগের Enter টি আটকে আছে)


৪. getchar(); (সবচেয়ে গুরুত্বপূর্ণ লাইন!)
কেন দেওয়া হয়েছে: ৩ নম্বর লাইনে scanf শেষ হওয়ার পর বাফারে যে \n (Enter) টি আটকে রয়েছে, তাকে টেনে বের করে বাফার পরিষ্কার করার জন্য এটি দেওয়া হয়েছে।

কীভাবে কাজ করে:

getchar() বাফারে গিয়ে দেখে সেখানে একটি \n বসে আছে। সে সেই \n-কে গিলে ফেলে (Read করে নেয়) এবং বাফারটিকে সম্পূর্ণ পরিষ্কার করে দেয়।

বর্তমান Buffer অবস্থা: [খালি]


যদি getchar() না দেওয়া হত তবে কী হতো?

এর পরের লাইনে যখন fgets(village, ...) রান হতো, তখন সে কিবোর্ড থেকে আপনার ইনপুটের জন্য অপেক্ষা না 
করেই বাফারে আটকে থাকা সেই পুরনো \n-কে নিজের ইনপুট মনে করে স্কিপ (Skip) করে চলে যেত! ফলে গ্রামের নাম লেখার সুযোগই পেতেন না।

৫. fgets(village, sizeof(village), stdin);

কী করে: ইউজার থেকে গ্রামের নাম ইনপুট নেবে।

Dry Run:

যেহেতু ৪ নম্বর লাইনে getchar() বাফার পরিষ্কার করে দিয়েছে, তাই প্রোগ্রামটি থেমে আপনার ইনপুটের জন্য অপেক্ষা করবে।

টাইপ : Mirpur এবং চাপলেন Enter

village ভ্যারিয়েবলে Mirpur সেভ হয়ে যাবে।

১. fgets(name)     --> "Abdullah\n" পড়ে নেয়  --> Buffer খালি [ ]
২. scanf("%d")     --> "25" পড়ে নেয়          --> Buffer এ রয়ে যায় [\n]
৩. scanf("%f")     --> "5.8" পড়ে নেয়         --> Buffer এ রয়ে যায় [\n]
৪. getchar()       --> আটকে থাকা [\n] গিলে নেয়  --> Buffer পরিষ্কার [ ]
৫. fgets(village)  --> সঠিকভাবে "Mirpur\n" ইনপুট নিতে পারে।






#include <stdio.h>
#include <stdbool.h>
#include <string.h> 

int main() {
    char name[50], address[50], subject[30], bloodGroup[5], phoneNumber[22], grade;
    bool married;
    int age;
    float height, cgpa;
    double accountBalance;


    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);


    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);

    printf("Enter your bloodGroup: ");
    fgets(bloodGroup, sizeof(bloodGroup), stdin);

    printf("Enter your phone: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // স্পেস দিয়ে ইনপুট নিলে বাফার সমস্যা কম হয়

    getchar(); // এখানে একটি getchar() লাগবে কারণ উপরের scanf একটি '\n' ছেড়ে দিয়েছে

    printf("Are you married (0 or 1): ");
    int temp; // bool সরাসরি scanf এ না নিয়ে int এ নেওয়া নিরাপদ
    scanf("%d", &temp);
    married = temp;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("Enter your accountBalance: ");
    scanf("%lf", &accountBalance);

    printf("\n--------- Student Information ----------\n");
    printf("Name       : %s", name);
    printf("Address    : %s", address);
    printf("Subject    : %s", subject);
    printf("Age        : %d\n", age);
    printf("Grade      : %c\n", grade);
    printf("Blood Group: %s", bloodGroup);
    printf("Phone      : %s", bloodGroup);
    printf("Married    : %s\n", married ? "Yes" : "No");
    printf("Height     : %.1f\n", height);
    printf("CGPA       : %.2f\n", cgpa);
    printf("Balance    : %.10lf\n", accountBalance);
    return 0;
}



--------------- profesonal --------------


#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isMarried;
    int input;

    printf("Are you married? (1 for Yes, 0 for No): ");
    scanf("%d", &input);
    isMarried = input; // 1 হলে true, 0 হলে false
    while (getchar() != '\n'); // ইনপুট বাফার পরিষ্কার করা

    // Output
    printf("Married Status: %s\n", isMarried ? "Yes" : "No");

    return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
   char name[50], village[50], subject[50], grade, phoneNumber[20];
   int age, num1, num2;
   float height, cgpa;
   double accountBalance;

   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = 0; // নিউলাইন ক্যারেক্টার রিমুভ করা

   printf("Enter your age: ");
   scanf("%d", &age);

   printf("Enter your Height: ");
   scanf("%f", &height);
   
   // গুরুত্বপূর্ণ: scanf এর পর fgets ব্যবহার করলে বাফার ক্লিয়ার করতে হয়
   while (getchar() != '\n'); 

   printf("Enter your phone number: ");
   fgets(phoneNumber, sizeof(phoneNumber), stdin);
   phoneNumber[strcspn(phoneNumber, "\n")] = 0;

   printf("Enter your village: ");
   fgets(village, sizeof(village), stdin);
   village[strcspn(village, "\n")] = 0;


   printf("Enter your subject: ");
   fgets(subject, sizeof(subject), stdin);
   subject[strcspn(subject, "\n")] = 0;

   // Grade ইনপুট (Space ব্যবহার করা হয়েছে আগের বাফার এড়াতে)
   printf("Enter your grade: ");
   scanf(" %c", &grade);

   printf("Enter your Account Balance: ");
   scanf("%lf", &accountBalance);

   printf("Enter your cgpa: ");
   scanf("%f", &cgpa);
    
   printf("Enter first integer number: ");
   scanf("%d", &num1);
   
   printf("Enter second integer number: ");
   scanf("%d", &num2);
   
   printf("\n----------- Student Information ---------------\n");
   printf("Name    : \"%s\"\n", name);
   printf("Age     : %d\n", age);
   printf("Height  : %.2f Feet\n", height);
   printf("Phone   : %s\n", phoneNumber);
   printf("Village : %s\n", village);
   printf("Subject : %s\n", subject);
   printf("Grade   : %c\n", grade);
   printf("Balance : %.9lf\n", accountBalance);
   printf("CGPA    : %.2f\n", cgpa);
   printf("Numbers : %d, %d\n", num1, num2);
   printf("-----------------------------------------------\n");

   return 0;
}

কোডের এই দুটি অংশ—strcspn() এবং while (getchar() != '\n');—C ল্যাঙ্গুয়েজে ইনপুট হ্যান্ডেল করার দুটি অত্যন্ত গুরুত্বপূর্ণ এবং প্রফেশনাল ট্রিক।


১. name[strcspn(name, "\n")] = 0; এর কাজ ও ড্রাই রান

এর কাজ কী?
fgets() ফাংশন দিয়ে যখন আমরা কোনো লেখা ইনপুট নিই (যেমন: নাম), তখন ইউজার টাইপ শেষে যে Enter চাপা হয়, 
fgets() সেই Enter বা \n (Newline) ক্যারেক্টারটিকেও স্ট্রিংয়ের শেষে যুক্ত করে ফেলে।

এর ফলে আউটপুট প্রিন্ট করার সময় দেখা যায় নামের পর অনাকাঙ্ক্ষিতভাবে একটি নতুন লাইন তৈরি হয়ে গেছে। 
এই লাইনের কাজ হলো স্ট্রিংয়ের শেষ থেকে সেই বাড়তি \n ক্যারেক্টারটি খুঁজে বের করে মুছে ফেলা (0 বা \0 বসিয়ে দেওয়া)।

ফাংশন কীভাবে কাজ করে?
strcspn(name, "\n") ফাংশনটির কাজ হলো: name স্ট্রিংয়ের শুরু থেকে খোঁজা যে কত নম্বর পজিশনে (Index) প্রথম \n পাওয়া গেছে। এটি সেই পজিশনের ইন্ডেক্স নম্বরটি ফিরিয়ে দেয়।

Dry Run (ধাপে ধাপে দেখা):
ধরা যাক, নাম ইনপুট দেওয়া হল: Abdullah এবং চাপলেন Enter।

১. fgets() ইনপুট নেওয়ার পর মেমোরিতে যা জমা হয়:

name[0] = 'A'

name[1] = 'b'

name[2] = 'd'

name[3] = 'u'

name[4] = 'l'

name[5] = 'l'

name[6] = 'a'

name[7] = 'h'

name[8] = '\n' (এই Enter টি অতিরিক্ত যুক্ত হয়েছে)

name[9] = '\0' (স্ট্রিং সমাপ্তির চিহ্ন)


২. strcspn(name, "\n") রান করার পর:

ফাংশনটি name এর ভেতর \n খুঁজা শুরু করবে।

সে দেখবে ৮ নম্বর ইন্ডেক্সে \n আছে। তাই এটি আউটপুট দেবে 8।

৩. মান বসানোর পর (name[8] = 0;):

লাইনটি রূপ নেয়: name[8] = 0; (এখানে 0 এবং null character '\0' একই কথা)।

ফলে name[8] পজিশনে থাকা '\n' মুছে গিয়ে সেখানে '\0' বসে যায়।

৪. চূড়ান্ত মেমোরি অবস্থা:

name এখন শুধুমাত্র "Abdullah" বহন করছে, কোনো বাড়তি \n নেই!

২. while (getchar() != '\n'); এর কাজ ও ড্রাই রান

এর কাজ কী?

এর আগের প্রশ্নে  একটিমাত্র getchar(); দিয়ে আমরা বাফারে থাকা Enter টি গিলে ফেলেছিলাম। 
কিন্তু সমস্যা হলো ইউজার যদি ইনপুট দেওয়ার সময় ভুলবশত সংখ্যার পাশে কোনো স্পেস বা অতিরিক্ত ক্যারেক্টার
টাইপ করে ফেলে (যেমন: 5.8 abc লিখে Enter চাপল), তবে একটিমাত্র getchar(); পুরো বাফার পরিষ্কার করতে পারে না।

while (getchar() != '\n'); হলো ইনপুট বাফার সম্পূর্ণ পরিষ্কার (Flush Buffer) করার ১০০% নিরাপদ ও প্রফেশনাল উপায়। 
এটি বাফারে যতগুলো ক্যারেক্টার আটকে থাকবে, তার সবগুলো এক এক করে পড়তে পড়তে যতক্ষণ না \n (Enter) পাবে, ততক্ষণ পর্যন্ত চলতেই থাকবে।
    

Dry Run (ধাপে ধাপে দেখা):
ধরা যাক, scanf("%f", &height); চওয়ার পর ইউজার টাইপ করল: 5.8 তারপর ভুলে ২টি স্পেস দিয়ে Enter চাপল।

১. ইনপুট বাফারে (Input Buffer) যা জমা হলো:

['5', '.', '8', ' ', ' ', '\n']

২. scanf("%f", &height); যতটুকু পড়বে:

scanf শুধু ফ্লোট সংখ্যা 5.8 টুকু পড়ে নিয়ে বাফারে বাকিটুকু রেখে দেবে।

বাফারে বাকি থেকে যাবে: [' ', ' ', '\n']


৩. while (getchar() != '\n'); লুপ শুরু:
লুপের ১ম চক্কর:getchar() বাফার থেকে প্রথম ক্যারেক্টার ' ' (Space) গিলে নিল।
শর্ত চেক: ' ' != '\n' সত্য (True)। লুপ আবার চলবে।


লুপের ২য় চক্কর:getchar() বাফার থেকে দ্বিতীয় ক্যারেক্টার ' ' (Space) গিলে নিল।শর্ত চেক: ' ' != '\n' --- সত্য (True)। লুপ আবার চলবে।


লুপের ৩য় চক্কর:getchar() এবার বাফার থেকে '\n' (Enter) গিলে নিল।শর্ত চেক: '\n' != '\n' ---- মিথ্যা (False)।লুপ এখানে থেমে যাবে!


৪. ফলাফল:

বাফারে জমে থাকা সব ময়লা/বাড়তি ক্যারেক্টার এবং \n পুরোপুরি সাফ হয়ে গেল।

বাফার এখন সম্পূর্ণ খালি। ফলে পরবর্তী fgets(phoneNumber, ...) কোনো বাধা ছাড়াই ইউজারের থেকে ফোন নম্বর ইনপুট নিতে পারবে।


ইনপুট নেওয়ার জন্য fgets() + strcspn() + while (getchar() != '\n'); কম্বিনেশনটি সবচেয়ে বেশি নিরাপদ।



// ১. ইনটিজার/ফ্লোট ইনপুট নেওয়া
printf("Enter age: ");
scanf("%d", &age);

// ২. বাফারের সব ময়লা পরিষ্কার করা (১০০% নিরাপদ)
while (getchar() != '\n'); 

// ৩. স্ট্রিং ইনপুট নেওয়া
printf("Enter phone: ");
fgets(phoneNumber, sizeof(phoneNumber), stdin);

// ৪. স্ট্রিংয়ের শেষের Enter মুছ ফেলা
phoneNumber[strcspn(phoneNumber, "\n")] = 0;











profesonal --------------
#include <stdio.h>
#include <string.h> 

int main() {
    char name[50], village[50], subject[50], grade;
    int age, num1, num2;
    float height, cgpa;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height: ");
    scanf("%f", &height);

    // বাফার ক্লিয়ার করা (যাতে পরের fgets ঠিকমতো কাজ করে)
    while (getchar() != '\n'); 

    printf("Enter your village: ");
    fgets(village, sizeof(village), stdin);
    village[strcspn(village, "\n")] = 0;

    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strcspn(subject, "\n")] = 0;

    গ্রেড ইনপুট (স্পেসসহ %c বাফার ক্লিন রাখে)
    printf("Enter your grade: ");
    scanf(" %c", &grade); 

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
   
    printf("\n------------- Student Profile -------------\n");
    printf("%-15s : %s\n", "Name", name);
    printf("%-15s : %d years\n", "Age", age);
    printf("%-15s : %.1f ft\n", "Height", height);
    printf("%-15s : %s\n", "Village", village);
    printf("%-15s : %s\n", "Subject", subject);
    printf("%-15s : %c\n", "Grade", grade);
    printf("%-15s : %.2f\n", "CGPA", cgpa);
    printf("%-15s : %d, %d\n", "Numbers", num1, num2);
    printf("-------------------------------------------\n");

    return 0;
}

কোডে %-15s ব্যবহার করে মূলত আউটপুট টেক্সটকে বামপাশে চাপিয়ে (Left-aligned) ১৫ ঘরের একটি নির্দিষ্ট কলামের জায়গা বরাদ্দ করা বোঝানো হয়েছে।

%-15s এর প্রতিটা অংশের অর্থ:

%s  এটি String Format Specifier। এর জায়গায় কোনো টেক্সট বা স্ট্রিং (যেমন: "Name", "Age", "Height") বসবে।
15  এটি হলো Field Width (প্রস্থ)। কম্পাইলারকে বলা হচ্ছে: এই টেক্সটটির জন্য স্ক্রিনে সর্বমোট ১৫টি ঘরের জায়গা বরাদ্দ করো।
- (Minus sign) এটি দিয়ে বোঝায় Left Alignment (বামে চেপে বসবে)। অর্থাৎ টেক্সটটি বামপাশ থেকে শুরু হবে এবং ডানপাশে বাকি ঘরগুলো খালি স্পেস (Space) হিসেবে থাকবে।

প্রথম ৪ ঘর: "Name" বসবে।

পরের ১১ ঘর: খালি স্পেস (Space) হিসেবে থাকবে।

১৫ ঘর শেষ হওয়ার পর: কোলন : এবং তারপর name প্রিন্ট হবে।


Profesional 100% code.........................

যদি প্রতিবার scanf() ব্যবহার করার পর while (getchar() != '\n'); লুপটি ব্যবহার করা হয়, 
তবে সেটাকে সি ল্যাঙ্গুয়েজের স্ট্যান্ডার্ড অনুযায়ী ১০০% প্রফেশনাল এবং নিরাপদ (Robust) কোড বলা যায়।
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  char name[50], address[50], subject[50], phone[22], grade[5], gmail[50], bloodGroup[10];
  char section;
  bool married;
  int age;
  float height, cgpa;
  double accountBalance;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;

  printf("Enter your age: ");
  scanf("%d", &age);
  while (getchar() != '\n'); // ফিক্স ১: বয়সের পর বাফার ক্লিয়ার

  printf("Enter your height: ");
  scanf("%f", &height);
  while (getchar() != '\n'); // ফিক্স ২: হাইটের পর বাফার ক্লিয়ার

  printf("Enter your address: ");
  fgets(address, sizeof(address), stdin);
  address[strcspn(address, "\n")] = 0;
 
  printf("Enter your subject: ");
  fgets(subject, sizeof(subject), stdin);
  subject[strcspn(subject, "\n")] = 0;

  printf("Enter your grade: ");
  fgets(grade, sizeof(grade), stdin);
  grade[strcspn(grade, "\n")] = 0;

  printf("Enter your section: ");
  scanf(" %c", &section);
  while (getchar() != '\n');

  printf("Enter your cgpa: ");
  scanf("%f", &cgpa);
  while (getchar() != '\n');

  printf("Enter your gmail: ");
  fgets(gmail, sizeof(gmail), stdin);
  gmail[strcspn(gmail, "\n")] = 0;
  
  printf("Enter your bloodGroup: ");
  fgets(bloodGroup, sizeof(bloodGroup), stdin);
  bloodGroup[strcspn(bloodGroup, "\n")] = 0;

  printf("Are you married: 1(yes) or 0 (No): ");
  int temp;
  scanf("%d", &temp);
  married = temp;
  while (getchar() != '\n'); 

  printf("Enter account balance: ");
  scanf("%lf", &accountBalance);
  while (getchar() != '\n');

  printf("Enter your phone: ");
  fgets(phone, sizeof(phone), stdin);
  phone[strcspn(phone, "\n")] = 0; // ফিক্স ৪: ফোনের নিউ-লাইন রিমুভ
  
  printf("\n----------Student Information-----------\n");

  printf("%-15s : %s\n", "Name", name);
  printf("%-15s : %d years old\n","Age", age);
  printf("%-15s : %.1f feet\n", "Height", height);
  printf("%-15s : %s\n", "Address", address );
  printf("%-15s : %s\n", "Subject", subject);
  printf("%-15s : %s\n", "Grade", grade);
  printf("%-15s : %c\n", "Section", section);
  printf("%-15s : %.2f\n", "Cgpa", cgpa);
  printf("%-15s : %s\n", "Gmail", gmail);
  printf("%-15s : %s\n", "Blood", bloodGroup);
  printf("%-15s : %s\n", "Married", married ? "Yes" : "No");
  printf("%-15s : $%.2lf\n", "Account", accountBalance);
  printf("%-15s : %s\n", "Phone", phone);

  return 0;
}
