//
// Created by Nick Menshikov on 18.10.2024.
//
#include "vector3D.h"

Vector3D sum_vector3D(const Vector3D *v1, const Vector3D *v2)
{
    Vector3D result;
    result.x = v1->x + v2->x;
    result.y = v1->y + v2->y;
    result.z = v1->z + v2->z;
    return result;
}

Vector3D sub_vector3D(const Vector3D *v1, const Vector3D *v2)
{
    Vector3D result;
    result.x = v1->x - v2->x;
    result.y = v1->y - v2->y;
    result.z = v1->z - v2->z;
    return result;
}

Vector3D cross_vector3D(const Vector3D *v1, const Vector3D *v2)
{
    Vector3D result;
    result.x = v1->y * v2->z - v1->z * v2->y;
    result.y = v1->z * v2->x - v1->x * v2->z;
    result.z = v1->x * v2->y - v1->y * v2->x;
    return result;
}

float dot_vector3D(const Vector3D *v1, const Vector3D *v2)
{
    Vector3D result;
    result.x = v1->x * v2->x;
    result.y = v1->y * v2->y;
    result.z = v1->z * v2->z;
    return result.x + result.y + result.z;
}
