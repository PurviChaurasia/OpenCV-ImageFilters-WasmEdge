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
   
4. Head over to the Linker tab under properties and the following .lib file <br />

   ``` opencv_world420d.lib ``` <br />

## Running the program

1. Clone this repository and add it under  ``` <path to OpenCV source> ```. <br />
   ``` git clone https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge.git ```
2. Check the path to the images to be filtered.
3. Build solution and run it.
4. You have your image filters ready!
   
