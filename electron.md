# electron note

**1. 基本的窗体创建**

```javascript
// 从electron包导入app、BrowserWindow模块
const { app, BrowserWindow } = require('electron') 
let path = require('path')  // 导入操作文件的包
let main = null

//初始化窗口
function createWindow() {
    main = new BrowserWindow({
        width: 800,
        height: 600,
        webPreferences: {
            nodeIntegration: true
        }
    })

    main.loadFile(path.join('index.html')) // index.html加载的主界面
}
app.whenReady().then(() => createWindow())
app.on('window-all-closed', function() {
    app.quit()
})
```

**2. app的触发事件**

```javascript
app.on('window-all-closed', function() {}) // 当所有的窗口都被关闭时触发。
app.on('ready', function() {}) // 当 Electron 完成初始化时，发出一次。
app.on('dom-ready', function() {}) // 一个框架中的文本加载完成后触发
app.on('did-finish-load', function() {}) // 当应用程序完成基础的启动的时候被触发。 通常会在这里为 open-file 和 open-url 设置监听器，并启动崩溃报告和自动更新。
app.on('before-quit', function() {}) // 在程序关闭窗口前发信号。
app.on('will-quit', function() {}) // 当所有窗口被关闭并且应用程序都已经退出时触发
app.on('quit', function() {}) // 在应用程序退出时发出。
app.on('closed', function() {}) // 当窗口关闭时发出，收到此事件后，应删除对窗口的引用，并避免再使用它
```

**3.process进程**

- `crash()`
- `hang()`
- `getCreationTime()`
- `getHeapStatistics()`
- `getBlinkMemoryInfo()`
- `getProcessMemoryInfo()`
- `getSystemMemoryInfo()`
- `getSystemVersion()`
- `getCPUUsage()`
- `getIOCounters()`
- `argv`
- `execPath`
- `env`
- `pid`
- `arch`
- `platform`
- `沙盒化`
- `type`
- `version`
- `versions`
- `mas`
- `windowsStore`





