const http = require("http");
const url = require("url")
const hostname = "127.0.0.1";
const port = 3000;

const server = http.createServer(function (req, res) {
  res.writeHead(200, { "Content-Type": "text/html" });
//   const parsedUrl = url.parse(req.url, true);
  const parsedUrl = url.parse(req.url, true);
  const query = parsedUrl.query;

  let txt = "";
  
  if (query.year && query.month) {
    txt = query.year + " " + query.month;
  } else {
    txt = "Missing year or month parameters"; // Handle missing parameters
  }
  res.end(txt);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
