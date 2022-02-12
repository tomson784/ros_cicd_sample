# ros_cicd_sample

![test workflow](https://github.com/tomson784/ros_cicd_sample/actions/workflows/blank.yml/badge.svg)

ROSを用いたCI/CDの実装サンプル

## Unit Test

rosの単体テストを行う．
主に関数が機能しているかを確認する．

## hztest

任意のtopicが出力されているかを確認する．
単にtopicが出力されているかを確認することもできるし，周波数[Hz]とその幅を指定することで処理能力が自身の想定に達しているかを確認することができる．

```xml
<param name="hztest1/topic" value="chatter" />     # チェックしたいtopic名
<param name="hztest1/hz" value="8.0" />            # topicの周波数
<param name="hztest1/hzerror" value="1.0" />       # 許容するtopicのhz幅
<param name="hztest1/test_duration" value="5.0" /> # テストする時間
# hztestノード．ノード名でテストのrosparam名を設定する．
<test test-name="hztest_test" pkg="rostest" type="hztest" name="hztest1" />
```

## 参考
- [ワークフローステータスバッジを追加する](https://docs.github.com/ja/actions/managing-workflow-runs/adding-a-workflow-status-badge)
- [rostest : Standard Test Nodes](http://wiki.ros.org/rostest/Nodes)
- [rostest : Writing rostest files](http://wiki.ros.org/rostest/Writing)
