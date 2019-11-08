#
#  Be sure to run `pod spec lint Couponad_ADNetwork.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "Couponad_ADNetwork"
  spec.version      = "1.0.0"
  spec.summary      = "NHN PAYCO : Coupon AD SDK."

  spec.description  = <<-DESC
			"NHN PAYCO
			 Coupon Advertisement SDK"
                   DESC
  spec.homepage     = 'https://github.com/nhn/couponad.adnetwork_sdk_ios'
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { 'NHN PAYCO' => 'taewoo.kang@nhnpayco.com' }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => 'https://github.com/nhn/couponad.adnetwork_sdk_ios.git', :tag => spec.version.to_s }
  spec.vendored_frameworks = "ADNetwork.framework"

end
