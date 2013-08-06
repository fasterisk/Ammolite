#include "ALGraphics.h"
#include "ALOpenGLEngine.h"

Ammolite::IEngine * Ammolite::Graphics::m_pEngine = NULL;

/*********************************************************************************************
*********************************************************************************************/
void Ammolite::Graphics::Init(Engine eEngine)
{
	assert(m_pEngine == NULL);

	switch(eEngine)
	{
	case OPENGL:
		{
			m_pEngine = Ammolite::OpenGLEngine::Create();
			break;
		}
	case DIRECTX:
		{
			assert(!"no directx engine implemented!");
			break;
		}
	default:
		{
			assert(!"unknown engine!");
			break;
		}
	}

	assert(m_pEngine != NULL);
	m_pEngine->Init();
}

/*********************************************************************************************
*********************************************************************************************/
void Ammolite::Graphics::OpenWindow(int iWidth, int iHeight, const char * szTitle)
{
	assert(m_pEngine != NULL);
	m_pEngine->OpenWindow(iWidth, iHeight, szTitle);
}

/*********************************************************************************************
*********************************************************************************************/
void Ammolite::Graphics::StartRenderLoop()
{
	assert(m_pEngine != NULL);
	m_pEngine->StartRenderLoop();
}