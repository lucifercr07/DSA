package com.example.prasha.daa;

import android.content.Intent;
import android.database.Cursor;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    DatabaseHelper myDb;
    TextView t1;
    Button complexity, compare, info;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        myDb = new DatabaseHelper(this);
        myDb.openDataBase();
        t1 = (TextView) findViewById(R.id.textView);
        complexity = (Button) findViewById(R.id.button1);
        compare = (Button) findViewById(R.id.button2);
        info = (Button) findViewById(R.id.button3);
        setTheme(R.style.AppTheme);
        //myDb.insertData();
        //addData();
        //getData();

        complexity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, SecondActivity.class);
                startActivity(intent);
            }
        });

        compare.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, ThirdActivity.class);
                startActivity(intent);
            }
        });

        /*

        compare.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, ThirdActivity.class);
                startActivity(intent);
            }
        });

        info.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, FourthActivity.class);
                startActivity(intent);
            }
        });
        */
    }


    /*     public  void addData() {
            complexity.setOnClickListener(
                    new View.OnClickListener() {
                        @Override
                        public void onClick(View v) {
                            boolean isInserted= myDb.insertData();
                            if(isInserted)
                                Toast.makeText(MainActivity.this, "INSERTED", Toast.LENGTH_LONG).show();
                            else
                                Toast.makeText(MainActivity.this, "NOT INSERTED", Toast.LENGTH_LONG).show();
                        }
                    }
            );
        }
      */
       /* public void getData() {
            get.setOnClickListener(
                    new View.OnClickListener() {
                        @Override
                        public void onClick(View v) {
                            Cursor res = myDb.getDatas(user.getText().toString());
                            if(res.getCount() == 0) {
                                Toast.makeText(MainActivity.this, "NO Data Available", Toast.LENGTH_LONG).show();
                                return;
                            }
                                StringBuffer buffer = new StringBuffer();
                                while(res.moveToNext()){

                                 buffer.append("best : "+res.getString(0)+"\n");
                                 buffer.append("avg : "+res.getString(1)+"\n");
                                 buffer.append("worst : "+res.getString(2)+"\n");
                                 buffer.append("sp_worst : "+res.getString(3)+"\n");
                                }

                                String a[]=buffer.toString().split("\n");
                                t1.setText(a[0]);
                                t2.setText(a[1]);
                                t3.setText(a[2]);
                                t4.setText(a[3]);
                            }

                    }
            );
        }*/

}