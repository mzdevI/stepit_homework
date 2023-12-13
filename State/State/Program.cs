using State.Entities.Classes;

var canvas = new Canvas(new SelectionTool());

canvas.MouseDown();
canvas.MouseUp();

canvas.SetTool(new BrushTool());

canvas.MouseDown();
canvas.MouseUp();
