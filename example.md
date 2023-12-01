# my_ptr Kullanım Örnekleri

```cpp
#include <iostream>
#include "myptr.h"

int main() {
    // Yeni bir my_ptr örneği oluşturuluyor
    my_ptr<int> ptr1(new int(42));

    // Dereferans operatörü ile değere erişim
    std::cout << "Değer: " << *ptr1 << std::endl;

    // bool dönüşümü ile geçerlilik kontrolü
    if (ptr1) {
        std::cout << "ptr1 geçerli." << std::endl;
    } else {
        std::cout << "ptr1 geçersiz." << std::endl;
    }

    // reset fonksiyonu ile işaretçiyi sıfırlama
    ptr1.reset(new int(99));

    // release fonksiyonu ile işaretçiyi serbest bırakma
    int* released_ptr = ptr1.release();
    std::cout << "Serbest bırakılan değer: " << *released_ptr << std::endl;

    // emplace fonksiyonu ile yeni bir nesne oluşturma
    ptr1.emplace(new int(123));

    // Yıkıcı otomatik olarak çağrılacak ve bellek temizlenecek

    return 0;
}
