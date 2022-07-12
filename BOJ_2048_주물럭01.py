from copy import deepcopy

N = int(input())
graph = [list(map(int, input().split())) for _ in range(N)]
result = 0


def clockwise(mat2):
    A = list(map(list, zip(*mat2)))
    for _ in range(len(A)):
        A[_] = A[_][::-1]
    return A


def move_right(matrices):
    new_mat = []
    for mat in matrices:

        for i in range(len(mat)):
            if i + 1 < len(mat):
                if mat[i] == mat[i + 1]:
                    mat[i], mat[i + 1] = mat[i] * 2, 0
                    if mat[i] == 0:
                        mat[i], mat[i + 1] = mat[i + 1], 0
                else:
                    continue
            else:
                continue

        # 중간에 있는 0을 뒤로 밀어주기
        zeros = mat.count(0)
        for _ in range(zeros):
            mat.remove(0)
            mat.append(0)
        new_mat.append(mat)
    return new_mat
