#!/bin/bash
#SBATCH --job-name=hello-course
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=1
#SBATCH --mem=256M
#SBATCH --time=00:02:00
#SBATCH --output=hello-%j.out
#SBATCH --error=hello-%j.err
set -euo pipefail
cd "$SLURM_SUBMIT_DIR"
srun hostname
printf 'Job %s completed its fff command\n' "$SLURM_JOB_ID"

