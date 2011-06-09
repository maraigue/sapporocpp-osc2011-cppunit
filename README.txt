オープンソースカンファレンス2011Hokkaidoにて、札幌C++勉強会が配布した冊子
「プログラミングの魔導少女」に記載されたソースコードのうち、
H.Hiroの担当記事「単体テストツール"CppUnit"入門」のものです。

- オープンソースカンファレンス http://www.ospn.jp/osc2011-do/
- 札幌C++勉強会 http://sites.google.com/site/sapporocpp/

[概要]

fraction.h, fraction.cppが「分数を定義するクラス」の実装で、
FractionTest.cppがそれらに対する単体テストです。

ただし本文中にて「fraction.cpp」としていたコードについては、
当アーカイブでは以下の名前で保存してあります。
- fraction.first.cpp
  とりあえずコンパイルが通るよう、最低限のメソッドのみを定義したもの。
  これを使って単体テストを実行すると、単体テストは失敗します。
- fraction.last.cpp
  正しい実装を書き加えたもの。
  これを使って単体テストを実行すると、単体テストは成功します。

[利用方法]

gcc向けのもののみ用意してあります。

(1) CppUnit（http://sourceforge.net/projects/cppunit/）をダウンロードし
    インストールします。configureスクリプトが同梱されています。
(2) ダウンロードしたCppUnitのアーカイブにある「examples/money/MoneyApp.cpp」を、
    このアーカイブ（sapporocpp-osc2011-cppunit）のあるディレクトリに
    「TestRunner.cpp」という名前でコピーします。
(3) このアーカイブ（sapporocpp-osc2011-cppunit）のあるディレクトリで
    「make first」（fraction.first.cppを使って単体テストを行う場合）ないし
    「make last」（fraction.last.cppを使って単体テストを行う場合）と
    コマンドを入力します。

[お問い合わせ]

H.Hiro http://hhiro.net/about/ main@hhiro.net

