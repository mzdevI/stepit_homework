using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Calculator_12_10_2023;
/// <summary>
/// Interaction logic for MainWindow.xaml
/// </summary>

public enum EqationSide
{
    LEFT,
    RIGHT
}

public enum Operator
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
}


public partial class MainWindow : Window, INotifyPropertyChanged
{

    private int _result = 0;
    private bool _isShowingValueAfterOperation = false;
    private int[] _eqation = new int[2];
    private EqationSide _index = EqationSide.LEFT;

    public event PropertyChangedEventHandler? PropertyChanged;


    public MainWindow()
    {
        InitializeComponent();
        DataContext = this;
    }

    protected virtual void OnPropertyChanged(string propertyName)
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }

    public int Result
    {
        get { return _result; }
        set
        {
            _result = value;
            OnPropertyChanged(nameof(Result));
        }
    }

    private void ClearButton_Click(object sender, RoutedEventArgs e)
    {
        ResetResult();
        _index = EqationSide.LEFT;
        _eqation[(int)EqationSide.LEFT] = 0;
    }

    private void PlusMinusButton_Click(object sender, RoutedEventArgs e)
    {
        // Implement the logic for the "+/-" (Plus/Minus) button click event here.
    }

    private void PercentButton_Click(object sender, RoutedEventArgs e)
    {
        // Implement the logic for the "%" (Percent) button click event here.
    }

    private void DivideButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.DIVIDE);
    }

    private void SevenButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 7;
    }

    private void EightButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 8;
    }

    private void NineButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 9;
    }

    private void MultiplyButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.MULTIPLY);
    }

    private void FourButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 4;
    }

    private void FiveButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 5;
    }

    private void SixButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 5;
    }

    private void MinusButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.SUBTRACT);
    }

    private void OneButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 1;
    }

    private void TwoButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 2;
    }

    private void ThreeButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result = Result * 10 + 3;
    }

    private void PlusButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.ADD);
    }

    private void ZeroButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        Result *= 10;
    }

    private void CommaButton_Click(object sender, RoutedEventArgs e)
    {
        // Implement the logic for the "," (Comma) button click event here.
    }

    private void EqualButton_Click(object sender, RoutedEventArgs e)
    {

    }

    private void ResetResult()
    {
        Result = 0;
    }
    
   private void ValueStateHandler()
    {
        if (_isShowingValueAfterOperation)
        {
            _isShowingValueAfterOperation = false;
            ResetResult();
        }
    }

    private void Calculate(Operator op)
    {
        if (_index == EqationSide.LEFT)
        {
            _eqation[(int)EqationSide.LEFT] = Result;
            ResetResult();
            _index = EqationSide.RIGHT;
        }
        else
        {
            Result = _eqation[(int)EqationSide.LEFT] + Result;

            switch (op)
            {
                case Operator.ADD:
                    Result = _eqation[(int)EqationSide.LEFT] + Result;
                    break;

                case Operator.SUBTRACT:
                    Result = _eqation[(int)EqationSide.LEFT] - Result;
                    break;

                case Operator.MULTIPLY:
                    Result = _eqation[(int)EqationSide.LEFT] * Result;
                    break;

                case Operator.DIVIDE:
                    Result = _eqation[(int)EqationSide.LEFT] / Result;
                    break;



            }

            _eqation[(int)EqationSide.LEFT] = Result;
            _eqation[(int)EqationSide.RIGHT] = 0;
            _isShowingValueAfterOperation = true;
        }
    }

}
