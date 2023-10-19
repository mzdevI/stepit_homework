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
    CLEAR,
    EQAUL
}


public partial class MainWindow : Window, INotifyPropertyChanged
{

    private int _currentValue = 0;
    private Operator _currentOperator;
    private bool _isShowingValueAfterOperation = false;
    private int[] _eqation = new int[2];
    private int _result = 0;
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

    public int CurrentValue
    {
        get { return _currentValue; }
        set
        {
            _currentValue = value;
            OnPropertyChanged(nameof(CurrentValue));
        }
    }
    
    private Operator CurrentOperator
    {
        get { return _currentOperator; }
        set 
        {
            _currentOperator = value;
            switch (_currentOperator)
            {
                case Operator.ADD:
                    OperatorLabel.Content = "+";
                    break;

                case Operator.SUBTRACT:
                    OperatorLabel.Content = "-";
                    break;

                case Operator.MULTIPLY:
                    OperatorLabel.Content = "*";
                    break;

                case Operator.DIVIDE:
                    OperatorLabel.Content = "÷";
                    break;

                case Operator.CLEAR:
                    OperatorLabel.Content = "CLEAR";
                    break;

                case Operator.EQAUL:
                    OperatorLabel.Content = "=";
                    break;
            }
        }
    }

    private void ClearButton_Click(object sender, RoutedEventArgs e)
    {
        CurrentOperator = Operator.CLEAR;
        _index = EqationSide.LEFT;
        _eqation[(int)EqationSide.LEFT] = 0;
        ResetResult();
    }


    private void ZeroButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue *= 10;
    }

    private void OneButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 1;
    }

    private void TwoButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 2;
    }

    private void ThreeButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 3;
    }
    private void FourButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 4;
    }

    private void FiveButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 5;
    }

    private void SixButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 6;
    }
    private void SevenButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 7;
    }

    private void EightButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 8;
    }

    private void NineButton_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue = CurrentValue * 10 + 9;
    }

    private void InvertSign_Click(object sender, RoutedEventArgs e)
    {
        ValueStateHandler();
        CurrentValue *= -1;
    }

    private void DivideButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.DIVIDE);
    }


    private void MultiplyButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.MULTIPLY);
    }


    private void MinusButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.SUBTRACT);
    }


    private void PlusButton_Click(object sender, RoutedEventArgs e)
    {
        Calculate(Operator.ADD);
    }

    private void EqualButton_Click(object sender, RoutedEventArgs e)
    {
        if (_index == EqationSide.RIGHT)
        {
            Calculate(CurrentOperator);
        }

        CurrentOperator = Operator.EQAUL;
    }

    private void ResetResult()
    {
        CurrentValue = 0;
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
        if (_isShowingValueAfterOperation)
        {
            CurrentOperator = op;
            return;
        };

        if (_index == EqationSide.LEFT)
        {
            _eqation[(int)EqationSide.LEFT] = CurrentValue;
            _index = EqationSide.RIGHT;

            CurrentOperator = op;
            ResetResult();
            return;
        }

        else
        {
            switch (op)
            {
                case Operator.ADD:
                    _result = _eqation[(int)EqationSide.LEFT] + CurrentValue;
                    break;

                case Operator.SUBTRACT:
                    _result = _eqation[(int)EqationSide.LEFT] - CurrentValue;
                    break;

                case Operator.MULTIPLY:
                    _result = _eqation[(int)EqationSide.LEFT] * CurrentValue;
                    break;

                case Operator.DIVIDE:
                    _result = _eqation[(int)EqationSide.LEFT] / CurrentValue;
                    break;
            }

            _eqation[(int)EqationSide.LEFT] = _result;
            _eqation[(int)EqationSide.RIGHT] = 0;
            _isShowingValueAfterOperation = true;
            CurrentValue = _result;
        }
    }
}
