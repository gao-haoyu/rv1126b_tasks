just show the shell command

> - core shell in linux
>
>   ```shell
>   # cd model path
>   cd /home/alientek/ai/rknn_model_zoo-2.3.2/examples/yolov5_seg
>
>   # dl onnx model
>   chmod a+x download_model.sh 
>   ./download_model.sh 
>
>   # convert onnx to rknn
>   cd ../python/
>   conda activate py3.11-tk2-2.3.2
>   python ./convert.py ../model/yolov5s-seg.onnx rv1126b
>
>   # build arm elf & push
>   ./build-linux.sh -t rv1126b -a aarch64 -d yolov5_seg
>   adb push rknn_yolov5_seg_demo/ /userdata/ai_demos
>
>   # pull result & show
>   adb pull /userdata/ai_demos/rknn_yolov5_seg_demo/out.png
>   xdg-open ./out.png
>   ```
>
>   ![截屏2026-04-25 06.18.01](assets/截屏2026-04-25%2006.18.01-20260425061807-l1lmntw.png)

> - shell in board
>
>   ```shell
>   # cd model_path
>   cd /userdata/ai_demos/rknn_yolov5_seg_demo
>
>   # exec
>   ./rknn_yolov5_seg_demo ./model/yolov5_seg.rknn ./model/bus.jpg 
>   load lable ./model/coco_80_labels_list.txt
>   model input num: 1, output num: 7
>   input tensors:
>     index=0, name=images, n_dims=4, dims=[1, 640, 640, 3], n_elems=1228800, size=1228800, fmt=NHWC, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
>   output tensors:
>     index=0, name=output0, n_dims=4, dims=[1, 255, 80, 80], n_elems=1632000, size=1632000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
>     index=1, name=output1, n_dims=4, dims=[1, 96, 80, 80], n_elems=614400, size=614400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=20, scale=0.022222
>     index=2, name=376, n_dims=4, dims=[1, 255, 40, 40], n_elems=408000, size=408000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
>     index=3, name=377, n_dims=4, dims=[1, 96, 40, 40], n_elems=153600, size=153600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=29, scale=0.023239
>     index=4, name=379, n_dims=4, dims=[1, 255, 20, 20], n_elems=102000, size=102000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003918
>     index=5, name=380, n_dims=4, dims=[1, 96, 20, 20], n_elems=38400, size=38400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=32, scale=0.024074
>     index=6, name=371, n_dims=4, dims=[1, 32, 160, 160], n_elems=819200, size=819200, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-116, scale=0.022475
>   model is NHWC input fmt
>   model input height=640, width=640, channel=3
>   origin size=640x640 crop size=640x640
>   input image: 640 x 640, subsampling: 4:2:0, colorspace: YCbCr, orientation: 1
>   scale=1.000000 dst_box=(0 0 639 639) allow_slight_change=1 _left_offset=0 _top_offset=0 padding_w=0 padding_h=0
>   rga_api version 1.10.1_[0]
>   81 im2d_rga_impl rga_get_info(718): Can not get the correct RGA version, please check the driver, version=4.1.34669
>
>   81 im2d_rga_impl rga_check(1280): rga im2d: rga2 get info failed!
>
>   Error on improcess STATUS=0
>   RGA error message: Fatal error: rga im2d: rga2 get info failed!
>
>   try convert image use cpu
>   finish
>   rknn_run
>   -- matmul_by_cpu_uint8 use: 96.040001 ms
>   -- resize_by_opencv_uint8 use: 7.252000 ms
>   -- crop_mask_uint8 use: 16.757000 ms
>   -- seg_reverse use: 0.611000 ms
>   person @ (213 239 284 516) 0.882
>   person @ (109 239 224 536) 0.865
>   person @ (473 230 559 522) 0.842
>   bus @ (97 134 548 461) 0.824
>   person @ (79 325 124 520) 0.501
>   write_image path: out.png width=640 height=640 channel=3 data=0x557a44eda0
>   ```