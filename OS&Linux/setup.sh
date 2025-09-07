#!/bin/bash
set -e  # Exit if any command fails

# Create users
sudo useradd -m -s /bin/bash mohamad
sudo usermod -aG sudo mohamad
echo "Set password for mohamad:"
sudo passwd mohamad

sudo useradd -m -s /bin/bash ahmed
sudo useradd -m -s /bin/bash lara

# Create group and add users
sudo addgroup programming
sudo usermod -aG programming ahmed
sudo usermod -aG programming lara


# Setup projects directory

mkdir -p projects
echo "Hello From user mohamad" > ./projects/hsoub_projects.txt
chmod 775 projects

# Move projects to Ahmed's home and change the ownership  
sudo mv ./projects /home/ahmed
sudo chown -R ahmed:programming /home/ahmed/projects

echo "Setup complete!"
