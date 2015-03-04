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
 s.homepage = "https://github.com/Dronaldo17/UmengLib.git"
 s.license = "MIT"
 s.author = { "窦静轩" => "dronaldo80@gmail.com" }
 s.source = { :git => "https://github.com/Dronaldo17/UmengLib.git",:tag =>"0.0.1"}
 s.source_files =  "Umeng/*.{h,m,mm,json}"
 s.requires_arc = true
 s.public_header_files = "Umeng/*.h"
 # s.vendored_frameworks = "Umeng/*.framework"
 s.vendored_library = "Umeng/*.a"
 s.framework = "SystemConfiguration"
 # s.frameworks = "SomeFramework", "AnotherFramework"
 # s.library = "z"
 s.libraries = "z","sqlite3"
 # s.dependency "JSONKit", "~> 1.4"
 # s.dependency "AFNetworking", "~> 2.2.4"
 end
