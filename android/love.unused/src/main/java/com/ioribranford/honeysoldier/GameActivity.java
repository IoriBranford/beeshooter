package com.ioribranford.honeysoldier;

public class GameActivity extends org.love2d.android.GameActivity {
	@Override
	protected String[] getLibraries() {
		String[] base = super.getLibraries();
		final String[] mine = { "gme" };
		String[] libs = new String[base.length + mine.length];

		// Since SDL 2.0.6 the last lib is assumed to be the SDL main
		int mineStart = base.length - 1;
		System.arraycopy(base, 0, libs, 0, mineStart);
		System.arraycopy(mine, 0, libs, mineStart, mine.length);
		libs[libs.length - 1] = base[base.length - 1];

		return libs;
	}
}
