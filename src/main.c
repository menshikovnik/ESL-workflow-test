//
// Created by Nick Menshikov on 18.10.2024.
//

#include <stdio.h>
#include "vector3D.h"

int main()
{
    const Vector3D vector_1 = {1, 2, 3};
    const Vector3D vector_2 = {4, 5, 6};

    //addition of vectors
    const Vector3D sum_vector_3d = sum_vector3D(&vector_1, &vector_2);
    printf("Sum vector: %.2f, %.2f, %.2f\n", sum_vector_3d.x, sum_vector_3d.y, sum_vector_3d.z);

    //vector division
    const Vector3D sub_vector_3d = sub_vector3D(&vector_1, &vector_2);
    printf("Sub vector: %.2f, %.2f, %.2f\n", sub_vector_3d.x, sub_vector_3d.y, sub_vector_3d.z);

    //vector product of vectors
    const Vector3D cross_vector_3d = cross_vector3D(&vector_1, &vector_2);
    printf("Cross vector: %.2f, %.2f, %.2f\n", cross_vector_3d.x, cross_vector_3d.y, cross_vector_3d.z);

    //dot product of vectors
    const float dot_vector_3d = dot_vector3D(&vector_1, &vector_2);
    printf("Dot vector: %.2f\n", dot_vector_3d);
}
