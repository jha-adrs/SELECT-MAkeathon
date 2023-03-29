from ultralytics import YOLO
model = YOLO('../YOLO-Weights/yolov8x.pt')
results = model("TRY/us.jpg", show=True, save=True)
