#
#  Be sure to run `pod spec lint UIIndicatorView.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "UIIndicatorView"
  s.version      = "0.0.2"
  s.summary      = "UIIndicatorView can user for viewpage , you can show some index."
  s.description  = "Studying make me happy"
  s.homepage     = "https://github.com/Kesion-X/UIIndicatorView.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "kejianfang" => "kejianfang@meituan.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/Kesion-X/UIIndicatorView.git", :tag => "#{s.version}" }
  s.source_files  = "UIIndicatorViewTest/UIIndicatorView/**/*.{h,m}"
  s.framework  = "UIKit"

end
