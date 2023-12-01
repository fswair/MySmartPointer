# my_ptr Smart Pointer Dokümantasyonu

`my_ptr` sınıfı, basit bir akıllı işaretçi (smart pointer) implementasyonudur. Bu, bellek yönetimini kolaylaştırmak ve otomatikleştirmek için kullanılır. İşte `my_ptr`'nin temel özellikleri ve kullanımı:

## Kurucular

### `explicit my_ptr(T* p = nullptr)`

Yeni bir `my_ptr` örneği oluşturur. İsteğe bağlı olarak bir başlangıç işaretçisi alabilir.

## Yıkıcı

### `~my_ptr()`

Eğer işaretçi geçerliyse, bellekten serbest bırakır.

## Operatörler

### `explicit operator bool() const`

İşaretçinin geçerli olup olmadığını kontrol eder.

### `T operator*() const`

İşaretçinin gösterdiği değeri döndürür.

## Yardımcı Fonksiyonlar

### `T* get() const`

İşaretçinin gösterdiği bellek adresini döndürür.

### `T* release() noexcept`

İşaretçiyi serbest bırakır ve işaretçinin sahipliğini bırakır.

### `void reset(T* ptr = nullptr) noexcept`

İşaretçiyi sıfırlar ve isteğe bağlı olarak yeni bir işaretçi atar.

### `template<typename ...Args> void emplace(Args&& ...args)`

İşaretçinin gösterdiği bellek alanını serbest bırakır ve yerine yeni bir nesne yerleştirir.

---

Bu belge, `my_ptr` sınıfının temel özelliklerini kapsamaktadır. Daha fazla ayrıntı ve örnek kullanımlar için kodu inceleyebilirsiniz.
