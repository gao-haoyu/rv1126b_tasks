- 实操记录
```shell
#####################
###模型下载
#####################
cd /home/alientek/ai/rknn_model_zoo-2.3.2/examples/yolov5
ls
README.md  cpp  model  model_comparison  python  result.png
cd model/
ls
anchors_yolov5.txt  coco_80_labels_list.txt 
bus.jpg             download_model.sh   
chmod a+x download_model.sh
./download_model.sh
ls
anchors_yolov5.txt  coco_80_labels_list.txt 
bus.jpg             download_model.sh        yolov5s_relu.onnx

#####################
###模型转换
##################### 
cd /home/alientek/ai/rknn_model_zoo-2.3.2/examples/yolov5/python

conda activate py3.11-tk2-2.3.2

python convert.py ../model/yolov5s_relu.onnx rv1126b
/home/alientek/anaconda3/envs/py3.11-tk2-2.3.2/lib/python3.11/site-packages/rknn/api/rknn.py:51: UserWarning: pkg_resources is deprecated as an API. See https://setuptools.pypa.io/en/latest/pkg_resources.html. The pkg_resources package is slated for removal as early as 2025-11-30. Refrain from using this package or pin to Setuptools<81.
  self.rknn_base = RKNNBase(cur_path, verbose)
I rknn-toolkit2 version: 2.3.2
--> Config model
done
--> Loading model
I Loading :   0%|                                                    I Loading : 100%|██████████████████████████████████████████████| 121/121 [00:00<00:00, 18730.10it/s]
done
--> Building model
I OpFusing 0:   0%|                                                  I OpFusing 0: 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 3156.44it/s]
I OpFusing 1 :   0%|                                                 I OpFusing 1 : 100%|████████████████████████████████████████████| 100/100 [00:00<00:00, 1737.07it/s]
I OpFusing 2 :   0%|                                                 I OpFusing 2 : 100%|████████████████████████████████████████████| 100I OpFusing 2 : 100%|████████████████████████████████████████████| 100/100 [00:00<00:00, 1586.04it/s]
I GraphPreparing :   0%|                                             I GraphPreparing : 100%|████████████████████████████████████████| 149/149 [00:00<00:00, 9934.37it/s]
I Quantizating :   0%|                                               I Quantizating :   1%|▎                                             |I Quantizating :   1%|▌                                             |I Quantizating :   2%|▉                                             |I Quantizating :   3%|█▏                                            |I Quantizating :   4%|█▊                                            |I Quantizating :   7%|███                                          | I Quantizating :   9%|███▉                                         | I Quantizating :  11%|████▊                                        | I Quantizating :  12%|█████▍                                       | I Quantizating :  16%|███████▏                                     | I Quantizating :  19%|████████▊                                    | I Quantizating :  23%|██████████▌                                  | I Quantizating :  26%|███████████▍                                 | I Quantizating :  29%|████████████▉                                | I Quantizating :  32%|██████████████▍                              | I Quantizating :  36%|████████████████                             | I Quantizating :  40%|██████████████████                           | I Quantizating :  44%|███████████████████▋                         | I Quantizating :  46%|████████████████████▊                        | I Quantizating :  51%|██████████████████████▉                      | I Quantizating :  56%|█████████████████████████▎                   | I Quantizating :  60%|███████████████████████████▏                 | I Quantizating :  64%|████████████████████████████▉                | I Quantizating :  68%|██████████████████████████████              | 1I Quantizating :  72%|███████████████████████████████▉            | 1I Quantizating :  76%|█████████████████████████████████▎          | 1I Quantizating :  79%|██████████████████████████████████▌         | 1I Quantizating :  83%|████████████████████████████████████▎       | 1I Quantizating :  87%|██████████████████████████████████████      | 1I Quantizating :  90%|███████████████████████████████████████▌    | 1I Quantizating :  93%|█████████████████████████████████████████   | 1I Quantizating :  98%|███████████████████████████████████████████ | 1I Quantizating : 100%|████████████████████████████████████████████| 149/149 [00:07<00:00, 19.95it/s]
W build: The default input dtype of 'images' is changed from 'float32' to 'int8' in rknn model for performance!
                       Please take care of this change when deploy rknn model with Runtime API!
W build: The default output dtype of 'output0' is changed from 'float32' to 'int8' in rknn model for performance!
                      Please take care of this change when deploy rknn model with Runtime API!
W build: The default output dtype of '286' is changed from 'float32' to 'int8' in rknn model for performance!
                      Please take care of this change when deploy rknn model with Runtime API!
W build: The default output dtype of '288' is changed from 'float32' to 'int8' in rknn model for performance!
                      Please take care of this change when deploy rknn model with Runtime API!
I rknn building ...
I rknn building done.
done
--> Export rknn model
done

cd ../model

ls
anchors_yolov5.txt  coco_80_labels_list.txt  yolov5.rknn
bus.jpg             download_model.sh        yolov5s_relu.onnx

#####################
###推理编译
##################### 
cd /home/alientek/ai/rknn_model_zoo-2.3.2
./build-linux.sh -t rv1126b -a aarch64 -d yolov5

./build-linux.sh -t rv1126b -a aarch64 -d yolov5
/opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu
===================================
BUILD_DEMO_NAME=yolov5
BUILD_DEMO_PATH=examples/yolov5/cpp
TARGET_SOC=rv1126b
TARGET_ARCH=aarch64
BUILD_TYPE=Release
ENABLE_ASAN=OFF
DISABLE_RGA=OFF
DISABLE_LIBJPEG=OFF
INSTALL_DIR=/home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo
BUILD_DIR=/home/alientek/ai/rknn_model_zoo-2.3.2/build/build_rknn_yolov5_demo_rv1126b_linux_aarch64_Release
CC=/opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu-gcc
CXX=/opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu-g++
===================================
-- The C compiler identification is GNU 13.4.0
-- The CXX compiler identification is GNU 13.4.0
-- Check for working C compiler: /opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu-gcc
-- Check for working C compiler: /opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu-gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu-g++
-- Check for working CXX compiler: /opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu-g++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alientek/ai/rknn_model_zoo-2.3.2/build/build_rknn_yolov5_demo_rv1126b_linux_aarch64_Release
Scanning dependencies of target fileutils
Scanning dependencies of target imagedrawing
Scanning dependencies of target imageutils
Scanning dependencies of target audioutils
[  8%] Building C object utils.out/CMakeFiles/fileutils.dir/file_utils.c.o
[ 16%] Building C object utils.out/CMakeFiles/audioutils.dir/audio_utils.c.o
[ 25%] Building C object utils.out/CMakeFiles/imagedrawing.dir/image_drawing.c.o
[ 33%] Building C object utils.out/CMakeFiles/imageutils.dir/image_utils.c.o
[ 41%] Linking C static library libfileutils.a
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c: 在函数‘write_image’中:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c:290:35: 警告： passing argument 1 of ‘get_image_size’ discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  290 |         int size = get_image_size(img);
      |                                   ^~~
In file included from /home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c:19:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.h:67:36: 附注： 需要类型‘image_buffer_t *’，但实参的类型为‘const image_buffer_t *’
   67 | int get_image_size(image_buffer_t* image);
      |                    ~~~~~~~~~~~~~~~~^~~~~
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c: 在函数‘convert_image_rg ’中:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c:634:27: 警告： initialization of ‘char *’ from incompatible pointer type ‘int *’ [-Wincompatible-pointer-types]
  634 |         char* p_imcolor = &imcolor;
      |                           ^
[ 50%] Linking C static library libaudioutils.a
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c: 在函数‘rbbox_to_corners’中:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1541:19: 警告： 隐式声明函数‘cos’ [-Wimplicit-function-declaration]
 1541 |     float a_cos = cos(angle);
      |                   ^~~
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:8:1: 附注： include ‘<math.h>’ or provide a declaration of ‘cos’
    7 | #include "font.h"
  +++ |+#include <math.h>
    8 | 
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1541:19: 警告： 隐式声明与内建函数‘cos’不兼容 [-Wbuiltin-declaration-mismatch]
 1541 |     float a_cos = cos(angle);
      |                   ^~~
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1541:19: 附注： include ‘<math.h>’ or provide a declaration of ‘cos’
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1542:19: 警告： 隐式声明函数‘sin’ [-Wimplicit-function-declaration]
 1542 |     float a_sin = sin(angle);
      |                   ^~~
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1542:19: 附注： include ‘<math.h>’ or provide a declaration of ‘sin’
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1542:19: 警告： 隐式声明与内建函数‘sin’不兼容 [-Wbuiltin-declaration-mismatch]
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1542:19: 附注： include ‘<math.h>’ or provide a declaration of ‘sin’
[ 50%] Built target fileutils
[ 50%] Built target audioutils
[ 58%] Linking C static library libimagedrawing.a
[ 58%] Built target imagedrawing
[ 66%] Linking C static library libimageutils.a
[ 66%] Built target imageutils
Scanning dependencies of target rknn_yolov5_demo
[ 83%] Building CXX object CMakeFiles/rknn_yolov5_demo.dir/main.cc.o
[ 83%] Building CXX object CMakeFiles/rknn_yolov5_demo.dir/postprocess.cc.o
[ 91%] Building CXX object CMakeFiles/rknn_yolov5_demo.dir/rknpu2/yolov5.cc.o
/home/alientek/ai/rknn_model_zoo-2.3.2/examples/yolov5/cpp/postprocess.cc: In function ‘char* coco_cls_to_name(int)’:
/home/alientek/ai/rknn_model_zoo-2.3.2/examples/yolov5/cpp/postprocess.cc:578:16: 警告： ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  578 |         return "null";
      |                ^~~~~~
/home/alientek/ai/rknn_model_zoo-2.3.2/examples/yolov5/cpp/postprocess.cc:586:12: 警告： ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  586 |     return "null";
      |            ^~~~~~
[100%] Linking CXX executable rknn_yolov5_demo
[100%] Built target rknn_yolov5_demo
[ 16%] Built target fileutils
[ 33%] Built target imageutils
[ 50%] Built target imagedrawing
[ 83%] Built target rknn_yolov5_demo
[100%] Built target audioutils
Install the project...
-- Install configuration: "Release"
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/./rknn_yolov5_demo
-- Set runtime path of "/home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/./rknn_yolov5_demo" to "$ORIGIN/lib"
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/./model/bus.jpg
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/./model/coco_80_labels_list.txt
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/model/yolov5.rknn
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/lib/librknnrt.so
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_yolov5_demo/lib/librga.so
cd install/rv1126b_linux_aarch64/rknn_yolov5_demo/
ls
lib  model  rknn_yolov5_demo

#####################
###推送运行
#####################
cd install/rv1126b_linux_aarch64/rknn_yolov5_demo/
/home/alientek/ai/adb_tools/platform-tools/adb push rknn_yolov5_demo /userdata/ai_demos

## 板端执行
/home/alientek/ai/adb_tools/platform-tools/adb shell
root@MiWiFi-R4A-srv:/# cd /userdata/ai_demos/
root@MiWiFi-R4A-srv:/userdata/ai_demos# ls
rknn_mobilenet_demo  rknn_resnet_demo  rknn_yolov5_demo
root@MiWiFi-R4A-srv:/userdata/ai_demos# cd rknn_yolov5_demo/
root@MiWiFi-R4A-srv:/userdata/ai_demos/rknn_yolov5_demo# ls
lib  model rknn_yolov5_demo
root@MiWiFi-R4A-srv:/userdata/ai_demos/rknn_yolov5_demo# ./rknn_yolov5_demo ./model/yolov5.rknn ./model/bus.jpg
load lable ./model/coco_80_labels_list.txt
model input num: 1, output num: 3
input tensors:
  index=0, name=images, n_dims=4, dims=[1, 640, 640, 3], n_elems=1228800, size=1228800, fmt=NHWC, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
output tensors:
  index=0, name=output0, n_dims=4, dims=[1, 255, 80, 80], n_elems=1632000, size=1632000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
  index=1, name=286, n_dims=4, dims=[1, 255, 40, 40], n_elems=408000, size=408000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
  index=2, name=288, n_dims=4, dims=[1, 255, 20, 20], n_elems=102000, size=102000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
model is NHWC input fmt
model input height=640, width=640, channel=3
origin size=640x640 crop size=640x640
input image: 640 x 640, subsampling: 4:2:0, colorspace: YCbCr, orientation: 1
scale=1.000000 dst_box=(0 0 639 639) allow_slight_change=1 _left_offset=0 _top_offset=0 padding_w=0 padding_h=0
rga_api version 1.10.1_[0]
45 im2d_rga_impl rga_get_info(718): Can not get the correct RGA version, please check the driver, version=4.1.34669

45 im2d_rga_impl rga_check(1280): rga im2d: rga2 get info failed!

Error on improcess STATUS=0
RGA error message: Fatal error: rga im2d: rga2 get info failed!

try convert image use cpu
finish
rknn_run
person @ (209 243 286 510) 0.880
person @ (479 238 560 526) 0.871
person @ (109 237 232 534) 0.832
bus @ (93 129 553 464) 0.705
person @ (79 353 122 517) 0.301
write_image path: out.png width=640 height=640 channel=3 data=0x55aee99a20

root@MiWiFi-R4A-srv:/userdata/ai_demos/rknn_yolov5_demo# ls
lib  model  out.png  rknn_yolov5_demo
```