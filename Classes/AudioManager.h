#pragma once

class AudioManager
{
public:
	static int backgroundMusic;

	static float backgroundVolume, effectVolume;

	static void playBackgroundMusic();

	static void stopBackgroundMusic();

	static void setBackgroundVolume(float volume);

	static void playSelectPokemonSoundEffect();

	static void playRemovePokemonSoundEffect();

	static void setEffectVolume(float volume);

};


