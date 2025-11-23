import qrcode

qr_img=qrcode.make("welcome to my python")
qr_img.save("qr_img.jpg")

print("hello")