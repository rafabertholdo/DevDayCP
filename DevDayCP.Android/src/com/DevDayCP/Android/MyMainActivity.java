
package com.DevDayCP.Android;

import android.app.Activity;
import android.widget.TextView;
import android.os.Bundle;
import com.DevDayCP.JNI.ProdutoViewModel;


public class MyMainActivity extends Activity
{
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        /* Create a TextView and set its text to "Hello world" */
        TextView  tv = new TextView(this);
		ProdutoViewModel vm = new ProdutoViewModel();
        tv.setText(vm.toString());
        setContentView(tv);
    }
}
