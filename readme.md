# FactoryMethod cpp demo code

## Overview

    Simple implementation example of singleton pattern using cpp

## 使いどころ

    インターフェイスは同じだけど、実行する処理が異なるクラスを使うとき。  
    書籍の例だと、DBから値を受け取るか、Fileから値を受け取るかを同じインターフェイスで実現しています。  
    値の取得方法やDBへの接続、ファイル読み込みなど、それぞれで異なる部分はあります。  
    しかし、それらのクラスを利用する側は取得方法や取得箇所について意識する必要がありません。(設計に依ります)  
    異なる機能を持つクラスごとのインターフェイスに依存せず、一つのインターフェイスから異なるクラスを  
    扱う場合に重宝するパターンだと思います。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build 

## Licence

    [MIT](https://github.com/IwachanOrigin/singleton_cpp/blob/master/LICENSE)

