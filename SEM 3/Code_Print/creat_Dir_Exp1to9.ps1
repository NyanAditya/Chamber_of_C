# Loop from 1 to 9 to create directories Exp1, Exp2, ..., Exp9
For ($i = 1; $i -le 9; $i++) {
    # Create directory with the name Exp followed by the current number
    $dirName = "Exp$i"
    New-Item -ItemType Directory -Path $dirName -Force
    Write-Output "Created directory: $dirName"
}
