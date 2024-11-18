def calculate_BMI (height,weight):
    BMI = weight / (height**2)
    print("你的BMI指数为"+str(BMI))
    if BMI<= 18.5:
        print("偏瘦")
    elif BMI <= 25:
        print("正常")
    elif BMI <= 30:
        print("偏胖")
    else :
        print("肥胖")
w = float(input('请输入您的体重(kg)'))
h = float (input('请输入您的身高(m)'))
calculate_BMI(h,w)