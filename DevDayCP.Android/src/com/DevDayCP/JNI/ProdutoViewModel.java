package com.DevDayCP.JNI;

import android.util.Log;

public class ProdutoViewModel
{
	static
    {
		System.loadLibrary ("DevDayCP_Android_DynamicLibrary");
    }

	public ProdutoViewModel(){		
		initialize();		
	}

	private long nativeHandle;

	private native void initialize();

	@Override
	public native String toString();	

	
}
