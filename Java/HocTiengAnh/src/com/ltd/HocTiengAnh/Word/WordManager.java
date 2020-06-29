package com.ltd.HocTiengAnh.Word;

import java.util.ArrayList;
import java.util.Collections;

public class WordManager {
	ArrayList<Word> listWord = new ArrayList<Word>();
	private String category;

	public WordManager(String category) {
		this.category = category;
	}

	void addWord(Word w) {
		int dem = 0;
		for (int i = 0; i < listWord.size(); i++) {
			if (listWord.get(i).getWord().equals(w.getWord()))
				dem = 1;
		}
		if (dem == 0)
			listWord.add(w);
		else
			System.out.println("từ đã tồn tại!!!");
	}
	Word[] getTwoWordRandom() {
		Collections.shuffle(listWord);
		Word wd[] = new Word[] {
				listWord.get(0),
				listWord.get(1)
		};
		return wd;
	}
	void remove(String word) {
		for (int i = 0; i < listWord.size(); i++) {
			if(listWord.get(i).getWord().equals(word))
				listWord.remove(i);
		}
		
	}
}
