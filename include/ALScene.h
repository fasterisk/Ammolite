#ifndef _AL_SCENE_H_
#define _AL_SCENE_H_

#include "ALGlobalDefinitions.h"

namespace Ammolite
{
	class AL_DLL_EXPORT Scene
	{
	public:
		static Scene* CreateScene();

		void Delete();
	private:
		Scene();
		~Scene();
	};
}

#endif //_AL_SCENE_H_