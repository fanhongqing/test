#include <iostream>
#include <atomic>
#include <glog/logging.h>
#include <folly/small_vector.h>

#include <gflags/gflags.h>

DEFINE_bool(big_menu, 
            true, 
            "Include 'advance' option in the menu listing");
DEFINE_string(languages, 
              "english, french, chinese", 
              "comma-separated list of languages to offer in the 'lang' menu");
DEFINE_uint32(age, 
              10, 
              "age");

int main(int argc, char** argv) {
    google::ParseCommandLineFlags(&argc, &argv, true);
    std::cout<<std::boolalpha;

    std::cout<<"big_menu: "<<FLAGS_big_menu<<'\n'
             <<"languages: "<<FLAGS_languages<<'\n'
             <<"age: "<<FLAGS_age<<std::endl;

    return 0;
}
/********
void vec_test()
{
    folly::small_vector<int, 4> vec;
    for (int i = 0; i < 4; i++) {
        vec.push_back(i+1);
    }
    for(auto i:vec) {
        std::cout << i << std::endl;
    }
}

int main(int argc,char* argv[])
{
    google::InitGoogleLogging("fan");
    google::SetLogDestination(google::GLOG_INFO, "./myInfo");
    LOG(WARNING) << "thisis the 1st warning!";
    std::atomic_int a{3};
    std::cout << "a=" << a << std::endl;
    vec_test();
    return 0;
}
***********/
