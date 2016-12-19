Pod::Spec.new do |s|
s.name         = 'TFBaseLib_iOS'
s.version      = '0.0.35'
s.summary      = 'TFBaseLib_iOS'
s.description  = <<-DESC
the description for TFBaseLib_iOS only pod code
DESC
s.homepage     = 'http://git01.dds.com/MP/TFBaseLib_iOS'
s.license      = 'MIT'
s.author       = { "xiayiyong" => "xiayiyong@chexiang.com" }
s.source       = {
                 :git => '.TFBaseLib_iOS.git',
                 :tag => s.version,
                 :submodules => true
                 }

s.ios.deployment_target = '7.0'
s.requires_arc = true

# s.framework  = "frameworkname"
# s.library   = "libraryname"
# s.libraries = "stdc++", "sqlite3"
# s.vendored_libraries = "TFBaseLib/Classes/**/*.{a}"
# s.vendored_frameworks = "TFBaseLib/Classes/**/*.{framework}"
# s.resources = "TFBaseLib/Resources/**/*.{bundle}"

s.public_header_files = 'TFBaseLib/TFBaseLib.h'
s.source_files = 'TFBaseLib/TFBaseLib.h'

s.frameworks = "Foundation", "UIKit", "CoreGraphics", "CoreText", "CoreTelephony", "CoreLocation", "Security", "ImageIO", "QuartzCore", "SystemConfiguration"

s.subspec 'Core-3rd' do |ss|
ss.platform = :ios
ss.source_files = 'TFBaseLib/Classes/Core-3rd/*.{h,m}'
ss.public_header_files = 'TFBaseLib/Classes/Core-3rd/*.h'
ss.source = {:submodules => true}

  ss.subspec 'AFNetworking-AutoRetry' do |sss|
  sss.platform = :ios
  sss.source_files = 'TFBaseLib/Classes/Core-3rd/AFNetworking-AutoRetry/*.{h,m}'
  sss.public_header_files = 'TFBaseLib/Classes/Core-3rd/AFNetworking-AutoRetry/*.h'
  sss.source = {:submodules => true}
  end

  ss.subspec 'GCDObjC' do |sss|
  sss.platform = :ios
  sss.source_files = 'TFBaseLib/Classes/Core-3rd/GCDObjC/*.{h,m}'
  sss.public_header_files = 'TFBaseLib/Classes/Core-3rd/GCDObjC/*.h'
  sss.source = {:submodules => true}
  end

end

s.subspec 'Core-Category' do |ss|
ss.platform = :ios
ss.source_files = 'TFBaseLib/Classes/Core-Category/**/*.{h,m}'
ss.public_header_files = 'TFBaseLib/Classes/Core-Category/**/*.h'
end

s.subspec 'Core-DataHelper' do |ss|
ss.platform = :ios
ss.source_files = 'TFBaseLib/Classes/Core-DataHelper/*.{h,m}'
ss.public_header_files = 'TFBaseLib/Classes/Core-DataHelper/*.h'
ss.source = {:submodules => true}

  ss.subspec 'TFAutoCodingCopying' do |sss|
  sss.platform = :ios
  sss.source_files = 'TFBaseLib/Classes/Core-DataHelper/TFAutoCodingCopying/*.{h,m}'
  sss.public_header_files = 'TFBaseLib/Classes/Core-DataHelper/TFAutoCodingCopying/*.h'
  sss.source = {:submodules => true}
  end

  ss.subspec 'TFUserDefaults' do |sss|
  sss.platform = :ios
  sss.source_files = 'TFBaseLib/Classes/Core-DataHelper/TFUserDefaults/*.{h,m}'
  sss.public_header_files = 'TFBaseLib/Classes/Core-DataHelper/TFUserDefaults/*.h'
  sss.source = {:submodules => true}
  end

  ss.subspec 'TFKeyChain' do |sss|
  sss.platform = :ios
  sss.source_files = 'TFBaseLib/Classes/Core-DataHelper/TFKeyChain/*.{h,m}'
  sss.public_header_files = 'TFBaseLib/Classes/Core-DataHelper/TFKeyChain/*.h'
  sss.source = {:submodules => true}
  end

end

s.subspec 'Core-Macro' do |ss|
ss.platform = :ios
ss.source_files = 'TFBaseLib/Classes/Core-Macro/*.{h,m}'
ss.public_header_files = 'TFBaseLib/Classes/Core-Macro/*.h'
end

s.subspec 'Core-Manager' do |ss|
ss.platform = :ios
ss.source_files = 'TFBaseLib/Classes/Core-Manager/*.{h,m}'
ss.public_header_files = 'TFBaseLib/Classes/Core-Manager/*.h'
end

s.subspec 'Core-Util' do |ss|
ss.platform = :ios
ss.source_files = 'TFBaseLib/Classes/Core-Util/*.{h,m}'
ss.public_header_files = 'TFBaseLib/Classes/Core-Util/*.h'
end

s.dependency  'Aspects','1.4.1'
s.dependency  'SSKeychain', '1.3.1'
s.dependency  'AFNetworking', '3.1.0'
s.dependency  'MJExtension', '3.0.10'
s.dependency  'ObjcAssociatedObjectHelpers','2.0.1'
s.dependency  'CocoaLumberjack', '2.2.0'

end