from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np

class Plotter:
    def __init__(self):
        self.fig = plt.figure()
        self.ax = plt.axes(projection='3d')

        #make sample curve for testing
        zline = np.linspace(0, 15, 1000)
        xline = np.sin(zline)
        yline = np.cos(zline)
        self.mLine, = self.ax.plot3D(xline, yline, zline)
        plt.show(block = False)

    def updatePlot(self, xdata, ydata, zdata):
        self.mLine.set_data_3d(xdata, ydata, zdata)
        self.fig.canvas.draw()
        self.fig.canvas.flush_events()
        