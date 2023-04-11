def print_models(unprinted_models,completed_models):
    while unprinted_models:
        models_temp=unprinted_models.pop()
        print(f"Printing models: {models_temp}")
        completed_models.append(models_temp)
    print(1)