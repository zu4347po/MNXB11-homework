#!/bin/sh

#SBATCH -J "WASTED"
#SBATCH --time=7:11
#SBATCH -A hep2023-1-6
#SBATCH --mem 26559M

# Launch the calculatePI.sh application script using the container script
run_in_container_calculatePI.sh