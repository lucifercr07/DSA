package com.example.prasha.daa;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.text.SpannableString;
import android.text.style.UnderlineSpan;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

public class FifthActivity extends AppCompatActivity {

    private TextView sort,best,avg,worst,spworst,best1,avg1,worst1,spworst1,sortTimedesc,sortSpaceDesc,TimeComplexity,SpaceComplexity;
    DatabaseHelper myDb;
    private Bundle bundle;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fifth);
        myDb = new DatabaseHelper(this);
        myDb.openDataBase();
        sort = (TextView) findViewById(R.id.textView3);
        TimeComplexity = (TextView) findViewById(R.id.textView4);
        sortTimedesc=(TextView) findViewById(R.id.textView5);
        best = (TextView) findViewById(R.id.textView6);
        avg = (TextView) findViewById(R.id.textView7);
        worst = (TextView) findViewById(R.id.textView8);
        spworst = (TextView) findViewById(R.id.textView14);
        SpaceComplexity=(TextView) findViewById(R.id.textView9);
        best1 = (TextView) findViewById(R.id.textView11);
        avg1 = (TextView) findViewById(R.id.textView12);
        worst1 = (TextView) findViewById(R.id.textView13);
        spworst1 = (TextView) findViewById(R.id.textView15);
        sortSpaceDesc=(TextView) findViewById(R.id.textView10);
        bundle = getIntent().getExtras();
        if (bundle != null) {
            String data = bundle.getString("name");
            show(data);
        }
        String string1= "Time Complexity: ";
        String string2= "Space Complexity: ";
        SpannableString content = new SpannableString(string1);
        content.setSpan(new UnderlineSpan(), 0, string1.length(), 0);
        TimeComplexity.setText(content);
        SpannableString content1 = new SpannableString(string2);
        content1.setSpan(new UnderlineSpan(), 0, string2.length(), 0);
        SpaceComplexity.setText(content1);

    }

    public void show(String data){
        if(data.equals("quicksort")){
           sort.setText("QUICKSORT");
           getData("QuickSort");
        }
        else if(data.equals("mergesort")){
            sort.setText("MERGESORT");
            getData("MergeSort");
        }
        else if(data.equals("timsort")){
            sort.setText("TIMSORT");
            getData("TimSort");
        }
        else if(data.equals("heapsort")){
            sort.setText("HEAPSORT");
            getData("HeapSort");
        }
        else if(data.equals("selectionsort")){
            sort.setText("SELECTION SORT");
            getData("SelectionSort");
        }
        else if(data.equals("bubblesort")){
            sort.setText("BUBBLE SORT");
            getData("BubbleSort");
        }
        else if(data.equals("insertionsort")){
            sort.setText("INSERTION SORT");
            getData("InsertionSort");
        }
        else if(data.equals("cubesort")){
            sort.setText("CUBE SORT");
            getData("CubeSort");
        }
        else if(data.equals("treesort")){
            sort.setText("TREE SORT");
            getData("TreeSort");
        }
        else if(data.equals("radixsort")){
            sort.setText("RADIX SORT");
            getData("RadixSort");
        }
        else if(data.equals("shellsort")){
            sort.setText("SHELL SORT");
            getData("ShellSort");
        }
        else if(data.equals("bucketsort")){
            sort.setText("BUCKET SORT");
            getData("BucketSort");
        }
        else if(data.equals("countingsort")){
            sort.setText("COUNTING SORT");
            getData("CountingSort");
        }
    }

    public void getData(String name){
        Cursor res = myDb.getDatas(name);
        if(res.getCount() == 0) {
            Toast.makeText(FifthActivity.this, "No Data Available", Toast.LENGTH_LONG).show();
            return;
        }
        StringBuffer buffer = new StringBuffer();
        while(res.moveToNext()){

            buffer.append(res.getString(1)+"\n");
            buffer.append(res.getString(2)+"\n");
            buffer.append(res.getString(3)+"\n");
            buffer.append(res.getString(4)+"\n");
        }

        String a[]=buffer.toString().split("\n");
        best1.setText(a[0]);
        avg1.setText(a[1]);
        worst1.setText(a[2]);
        spworst1.setText(a[3]);
    }

}



