const http = require("http");
const d = require("./j.js");
const hostname = "127.0.0.1";
const port = 3000;
const server = http.createServer(function (req, res) {
  res.writeHead(200, { "Content-Type": "text/html" });
  res.write("The date and time are currently: " + d.datatime());
  res.end();
});
server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
