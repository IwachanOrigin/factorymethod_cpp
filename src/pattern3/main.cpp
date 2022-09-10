
#include "filedataobjectfactory.h"
#include "dbdataobjectfactory.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char *argv[])
{
    // FileDataObject クラスと DBDataObject クラスは、DataObject クラスを継承して作成しています。
    // pattern2との違いは、クラスを生成する役割を 各クラス専用のDataObjectFactoryクラスに任せた点です。
    // pattern2ではDataObjectFactoryクラスに任せていました。
    // DataObjectFactoryクラスはヘッダーだけの存在となり、ただ継承されるだけのクラスとなります。
    // 結果、DataObjectFactoryクラスを修正することなく、新しいクラスを追加できるという
    // 疎結合な拡張性を獲得できました。
    // pattern2同様、拡張性が高くなった反面、拡張するにつれてクラスの数も増えてしまいます
    // xxDataOjbectクラスとxxDataObjectFactoryクラスが増加していく
    // 役割がはっきりとしているので、何をやっているのかはソースコードのファイル名でほぼ理解できますが
    // ファイル数だけ見ると膨大な設計が行われているようにも見えてしまうかもしれません。

    DataObjectFactory *fileFactory = new FileDataObjectFactory();
    DataObject* fileDataObject = fileFactory->create();
    DataObjectFactory *dbFactory = new DBDataObjectFactory();
    DataObject* dbDataObject = dbFactory->create();

    std::cout << "file data[0] = " << fileDataObject->getName(0) << std::endl;
    std::cout << "db data[0] = " << dbDataObject->getName(0) << std::endl;

    delete fileDataObject;
    delete fileFactory;

    return 0;
}
