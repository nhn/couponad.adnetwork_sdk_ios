# 쿠폰 광고 SDK
--------

## History
* [ChangeLog](https://github.com/nhn/couponad.adnetwork_sdk_ios/blob/master/CHANGELOG.md)

## 사용법

#### 1. 다운로드
* DownLoad
    * [Couponad_ADNetwork](https://github.com/nhn/couponad.adnetwork_sdk_ios/archive/master.zip)
    
#### 2. Cocoapods
* Cocoapods 사용
    * install Cocoapods
      ```
      $ gem install cocoapods
      ```
    * Podfile
      ```
      pod 'Couponad_ADNetwork', '~>1.0.0'
      ```
    * Pod install
      ```
      pod install 
        or
      pod update
      ```
      
#### 3. Objective-C 프로젝트 SDK 사용법
* Source
    * AppDelegate.m
      ```
      #import <ADNetwork/ADNetwork.h>

      ...
      - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
        // Override point for customization after application launch.
        ...
        // 발급받은 PUBID (Test : sdktestreal)
        // SDK 초기화
        [ADNetwork config:[[ADConfig alloc] initWith:pubId]];
        ...
        return YES;
      }
      ```
    
    * ViewController.m
        1. Push
        
              ```
              #import <ADNetwork/ADNetwork.h>

              @implementation ViewController

              ....


              - (void)goCouponViewController
              {
                  [self.navigationController pushViewController:[[ADNetworkViewController alloc] init] animated:YES];
              }

              ....

              @end

              ```

      2. present
        
            ```
            #import <ADNetwork/ADNetwork.h>

            @implementation ViewController

            ....


            - (void)goCouponViewController
            {
                [self presentViewController:[[ADNetworkViewController alloc] init] animated:YES completion:nil];
            }

            ....

            @end

            ```
    * 배지 여부 가져오기
      ```
      [ADNetwork isNewBadge:^(BOOL isBadge) {
          if (isBadge) {
              // 배지가 있을 경우
              // 각 제휴 앱에서의 해동
              // ex) 특정 준비한 (dot) 이미지를 보여준다.
          } else {
              // 배지가 없을 경우
          }
      }];
      ```

#### 4. Swift 프로젝트 SDK 사용법
* Source
    * AppDelegate
      ```
      func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
          // Override point for customization after application launch.

          ...

          // 발급받은 PUBID (Test : sdktestalpha)
          // SDK 초기화
          ADNetwork.config(ADConfig("sdktestalpha"))

          ....
          return true
      }
      ```
    * ViewController
      1. Push
          ```
          import ADNetwork

          class ViewController: UIViewController {

              ...

              private func goCouponViewController() {
                  self.navigationController?.pushViewController(ADNetworkViewController(), animated: true)
              }
              ...

          }
          ```
      2. Present
          ```
          import ADNetwork

          class ViewController: UIViewController {

              ...

              private func goCouponViewController() {
                  self.present(ADNetworkViewController(), animated: true, completion: nil)
              }
              ...

          }
          ```
    * 배지 여부 가져오기
      ```
      ADNetwork.isNewBadge { (isBadge) in
          if (isBadge) {
              // 배지가 있을 경우
              // 각 제휴 앱에서의 해동
              // ex) 특정 준비한 (dot) 이미지를 보여준다.
          } else {
              // 배지가 없을 경우
          }
      }
      ```
