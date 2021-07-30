param ($from = "develop")

#  Quick way to synchronize all branchs with a branch which named as '$from'.
#! But it doesn't push commits to remotes. Do it with your way.

Invoke-Expression "
git checkout master &&
git merge $($from) &&
git checkout test &&
git merge $($from) &&
git checkout $($from)
"


