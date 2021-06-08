# vk-ios-sdk (Swift Package Manager)
## tl;dr
Я сделал форк официальный либы для подключения ее с помощью SPM, убрав все лишнее и оставив только (obj-c) исходники. Для описания работы SDK идите в официальную [репу](https://github.com/VKCOM/vk-ios-sdk).

Do you speak english m#$@%!!r: this is fork of vk-ios-sdk without unnecessary files working on Swift Package manager.
## Installation
### As part of project
Select Xcode menu `File > Swift Packages > Add Package Dependency` and paste repository URL.
```
https://github.com/qe0/vk-ios-sdk.git
```
### Package inside another one
Add package in `dependencies` of your Package.swift
```swift
let package = Package(
    ...,
    dependencies: [
        .package(url: "https://github.com/qe0/vk-ios-sdk.git", .exact("4.2.0"))
        ...
    ],
    targets: [
        .target(
            name: "MyPackage",
            dependencies: [
                "vk-ios-sdk",
                ...
            ]
        ),
        ...
    ]
)
```
## My manifest
I'm not gonna change or delete anything in this fork. Use it as it is. Maybe I will fix something to match VK critical fixes, dunno.
Also, fucking damn, VK, fuck it, get on with it, for fuck's sake. **DO SOMETHING BLYAT.**
## License
idk maybe on original fork there is one
