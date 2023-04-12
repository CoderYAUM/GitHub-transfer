from user import User
from admin import Admin
anadmin=Admin("Tony","Stark").privileges.show_privilege()

auser=User("Jack","Smith")
buser=User("Tom","Woodlen")
cuser=User("Petter","Park")

auser.describe_user()
auser.greet_user()
auser.increment_login_attempts()
auser.increment_login_attempts()
auser.increment_login_attempts()
print(auser.login_attempts)
auser.reset_login_attempts()
print(auser.login_attempts)

buser.describe_user()
buser.greet_user()
cuser.describe_user()
cuser.greet_user()

