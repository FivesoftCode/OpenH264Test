package com.fivesoft.qpipe.impl.openh264;

public class OpenH264Wrapper {

    public static native long createDecoder();

    public static native long createEncoder();

    public static native long destroyDecoder(long decoderInstance);

    public static native long destroyEncoder(long encoderInstance);

}
