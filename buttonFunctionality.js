function controlsButton() {
    document.write("<style> body {background-color: black; color: white; font-family: Arial, sans-serif; margin: 20px;}</style><h1>Controls</h1><p>- Type the character found within brackets '[]' to use the commands on screen.</p><div><button id='returnButton' onclick='returnButton()'>Return</button></div>");
}
function aboutButton() {
    document.write("<style> body {background-color: black; color: white; font-family: Arial, sans-serif; margin: 20px;}</style><h1>About</h1><p>Created by JCantu311, Copyright (c) 2025.</p><p>Game programmed in C, Documentation made in HTML with CSS styling and JavaScript scripting.</p><div><button id='returnButton' onclick='returnButton()'>Return</button></div>");
}

function licenseButton() {
    document.write("<style> body {background-color: black; color: white; font-family: Arial, sans-serif; margin: 20px;}</style><h1>License</h1><p>Copyright (c) 2025 JCantu311 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the 'Software'), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: </p><p>The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.</p><p>THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.<div><button id='returnButton' onclick='returnButton()'>Return</button></div>");
}

function returnButton() {
    location.reload();
}