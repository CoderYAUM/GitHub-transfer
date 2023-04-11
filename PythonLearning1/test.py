import printing_models as pm1
from printing_models import print_models as a
#import function_test    #导入包没有用，导入包内的模块才有用
from function_test import printing_models as pm
from function_test.printing_models import print_models as pm2
import function_test.printing_models as fp
# def show_models(models):
#     for model in models:
#         print(model)

unprinted_models=['a','b','c']
completed_models=[]

a(unprinted_models,completed_models)
pm2(unprinted_models,completed_models)
# print_models(unprinted_models,completed_models)
# function_test.printing_models.print_models(unprinted_models,completed_models)
fp.print_models(unprinted_models,completed_models)
# printing_models.print_models(unprinted_models,completed_models)
pm.print_models(unprinted_models,completed_models)
pm1.print_models(unprinted_models,completed_models)
# pm(unprinted_models,completed_models)
# show_models(completed_models)