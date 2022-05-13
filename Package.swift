// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "MapSDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "MapSDK",
            targets: ["MapSDK"])
    ],
    targets: [
        .binaryTarget(
            name: "MapSDK",
            path: "MapSDK.xcframework"
        )
    ])

