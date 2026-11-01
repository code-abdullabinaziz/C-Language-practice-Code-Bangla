#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mohammad";
    strcpy(name, "Abdullah\n");
    printf("My name is: %s", name);

    float age = 29.6;
    printf("My age is: %f\n", age);
    int salary = 10000;
    printf("My Salary is: %d\n", salary);
    int num1, num2;
    num1 = num2 = 40;
    printf("My First Number: %d\n", num1);
    printf("My Second Number: %d\n", num2);
    char grade = 'A';
    printf(grade);
    return 0;
}

//int num3, num4;
//int num3 = 50, num4 = 60;


char source[] = "This is a very long string for a small buffer.";
char destination[10]; // মাত্র ১০ বাইটের জায়গা

strcpy(destination, source); // এখানে বড় বাফার ছোট জায়গায় জোর করে ঢোকানো হচ্ছে -> মারাত্মক এরর!



তাহলে এর ভালো বিকল্প বা সমাধান ✅

নিরাপদভাবে স্ট্রিং কপি করার জন্য আধুনিক সি ল্যাঙ্গুয়েজে strcpy()-এর বদলে strncpy() অথবা snprintf() ব্যবহার করা হয়।

১. strncpy() ব্যবহার করা (নিরাপদ বিকল্প):

strncpy() ফাংশনে সর্বোচ্চ কত বাইট কপি করতে হবে, তা নির্দিষ্ট করে বলে দেওয়া যায়। ফলে ওভারফ্লো হওয়ার সুযোগ থাকে না।


#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Abdullah";
    char destination[20]; // পর্যাপ্ত সাইজ

    // নিরাপদ কপি (সর্বোচ্চ ১৯ বাইট কপি করবে, যাতে শেষ বাইটে '\0' থাকে)
    strncpy(destination, source, sizeof(destination) - 1);
    destination[sizeof(destination) - 1] = '\0'; // সেফটির জন্য নাল ক্যারেক্টার নিশ্চিত করা

    printf("Copied Name: %s\n", destination);
    return 0;
}


strncpy(destination, source, sizeof(destination) - 1);
destination[sizeof(destination) - 1] = '\0';



১. strncpy কী এবং এটি কীভাবে কাজ করে?

strncpy হলো C ল্যাঙ্গুয়েজের একটি বিল্ট-ইন ফাংশন, যা একটি স্ট্রিং থেকে অন্য স্ট্রিংয়ে নির্দিষ্ট সংখ্যক ক্যারেক্টার বা বাইট কপি করার জন্য ব্যবহার করা হয়। এর গঠন বা সিনট্যাক্স হলো:
strncpy(destination, source, size);

• destination (কোথায় কপি হবে): এটি হলো সেই মেমোরি বা ক্যারেক্টার অ্যারে (Array), যেটার ভেতর  লেখাটি রাখতে চাওয়া হয়। কোডে এটি হলো destination[20]।

• source (কোথা থেকে কপি হবে): এটি হলো মূল স্ট্রিং, যেখান থেকে লেখাটি কপি করা হচ্ছে। কোডে এটি হলো "Abdullah"।
    
• sizeof(destination) - 1 (কতটুকু কপি হবে): এটি হলো আপনি সর্বোচ্চ কত বাইট কপি করতে চান তার পরিমাপ।


    
২. sizeof(destination) - 1 কেন দেওয়া হয়েছে?

destination অ্যারেটির সাইজ হলো 20 বাইট (অর্থাৎ এটি সর্বোচ্চ ২০টি ক্যারেক্টার ধরে রাখতে পারে)।
    
C ল্যাঙ্গুয়েজে যেকোনো স্ট্রিংয়ের শেষে একটি অদৃশ্য নাল ক্যারেক্টার (\0) বসাতে হয়, যা দিয়ে কম্পিউটার বোঝে যে স্ট্রিংটি এখানে শেষ হয়েছে।
    
যেহেতু ২০ নম্বরের শেষ ঘরটি আমাদের \0 এর জন্য ফাঁকা রাখতে হবে, তাই আমরা কম্পিউটারকে বলছি: "তুমি source থেকে লেখা কপি করো ঠিকই, 
    
কিন্তু কোনো অবস্থাতেই যেন তা ২০ - ১ = ১৯ ক্যারেক্টারের বেশি না হয়।" এতে করে যদি কোনো সময় source-এ অনেক বড় লেখা থাকে, 
    
তাহলেও মেমোরি ওভারফ্লো (Buffer Overflow) হয়ে প্রোগ্রাম ক্র্যাশ করবে না।


৩. destination[sizeof(destination) - 1] = '\0'; কেন দরকার?

strncpy ফাংশনের একটা অদ্ভুত নিয়ম বা সীমাবদ্ধতা আছে। যদি source স্ট্রিংয়ের দৈর্ঘ্য (যেমন "Abdullah" এর দৈর্ঘ্য ৮) দেওয়া সাইজের (১৯) চেয়ে ছোট হয়,

তবে কোনো সমস্যা নেই। কিন্তু যদি source স্ট্রিংটি অনেক বড় হতো (ধরা যাক ২৫ অক্ষরের), তবে strncpy ঠিকই ১৯টি অক্ষর কপি করতো, কিন্তু শেষে কোনো \0 (নাল ক্যারেক্টার) বসাতো না।

স্ট্রিংয়ের শেষে \0 না থাকলে printf দিয়ে প্রিন্ট করার সময় কম্পিউটার বুঝবে না লেখাটি কোথায় শেষ হয়েছে। ফলে সে মেমোরির অন্যান্য আবর্জনা বা গার্বেজ ভ্যালুও প্রিন্ট করতে থাকবে।

এই রিস্ক বা বিপদ এড়ানোর জন্যই জোর করে নিচের লাইনটি লেখা হয়:

destination[sizeof(destination) - 1] = '\0';
Use code with caution.

সহজ কথায়: sizeof(destination) - 1 মানে হলো অ্যারের ১৯ নম্বর ইনডেক্স (যেহেতু ইনডেক্স ০ থেকে শুরু হয়, 
    
তাই ২০ সাইজের অ্যারের শেষ ইনডেক্স ১৯)। এই লাইনের মাধ্যমে আমরা একদম নিশ্চিত করছি যে, 
    
অ্যারের একেবারে শেষ ঘরে যেন একটি \0 বসে যায়। এর ফলে strncpy যাই কপি করুক না কেন, 
    
আমাদের স্ট্রিংটি সবসময় নিরাপদ (Safe) থাকবে এবং সঠিকভাবে প্রিন্ট হবে।



-------------------------------------------------------------------
#include <stdio.h>
int main() {

    char name[] = "Mohammad Abdullah";
    char address[] = "Gongachora, Rangpur";
    char subject[] = "Programming";
    char grade = 'A';

    int age = 30;
    float height = 5.2f;
    float cgpa = 3.50f;
    double accountBalance = 54.26456563;

    printf("-------- Student Information --------\n");

    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.1f ft\n", height);
    printf("Address: %s\n", address);
    printf("Subject: %s\n", subject);
    printf("Grade: %c\n", grade);
    printf("CGPA: %.2f\n", cgpa);
    printf("Account Balance: $%.2lf\n", accountBalance);

    return 0;
}

String ডিক্লেয়ার করার সময় সাইজ ফিক্সড না করে [] দেওয়া ভালো 

স্ট্রিং সাইজ ([]): ধরা যাক char name[45] । এতে মেমোরিতে ৪৫টি ক্যারেক্টারের জায়গা দখল হয়। যদি নাম ছোট হয়, তবে বাকি জায়গা নষ্ট হয়। 
    
char name[] ব্যবহার করলে সি-কম্পাইলার নামের দৈর্ঘ্য অনুযায়ী নিজে থেকেই সঠিক জায়গা বরাদ্দ করে নেয়। 
    
✅ সুবিধা:

ভুল হওয়ার সম্ভাবনা কম

নিজে size গুনতে হয় না

Safe ও clean code 

String ডিক্লেয়ার করার সময় সাইজ ফিক্সড কখন করে [] দেওয়া ভালো---------------------------

১. কেন এবং কখন [] (খালি রাখা) ভালো?

যখন ভেরিয়েবল ডিক্লেয়ার করার সময় সাথে সাথেই কোনো মান (String Value) দিয়ে দেওয়া হয় , তখন [] ব্যবহার করা সবচেয়ে ভালো।

কেন?

মেমোরি সাশ্রয়: কম্পাইলার নিজে গুনে দেখে ঠিক কয়টি অক্ষর আছে এবং মেমোরিতে শুধু ততটুকু জায়গাই নেয়।

ভুলের ঝুঁকি নেই: নিজে গুনে সাইজ লিখতে হয় না, তাই ভুল হওয়ার ভয় থাকে না।

char name[] = "Mohammad Abdullah"; // কম্পাইলার নিজে সাইজ ১৭+১ (নাল ক্যারেক্টার) ধরে নেবে।

কখন সাইজ ফিক্সড করা (যেমন [50]) ভালো?------------------------------------
    
যখন ভেরিয়েবল ডিক্লেয়ার করার সময় কোনো মান দেওয়া হসচ্ছেনা, বরং পরে ব্যবহারকারীর কাছ থেকে ইনপুট নেওয়া হবে, তখন সাইজ ফিক্সড করা বাধ্যতামূলক।
কেন?
জায়গা রিজার্ভ করা: ব্যবহারকারী কত বড় নাম লিখবে তা তো কম্পিউটার আগে থেকে জানে না। তাই তোমাকে আগেই একটি বড় জায়গা (যেমন ৫০ বা ১০০ অক্ষরের) মেমোরিতে বুক করে রাখতে হয়।

বাফার ওভারফ্লো রোধ: যদি সাইজ না দেওয়া হয় বা খুব ছোট সাইজ দেওয়া হয়, আর ইউজার যদি বড় ইনপুট দেয়, তবে প্রোগ্রাম ক্রাশ করবে। 

char userName[50]; // ৫০ অক্ষরের জন্য জায়গা খালি করে রাখা হলো।
printf("Enter your name: ");
scanf("%s", userName); // এখন ইউজার ৫০ অক্ষরের মধ্যে যেকোনো নাম দিতে পারবে।



#include <stdio.h>
   int main() {
   int num1 = 10, num2 = 20, num3; 
   num3 = num1; 
   num1 = num2; 
   num2 = num3; 
   printf("Result is: num1 = %d, num2 = %d\n", num1, num2);
   return 0;
   
}


লাইন বাই লাইন ব্যাখ্যা:
১. #include <stdio.h>

এটি হেডার ফাইল ইনক্লুড করার লাইন। printf এর মতো ইনপুট-আউটপুট ফাংশনগুলো ব্যবহার করার 
অনুমতি দেওয়ার জন্য stdio.h (Standard Input Output) যুক্ত করতে হয়।

২. int main() {

এটি প্রোগ্রামের মেইন বা প্রধান ফাংশন। সি প্রোগ্রাম রান হওয়ার সময় এখান থেকেই কাজ শুরু করে। 
int দিয়ে বোঝানো হচ্ছে ফাংশনটি শেষে একটি পূর্ণসংখ্যা (0) রিটার্ন করবে। { দিয়ে মেইন ফাংশনের কাজ শুরু হলো।

৩. int num1 = 10, num2 = 20, num3;

র‍্যামে (RAM) তিনটি ইনটিজার টাইপ মেমোরি বক্স তৈরি হলো:

num1 বক্সে মান রাখা হলো 10

num2 বক্সে মান রাখা হলো 20

num3 বক্সটি খালি রাখা হলো (যাতে পরবর্তীতে অস্থায়ী মান রাখা যায়)

৪. num3 = num1;

num1 এর ভেতর যে 10 ছিল, সেটি num3 বক্সে কপি করে রাখা হলো।
(এখন num1 = 10, num2 = 20, num3 = 10)

৫. num1 = num2;

num2 এর ভেতর থাকা 20 মানটি num1 বক্সে বসিয়ে দেওয়া হলো। এতে num1-এর আগের 10 মুছে গিয়ে নতুন মান হলো 20।
(এখন num1 = 20, num2 = 20, num3 = 10)

৬. num2 = num3;

৪ নম্বর লাইনে num3-তে জমিয়ে রাখা সেই 10 মানটি এবার num2 বক্সে বসিয়ে দেওয়া হলো। ফলে num2 এর মান হয়ে গেল 10।
(এখন num1 = 20, num2 = 10, num3 = 10)

৭. printf("Result is: num1 = %d, num2 = %d\n", num1, num2);

স্ক্রিনে আউটপুট প্রিন্ট করার লাইন।

প্রথম %d এর জায়গায় num1 এর বর্তমান মান (20) বসবে।

দ্বিতীয় %d এর জায়গায় num2 এর বর্তমান মান (10) বসবে।

৮. return 0;

এটি অপারেটিং সিস্টেমকে সংকেত দেয় যে প্রোগ্রামটি কোনো ভুল বা এরর ছাড়াই সঠিকভাবে সফলভাবে শেষ হয়েছে।

৯. }

সেকেন্ড ব্র্যাকেট ক্লোজ করার মাধ্যমে মেইন ফাংশন তথা পুরো প্রোগ্রামের কাজ এখানেই শেষ হলো।



#include <stdio.h>

int main() {
    // ১. ১৫টি আইটেমের নাম ক্যারেক্টার অ্যারে (char array) দিয়ে আলাদা করে নিলাম
    const char i1[]  = "Miniket Rice (5kg)";
    const char i2[]  = "Mustard Oil (1L)";
    const char i3[]  = "Masoor Dal (1kg)";
    const char i4[]  = "Sugar (1kg)";
    const char i5[]  = "Salt (1kg)";
    const char i6[]  = "Rupchanda Oil (2L)";
    const char i7[]  = "Aata (2kg)";
    const char i8[]  = "Teaser Tea (400g)";
    const char i9[]  = "Powder Milk (500g)";
    const char i10[] = "Onion (1kg)";
    const char i11[] = "Garlic (500g)";
    const char i12[] = "Ginger (500g)";
    const char i13[] = "Turmeric Powder";
    const char i14[] = "Chili Powder";
    const char i15[] = "Dish Wash Liquid";

    // ২. ১৫টি আইটেমের দামও ক্যারেক্টার অ্যারে (char array) দিয়ে আলাদা করে নিলাম
    const char p1[]  = "340.00 tk";
    const char p2[]  = "220.00 tk";
    const char p3[]  = "130.00 tk";
    const char p4[]  = "115.00 tk";
    const char p5[]  = "42.00 tk";
    const char p6[]  = "330.00 tk";
    const char p7[]  = "95.00 tk";
    const char p8[]  = "125.00 tk";
    const char p9[]  = "410.00 tk";
    const char p10[] = "75.00 tk";
    const char p11[] = "90.00 tk";
    const char p12[] = "110.00 tk";
    const char p13[] = "60.00 tk";
    const char p14[] = "65.00 tk";
    const char p15[] = "85.00 tk";

    // ৩. আউটপুট প্রিন্ট
    printf("Product Name              | Price\n");
    printf("--------------------------------------\n");

    printf("%-25s | %s\n", i1, p1);
    printf("%-25s | %s\n", i2, p2);
    printf("%-25s | %s\n", i3, p3);
    printf("%-25s | %s\n", i4, p4);
    printf("%-25s | %s\n", i5, p5);
    printf("%-25s | %s\n", i6, p6);
    printf("%-25s | %s\n", i7, p7);
    printf("%-25s | %s\n", i8, p8);
    printf("%-25s | %s\n", i9, p9);
    printf("%-25s | %s\n", i10, p10);
    printf("%-25s | %s\n", i11, p11);
    printf("%-25s | %s\n", i12, p12);
    printf("%-25s | %s\n", i13, p13);
    printf("%-25s | %s\n", i14, p14);
    printf("%-25s | %s\n", i15, p15);

    printf("--------------------------------------\n");

    return 0;
}


#include <stdio.h>
int main() {
  char name[] = "Abdullah";
  char address[] = "Gongachora";
  printf("%-10s %s\n", name, address);
  return 0;
}


advanced

#include <stdio.h>

int main() {
    // ১. ১৫টি আইটেমের নাম ভ্যারিয়েবলে আলাদা করে নিলাম
    const char* i1  = "Miniket Rice (5kg)";
    const char* i2  = "Mustard Oil (1L)";
    const char* i3  = "Masoor Dal (1kg)";
    const char* i4  = "Sugar (1kg)";
    const char* i5  = "Salt (1kg)";
    const char* i6  = "Rupchanda Oil (2L)";
    const char* i7  = "Aata (2kg)";
    const char* i8  = "Teaser Tea (400g)";
    const char* i9  = "Powder Milk (500g)";
    const char* i10 = "Onion (1kg)";
    const char* i11 = "Garlic (500g)";
    const char* i12 = "Ginger (500g)";
    const char* i13 = "Turmeric Powder";
    const char* i14 = "Chili Powder";
    const char* i15 = "Dish Wash Liquid";

    // ২. ১৫টি আইটেমের দামও আলাদা করে নিলাম
    const char* p1  = "340.00 tk";
    const char* p2  = "220.00 tk";
    const char* p3  = "130.00 tk";
    const char* p4  = "115.00 tk";
    const char* p5  = "42.00 tk";
    const char* p6  = "330.00 tk";
    const char* p7  = "95.00 tk";
    const char* p8  = "125.00 tk";
    const char* p9  = "410.00 tk";
    const char* p10 = "75.00 tk";
    const char* p11 = "90.00 tk";
    const char* p12 = "110.00 tk";
    const char* p13 = "60.00 tk";
    const char* p14 = "65.00 tk";
    const char* p15 = "85.00 tk";

    // ৩. আউটপুট প্রিন্ট
    printf("Product Name              | Price\n");
    printf("--------------------------------------\n");

    printf("%-25s | %s\n", i1, p1);
    printf("%-25s | %s\n", i2, p2);
    printf("%-25s | %s\n", i3, p3);
    printf("%-25s | %s\n", i4, p4);
    printf("%-25s | %s\n", i5, p5);
    printf("%-25s | %s\n", i6, p6);
    printf("%-25s | %s\n", i7, p7);
    printf("%-25s | %s\n", i8, p8);
    printf("%-25s | %s\n", i9, p9);
    printf("%-25s | %s\n", i10, p10);
    printf("%-25s | %s\n", i11, p11);
    printf("%-25s | %s\n", i12, p12);
    printf("%-25s | %s\n", i13, p13);
    printf("%-25s | %s\n", i14, p14);
    printf("%-25s | %s\n", i15, p15);

    printf("--------------------------------------\n");

    return 0;
}

const char*: JavaScript-এর const এর মতো C ল্যাঙ্গুয়েজেও স্থায়ী টেক্সট ধরে রাখতে const char* ব্যবহার করা হয়।

%-25s: এটি প্রডাক্টের নামকে বামে চেপে ২৫টি কলামের জায়গায় সুন্দরভাবে অ্যালাইন করে দেয়, ফলে টেবিল সোজা থাকে।


#include <stdio.h>
#include <string.h>

// padEnd এর মতো ২৫ ঘরের মধ্যে বাকি জায়গায় ডট প্রিন্ট করার ফাংশন
void print_padded_item(const char *item_name) {
    printf("%s", item_name);
    int len = strlen(item_name);
    int dots_to_print = 25 - len;
    
    // ২৫ ঘর পূর্ণ করতে যতগুলো ডট প্রয়োজন তা প্রিন্ট করা
    for (int i = 0; i < dots_to_print; i++) {
        printf(".");
    }
}

int main() {
    // ১. ১৫টি আইটেমের নাম
    const char *i1  = "Miniket Rice (5kg)";
    const char *i2  = "Mustard Oil (1L)";
    const char *i3  = "Masoor Dal (1kg)";
    const char *i4  = "Sugar (1kg)";
    const char *i5  = "Salt (1kg)";
    const char *i6  = "Rupchanda Oil (2L)";
    const char *i7  = "Aata (2kg)";
    const char *i8  = "Teaser Tea (400g)";
    const char *i9  = "Powder Milk (500g)";
    const char *i10 = "Onion (1kg)";
    const char *i11 = "Garlic (500g)";
    const char *i12 = "Ginger (500g)";
    const char *i13 = "Turmeric Powder";
    const char *i14 = "Chili Powder";
    const char *i15 = "Dish Wash Liquid";

    // ২. ১৫টি আইটেমের দাম
    const char *p1  = "340.00 tk";
    const char *p2  = "220.00 tk";
    const char *p3  = "130.00 tk";
    const char *p4  = "115.00 tk";
    const char *p5  = "42.00 tk";
    const char *p6  = "330.00 tk";
    const char *p7  = "95.00 tk";
    const char *p8  = "125.00 tk";
    const char *p9  = "410.00 tk";
    const char *p10 = "75.00 tk";
    const char *p11 = "90.00 tk";
    const char *p12 = "110.00 tk";
    const char *p13 = "60.00 tk";
    const char *p14 = "65.00 tk";
    const char *p15 = "85.00 tk";

    // ৩. টেবিল প্রিন্ট করা
    printf("Product Name              | Price\n");
    printf("--------------------------------------\n");

    print_padded_item(i1);  printf(" | %s\n", p1);
    print_padded_item(i2);  printf(" | %s\n", p2);
    print_padded_item(i3);  printf(" | %s\n", p3);
    print_padded_item(i4);  printf(" | %s\n", p4);
    print_padded_item(i5);  printf(" | %s\n", p5);
    print_padded_item(i6);  printf(" | %s\n", p6);
    print_padded_item(i7);  printf(" | %s\n", p7);
    print_padded_item(i8);  printf(" | %s\n", p8);
    print_padded_item(i9);  printf(" | %s\n", p9);
    print_padded_item(i10); printf(" | %s\n", p10);
    print_padded_item(i11); printf(" | %s\n", p11);
    print_padded_item(i12); printf(" | %s\n", p12);
    print_padded_item(i13); printf(" | %s\n", p13);
    print_padded_item(i14); printf(" | %s\n", p14);
    print_padded_item(i15); printf(" | %s\n", p15);

    printf("--------------------------------------\n");

    return 0;
}




#include <stdio.h>
#include <stdbool.h> // বুলিয়ান (true/false) ব্যবহারের জন্য

int main() {
    // কনস্ট্যান্ট ও ভেরিয়েবল ডিফাইন করা
    char name[] = "Mohammad Abdullah";
    char dob[] = "15-06-1997";
    char bloodGroup[] = "B+";
    char religion[] = "Islam";
    char country[] = "Bangladesh";
    char nidNumber[] = "1997541258745";
    char birthPlace[] = "Rangpur";

    int age = 30;
    float cgpa = 3.50;
    char address[] = "Gongachora, Rangpur";
    char subject[] = "Backend Engineering";
    bool married = false; // C ল্যাঙ্গুয়েজে false মানে 0
    double accountBalance = 89.5982145897;
    char gmail[] = "programmeraziz216@gmail.com";
    char phone[] = "01568451112";
    char skills[] = "C, JavaScript, C++, Python";
    char hobbies[] = "Coding, Reading, Traveling";
    char session[] = "2025-26";
    char currentStatus[] = "Student & Programmer";
    char language[] = "Bengali, English";

    // হেডার প্রিন্ট
    printf("-------------------------------------------------------\n");
    printf("------------ STUDENT INFORMATION CARD -----------------\n");
    printf("-------------------------------------------------------\n");

    // %-16s মানে লেফট অ্যালাইন (padEnd এর মতো) এবং %35s মানে রাইট অ্যালাইন (padStart এর মতো)
    printf("%-16s | %35s\n", "Name:", name);
    printf("%-16s | %35s\n", "DOB:", dob);
    printf("%-16s | %35s\n", "Blood Group:", bloodGroup);
    printf("%-16s | %35s\n", "Religion:", religion);
    printf("%-16s | %35s\n", "Country:", country);
    printf("%-16s | %35s\n", "NID Number:", nidNumber);
    printf("%-16s | %35s\n", "Birth Place:", birthPlace);
    
    // নাম্বারগুলোর জন্য %35d বা %.2f ব্যবহার করা হয়েছে
    printf("%-16s | %35d\n", "Age:", age);
    printf("%-16s | %35.2f\n", "CGPA:", cgpa);
    
    printf("%-16s | %35s\n", "Address:", address);
    printf("%-16s | %35s\n", "Subject:", subject);
    
    // বুলিয়ানের জন্য (false হলে 0 দেখাবে)
    printf("%-16s | %35d\n", "Married:", married);
    
    printf("%-16s | %35.2f\n", "Account Bal:", accountBalance);
    printf("%-16s | %35s\n", "Gmail:", gmail);
    printf("%-16s | %35s\n", "Phone:", phone);
    printf("%-16s | %35s\n", "Skills:", skills);
    printf("%-16s | %35s\n", "Hobbies:", hobbies);
    printf("%-16s | %35s\n", "Session:", session);
    printf("%-16s | %35s\n", "Status:", currentStatus);
    printf("%-16s | %35s\n", "Languages:", language);

    printf("-------------------------------------------------------\n");

    return 0;
}




#include <stdio.h>
#include <stdbool.h>
int main() {

  char name[] = "Mohammad Abdullah";

  printf("-------Student Information-------\n");

  printf("%-10s | %20s\n", "Name:", name);

  return 0;
}

১. %-10s এর কাজ:

• - (Minus sign): এর মানে হলো টেক্সটটি বাম পাশে সারিবদ্ধ (Left-aligned) হবে।
    
• 10: এর মানে হলো এই টেক্সটটির জন্য মোট ১০টি অক্ষরের জায়গা (Width) বরাদ্দ করা হবে।
    
• s: এর মানে হলো এখানে একটি স্ট্রিং (String) বা টেক্সট বসবে (এখানে যেমন "Name:" বসবে)।
    
• সহজ কথায়: "Name:" লেখা প্রিন্ট করার জন্য মোট ১০টি অক্ষরের জায়গা নেওয়া হবে। যেহেতু "Name:" লিখতে ৫টি অক্ষর লাগে, তাই বাকি ৫টি খালি জায়গা (Spaces) ডানপাশে যোগ হবে।

    

২. %20s এর কাজ:

• 20: এর মানে হলো এই টেক্সটটির জন্য মোট ২০টি অক্ষরের জায়গা (Width) বরাদ্দ করা হবে। যেহেতু এর আগে কোনো মাইনাস (-) চিহ্ন নেই, তাই টেক্সটটি ডান পাশে সারিবদ্ধ (Right-aligned) হবে।
    
• s: এর মানে হলো এখানে একটি স্ট্রিং বসবে (এখানে যেমন name ভেরিয়েবলের মান বসবে)।
    
• সহজ কথায়: name ভেরিয়েবলে যে নামটাই থাকুক না কেন, সেটি ডানপাশে চেপে প্রিন্ট হবে এবং বামপাশে প্রয়োজনীয় খালি জায়গা (Spaces) থাকবে, যেন মোট ২০টি অক্ষরের জায়গা পূর্ণ হয়।

৩. | এবং \n এর কাজ:

• | (Pipe symbol): এটি দুটি টেক্সটের মাঝখানে একটি সোজা দাগ বা বর্ডার তৈরি করবে।
    
• \n: এটি প্রিন্ট করার পর কার্সারকে নতুন লাইনে (New line) নিয়ে যাবে।





#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  char name[] = "Abdullah";
  char address[] = "Gongachora, Rangpur";
  char subject[] = "Programming";
  char grade = 'A';
  char bloodGroup[] = "B+";
  int age = 30;
  bool married = false;
  float height = 5.211f;
  char language[] = "Bengali, English";
  double account_balance = 12.1234123;
    
  printf("--------Student Information--------\n");
  printf("%-12s | %10s\n", "Name:", name);
  printf("%-12s | %10d\n", "Age:", age);
  printf("%-12s | %10.1f\n", "Height:", height);
  printf("%-12s | %10s\n", "Blood Group:", bloodGroup); 
  printf("%-12s | %10s\n", "Address:", address);
  printf("%-12s | %10c\n", "Grade:", grade);
  printf("%-12s | %10s\n", "Subject:", subject);
  printf("%-12s | %10s\n", "Language:", language);
  printf("%-12s | %10.2lf\n", "Account:", account_balance);
  printf("%-12s | %10s\n", "Married:", (married ? "Yes" : "False"));
    
  return 0;
}




