
# A short run task for project.

# `$run` does mean whether compiled file will run.
#   If it's `$true` then compiled file runs.
#   If it's `$false` then compiled file doesn't run.

# `$name` is application name of main file.
#   Default is `"app"`.

param ($run = $true, $name = "app")

# Compiling file with GNU C++ Compiler.
Invoke-Expression "g++ .\lib\main.cpp -o .\bin\$($name)"

if ($run -eq $true) {
    # Running the compiled file.
    Invoke-Expression ".\bin\$($name).exe"
}

