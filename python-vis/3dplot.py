import matplotlib.pyplot as plt
import numpy as np

# This import registers the 3D projection, but is otherwise unused.
from mpl_toolkits.mplot3d import Axes3D  # noqa: F401 unused import

# this function takes in a hyperplane matrix, bVector, and a worldpoint and outputs a plot of those objects
def plotVolumes (hpMatrix, bVector, worldpoint)
    # create x,y axes
    xx, yy = np.meshgrid(range(10), range(10))

    # loop over each hp, plotting each
    for i in range(len(hpMatrix.length))
        # convert vectors to array to manipulate
        hpNormal = np.array(hpMatrix[i])
        # calculate the z for each hp
        z = (-hpNormal[0] * xx - hpNormal[1] * yy - bVector[i]) * 1. /hpNormal[2]

        # plot the surface
        plt3d = plt.figure().gca(projection='3d')
        plt3d.plot_surface(xx, yy, z, alpha=0.5)

        # Ensure that the next plot doesn't overwrite the first plot
        ax = plt.gca()

    ax.scatter(worldpoint[0], worldpoint[1], worldpoint[2], color='green')

    plt.show()

