#ifndef _AL_CAMERA_H_
#define _AL_CAMERA_H_

#include "ALGlobalDefinitions.h"

namespace Ammolite
{
	class AL_DLL_EXPORT Camera
	{
	public:
		static Camera* CreateOrthogonal();
		static Camera* CreateProjective();

		void Delete();
	private:
		Camera();
		~Camera();
	};
}

#endif //_AL_CAMERA_H_