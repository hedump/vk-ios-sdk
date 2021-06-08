// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "vk-ios-sdk",
    products: [
        .library(
            name: "vk-ios-sdk",
            targets: ["vk-ios-sdk"]),
    ],
    targets: [
        .target(
            name: "vk-ios-sdk",
            dependencies: [
            ],
            resources: [
                .copy("VkResources"),
            ],
            publicHeadersPath: ".",
            cSettings: [
                .headerSearchPath("DynamicFramework"),
                .headerSearchPath("Source"),
                .headerSearchPath("Source/API"),
                .headerSearchPath("Source/API/methods"),
                .headerSearchPath("Source/API/models"),
                .headerSearchPath("Source/API/upload"),
                .headerSearchPath("Source/Core"),
                .headerSearchPath("Source/Image"),
                .headerSearchPath("Source/Utils"),
                .headerSearchPath("Source/Views"),
            ]
        )
    ]
)
