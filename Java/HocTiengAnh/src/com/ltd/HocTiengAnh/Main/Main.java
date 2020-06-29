package com.ltd.HocTiengAnh.Main;

import com.ltd.HocTiengAnh.Word.Word;
import com.ltd.HocTiengAnh.Word.WordManager;

public class Main {
	public static void main(String[] args) {
		WordManager wm = new WordManager(null);
		Word w1 = new Word("Hello", "Xin chào ");
		Word w2 = new Word("Car", "Xe hơi");
		Word w3 = new Word("Like", "Thích");
		Word w4 = new Word("Love", "Yêu");
		Word w5 = new Word("Smart", "Thông minh");
		Word w6 = new Word("Learn", "Học");
		wm.addWord(w1);
		wm.addWord(w2);
		wm.addWord(w3);
		wm.addWord(w4);
		wm.addWord(w5);
		wm.addWord(w6);
		Word[] a = wm.getTwoWordRandom();
		System.out.println(a[0]);
		System.out.println(a[1]);

	}
}
