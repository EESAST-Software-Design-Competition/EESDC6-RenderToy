#ifndef RENDERER_H
#define RENDERER_H

#include "world.h"

namespace OpenPT
{
    class IRenderer
    {
    private:
        World *world;

    public:
        IRenderer() = delete;
        IRenderer(const IRenderer &) = delete;
        IRenderer(const IRenderer &&) = delete;
        IRenderer(World *world_);
        virtual void Render(int camera_id, Vector2f resolution);
    };

    class IntersectTestRenderer : public IRenderer
    {
    public:
        IntersectTestRenderer(World *world_);
        virtual void Render(int camera_id, Vector2f resolution) override final;
    };
}

#endif // RENDERER_H