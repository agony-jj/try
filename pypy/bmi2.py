try:
    w = float(input('请输入您的体重(kg)'))
    h = float (input('请输入您的身高(m)'))
    BMI = w / (h**2)
except :
    print("检测到未知错误，请重新输入")
else:
    print("你的BMI指数为"+str(BMI))
finally:
    print("程序结束")