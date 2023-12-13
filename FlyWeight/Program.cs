using FlyWeight;

var textEditor = new TextEditor();

textEditor.AddCharacter('H', ConsoleColor.Green);
textEditor.AddCharacter('e', ConsoleColor.Red);
textEditor.AddCharacter('l', ConsoleColor.Blue);
textEditor.AddCharacter('l', ConsoleColor.Yellow);
textEditor.AddCharacter('o', ConsoleColor.Cyan);

textEditor.PrintText();
