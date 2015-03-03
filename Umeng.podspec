Pod::Spec.new do |s|
 s.name = "UmengLib"
 s.version = "0.0.1"
 s.summary = "A short description of LiftoffDemo."
 s.description = <<-DESC
 A longer description of MyPodDemo in Markdown format.
 * Think: Why did you write this? What is the focus? What does it do?
 * CocoaPods will be using this to generate tags, and improve search results.
 * Try to keep it short, snappy and to the point.
 * Finally, don't worry about the indent, CocoaPods strips it!
 DESC
 s.homepage = "http://gitlab.corp.qunar.com/jingxuan.dou/liftoffdemo.git"
 s.license = "MIT"
 s.author = { "窦静轩" => "dronaldo80@gmail.com" }
 s.source = { :git => "http://gitlab.corp.qunar.com/jingxuan.dou/liftoffdemo.git",:tag =>"0.0.1"}
 s.source_files =  "Umeng/*.{h,m,mm}"
 s.requires_arc = true
 s.public_header_files = "LiftoffDemo/Umeng/*.h"
 s.ios.vendored_library = "Umeng/*.a"
 # s.framework = "SomeFramework"
 # s.frameworks = "SomeFramework", "AnotherFramework"
 # s.library = "z"
 s.libraries = "z.1"
 # s.dependency "JSONKit", "~> 1.4"
 # s.dependency "AFNetworking", "~> 2.2.4"
 end