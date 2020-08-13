const messages = [
  'Wag sa w3cschools, dapat MDN: https://developer.mozilla.org/en-US/ - Sir Jo',
  'kahit editor ko ikaw pala nag introduce, using nvim (vim) to edit this (https://github.com/identor/dotfiles/tree/master/vim). Prinesent ko dati sa progapps lec haha',
  // TODO add some more
];


// Just lol para may thrill, modularity - prog apps uli haha
const printMessage = (logger) => message => console.log(message);
const consoleLogger = {
  info: (...args) => console.log(args),
  error: (...args) => console.error(args),
}

// wrap sa promise baka may async later ;)
async function main() {
  messages.forEach(printMessage(consoleLogger))
}

main().catch(err => { consoleLogger.error(err.message); });
// pwede naman na `console.log` lang haha. Many ways to skin a cat nga diba Sir Jo? lol

