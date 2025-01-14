#ifndef IMPORTER_H
#define IMPORTER_H

// TODO: refactor

#include "object.h"
#include "world.h"

#include <string>
#include <vector>

namespace RenderToy
{
    /// @brief Import Wavefront OBJ Model.
    class OBJModelImporter
    {
    public:
        OBJModelImporter() = delete;
        OBJModelImporter(const OBJModelImporter &) = delete;
        OBJModelImporter(const OBJModelImporter &&) = delete;

        /// @brief Import OBJ file from path into world.
        /// @param world 
        /// @param path 
        static void Import(World &world, const std::string &path);
    };

    /// @brief Import Wavefront MTL Material. (With PBR extension support)
    class MTLImporter
    {
    public:
        MTLImporter() = delete;

        /// @brief Import MTL file from path into world.
        /// @param world 
        /// @param path 
        static void Import(World &world, const std::string &path);
    };

    /// @brief (WIP) Import TARGA image file.
    class TARGAImporter
    {
    public:
        TARGAImporter() = delete;
        TARGAImporter(const TARGAImporter &) = delete;
        TARGAImporter(const TARGAImporter &&) = delete;

        // static void Import(ImageTexture &image, const std::string &path);
    };
};

#endif // IMPORTER_H