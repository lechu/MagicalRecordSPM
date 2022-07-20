// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MagicalRecord",
    platforms: [.iOS(.v13)],
    products: [
        .library(
            name: "MagicalRecord",
            targets: ["MagicalRecord"]),
    ],
    dependencies: [
    ],
    targets: [
        .target(
            name: "MagicalRecord",
            path: "Sources",
            //exclude: ["Include"],
            sources: ["MagicalRecord"],
            publicHeadersPath: "Include"),
        .testTarget(
            name: "MagicalRecordTests",
            dependencies: ["MagicalRecord"],
            path: "Tests"),
    ]
)
