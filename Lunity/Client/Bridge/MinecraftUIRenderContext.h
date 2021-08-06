#ifndef GUARD_MinecraftUIRenderContext
#define GUARD_MinecraftUIRenderContext
#include "../../Utils/Math.h"
#include "../../Utils/Utils.h"
#include "../../Mem/Mem.h"
struct MinecraftUIRenderContext {
	/* Fields */
	char padding_8[8];
	class ClientInstance* clientInstance;
	class ScreenContext* screenContext;
	char padding_40[16];
	float textAlpha;
	char padding_240[196];
	class UIScene* uiScene;
	/* Virtuals */
	void virt_pad_0() {};
	void virt_pad_1() {};
	void virt_pad_2() {};
	void virt_pad_3() {};
	void virt_pad_4() {};
	void virt_pad_5() {};
	virtual auto flushText(float param_1) -> void {};
	void virt_pad_7() {};
	void virt_pad_8() {};
	void virt_pad_9() {};
	void virt_pad_10() {};
	void virt_pad_11() {};
	void virt_pad_12() {};
	virtual auto fillRectangle(float* rect, float* color, float alpha) -> void {};
	/* Functions */
};
#endif