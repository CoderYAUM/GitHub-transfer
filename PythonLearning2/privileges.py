class Privileges:
    def __init__(self,privileges=['can add post','can delete post','can ban user']):
        self.privileges=privileges

    def show_privilege(self):
        for privilege in self.privileges:
            print(privilege)