import('./cmake-build-debug/hello.js').then(m => m.default()).then(Module => {
    Module.multiply = (a, b) => a * b;

    Module.mounted();

    console.log("call add:", Module.add(2, 2));

    document.querySelector("#root").innerHTML = "<h1>Hello World!</h1>";
})
