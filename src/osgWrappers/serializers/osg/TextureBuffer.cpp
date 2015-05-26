#include <osg/TextureBuffer>
#include <osgDB/ObjectWrapper>
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

REGISTER_OBJECT_WRAPPER( TextureBuffer,
                         new osg::TextureBuffer,
                         osg::TextureBuffer,
                         "osg::Object osg::StateAttribute osg::Texture osg::TextureBuffer" )
{
    ADD_IMAGE_SERIALIZER( Image, osg::Image, NULL );  // _image
    ADD_INT_SERIALIZER( TextureWidth, 0 );  // _textureWidth
    ADD_UINT_SERIALIZER( UsageHint, GL_STREAM_DRAW); // _usageHint
}
