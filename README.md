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
   ```
   <path to OpenCV source>/build\x64\vc15\lib
   ```

4. Head over to the Linker tab under properties and the following .lib file <br />
   ``` opencv_world420d.lib ```

### Running the program

1. Clone this repository and add it under  ``` <path to OpenCV source> ```.  <br />

   ```
   git clone https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge.git
   ```
3. Check the path to the images to be filtered.
4. Build solution and run it.
5. You have your image filters ready!


## Available Image Filters

All the image filters are used from OpenCV built-in library and are defined under ```opencvtest.cpp ```.   <br />
1. ### [Box Filter](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#gad533230ebf2d42509547d514f7d3fbc3)
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
   <table>
   <tr>
      <td>
         Original
      </td>
      <td>
         Output
      </td>
   </tr>
    <tr>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/725f5d91-2a34-4f25-89f8-f98d27034008" alt="Image 1" width="300" height="300"></td>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/ea87ad71-74cf-49f3-90b5-56e4898ee0ce" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>

2. ### Gaussian Blur Filter
   Blurs an image using a Gaussian filter. The function convolves the source image with the specified Gaussian kernel. In this case the blurring is noiseless.  
   #### Function Parameters :
   ```
   void cv::GaussianBlur	(	InputArray 	src,
                              OutputArray 	dst,
                              Size 	ksize,
                              double 	sigmaX,
                              double 	sigmaY = 0,
                              int 	borderType = BORDER_DEFAULT 
                           )	
   ```

   #### Output
   <table>
   <tr>
      <td>
         Original
      </td>
      <td>
         Output
      </td>
   </tr>
    <tr>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/725f5d91-2a34-4f25-89f8-f98d27034008" alt="Image 1" width="300" height="300"></td>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/6b0df783-bcb1-48cd-aba2-2fbc6281b44a" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>

3. ### Median Blur Filter
   Blurs an image using the median filter. The function smoothes an image using the median filter with the ksize×ksize aperture. Each channel of a multi-channel image
   is processed independently.
   #### Output
   <table>
   <tr>
      <td>
         Original
      </td>
      <td>
         Output
      </td>
   </tr>
    <tr>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/725f5d91-2a34-4f25-89f8-f98d27034008" alt="Image 1" width="300" height="300"></td>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/75a413da-34b2-4d75-96c8-f6caeec64178)" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>
   


  
  

   

   
