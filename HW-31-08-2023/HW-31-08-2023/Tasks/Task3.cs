namespace HW_31_08_2023.Tasks;

public class Task3
{
    public static int[] FilterArray(int[] originalArray, int[] filterArray)
    {
        bool[] toFilter = new bool[originalArray.Length];

        for (int i = 0; i < originalArray.Length; i++)
        {
            for (int j = 0; j < filterArray.Length; j++)
            {
                if (originalArray[i] == filterArray[j])
                {
                    toFilter[i] = true;
                    break;
                }
            }
        }

        int countToKeep = 0;
        for (int i = 0; i < originalArray.Length; i++)
        {
            if (!toFilter[i])
            {
                countToKeep++;
            }
        }

        int[] filteredArray = new int[countToKeep];
        int index = 0;

        for (int i = 0; i < originalArray.Length; i++)
        {
            if (!toFilter[i])
            {
                filteredArray[index++] = originalArray[i];
            }
        }

        return filteredArray;
    }
}