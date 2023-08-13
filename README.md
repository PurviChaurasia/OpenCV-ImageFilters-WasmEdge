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
### [Box Filter](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#gad533230ebf2d42509547d514f7d3fbc3)
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


### Gaussian Blur Filter </br>
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


### Median Blur Filter </br>
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
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/75a413da-34b2-4d75-96c8-f6caeec64178" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>


### Sobel Filter </br>
Calculates the first, second, third, or mixed image derivatives using an extended Sobel operator.
In all cases except one, the ksize×ksize separable kernel is used to calculate the derivative. When ksize = 1, the 3×1 or 1×3 kernel is used (that is, no Gaussian smoothing is done). ksize = 1 can only be used for the first or the second x- or y- derivatives. 
```
      void cv::Sobel	(	InputArray 	src,
                        OutputArray 	dst,
                        int 	ddepth,
                        int 	dx,
                        int 	dy,
                        int 	ksize = 3,
                        double 	scale = 1,
                        double 	delta = 0,
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
      <td>
         Sobel Edge Y filter
      </td>
   </tr>
    <tr>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/725f5d91-2a34-4f25-89f8-f98d27034008" alt="Image 1" width="300" height="300"></td>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/9b1370ab-c2d4-4555-9bb8-f92a5f540c75" alt="Image 2" width="300" height="300"></td>
    </tr>
   <tr>
      <td>
         Sobel X Filter
      </td>
   </tr>
   <tr>
      <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/725f5d91-2a34-4f25-89f8-f98d27034008" alt="Image 1" width="300" height="300"></td>
      <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/af5c0180-ff29-4f4c-a4ff-4f1f80f93a70" alt="Image 2" width="300" height="300"></td>
   </tr>
</table>

### Emboss Filter </br>
Convolves an image with the kernel.
The function applies an arbitrary linear filter to an image. In-place operation is supported. When the aperture is partially outside the image, the function interpolates outlier pixel values according to the specified border mode.
```
     void cv::filter2D	(	InputArray 	src,
                           OutputArray 	dst,
                           int 	ddepth,
                           InputArray 	kernel,
                           Point 	anchor = Point(-1,-1),
                           double 	delta = 0,
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
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/76d1d9a4-536e-4398-8e3a-6aeb98c2ff42" alt="Image 1" width="300" height="300"></td>
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/808417b7-cec9-4fee-a070-454bce875858" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>


### High Pass Filter </br>
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
        <td><img src="https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/713eb4db-c9b1-4d0b-bc5b-2c35aeec7f5a" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>




   


  
  

   

   
