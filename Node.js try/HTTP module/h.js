const http = require("http");
const fs = require("fs");
const hostname = "127.0.0.1";
const port = 3000;
const server = http.createServer(function (req, res) {
    fs.readFile("indx.html")
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write()
    res.end("helllo world")
});
server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
server.on("error", (err) => {
  console.error("Server error:", err);
});
