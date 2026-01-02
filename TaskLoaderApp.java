package com.taskloader;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

public class TaskLoaderApp {
    public static void main(String[] args) {
        try {
            // Specify the file path
            File resourcesDir = new File("resources");
            File binFile = new File(resourcesDir, "Task.bin");

            // Check if the file exists
            if (!binFile.exists()) {
                System.out.println("File not found: " + binFile.getAbsolutePath());
                return;
            }

            // Read the file contents
            FileInputStream fis = new FileInputStream(binFile);
            byte[] bytes = new byte[(int) binFile.length()];
            fis.read(bytes);
            fis.close();

            // Print the file contents
            String fileContents = new String(bytes);
            System.out.println("File contents: " + fileContents);
        } catch (IOException ex) {
            System.out.println("Error loading Task.bin: " + ex.getMessage());
        }
    }
}