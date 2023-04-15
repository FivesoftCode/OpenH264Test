package com.fivesoft.qpipe;

public class NativeLib {

    // Used to load the 'qpipe' library on application startup.
    static {
        System.loadLibrary("openh264");
        System.loadLibrary("qpipe");
    }

    /**
     * A native method that is implemented by the 'qpipe' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}