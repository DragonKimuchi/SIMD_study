#pragma once

// 4��float �� num�̔z���src����dst�ɃR�s�[
void copy_vector4_array(float* dst, const float* src, int num);

// 4��float �� num�̔z�� src0, src1�𑫂���dst�ɏo��
void add_vector4_array(float* dst, const float* src0, const float* src1, int num);

// 4��float �� num�̔z�� src ��matrix[4][4] �̍s����|����dst�ɏo��
void apply_matrix_vector4_array(float* dst, const float* src, const float* matrix, int num);
