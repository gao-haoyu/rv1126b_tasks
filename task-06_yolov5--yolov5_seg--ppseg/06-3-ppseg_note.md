```shell
cd /home/alientek/ai/rknn_model_zoo-2.3.2/examples/ppseg
ls
Paddle_2_ONNX.md  README.md  cpp  model  python  result.png

ls
Paddle_2_ONNX.md  README.md  cpp  model  python  result.png
cd model/
ls
dataset.txt  download_model.sh  test.png
chmod a+x download_model.sh 
./download_model.sh
--2026-04-27 05:29:10--  https://ftzr.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppseg/pp_liteseg_cityscapes.onnx
正在解析主机 ftzr.zbox.filez.com (ftzr.zbox.filez.com)... 180.184.171.46
正在连接 ftzr.zbox.filez.com (ftzr.zbox.filez.com)|180.184.171.46|:443... 已连接。
已发出 HTTP 请求，正在等待回应... 200 
长度： 32211012 (31M) [application/octet-stream]
正在保存至: “pp_liteseg_cityscapes.onnx”

pp_liteseg_citysc 100%[===========>]  30.72M  9.74MB/s    用时 3.2s  

2026-04-27 05:29:14 (9.74 MB/s) - 已保存 “pp_liteseg_cityscapes.onnx” [32211012/32211012])

cd ../
ls
Paddle_2_ONNX.md  README.md  cpp  model  python  result.png
cd python/
ls
convert.py
conda activate py3.11-tk2-2.3.2

python convert.py ../model/pp_liteseg_cityscapes.onnx rv1126b
/home/alientek/anaconda3/envs/py3.11-tk2-2.3.2/lib/python3.11/site-packages/rknn/api/rknn.py:51: UserWarning: pkg_resources is deprecated as an API. See https://setuptools.pypa.io/en/latest/pkg_resources.html. The pkg_resources package is slated for removal as early as 2025-11-30. Refrain from using this package or pin to Setuptools<81.
  self.rknn_base = RKNNBase(cur_path, verbose)
I rknn-toolkit2 version: 2.3.2
--> Config model
done
--> Loading model
done
--> Building model
I Loading :   0%|                                                     I Loading : 100%|██████████████████████████████████████████████| 298/298 [00:00<00:00, 46631.20it/s]
I OpFusing 0:   0%|                                                   I OpFusing 0:   0%|                                                   I OpFusing 0:   1%|▍                                               | 1I OpFusing 0:   2%|▉                                               | 2I OpFusing 0:   3%|█▍                                             | 3/I OpFusing 0:   3%|█▍                                              | 3I OpFusing 0:   5%|██▎                                            | 5/I OpFusing 0:   6%|██▊                                            | 6/I OpFusing 0:   8%|███▊                                           | 8/I OpFusing 0:   9%|████▏                                          | 9/I OpFusing 0:  10%|████▌                                         | 10/I OpFusing 0:  12%|█████▌                                        | 12/I OpFusing 0:  13%|█████▉                                        | 13/I OpFusing 0:  15%|██████▉                                       | 15/I OpFusing 0:  15%|██████▉                                       | 15/I OpFusing 0:  17%|███████▊                                      | 17/I OpFusing 0:  18%|████████▎                                     | 18/I OpFusing 0:  20%|█████████▏                                    | 20/I OpFusing 0:  22%|██████████                                    | 22/I OpFusing 0:  23%|██████████▌                                   | 23/I OpFusing 0:  25%|███████████▌                                  | 25/I OpFusing 0:  26%|███████████▉                                  | 26/I OpFusing 0:  28%|████████████▉                                 | 28/I OpFusing 0:  29%|█████████████▎                                | 29/I OpFusing 0:  30%|█████████████▊                                | 30/I OpFusing 0:  32%|██████████████▋                               | 32/I OpFusing 0:  34%|███████████████▋                              | 34/I OpFusing 0:  36%|████████████████▌                             | 36/I OpFusing 0:  37%|█████████████████                             | 37/I OpFusing 0:  39%|█████████████████▉                            | 39/I OpFusing 0:  42%|███████████████████▎                          | 42/I OpFusing 0:  45%|████████████████████▋                         | 45/I OpFusing 0:  48%|██████████████████████                        | 48/I OpFusing 0:  51%|███████████████████████▍                      | 51/I OpFusing 0:  53%|████████████████████████▍                     | 53/I OpFusing 0:  55%|█████████████████████████▎                    | 55/I OpFusing 0:  58%|██████████████████████████▋                   | 58/I OpFusing 0:  60%|███████████████████████████▌                  | 60/I OpFusing 0:  65%|█████████████████████████████▉                | 65/I OpFusing 0:  68%|███████████████████████████████▎              | 68/I OpFusing 0:  72%|█████████████████████████████████             | 72/I OpFusing 0:  74%|██████████████████████████████████            | 74/I OpFusing 0:  79%|████████████████████████████████████▎         | 79/I OpFusing 0:  83%|██████████████████████████████████████▏       | 83/I OpFusing 0:  87%|████████████████████████████████████████      | 87/I OpFusing 0:  89%|████████████████████████████████████████▉     | 89/I OpFusing 0:  94%|███████████████████████████████████████████▏  | 94/I OpFusing 0:  97%|████████████████████████████████████████████▌ | 97/I OpFusing 0: 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 1327.02it/s]
I OpFusing 1 :   0%|                                                  I OpFusing 1 :  46%|█████████████████████▏                        | 46I OpFusing 1 :  50%|███████████████████████                       | 50I OpFusing 1 :  58%|██████████████████████████▋                   | 58I OpFusing 1 :  61%|████████████████████████████                  | 61I OpFusing 1 :  71%|████████████████████████████████▋             | 71I OpFusing 1 :  74%|██████████████████████████████████            | 74I OpFusing 1 :  84%|██████████████████████████████████████▋       | 84I OpFusing 1 :  87%|████████████████████████████████████████      | 87I OpFusing 1 :  44%|████████████████████▏                         | 44I OpFusing 1 :  55%|█████████████████████████▎                    | 55I OpFusing 1 :  59%|███████████████████████████▏                  | 59I OpFusing 1 :  70%|████████████████████████████████▏             | 70I OpFusing 1 :  73%|█████████████████████████████████▌            | 73I OpFusing 1 :  83%|██████████████████████████████████████▏       | 83I OpFusing 1 :  87%|████████████████████████████████████████      | 87I OpFusing 1 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 497.78it/s]
I OpFusing 0 :   0%|                                                  I OpFusing 0 :  51%|███████████████████████▍                      | 51I OpFusing 0 :  56%|█████████████████████████▊                    | 56I OpFusing 0 :  67%|██████████████████████████████▊               | 67I OpFusing 0 :  72%|█████████████████████████████████             | 72I OpFusing 0 :  83%|██████████████████████████████████████▏       | 83I OpFusing 0 :  88%|████████████████████████████████████████▍     | 88I OpFusing 0 :  53%|████████████████████████▍                     | 53I OpFusing 0 :  58%|██████████████████████████▋                   | 58I OpFusing 0 :  68%|███████████████████████████████▎              | 68I OpFusing 0 :  73%|█████████████████████████████████▌            | 73I OpFusing 0 :  84%|██████████████████████████████████████▋       | 84I OpFusing 0 :  88%|████████████████████████████████████████▍     | 88I OpFusing 0 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 343.39it/s]
I OpFusing 1 :   0%|                                                  I OpFusing 1 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 322.64it/s]
I OpFusing 2 :   0%|                                                  I OpFusing 2 :  54%|████████████████████████▊                     | 54I OpFusing 2 :  55%|█████████████████████████▎                    | 55I OpFusing 2 :  59%|███████████████████████████▏                  | 59I OpFusing 2 :  70%|████████████████████████████████▏             | 70I OpFusing 2 :  74%|██████████████████████████████████            | 74I OpFusing 2 :  84%|██████████████████████████████████████▋       | 84I OpFusing 2 :  88%|████████████████████████████████████████▍     | 88I OpFusing 2 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 302.98it/s]
I OpFusing 0 :   0%|                                                  I OpFusing 0 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 279.73it/s]
I OpFusing 1 :   0%|                                                  I OpFusing 1 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 265.27it/s]
I OpFusing 2 :   0%|                                                  I OpFusing 2 : 100%|█████████████████████████████████████████████| 100I OpFusing 2 : 100%|█████████████████████████████████████████████| 100/100 [00:00<00:00, 143.37it/s]
I GraphPreparing :   0%|                                              I GraphPreparing : 100%|███████████████████████████████████████| 154/154 [00:00<00:00, 11240.67it/s]
I Quantizating :   0%|                                                I Quantizating :   6%|██▋                                           | I Quantizating :  38%|████████████████▌                           | 58I Quantizating : 100%|███████████████████████████████████████████| 154I Quantizating : 100%|███████████████████████████████████████████| 154/154 [00:00<00:00, 497.92it/s]
W build: The default input dtype of 'x' is changed from 'float32' to 'int8' in rknn model for performance!
                       Please take care of this change when deploy rknn model with Runtime API!
W build: The default output dtype of 'bilinear_interp_v2_13.tmp_0' is changed from 'float32' to 'int8' in rknn model for performance!
                      Please take care of this change when deploy rknn model with Runtime API!
I rknn building ...
E RKNN: [05:30:43.541] Unkown op target: 0
E RKNN: [05:30:43.543] Unkown op target: 0
E RKNN: [05:30:43.544] Unkown op target: 0
E RKNN: [05:30:43.556] Unkown op target: 0
E RKNN: [05:30:43.558] Unkown op target: 0
E RKNN: [05:30:43.560] Unkown op target: 0
I rknn building done.
done
--> Export rknn model
done
cd ../
ls
Paddle_2_ONNX.md  README.md  cpp  model  python  result.png

cd model/
ls
dataset.txt        pp_liteseg.rknn             test.png
download_model.sh  pp_liteseg_cityscapes.onnx
cd ../..
ls
LPRNet            mms_tts    wav2vec2    yolov5      yolov8_pose
PPOCR             mobilenet  whisper     yolov5_seg  yolov8_seg
RetinaFace        mobilesam  yamnet      yolov6      yolox
clip              ppseg      yolo11      yolov7      zipformer
deeplabv3         ppyoloe    yolo_world  yolov8
lite_transformer  resnet     yolov10     yolov8_obb
cd ../
./build-linux.sh -t rv1126b -a aarch64 -d ppseg
./build-linux.sh -t rv1126b -a aarch64 -d ppseg
/opt/atk-dlrv1126b-toolchain/bin/aarch64-buildroot-linux-gnu
===================================
BUILD_DEMO_NAME=ppseg
BUILD_DEMO_PATH=examples/ppseg/cpp
TARGET_SOC=rv1126b
TARGET_ARCH=aarch64
BUILD_TYPE=Release
ENABLE_ASAN=OFF
DISABLE_RGA=OFF
DISABLE_LIBJPEG=OFF
INSTALL_DIR=/home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo
BUILD_DIR=/home/alientek/ai/rknn_model_zoo-2.3.2/build/build_rknn_ppseg_demo_rv1126b_linux_aarch64_Release
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
-- Build files have been written to: /home/alientek/ai/rknn_model_zoo-2.3.2/build/build_rknn_ppseg_demo_rv1126b_linux_aarch64_Release
Scanning dependencies of target imagedrawing
Scanning dependencies of target fileutils
Scanning dependencies of target imageutils
Scanning dependencies of target audioutils
[ 18%] Building C object utils.out/CMakeFiles/audioutils.dir/audio_utils.c.o
[ 18%] Building C object utils.out/CMakeFiles/fileutils.dir/file_utils.c.o
[ 27%] Building C object utils.out/CMakeFiles/imagedrawing.dir/image_drawing.c.o
[ 36%] Building C object utils.out/CMakeFiles/imageutils.dir/image_utils.c.o
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c: 在函数‘write_image’中:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c:290:35: 警告： passing argument 1 of ‘get_image_size’ discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  290 |         int size = get_image_size(img);
      |                                   ^~~
In file included from /home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c:19:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.h:67:36: 附注： 需要类型‘image_buffer_t *’，但实参的类型为‘const image_buffer_t *’
   67 | int get_image_size(image_buffer_t* image);
      |                    ~~~~~~~~~~~~~~~~^~~~~
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c: 在函数‘convert_image_rga’中:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_utils.c:634:27: 警告： initialization of ‘char *’ from incompatible pointer type ‘int *’ [-Wincompatible-pointer-types]
  634 |         char* p_imcolor = &imcolor;
      |                           ^
[ 45%] Linking C static library libfileutils.a
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c: 在函数‘rbbox_to_corners’中:
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:1541:19: 警告： 隐式声明函数‘cos’ [-Wimplicit-function-declaration]
 1541 |     float a_cos = cos(angle);
      |                   ^~~
/home/alientek/ai/rknn_model_zoo-2.3.2/utils/image_drawing.c:8:1: 附注： include ‘<math.h>’ or provide a declaration of ‘cos’
    7 | #include "font.h"
  +++ |+#include <math.h>
    8 | 
[ 54%] Linking C static library libaudioutils.a
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
[ 54%] Built target fileutils
[ 54%] Built target audioutils
[ 63%] Linking C static library libimagedrawing.a
[ 63%] Built target imagedrawing
[ 72%] Linking C static library libimageutils.a
[ 72%] Built target imageutils
Scanning dependencies of target rknn_ppseg_demo
[ 90%] Building CXX object CMakeFiles/rknn_ppseg_demo.dir/main.cc.o
[ 90%] Building CXX object CMakeFiles/rknn_ppseg_demo.dir/rknpu2/ppseg.cc.o
[100%] Linking CXX executable rknn_ppseg_demo
[100%] Built target rknn_ppseg_demo
[ 18%] Built target fileutils
[ 36%] Built target imageutils
[ 54%] Built target imagedrawing
[ 81%] Built target rknn_ppseg_demo
[100%] Built target audioutils
Install the project...
-- Install configuration: "Release"
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo/./rknn_ppseg_demo
-- Set runtime path of "/home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo/./rknn_ppseg_demo" to "$ORIGIN/../lib"
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo/model/test.png
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo/model/pp_liteseg.rknn
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo/lib/librknnrt.so
-- Installing: /home/alientek/ai/rknn_model_zoo-2.3.2/install/rv1126b_linux_aarch64/rknn_ppseg_demo/lib/librga.so
cd ./install/rv1126b_linux_aarch64/rknn_ppseg_demo/
ls
lib  model  rknn_ppseg_demo
file rknn_ppseg_demo 
rknn_ppseg_demo: ELF 64-bit LSB shared object, ARM aarch64, version 1 (SYSV), dynamically linked, interpreter /lib/ld-linux-aarch64.so.1, for GNU/Linux 3.7.0, not stripped
ls -l
总用量 904
drwxrwxr-x 2 alientek alientek   4096 4月  27 05:31 lib
drwxrwxr-x 2 alientek alientek   4096 4月  27 05:31 model
-rwxr-xr-x 1 alientek alientek 913504 4月  27 05:31 rknn_ppseg_demo
cd model/
ls
pp_liteseg.rknn  test.png
cd ../
ls
lib  model  rknn_ppseg_demo
cd ../
ls
rknn_mobilenet_demo  rknn_resnet_demo  rknn_yolov5_seg_demo
rknn_ppseg_demo      rknn_yolov5_demo
/home/alientek/ai/adb_tools/platform-tools/adb push rknn_ppseg_demo /userdata/ai_demos
rknn_ppseg_demo/: 5 files pushed,...7 MB/s (20426749 bytes in 0.562s)
/home/alientek/ai/adb_tools/platform-tools/adb pull /userdata/ai_demos/rknn_ppseg_demo/result.png
/userdata/ai_demos/rknn_ppseg_dem...22.0 MB/s (85216 bytes in 0.004s)
```