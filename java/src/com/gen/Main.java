package com.gen;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

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


        long start = System.currentTimeMillis();
        int j = 0;

        for (int i = 0; i < strings.size(); i++) {
            if (strings.get(i).contains("abcde")) {
                j++;
            }
        }

        long end = System.currentTimeMillis() - start;
        System.out.printf("Java in %dms - %d", end, j);
    }
}
