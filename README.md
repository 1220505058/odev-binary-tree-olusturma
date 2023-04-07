# odev-binary-tree-olusturma
preorder ve inorder gecisinden ikili agac olusturma
İşlev, boyutlarıyla birlikte" agacolustur" iki tamsayı dizisini preorder ve inorder girdi olarak alır ve ikili ağacın kök düğümüne bir işaretçi döndürür. İşlev önce giriş dizilerinden birinin boş olup olmadığını kontrol eder, bu durumda null döndürür.

Aksi takdirde, işlev içindeki ilk öğeyi preorder kök değer olarak çıkarır, "agacDugumu"bu değerle yeni bir öğe oluşturur ve ardından kök değerin dizinini bulur . Bu dizin inorder, daha sonra kök düğümün sol ve sağ alt ağaçlarını yinelemeli olarak oluşturmak için kullanılan sol ve sağ bölümlere ayrılır.

İşlev," inordergecis "bir ikili ağacın kök düğümüne bir işaretçiyi girdi olarak alır ve yinelemeli olarak ağacın sırasız bir geçişini gerçekleştirir ve her düğümün değerlerini ziyaret edildikleri sırayla yazdırır.

İşlevde main, önce ve giriş dizelerini tanımlarız preorder_str ve ardından ve işlevlerini inorder_str kullanarak bunları tamsayı dizilerine dönüştürürüz . Daha sonra bu dizileri çağırırız ve dizinin sırasız geçişini yazdırırız.
