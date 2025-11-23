const http = require("http");
const url = require("./url")
const hostname = "127.0.0.1";
const port = 3000;

const server = http.createServer(function (req, res) {
  res.writeHead(200, { "Content-Type": "text/html" });
  const q = url.parse(req.url, true).query
  let txt = q.year + " " + q.month;
    res.end(txt);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
