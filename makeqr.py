import qrcode

img = qrcode.make("install")
img.save("install.png")
