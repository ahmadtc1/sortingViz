# SortingViz


## Purpose
I've found sorting algorithms interesting for a while, especially with their large variety and many different possible use cases.

A sorting algorithm visualizer to help students be able to understand and visualize the inner workings of different sorting algorithms


## Technical Details
This is a **C++** project

### Graphics
The GUI for the visualizer was handled using the **SDL Library** to create a cross-platform GUI application

### Algorithms
As of right now, I've implemented selection sort, bubble sort, merge sort and insertion sort. I'm constantly in the process of adding visualization for more sorting algorithms when I find some free-time


### Project Structure
For **code modularity** and easy to understand structure, I've modelled different aspects of the application as classes using **OOP Principles**. I separated source code into header and cpp files to allow for easy lookup of API functionalities and uses.

#### Data Generation
The data generation processes are handled by the DataBuilder class, which allows users to generate, randomize, shuffle,and clear their data. This class streamlines the process of data generation and the overall handling of the data. 

#### Sorting Algorithms
The sorting itself was handled in a Sorting class which provides definitions for each of the sorting algorithms to be visualized.
By passing the algorithm an input array of data, the algorithm will perform the sorting while ensuring that the visualizer is updated at each step to reflect the changes.

#### Application Setup/Teardown
The various lifecycle portions of the application were handled in a Visualizer class. The visualizer class handles the specific aspects pertaining to the use of the SDL library as well, and handles things such as application initialization, updation, rendering, as well as cleanup and teardown

## Future Steps
I'd like to smooth out the sorting animations more and visualize them better to allow for easier visualization of the actual steps taking place. At the moment I'm trying to find my way with SDL to allow for that to happen, but expect to see it soon.

## Visualize
Meanwhile, here's a small clip from the visualizer to see an input array being sorted in ascending order using selection sort!
