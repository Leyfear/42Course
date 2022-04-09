# 42Course  
42Course, 42 okullarının müfredatında bulunan projelerden oluşuyor. 42 okullarının en büyük avantajı hiçbir hocanın olmaması ve herkesin yeri geldiğinde hoca yeri geldiğinde öğrenci rolüne bürünebilmesidir. Böylece proje bazlı çalışmalarda iş ortamını sağlamaya yakın en gerçekçi okuldur. Çözüm okdaklı olmayı sağlar. 42 okullarında Temel programlama kavramlarını ve c dilinin temellerini öğreniriz. Gelişirken Unıx, grafik programalama ve web programlama öğrenilir. Devamında ise tamamen isteğe bağlı her daldan ilerlenebilir.  
Common course projects:

Libft:  
Libft projesinde C'nin standart kütüphanalerinde bulunan hazır fonksiyonları, kendim yazmaya çalıştım. En çok kullanılan fonksiyonlardan kendime bir kütüphane yaptım. Ayrıca C'de Structer'ları kullanarak LinkedListlerden fonksiyolar oluşturdum. Listelerin en başına ve en sonuna ulaşan ve eleman ekleyen 
fonksiyonlar yazdım. Bütün dosyaları arşive çeviren bir Make dosyası oluşturdum. Fonskiyonların hepsini güvenli şekilde yazmaya çalıştım. Böylece ulaşmamamız gereken yerlere ulaşmıyoruz. Genel olarak projenin amacı hazır fonksiyonların nasıl çalıştığını anlamak ve pointer kavramını oturtmak. Bunun yanında da Makefile'ın projelerdeki görevini anlamak.  

GetNextLine:  
Bu projedeki amacımız bir dosyadan sadece tek satır okuyan ve her çağırdığında yeni satırı ekrana bastıran fonksiyon yazmak. Dışardan verdiğimiz kadar bit okuyan bir fonksiyon oluşturduk ve eğer bir satırı geçip ikinci satırdanda bit okursa içerisinde depoluyor ve bir daha çağırdığımızda fazladan aldığı satırı tamamlayıp ekrana yazdırıyor.
Bonus projesinde farklı olarak birden fazla dosya okumasını sağlayan bir fonksiyon yazdık.Bunun için ise çift pointer kullandık.

Minitalk:   
Bu projede bitewise operatörleri , sinyalleri ve bit işlemlerini kullanarak processler üzerinden bir dosyadan bir dosyaya mesaj gönderme işlemini gerçekleştirdim. Öncelikle processin id'sini yani PİD'ni yazdıran sonra da sonsuz döngü içerisinde sinyal bekleyen bir dosyamız var. Bu server dosyamız diğer dosyadan sinyal geldikçe totalde 8 sinyale ulaşınca aldığı bitleri birleiştirip bir char yazdırıyor.
Diğer tarafa bir mesaj gönderirken her byte'ı 8 e bölüp bitewise işlemleri ile karşı tarafa 1 veya 0 şeklinde sinyaller yollayan bir algortimamız mevcut. Kısaca bu projede temel Unix kavramlarından sinyalleri ve bitewiseları öğrenmiş oluyoruz.



