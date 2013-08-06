#ifndef _AL_GRAPHICS_H_
#define _AL_GRAPHICS_H_

#include "ALGlobalDefinitions.h"
#include "ALIEngine.h"

namespace Ammolite
{
	class AL_DLL_EXPORT Graphics
	{
	public:
		
		enum Engine
		{
			OPENGL,
			DIRECTX
		};

		/// Initializes either opengl or directx graphics
		static void Init(Engine eEngine);

		/// Opens a window
		static void OpenWindow(int iWidth, int iHeight, const char* szTitle);

		/// Starts the render loop
		static void StartRenderLoop();

	private:
		Graphics() {};
		~Graphics() {};

		static IEngine * m_pEngine;
	};
}

#endif //_AL_GRAPHICS_H_