#
# Be sure to run `pod lib lint LGTeachingMaterialFramework.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = 'LGTeachingMaterialFramework'
s.version          = '1.0.5'
s.summary          = 'A short description of LGTeachingMaterialFramework.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

s.description      = <<-DESC
TODO: Add long description of the pod here.
DESC

s.homepage         = 'http://192.168.3.18:3000/pengshigui/LGTeachingMaterialFramework'
s.license          = { :type => 'MIT', :file => '../LICENSE' }
s.author           = { 'pengshigui' => 'gui950823@126.com' }
s.source           = { :git => 'http://192.168.3.18:3000/pengshigui/LGTeachingMaterialFramework.git', :tag => s.version.to_s }

s.ios.deployment_target = '9.0'

#系统依赖库
s.frameworks = 'AudioToolbox', 'AVFoundation', 'CoreGraphics', 'CoreMedia', 'CoreVideo', 'MediaPlayer', 'MobileCoreServices', 'OpenGLES', 'QuartzCore', 'UIKit', 'VideoToolbox', 'Accelerate'
s.libraries = 'z', 'bz2', 'stdc++'
s.requires_arc = true
s.static_framework  =  true

#需要包含的源文件
s.source_files = 'LGTeachingMaterialFramework/Classes/LGTeachingMaterialFramework.framework/Headers/*.{h}'

#你的SDK路径
s.vendored_frameworks = 'LGTeachingMaterialFramework/Classes/LGTeachingMaterialFramework.framework'

s.resources = 'LGTeachingMaterialFramework/Classes/LGTeachingMaterialFramework.bundle'

s.dependency 'PSGChainedMode'
s.dependency 'YJTaskMark'
s.dependency 'YJMediaPlayer'
s.dependency 'YJTaskModule'
s.dependency 'LGAlertHUD'
s.dependency 'YJNetManager'
s.dependency 'YJExtensions'
s.dependency 'YJPresentAnimation'
s.dependency 'LGDictionary'
s.dependency 'YJSearchController'
s.dependency 'YJBaseModule'
s.dependency 'MJExtension'
s.dependency 'Masonry'
s.dependency 'MarqueeLabel','3.2.0'
s.dependency 'MJRefresh'
s.dependency 'SDWebImage'
s.dependency 'TFHpple'
s.dependency 'ReactiveObjC'
s.dependency 'BlocksKit'
s.dependency 'XMLDictionary'
s.dependency 'LGNote'
s.dependency 'SGTools'
s.dependency 'MSWeakTimer'
s.dependency 'YJFontAlertView'
s.dependency 'YJImageBrowser'

end
