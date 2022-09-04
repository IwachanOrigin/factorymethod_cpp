
#include "dataobject.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char *argv[])
{
    // FileDataObject クラスと DBDataObject クラスは、DataObject クラスを継承して作成しています。
    // DataObjectクラスはcreate関数でFileDataObjectクラスまたはDBDataObjectクラスを作成します。
    // これにより、main は FileDataObject クラスや DBDataObject クラスを意識することなく使用することが出来ます。
    // ただし、両者を同じインターフェイスで扱えるように設計する必要があります。
    // たとえば FileDataObject クラスの初期化ファイルを上位から与えることはできない...などが起きます。
    // （DataObjectクラスのインターフェイスを拡張すれば可能ですが、それはFileDataObjectクラスに引っ張られているような...)
    // 書籍の使用例にもあるように、FileDataObjectクラスは一時的なもので、後にDBDataObjectクラスを使用するのであれば、FileDataObjectクラスは
    // 有効な仕組みだと思います。

    DataObject* dataObject = DataObject::create();
    std::cout << "data[0] = " << dataObject->getName(0) << std::endl;

    return 0;
}
