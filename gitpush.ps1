param ($from = "develop", $branchs = @("develop", "master", "test"))

# Instruction: set all branch remotes with your the project in server then use this file.

$temp_branchs = $branchs -ne $from

Invoke-Expression "git push" # On the '$from' branch.
foreach ($br in $temp_branchs) {
    Invoke-Expression "git checkout $($br) && git push"
}
Invoke-Expression "git checkout $($from)" # Come to where did you started from the branch before.
