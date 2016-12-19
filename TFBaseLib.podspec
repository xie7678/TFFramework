Pod::Spec.new do |s|
s.name         = 'TFBaseLib'
s.version      = '0.0.35'
s.summary      = 'TFBaseLib'
s.description  = <<-DESC
the description for TFBaseLib_iOS only pod framework
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
# s.public_header_files = 'TFBaseLib/TFBaseLib.h'
# s.source_files = 'TFBaseLib/TFBaseLib.h'

s.vendored_frameworks = "TFBaseLib/Output/*.{framework}"

s.frameworks = "Foundation", "UIKit", "CoreGraphics", "CoreText", "CoreTelephony", "CoreLocation", "Security", "ImageIO", "QuartzCore", "SystemConfiguration"

s.dependency  'FMDB', '2.6'
s.dependency  'Aspects','1.4.1'
s.dependency  'SSKeychain', '1.3.1'
s.dependency  'AFNetworking', '3.0.4'
s.dependency  'MJExtension', '3.0.10'
s.dependency  'ObjcAssociatedObjectHelpers','2.0.1'
s.dependency  'CocoaLumberjack', '2.2.0'

end