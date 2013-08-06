#ifndef _AL_I_ENGINE_H_
#define _AL_I_ENGINE_H_

#include "ALGlobalDefinitions.h"

namespace Ammolite
{
	class IEngine
	{
	public:
		
		/// Deletion
		virtual bool Delete() = 0;

		/// Initialization
		virtual void Init() = 0;

		/// Opens a window
		virtual void OpenWindow(int iWidth, int iHeight, const char * szTitle) = 0;

		/// Starts the render loop
		virtual void StartRenderLoop() = 0;
	};
}

#endif //_AL_I_ENGINE_H_