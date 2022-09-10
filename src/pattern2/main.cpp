
#include "dataobject.h"
#include "dataobjectfactory.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char *argv[])
{
    // FileDataObject クラスと DBDataObject クラスは、DataObject クラスを継承して作成しています。
    // pattern1との違いは、クラスを生成する役割を DataObjectFactoryクラスに任せた点です。
    // pattern1ではDataObjectクラスに任せていました。
    // DataObjectクラスはヘッダーだけの存在となり、ただ継承されるだけのクラスとなります。
    // 結果、DataObjectFactoryクラスにタイプという引数を与え、利用するクラスを生成することができる
    // 柔軟性を獲得できました。
    // 拡張性が高くなった反面、拡張するにつれてクラスの数も増えてしまいます(xxDataOjbectクラスが増加していく)
    // 簡単な仕組みで解決できるならpattern1でOKだと思います。
    // 後々を拡張性を考慮する必要がある場合、pattern2で設計する必要も出てくるでしょう。

    DataObjectFactory *factory = new DataObjectFactory(DataObjectFactory::STANDALONE);
    DataObject* dataObject = factory->create();
    std::cout << "data[0] = " << dataObject->getName(0) << std::endl;
    delete dataObject;
    delete factory;

    return 0;
}
