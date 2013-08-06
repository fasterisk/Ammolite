#ifndef _AL_OPENGL_ENGINE_H_
#define _AL_OPENGL_ENGINE_H_

#include "ALGlobalDefinitions.h"
#include "ALIEngine.h"

// Forward declarations
struct GLFWwindow;

namespace Ammolite
{
	class OpenGLEngine : public IEngine
	{
	public:
		
		/// Creation
		static IEngine * Create();

		/// Deletion
		bool Delete();

		/// Initialization
		void Init();

		/// Opens a window
		void OpenWindow(int iWidth, int iHeight, const char* szTitle);

		/// Starts the render loop
		void StartRenderLoop();

	private:
		OpenGLEngine();
		~OpenGLEngine() {};

		GLFWwindow* m_pGLFWWindow;

		bool m_bInitialized;

	};
}

#endif //_AL_OPENGL_ENGINE_H_