# TEAR (Terminal Execution & Analysis Runtime)

TEAR is a lightweight, high-performance terminal execution and benchmark runtime written in modern C++. Built for minimalism and raw execution analysis, it runs native processes, calculates precise performance metrics, and yields structured diagnostics directly inside the console interface.

## Features
- **Native Runtime Execution:** Executes system commands efficiently with low overhead.
- **Microsecond Diagnostics:** Captures precise timing benchmarks using modern high-resolution clocks.
- **Analysis Engine:** Parses exit statuses and execution states seamlessly.
- **Clean Architecture:** Fully written with explicit Allman-style formatting and encapsulated within custom namespaces.

## Usage
Run the executable followed by the terminal command you want to execute and analyze in quotes:
```bash
./tear "ls -la"
```

## Architecture & Style
TEAR strictly follows the **KISS** (Keep It Simple, Stupid) principle and is optimized for low memory usage. The codebase uses the Allman style for bracket alignment, ensuring high readability and seamless minification for single-line deployment architectures.

## License
This project is open-source and licensed under the **GNU GPL v3.0**. See the LICENSE file for details. All rights reserved by **hypernova-developer**.