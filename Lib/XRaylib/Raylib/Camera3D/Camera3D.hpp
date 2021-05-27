/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** Camera3D
*/

#ifndef CAMERA3D_HPP_
#define CAMERA3D_HPP_

#include <string>
#include <iostream>
#include "raylib.h"
#include "Color/Color.hpp"
#include "Rectangle/Rectangle.hpp"

namespace Raylib {
    class Camera3D {
    public:
        /**
         * @brief Construct a new Camera3D object
         */
        Camera3D();

        /**
         * @brief Destroy the Camera3D object
         */
        ~Camera3D();

        /**
         * @brief Construct a new Camera object (Copy Constructor)
         *
         * @param Camera3D A Camera3D C Structure
         */
        Camera3D(::Camera3D const &camera);

        /**
         * @brief Get C Structure for Camera3D Class
         * @return A Camera3D C Structure
         */
        ::Camera3D getCStruct() const;

        /**
          * @brief Overload of '=' operator
          *
          * @param camera A const reference to a Camera3D
          * @return A reference to Camera3D (Camera3D &)
          */
        Camera3D &operator=(const Camera3D &camera);

        /**
         * @brief Initialize 3D mode with custom camera (3D)
         *
         * @param Camera3D A Camera3D Class
         */
        void beginMode3D(Camera3D const &camera) const;

        /**
         * @brief Ends 3D mode with custom camera
         */
        void endMode3D(void) const;

        /**
         * @brief Set camera mode (multiple camera modes available)
         *
         * @param Camera3D A Camera3D Class
         * @param mode An int for the mode
         */
        void setCameraMode(Camera3D const &camera, int const &mode) const;

        /**
         * @brief Update camera position for selected mode
         *
         * @param Camera3D A Camera3D Class
         */
        void updateCamera(Camera3D *camera) const;

        /**
         * @brief Set camera pan key to combine with mouse movement (free camera)
         *
         * @param keyPan An int
         */
        void setCameraPanControl(int const &keyPan) const;

        /**
         * @brief Set camera alt key to combine with mouse movement (free camera)
         *
         * @param keyAlt An int
         */
        void setCameraAltControl(int const &keyAlt) const;

        /**
         * @brief Set camera smooth zoom key to combine with mouse (free camera)
         *
         * @param keySmoothZoom An int
         */
        void setCameraSmoothZoomControl(int const &keySmoothZoom) const;

        /**
         * @brief Set camera move controls (1st person and 3rd person cameras)
         *
         * @param frontKey An int
         * @param backKey An int
         * @param rightKey An int
         * @param leftKey An int
         * @param upKey An int
         * @param downKey An int
         */
        void setCameraMoveControls(int const &frontKey, int const &backKey,
                                   int const &rightKey, int const &leftKey,
                                   int const &upKey, int const &downKey) const;

        /**
         * @brief Returns a ray trace from mouse position
         *
         * @param mousePosition Vector2 Class
         * @param camera Camera3D Class
         * @return Ray type (useful for raycast)
         */
        Ray getMouseRay(::Vector2 const &mousePosition,
                        Camera3D const &camera) const;

        /**
         * @brief Returns camera transform matrix (view matrix)
         *
         * @param camera Camera3D Class
         * @return Matrix
         */
        Matrix getCameraMatrix(Camera3D const &camera) const;

        /**
          * @brief Returns the screen space position for a 3d world space position
          *
          * @param keyAlt An int
          * @return Vector2 Class
          */
        ::Vector2
        getWorldToScreen(Vector3 const &position, Camera3D const &camera) const;

        /**
          * @brief Returns size position for a 3d world space position
          *
          * @param keyAlt An int
          * @return Vector2 Class
          */
        ::Vector2
        getWorldToScreenEx(Vector3 const &position, Camera3D const &camera,
                           int const &width, int const &height) const;

        /**
         * @brief Draw a billboard texture
         *
         * @param camera A Camera3D Class
         * @param texture A Texture2D Class
         * @param center A Vector3 Class
         * @param size A float
         * @param tint A Color Class
         */
        void drawBillboard(Camera3D const &camera, Texture2D const &texture,
                           Vector3 const &center, float const &size,
                           Raylib::Color const &tint) const;

        /**
         * @brief Draw a billboard texture defined by source
         *
         * @param camera A Camera3D Class
         * @param texture A Texture2D Class
         * @param source A Rectangle Class
         * @param center A Vector3 Class
         * @param size A float
         * @param tint A Color Class
         */
        void drawBillboardRec(Camera3D const &camera, Texture2D const &texture,
                              Rectangle const &source, Vector3 const &center,
                              Vector2 const &size,
                              Raylib::Color const &tint) const;

    private:
        /**
         * @brief Set Camera3D
         *
         * @param Camera3D A Camera3D C Structure
         */
        void set(const ::Camera3D &camera);

        /**
         * @brief Set Camera3D
         *
         * @param Camera3D A const reference to a Camera3D object
         */
        void set(const Camera3D &camera);

        /**
         * @brief C Camera3D structure instance
         * 
         */
        ::Camera3D _camera3D;
    };

#include "Camera3D.inl"

} // namespace Raylib

#endif /* !CAMERA3D_HPP_ */
