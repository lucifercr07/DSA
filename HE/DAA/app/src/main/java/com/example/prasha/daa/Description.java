package com.example.prasha.daa;

/**
 * Created by prasha on 4/1/17.
 */

public class Description {

    public Description(){}

    String QuickSort = "1. There are many versions of Quicksort, which is one of the most popular sorting methods" +
                        " due to its speed (O(N logN) average, but O(N^2) worst case.\n" +
                        "2. QuickSort takes constant space.\n" +
                        "3. It's a stable algorithm.\n" +
                        "4. Pivot should be taken randomly for perfectly sorted array.";

    String MergeSort = "1. Merge sort is a sorting technique based on divide and conquer technique. With worst-case time " +
            "complexity being Ο(n log n), it is one of the most respected algorithms.\n" +
            "2. Merge sort first divides the array into equal halves and then combines them in a sorted manner.\n" +
            "3. Merge Sort takes constant space.\n" +
            "\n" +
            "4. It's a stable sorting algorithm.\n" +
            "\n" +
            "5. Randomly picking a pivot helps removing unnecessary scenarios and give a perfectly sorted array.";

    String TimSort =
            "1. Timsort algorithm, derived from merge sort and insertion sort, designed to perform well on many kinds of real-world data.\n"
            +
            "2. It has time complexity as O(n) in best case and O(n log(n)) in average and worst case scenario.\n"+
            "3. Timsort takes linear space i.e O(n).\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. It has been a standard sorting algorithm in Python, OpenJDK 7 and Android JDK 1.5 ever " +"since in" +
                    "vented in 2002 by Tim Peters(named after him).\n";

    String HeapSort =
            "1. Heap Sort is one of the best sorting methods being in-place and with no quadratic worst-case scenarios.\n"+
    "2. It has time complexity as O(n log(n)) in best case, average and worst case scenario.\n"+
    "3. HeapSort takes constant space.\n"+
            "4. It is not a stable sorting algorithm.\n"+
    "5. Heap sort algorithm is divided into two basic parts : Creating a Heap of the unsorted list and then a sorted " +
            "array is created by repeatedly removing the largest/smallest element from the heap, inserting it into the array. " +
            "The heap is reconstructed after each removal.\n";

    String BubbleSort=
            "1. Bubble Sort is an algorithm which is used to sort N elements that are given in a memory for eg: an Array with N number of elements.\n"+
            "2. It has time complexity as O(n) in best case and O(n^2) in average and worst case scenario.\n"+
            "3. BubbleSort takes constant space i.e O(1).\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. It is called Bubble sort, because with each iteration the smaller " +
                    "element in the list bubbles up towards the first place, just like a water bubble rises up to the water surface.\n";

    String InsertionSort=
            "1. It is a simple Sorting algorithm which sorts the array by shifting elements one by one. Following are some of the important characteristics of Insertion Sort.\n"+
            "2. It has time complexity as O(n) in best case and O(n^2) in average and worst case scenario.\n"+
            "3. InsertionSort takes constant space i.e O(1).\n"+
            "4. It is Stable, as it does not change the relative order of elements with equal keys.\n"+
            "5. It is efficient for smaller data sets, but very inefficient for larger lists.\n";

    String SelectionSort=
            "1. Selection sorting is conceptually the most simplest sorting algorithm.\n"+
            "2. It has time complexity as O(n^2) in best, average and worst case scenario.\n"+
            "3. SelectionSort takes constant space i.e O(1).\n"+
            "4. It is a unstable sorting algorithm, but it can also be stable .\n"+
            "5. This algorithm first finds the smallest element in the array and exchanges it with the element in the first position, then find " + "the second smallest element and exchange it with the element in the second position, and continues in this way until the entire array is sorted.\n";

    String TreeSort=
            "1. A tree sort is a sort algorithm that builds a binary search tree from the elements to be sorted, and then traverses the tree (in-order) so that the elements come out in sorted order.\n"+
            "2. It has time complexity as O(n log(n)) in best and average, O(n^2) in worst case scenario.\n"+
            "3. It takes linear space i.e O(n).\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. Its typical use is sorting elements adaptively: after each insertion, the set of elements seen so far is available in sorted order.\n";

    String ShellSort=
            "1. Shellsort, also known as Shell sort or Shell's method, is an in-place comparison sort. It can be seen as either a generalization of sorting by exchange (bubble sort) or sorting by insertion (insertion sort).\n"+
            "2. It has time complexity as O(n log(n)) in best, O( (n log(n))^2 ) in average and worst case scenario.\n"+
            "3. It takes constant space i.e O(1).\n"+
            "4. It is a unstable sorting algorithm.\n"+
            "5.  Donald Shell published the first version of this sort in 1959.\n";

    String BucketSort=
            "1. Bucket sort, or bin sort, is a sorting algorithm that works by distributing the elements of an array into a number of buckets.\n"+
            "2. It has time complexity as O(n + k) in best and average, O(n^2) in worst case scenario.\n"+
            "3. It takes linear space i.e O(n).\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. Bucket sort can be implemented with comparisons and therefore can also be considered a comparison sort algorithm.\n";

    String RadixSort=
            "1. Radix sort is a non-comparative integer sorting algorithm that sorts data with integer keys by grouping keys by the individual digits which share the same significant position and value.\n"+
            "2. It has time complexity as O(nk) in best, average and worst case scenario.\n"+
            "3. It takes linear space i.e O(n+k).\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. If we have log2n bits for every digit, the running time of Radix appears to be better than Quick Sort for a wide range of input numbers. The constant factors hidden in asymptotic notation are higher for Radix Sort and Quick-Sort uses hardware caches more effectively.\n";

    String CountingSort=
            "1. Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing).\n"+
            "2. It has time complexity as O(n+k) in best, average and worst case scenario.\n"+
            "3. It takes constant space i.e O(k). Here, ‘k’ is range of input.\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. Counting sort is efficient if the range of input data is not significantly greater than the number of objects to be sorted. Consider the situation where the input sequence is between range 1 to 10K and the data is 10, 5, 10K, 5K.\n";

    String CubeSort=
            "1. Cubesort is a parallel sorting algorithm that builds a self-balancing multi-dimensional array from the keys to be sorted.\n"+
            "2. It has time complexity as O(n) in best, O(n log(n)) in average and worst case scenario.\n"+
            "3. It takes linear space i.e O(n).\n"+
            "4. It is a stable sorting algorithm.\n"+
            "5. Cubesort's algorithm uses a specialized binary search on each axis to find the location to insert an element. When an axis grows too large it is split.\n";

    public String getdesc(String name){
            if(name.equals("QuickSort")){
                return QuickSort;
            }
        else if(name.equals("MergeSort")){
            return MergeSort;
        }
            else if(name.equals("Insertion Sort")){
                return InsertionSort;
            }

            else if(name.equals("Bubble Sort")){
                return BubbleSort;
            }
            else if(name.equals("HeapSort")){
                return HeapSort;
            }
            else if(name.equals("Selection Sort")){
                return SelectionSort;
            }
            else if(name.equals("Bucket Sort")){
                return BucketSort;
            }
            else if(name.equals("Radix Sort")){
                return RadixSort;
            }
            else if(name.equals("Tree Sort")){
                return TreeSort;
            }

            else if(name.equals("Shell Sort")){
                return ShellSort;
            }

            else if(name.equals("Counting Sort")){
                return CountingSort;
            }
            else if(name.equals("Cube Sort")){
                return CubeSort;
            }
        else if(name.equals("TimSort")){
            return TimSort;
        }

        else
            return "No data";
    }

}


