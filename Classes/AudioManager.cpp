#include "AudioManager.h"
#include "AudioEngine.h"

int AudioManager::backgroundMusic = -1;

float AudioManager::backgroundVolume = 1.0f;

float AudioManager::effectVolume = 1.0f;

void AudioManager::playBackgroundMusic()
{
	backgroundMusic = cocos2d::AudioEngine::play2d("backgroundMusic.mp3", true, backgroundVolume);
}

void AudioManager::stopBackgroundMusic()
{
	cocos2d::AudioEngine::stop(backgroundMusic);
}

void AudioManager::setBackgroundVolume(float volume)
{
	backgroundVolume = volume;
	cocos2d::AudioEngine::setVolume(backgroundMusic, volume);
}

void AudioManager::playSelectPokemonSoundEffect()
{
	cocos2d::AudioEngine::play2d("selectPokemonSoundEffect.mp3", false, effectVolume);
}

void AudioManager::playRemovePokemonSoundEffect()
{
	cocos2d::AudioEngine::play2d("removePokemonSoundEffect.mp3", false, effectVolume);
}

void AudioManager::setEffectVolume(float volume)
{
	effectVolume = volume;
}