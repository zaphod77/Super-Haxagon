#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/Music.hpp>

#include "DriverWin/PlayerWin.hpp"

namespace SuperHaxagon {
	PlayerWin::PlayerWin(std::unique_ptr<sf::SoundSource> source) : _source(std::move(source)) {}

	PlayerWin::~PlayerWin() {
		_source->stop();
	}

	void PlayerWin::setLoop(const bool loop) {
		if (auto* sound = dynamic_cast<sf::Sound*>(_source.get())) {
			sound->setLoop(loop);
		} else if (auto* music = dynamic_cast<sf::Music*>(_source.get())) {
			music->setLoop(loop);
		}
	}

	void PlayerWin::play() {
		_source->play();
	}

	bool PlayerWin::isDone() {
		return _source->getStatus() == sf::SoundSource::Stopped;
	}

	double PlayerWin::getVelocity() {
		return 0;
	}
}
