from binding import *


def genBooleanContexts(enums):
    booleanEnums = [enum for enum in enums if enum.type == "GLboolean" or enum.type == "EGLBoolean"]
    booleanContexts = []
    for enum in booleanEnums:
        booleanContexts.append({"identifier": enumBID(enum),
                                "name": enum.name,
                                "value": enum.value})
    return booleanContexts
