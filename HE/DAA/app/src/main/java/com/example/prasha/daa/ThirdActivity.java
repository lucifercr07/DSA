package com.example.prasha.daa;

import android.database.Cursor;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

public class ThirdActivity extends AppCompatActivity {

    Button compare;
    Spinner algo1,algo2;
    ArrayAdapter<String> aa1;
    TextView t1,t2,t3,t4;
    Description desc;
    String algo[] = {"QuickSort", "MergeSort", "HeapSort", "Bubble Sort", "Insertion Sort", "Selection Sort",
                    "Tree Sort", "TimSort", "Shell Sort", "Counting Sort", "Bucket Sort", "Counting Sort", "Radix Sort", "Cube Sort"};

    String algoo[] = {"MergeSort", "QuickSort", "HeapSort", "Selection Sort", "Bubble Sort", "Insertion Sort",
            "Tree Sort", "TimSort", "Shell Sort", "Counting Sort", "Bucket Sort", "Counting Sort", "Radix Sort", "Cube Sort"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_third);
        compare = (Button)findViewById(R.id.button);
        algo1 = (Spinner)findViewById(R.id.spinner3);
        algo2 = (Spinner)findViewById(R.id.spinner4);
        t1=(TextView)findViewById((R.id.textView20));
        t2=(TextView)findViewById((R.id.textView22));
        t3=(TextView)findViewById((R.id.textView19));
        t4=(TextView)findViewById((R.id.textView21));
        desc = new Description();

        ArrayAdapter<String> spinnerArrayAdapter = new ArrayAdapter<String>(this,R.layout.spinner_item, algo);
        spinnerArrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item); // The drop down view
        algo1.setAdapter(spinnerArrayAdapter);

        ArrayAdapter<String> spinnerArrayAdapter1 = new ArrayAdapter<String>(this,R.layout.spinner_item, algoo);
        spinnerArrayAdapter1.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item); // The drop down view
        algo2.setAdapter(spinnerArrayAdapter1);

        compare.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String a1=String.valueOf(algo1.getSelectedItem());
                String a2=String.valueOf(algo2.getSelectedItem());
                getdata1(a1);
                getdata2(a2);
            }
        });
    }

    public void getdata1(String name){
            String s1 = desc.getdesc(name);
            //Toast.makeText(ThirdActivity.this, s1, Toast.LENGTH_SHORT).show();
            t1.setText(s1);
            t3.setText(name);
    }
    public void getdata2(String name){
            String s2 = desc.getdesc(name);
            t2.setText(s2);
            t4.setText(name);
    }
}
