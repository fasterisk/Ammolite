#include "ALOpenGLEngine.h"
#include "GLFW\glfw3.h"

/*********************************************************************************************
*********************************************************************************************/
Ammolite::OpenGLEngine::OpenGLEngine()
{
	m_bInitialized = false;
	m_pGLFWWindow = NULL;
}

/*********************************************************************************************
*********************************************************************************************/
Ammolite::IEngine * Ammolite::OpenGLEngine::Create()
{
	return new Ammolite::OpenGLEngine();
}

/*********************************************************************************************
*********************************************************************************************/
bool Ammolite::OpenGLEngine::Delete()
{
	delete this;
	return true;
}

/*********************************************************************************************
*********************************************************************************************/
void Ammolite::OpenGLEngine::Init()
{
	if(m_bInitialized)
	{
		assert(!"Already initialized!");
		return;
	}

	// Initialize GLFW
	int iReturn = glfwInit();
	
	bool bOk = iReturn == GL_TRUE;
	if(!bOk)
	{
		assert(!"Failed to initialize GLFW");
	}

	m_bInitialized = bOk;
}

/*********************************************************************************************
*********************************************************************************************/
void Ammolite::OpenGLEngine::OpenWindow(int iWidth, int iHeight, const char * szTitle)
{
	assert(m_bInitialized);
	assert(m_pGLFWWindow == NULL);

	// Create a windowed mode window with OpenGL context
	m_pGLFWWindow = glfwCreateWindow(iWidth, iHeight, szTitle, NULL, NULL);
	if(!m_pGLFWWindow)
	{
		assert(!"Failed to create window");
		return;
	}

	//Make the window's context current
	glfwMakeContextCurrent(m_pGLFWWindow);
}

/*********************************************************************************************
*********************************************************************************************/
void Ammolite::OpenGLEngine::StartRenderLoop()
{
	assert(m_bInitialized);
	assert(m_pGLFWWindow != NULL);

	// Loop until the window is closed
	while(!glfwWindowShouldClose(m_pGLFWWindow))
	{
		// Render here

		// Swap front and back buffers
		glfwSwapBuffers(m_pGLFWWindow);

		// Poll for and process events
		glfwPollEvents();
	}

	glfwTerminate();
}