//
// Created by Nick Menshikov on 18.10.2024.
//

#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct
{
    float x;
    float y;
    float z;
} Vector3D;

Vector3D sum_vector3D(const Vector3D *v1, const Vector3D *v2);

Vector3D sub_vector3D(const Vector3D *v1, const Vector3D *v2);

Vector3D cross_vector3D(const Vector3D *v1, const Vector3D *v2);

float dot_vector3D(const Vector3D *v1, const Vector3D *v2);

#endif //VECTOR3D_H
