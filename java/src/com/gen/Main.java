package com.gen;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.stream.Stream;

public class Main {

    public static void main(String[] args) throws IOException {

        ArrayList<String> strings = new ArrayList<>();

        try (FileReader f = new FileReader("../set.txt")) {
            StringBuffer sb = new StringBuffer();

            while (f.ready()) {
                char c = (char) f.read();

                if (c == '\n') {
                    strings.add(sb.toString());
                    sb = new StringBuffer();
                } else {
                    sb.append(c);
                }
            }
            if (sb.length() > 0) {
                strings.add(sb.toString());
            }
        }

        var stream = strings.stream();

        long start = System.currentTimeMillis();
        var j = stream.filter(s -> s.contains("abcde")).count();
        long end = System.currentTimeMillis() - start;

        System.out.printf("Java in %dms - %d\n", end, j);
    }
}
