# 🧮 Math WebAssembly Project

A web-based interactive math application written in **C++** and compiled to **WebAssembly (WASM)** using **Emscripten**. This project leverages WebAssembly to run high-performance C++ code directly inside the browser alongside standard HTML, CSS, and JavaScript.

---

## 🛠️ Tech Stack

* **Language:** C++ (`math.cpp`)
* **Compilation:** WebAssembly (`index.wasm`), Emscripten (`index.js`)
* **Frontend:** HTML5 (`index.html`), JavaScript
* **Version Control:** Git & GitHub

---

## 📁 Repository Structure

```text
├── index.html    # Web frontend UI
├── index.js      # Emscripten glue code bridging JS and WebAssembly
├── index.wasm    # Compiled WebAssembly binary
├── math.cpp      # Core C++ mathematical logic
└── README.md     # Project documentation
