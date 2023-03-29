from ultralytics import YOLO

model = YOLO('../YOLO-Weights/yolov8x.pt')
results = model("Images/1.png", show=True, save = True)
