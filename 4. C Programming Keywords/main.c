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
