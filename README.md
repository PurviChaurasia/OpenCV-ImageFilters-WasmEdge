# Image Filtering with OpenCV

## Setup
The following [video](https://www.youtube.com/watch?v=trXs2r6xSnI) has been referred for installing and configuring OpenCV in Visual Studio with Windows.  

Editor : Visual Studio 2017  

System : Windows 11

## Run it locally
### Configuring OpenCV 
1. Install [Visual Studio 2017](https://visualstudio.microsoft.com/) on your system.
2. Install the latest release of [OpenCV](https://opencv.org/releases/) on your system. 
3. Edit System Variables and inlcude the follwoing in the ```Path``` variable:<br />
   ``` <path to OpenCV source>/build/x64/vc15/bin ```

### Linking necessery dependencies  
1. After creating a project in visual studio, navigate to the properties of the project.
2. Under ```C++ Directories``` add the path to the ```include``` files for our C++ program.  <br />
   ``` <path to OpenCV source>/build\include ```  <br />
   ``` <path to OpenCV source>/build\x64\vc15\lib ```  <br />
3. Head over to the Linker tab under properties.


## Filters Implemented with OpenCV
1. Box Filter
2. Gaussian Blur Filter
