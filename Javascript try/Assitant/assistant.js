// assistant.js
const readline = require("readline");
const { exec } = require("child_process");
const say = require("say");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function respond(text) {
  console.log("🤖 Assistant:", text);
  say.speak(text);
}

function handleCommand(command) {
  command = command.toLowerCase();

  if (command.includes("open chrome")) {
    exec("start chrome");
    respond("Opening Chrome.");
  } else if (command.includes("open notepad")) {
    exec("start notepad");
    respond("Opening Notepad.");
  } else if (command.includes("shutdown")) {
    exec("shutdown /s");
    respond("Shutting down the computer.");
  } else if (command.includes("exit")) {
    respond("Goodbye!");
    rl.close();
  } else {
    respond("Sorry, I didn’t understand.");
  }
}

respond("Hello! I am your PC Assistant. Type a command:");

rl.on("line", (input) => {
  handleCommand(input);
});
