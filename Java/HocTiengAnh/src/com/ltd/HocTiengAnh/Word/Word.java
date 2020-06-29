package com.ltd.HocTiengAnh.Word;

public class Word {
	private String word, vnMean;

	public Word(String word, String vnMean) {
		this.word = word;
		this.vnMean = vnMean;
	}

	public String getWord() {
		return word;
	}

	public String getVnMean() {
		return vnMean;
	}

	@Override
	public String toString() {
		return "Word [word=" + word + ", vnMean=" + vnMean + "]";
	}
	
}
