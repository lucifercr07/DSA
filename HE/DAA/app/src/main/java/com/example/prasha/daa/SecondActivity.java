package com.example.prasha.daa;

import android.content.Intent;
import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.text.Html;
import android.text.SpannableString;
import android.text.style.UnderlineSpan;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class SecondActivity extends AppCompatActivity {

    private Button quicksort,mergesort,timsort,heapsort,bubblesort,insertionsort,selectionsort,treesort,shellsort,radixsort,bucketsort,cubesort,countingsort;
    TextView t2;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);

        quicksort = (Button) findViewById(R.id.button4);
        quicksort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "quicksort");
                //intent.putExtra("complexity", "quickcomp");
                startActivity(intent);
            }
        });

       /* t2 = (TextView)findViewById(R.id.textView2);
        String styledText = "<u><font color='white'></font></u>.";
        t2.setText(Html.fromHtml(styledText), TextView.BufferType.SPANNABLE);
        */
        mergesort = (Button) findViewById(R.id.button5);
        mergesort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "mergesort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        timsort = (Button) findViewById(R.id.button6);
        timsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "timsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        heapsort = (Button) findViewById(R.id.button7);
        heapsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "heapsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        bubblesort = (Button) findViewById(R.id.button8);
        bubblesort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "bubblesort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        selectionsort = (Button) findViewById(R.id.button10);
        selectionsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "selectionsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        insertionsort = (Button) findViewById(R.id.button9);
        insertionsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "insertionsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        countingsort = (Button) findViewById(R.id.button15);
        countingsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "countingsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        bucketsort = (Button) findViewById(R.id.button13);
        bucketsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "bucketsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        radixsort = (Button) findViewById(R.id.button14);
        radixsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "radixsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        cubesort = (Button) findViewById(R.id.button16);
        cubesort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "cubesort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        treesort = (Button) findViewById(R.id.button11);
        treesort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "treesort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });

        shellsort = (Button) findViewById(R.id.button12);
        shellsort.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(SecondActivity.this, FifthActivity.class);
                intent.putExtra("name", "shellsort");
                //intent.putExtra("complexity", "mergecomp");
                startActivity(intent);
            }
        });
    }

}
