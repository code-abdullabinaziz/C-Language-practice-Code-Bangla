সি ল্যাঙ্গুয়েজে (C Programming) Keyword (কিওয়ার্ড) হলো এমন কিছু সংরক্ষিত শব্দ, যা কম্পাইলারের কাছে আগে থেকেই সুনির্দিষ্ট কাজের জন্য রেজিস্টার্ড বা মুখস্থ করা থাকে।

সহজ কথায়, সি ল্যাঙ্গুয়েজ যিনি তৈরি করেছেন (ডেনিস রিচি), তিনি সি-এর ব্যাকরণ বা সিনট্যাক্স লেখার জন্য কিছু শব্দকে বুক করে রেখেছেন। 
    
এগুলোকে Reserved Words-ও বলা হয়। চাইলেও এই শব্দগুলোর অর্থ বা কাজ পরিবর্তন করতে পারবেন না।

সি কিউওয়ার্ডের মূল বৈশিষ্ট্য ও নিয়মাবলী:
    
১. নির্দিষ্ট সংখ্যা: স্ট্যান্ডার্ড অ্যানসি সি (ANSI C) অনুযায়ী সি ল্যাঙ্গুয়েজে মোট ৩২টি কিওয়ার্ড আছে। 
    
(পরবর্তী মডার্ন ভার্সনগুলোতে অল্প কয়েকটি যোগ হয়েছে,তবে মূল ৩২টিই সবচেয়ে গুরুত্বপূর্ণ)।
    
২. সবসময় ছোট হাতের অক্ষর: সি-এর সব কিউওয়ার্ড বাধ্যতামূলকভাবে ছোট হাতের অক্ষরে (Lowercase) লিখতে হয়। 
    
যেমন: char বা while সঠিক। কিন্তু যদি ভুল করে Char বা WHILE লেখেন, তবে কম্পাইলার সেটিকে কিওয়ার্ড হিসেবে চিনবে না এবং এরর দেবে।

৩. ভেরিয়েবলের নাম হিসেবে ব্যবহার করা নিষেধ: নিজের তৈরি কোনো ভেরিয়েবল,

ফাংশন বা অ্যারের নাম (Identifier) হিসেবে কোনো কিওয়ার্ড ব্যবহার করতে পারবেন না। 

যেমন: int return = 50; লিখলে কোড ক্র্যাশ করবে, কারণ return একটি ফিক্সড কিওয়ার্ড।

    
    
#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

//C Programming Keywords
Data Types: int, char, float, double, void, short, long, signed, unsigned

Control Flow: if, else, switch, case, default, for, while, do, break, continue, goto, return

Data Structures: struct, enum, union

Storage Classes: auto, extern, static, register

Others: const, sizeof, volatile



#include <stdio.h>

int main() {
    int roll = 101; 
    
    if (roll > 100) {
        printf("Valid Roll\n");
    }
    
    return 0;
}


Keywords: int, if, এবং return। কারণ সি কম্পাইলার এগুলো দেখলেই বোঝে তার কী কাজ করতে হবে।

Identifiers: roll এবং main। কারণ এগুলো সি ল্যাঙ্গুয়েজের নিজস্ব শব্দ না, এগুলো প্রোগ্রামার নিজে ভেরিয়েবল এবং ফাংশনের নাম হিসেবে দিয়েছে।


বিষয়                            সংরক্ষিত কিওয়ার্ডসমূহ

Data Types (৮টি)	            char, int, float, double, short, long, signed, unsigned

Control Flow / Decision (১০টি)	if, else, switch, case, default, break, continue, goto, return, sizeof

Loops (৩টি)                  	for, while, do

Storage Classes (৪টি)	        auto, register, static, extern

User-defined Types (৩টি)	    struct, union, typedef, enum (মূলত ৪টি)

Qualifiers & Type Identifiers   (৪টি)	const, volatile, void, inline (C99)


auto        double      int         struct
break       else        long        switch
case        enum        register    typedef
char        extern      return      union
const       float       short       unsigned
continue    for         signed      void
default     goto        sizeof      volatile
do          if          static      while


Modern Standard (C11 / C23) — নতুন যুক্ত হওয়া কিওয়ার্ড 

C11 Standard (অতিরিক্ত ৭টি): _Alignas, _Alignof, _Atomic, _Bool, _Complex, _Generic, _Imaginary, _Noreturn, _Static_assert, _Thread_local

C23 Standard (লেটেস্ট C ভার্সন): C23-এ C++ এর মতো সরাসরি bool, true, false, alignas, alignof, static_assert, constexpr, typeof, nullptr 
সহ বেশ কিছু কিওয়ার্ড আফিশিয়ালি সহজ নামে যোগ করা হয়েছে।




সি ভাষার ৩২টি কিওয়ার্ডের তালিকা (Category-wise):
    
১. ডেটা টাইপ সম্পর্কিত (Data Types):
    
int (পূর্ণসংখ্যা)

float (দশমিক সংখ্যা)

double (বড় দশমিক সংখ্যা)

char (ক্যারেক্টার বা অক্ষর)

short (ছোট সাইজের সংখ্যা)

long (বড় সাইজের সংখ্যা)

signed (পজিটিভ ও নেগেটিভ উভয় মান)

unsigned (শুধু পজিটিভ মান)

void (ফাঁকা বা কোনো রিটার্ন টাইপ নেই)

    
২. কন্ডিশন বা সিদ্ধান্ত নেওয়া (Control Flow / Decision Making):
    
if (যদি)

else (নতুবা)

switch (একাধিক শর্তের মধ্যে বাছাই)

case (কেস বা অবস্থা)

default (ডিফল্ট বা অন্যথায়)

    
৩. লুপ বা বারবার চালানো (Looping / Iteration):
    
for (ফর লুপ)

while (হোয়াইল লুপ)

do (ডু-হোয়াইল লুপ)

break (লুপ বা সুইচ থেকে বের হয়ে আসা)

continue (লুপের বর্তমান ধাপ বাদ দিয়ে পরের ধাপে যাওয়া)

    
৪. প্রোগ্রাম জাম্প বা নিয়ন্ত্রণ পরিবর্তন (Jumping):
    
goto (নির্দিষ্ট কোনো লাইনে জাম্প করা)

return (ফাংশন থেকে মান ফেরত পাঠানো)



    
৫. মেমোরি ও স্টোরেজ ক্লাস (Storage Classes):
    
auto (অটোমেটিক ভেরিয়েবল)

static (স্ট্যাটিক ভেরিয়েবল)

extern (এক্সটার্নাল ভেরিয়েবল)

register (রেজিস্টার ভেরিয়েবল)


    
৬. অন্যান্য গুরুত্বপূর্ণ কিওয়ার্ড (Others):
    
const (কনস্ট্যান্ট বা ধ্রুবক, যার মান পরিবর্তন করা যায় না)

sizeof (কোনো ডেটা টাইপ বা ভেরিয়েবলের সাইজ বাইটে মাপে)

typedef (নতুন নাম বা অ্যালিয়াস তৈরি করা)

volatile (কম্পাইলার অপ্টিমাইজেশন রোধ করতে)

struct (স্ট্রাকচার তৈরি করা)

union (ইউনিয়ন তৈরি করা)

enum (ইনমারেট বা নির্দিষ্ট মান নির্ধারণ করা)




সি ভাষার ৩২টি কিওয়ার্ডের সম্পূর্ণ তালিকা:

auto — স্বয়ংক্রিয় স্টোরেজ ক্লাস ভেরিয়েবলের জন্য।

break — লুপ বা সুইচ কেস থেকে বের হয়ে আসার জন্য।

case — সুইচ স্টেটমেন্টের একেকটি শর্ত বা অবস্থা নির্ধারণ করতে।

char — ক্যারেক্টার বা অক্ষর জাতীয় ডেটা টাইপ ঘোষণা করতে।

const — ধ্রুবক বা কনস্ট্যান্ট মান নির্ধারণ করতে (যার মান পরে পরিবর্তন করা যায় না)।

continue — লুপের বর্তমান ধাপ বাদ দিয়ে পরের ধাপে চলে যেতে।

default — সুইচ স্টেটমেন্টে অন্য কোনো কেস না মিললে এটি কাজ করে।

do — ডু-হোয়াইল লুপ শুরু করতে।

double — বড় দশমিক সংখ্যা বা ফ্লোটিং পয়েন্ট ডেটা টাইপের জন্য।

else — শর্ত না মানলে বিকল্প কাজ করাতে।

enum — ইনমারেট বা ব্যবহারকারী-সংজ্ঞায়িত ধ্রুবক তালিকা তৈরি করতে।

extern — এক্সটার্নাল বা অন্য ফাইলের ভেরিয়েবল ডিক্লেয়ার করতে।

float — সাধারণ দশমিক সংখ্যা রাখার জন্য।

for — ফর লুপ চালানোর জন্য।

goto — প্রোগ্রামের নির্দিষ্ট কোনো লাইনে কোড জাম্প করাতে।

if — শর্ত যাচাই করার জন্য।

int — পূর্ণসংখ্যা বা ইন্টিজার ডেটা টাইপের জন্য।

long — বড় সাইজের পূর্ণসংখ্যার জন্য।

register — প্রসেসরের রেজিস্টার মেমোরিতে ভেরিয়েবল রাখতে।

return — ফাংশন থেকে মান বা ফলাফল ফেরত পাঠাতে।

short — ছোট সাইজের পূর্ণসংখ্যার জন্য।

signed — পজিটিভ ও নেগেটিভ উভয় মান ধারণ করতে।

sizeof — কোনো ভেরিয়েবল বা ডেটা টাইপের সাইজ বাইটে মাপতে।

static — স্ট্যাটিক বা স্থায়ী মানের ভেরিয়েবল তৈরি করতে।

struct — ভিন্ন ভিন্ন ডেটা টাইপ মিলিয়ে স্ট্রাকচার তৈরি করতে।

switch — একাধিক শর্তের মধ্যে বেছে নিতে।

typedef — ডেটা টাইপের নতুন নাম বা অ্যালিয়াস দিতে।

union — মেমোরি শেয়ার করে ডেটা সংরক্ষণের জন্য।

unsigned — শুধুমাত্র পজিটিভ মান রাখতে।

void — ফাঁকা বা কোনো রিটার্ন মান নেই বোঝাতে।

volatile — কম্পাইলারকে সতর্ক করতে যে মান যেকোনো সময় বাইরে থেকে পরিবর্তিত হতে পারে।

while — হোয়াইল লুপ চালানোর জন্য।
