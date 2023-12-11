namespace Proxy;

public class ImageProxy : IImage
{
    private RealImage _realImage;
    private string _filename;

    public ImageProxy(string filename)
    {
        _filename = filename;
    }

    public void Display()
    {
        _realImage ??= new RealImage(_filename);

        _realImage.Display();
    } 
}
