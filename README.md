<p align="center">
  <img src="res/logo-header.svg" alt="BlockLink - Your remote desktop"><br>
  <a href="#features">Features</a> •
  <a href="#installation">Installation</a> •
  <a href="#file-structure">Structure</a> •
  <a href="#contributing">Contributing</a>
</p>

BlockLink is a secure, open-source remote desktop software written in Rust. It offers seamless and encrypted remote access to your devices, giving you full control over your data.

### Key Features:
- ✅ Cross-platform support (Windows, macOS, Linux)
- ✅ End-to-end encryption for secure connections
- ✅ Easy setup with no configuration required
- ✅ Self-hosting options for complete data control
- ✅ High-performance screen sharing and file transfer

BlockLink welcomes contributions from everyone. See [CONTRIBUTING.md](docs/CONTRIBUTING.md) for guidelines on how to get started.

[**BINARY DOWNLOAD**](https://github.com/rustdesk/rustdesk/releases)

[**NIGHTLY BUILD**](https://github.com/rustdesk/rustdesk/releases/tag/nightly)

[<img src="https://f-droid.org/badge/get-it-on.png"
    alt="Get it on F-Droid"
    height="80">](https://f-droid.org/en/packages/com.carriez.flutter_hbb)
[<img src="https://flathub.org/api/badge?svg&locale=en"
    alt="Get it on Flathub"
    height="80">](https://flathub.org/apps/com.rustdesk.RustDesk)

## File Structure

- **libs/hbb_common**: Video codec, config, TCP/UDP wrapper, protobuf, file transfer functions, and utilities
- **libs/scrap**: Screen capture functionality
- **libs/enigo**: Platform-specific keyboard/mouse control
- **libs/clipboard**: File copy and paste for Windows, Linux, macOS
- **src/server**: Audio, clipboard, input, video services, and network connections
- **src/client.rs**: Starts a peer connection
- **src/platform**: Platform-specific code
- **flutter**: Flutter code for desktop and mobile applications

> **Misuse Disclaimer:** The developers of BlockLink do not condone or support any unethical or illegal use of this software. Unauthorized access, control, or invasion of privacy is strictly against our guidelines. The authors are not responsible for any misuse of the application.
