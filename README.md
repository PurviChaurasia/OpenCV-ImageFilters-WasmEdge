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
   ```
   <path to OpenCV source>/build/x64/vc15/bin
    ```

### Linking necessery dependencies  
1. After creating a project in visual studio, navigate to the properties of the project.
2. Under ```C++ Directories``` add the path to the ```include``` files for our C++ program.  <br />
   
   ```
   <path to OpenCV source>/build\include
   ```  
   <br />
   ```
   <path to OpenCV source>/build\x64\vc15\lib
   ```
   <br />
   
4. Head over to the Linker tab under properties and the following .lib file <br />

   ``` opencv_world420d.lib ``` <br />

### Running the program

1. Clone this repository and add it under  ``` <path to OpenCV source> ```.  <br />

   ```
   git clone https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge.git
   ```
   <br />
3. Check the path to the images to be filtered.
4. Build solution and run it.
5. You have your image filters ready!


## Available Image Filters

All the image filters are used from OpenCV built-in library and are defined under ```opencvtest.cpp ```.   <br />
1. ### [Box Filter]
   (https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#gad533230ebf2d42509547d514f7d3fbc3)
   The Box Filter operation is similar to the averaging blur operation; it applies a bilateral image to a filter.
   ##### Function Parameters :
   ```
         void cv::boxFilter(	InputArray 	src,
                              OutputArray 	dst,
                              int 	ddepth,
                              Size 	ksize,
                              Point 	anchor = Point(-1,-1),
                              bool 	normalize = true,
                              int 	borderType = BORDER_DEFAULT 
                           )
   ```
   
   ##### Output
   | Original | Output |
   | -------- | ------ |
   | ![image](https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/16830010-b22a-4676-a5f1-0ff1afa91223)|
   ![image(https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/267b1465-6dbd-4e3c-a2ff-64ec24e7e687)|


   

   
