#include "GraphicsFunction/GraphicsLoader.h"

bool GraphicsLoader::load(const char* path)
{
	image.load(path);//�摜��ǂݍ���

	width = image.getWidth();//�����擾
	height = image.getHeight();;//�������擾
}