#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(WarnMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) return false;

		// Se muestra solo una vez por sesión
		static bool shown = false;
		if (!shown) {
			shown = true;
			FLAlertLayer::create(
				"Warning",
				"This mod can get you a ban.\nUse it at your own risk.",
				"OK"
			)->show();
		}
		return true;
	}
};

// TODO: aquí irá la ayuda para frame perfect
