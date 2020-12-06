import matplotlib.pyplot as plt
import numpy as np

# This import registers the 3D projection, but is otherwise unused.
from mpl_toolkits.mplot3d import Axes3D  # noqa: F401 unused import


# # prepare some coordinates
# x, y, z = np.indices((8, 8, 8))

# # draw cuboids in the top left and bottom right corners, and a link between them
# cube1 = (x*y < 100) & (y < 3) & (z < 3)
# cube2 = (x >= 5) & (y >= 5) & (z >= 5)
# link = abs(x - y) + abs(y - z) + abs(z - x) <= 2

# # combine the objects into a single boolean array
# voxels = cube1 | cube2 | link

# # set the colors of each object
# colors = np.empty(voxels.shape, dtype=object)
# colors[link] = 'red'
# colors[cube1] = 'blue'
# colors[cube2] = 'green'

# # and plot everything
# fig = plt.figure()
# ax = fig.gca(projection='3d')
# ax.voxels(voxels, facecolors=colors, edgecolor='k')

point  = np.array([6, 10, 3])
normal1 = np.array([1, 10, 2])

normal2 = np.array([2, 4, 6])

point2 = np.array([10, 25, 25])

# a plane is a*x+b*y+c*z+d=0
# [a,b,c] is the normal. Thus, we have to calculate
# d and 1we're set
d1 = -point.dot(normal1)

# create x,y
xx, yy = np.meshgrid(range(10), range(10))

# calculate corresponding z
z1 = (-normal1[0] * xx - normal1[1] * yy - d1) * 1. /normal1[2]

# plot the surface
plt3d = plt.figure().gca(projection='3d')
plt3d.plot_surface(xx, yy, z1, alpha=0.5)

# Ensure that the next plot doesn't overwrite the first plot
ax = plt.gca()

ax.scatter(point2[0], point2[1], point2[2], color='green')


plt.show()
