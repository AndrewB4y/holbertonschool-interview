#!/usr/bin/python3

"""
lockboxes module
"""


def canUnlockAll(boxes):
    """
    canUnlockAll(boxes) - determines if all the boxes can be opened.

    @boxes: is a list of lists.
            A key with the same number as a box opens that box
            You can assume all keys will be positive integers
                There can be keys that do not have boxes

    Returns: True if all boxes can be opened, else return False
    """

    unlocked = [0]*len(boxes)
    unlocked[0] = -1
    b_size = len(boxes)

    while -1 in unlocked:
        idx = unlocked.index(-1)
        for k in boxes[idx]:
            if k < b_size and unlocked[k] == 0:
                unlocked[k] = -1
        unlocked[idx] = 1

    if 0 in unlocked:
        return False

    return True
