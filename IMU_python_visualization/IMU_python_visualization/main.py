#from serial_handler import Output
#import asyncio
#import serial_asyncio
#import sys
from IMU_visualizer import Plotter
import numpy as np

def main():
    mPlotter = Plotter()
    input()
    xline = np.linspace(0, 15, 1000)
    zline = np.cos(xline)
    yline = np.sin(xline)
    mPlotter.updatePlot(xline, yline, zline)
    input()
    #loop = asyncio.get_event_loop()
    #comport = sys.argv[1]
    #coro = serial_asyncio.create_serial_connection(loop, Output, comport)
    #loop.run_until_complete(coro)
    #loop.run_forever()
    #while True:
    #    keyboard_input = input()
    #    if len(keyboard_input) > 0:
    #        break
    #loop.close()

if __name__ == '__main__':
    main()