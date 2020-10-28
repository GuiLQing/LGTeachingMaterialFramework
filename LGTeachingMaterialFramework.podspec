
Pod::Spec.new do |s|
  s.name             = 'LGTeachingMaterialFramework'
  s.version          = '1.1.5'
  s.summary          = 'A short description of LGTeachingMaterialFramework.'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  
  s.homepage         = 'https://github.com/GuiLQing/LGTeachingMaterialFramework'
  s.author           = { 'GuiLQing' => 'gui950823@126.com' }
  s.source           = { :git => 'https://github.com/GuiLQing/LGTeachingMaterialFramework.git', :tag => s.version.to_s }
  
  #s.homepage         = 'http://192.168.3.18:3000/pengshigui/LGTeachingMaterialFramework'
  #s.author           = { 'pengshigui' => 'gui950823@126.com' }
  #s.source           = { :git => 'http://192.168.3.18:3000/pengshigui/LGTeachingMaterialFramework.git', :tag => s.version.to_s }

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
  
  s.dependency 'AFNetworking','3.2.1'
  s.dependency 'IJKMediaFramework','0.1.2'
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
  s.dependency 'SGTools'
  s.dependency 'MSWeakTimer'
  s.dependency 'YJFontAlertView'
  s.dependency 'YJImageBrowser'

end
