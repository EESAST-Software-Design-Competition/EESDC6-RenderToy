#ifndef SURFACEPOINT_H
#define SURFACEPOINT_H

#include "meshobj.h"
#include "mathfunc.h"

namespace OpenPT
{
    class SurfacePoint
    {
    public:
        SurfacePoint( const Triangle *triangle_, const Vector3f& position_);

        /// @brief Get radiosity generated by a triangle.
        /// @param to_pos 
        /// @param out_dir 
        /// @param is_solid_angle If set TRUE, we consider the triangle as a face rather than a point (when setting to FALSE).
        /// @return 
        const Vector3f GetEmission(const Vector3f &to_pos, const Vector3f &out_dir, const bool is_solid_angle) const;
        bool GetNextDirection(const Vector3f &in_dir, Vector3f &out_dir, float &rr);

        const Triangle *GetHitTriangle();
        const Triangle *GetHitTriangle() const;
        const Vector3f GetPosition();
        const Vector3f GetPosition() const;

    private:
        const Triangle *triangle;
        Vector3f position;
    };
}

#endif // SURFACEPOINT_H