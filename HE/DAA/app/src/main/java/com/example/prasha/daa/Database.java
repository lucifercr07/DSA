package com.example.prasha.daa;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.database.sqlite.SQLiteQuery;

/**
 * Created by prasha on 2/1/17.
 */

public class Database extends SQLiteOpenHelper {
    public static final String DATABASE_NAME="Data.db";
    public static final String Table_NAME="Data";
    public static final String COL_0="Algo";
    public static final String COL_1="best";
    public static final String COL_2="avg";
    public static final String COL_3="worst";
    public static final String COL_4="spworst";

    public Database(Context context) {
        super(context, DATABASE_NAME, null, 1);
        //SQLiteDatabase db = this.getWritableDatabase();
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL("create table if not exists " + Table_NAME +" (Algo TEXT,best TEXT,avg TEXT,worst TEXT,spworst TEXT) ");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        //db.execSQL("DROP TABLE IF EXISTS "+Table_NAME);
        //onCreate(db);
    }

    public boolean insertData(){
        SQLiteDatabase db = this.getWritableDatabase();
        ContentValues contentValues = new ContentValues();
        contentValues.put(COL_0,"BubbleSort");
        contentValues.put(COL_1,"n");
        contentValues.put(COL_2,"n^2");
        contentValues.put(COL_3,"O(n^2)");
        contentValues.put(COL_4,"O(1)");
        long result = db.insert(Table_NAME,null ,contentValues);
        if(result == -1)
            return false;
        else
            return true;

    }

    public Cursor getDatas(String name) {
        SQLiteDatabase db = this.getWritableDatabase();
        String s="SELECT * FROM " + Table_NAME + " WHERE " + COL_0 + " = '"+ name +"'";
        Cursor res= db.rawQuery(s,null);
        return res;
    }
}
