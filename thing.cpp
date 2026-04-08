#!/bin/bash
# Linux IDE Installer for ChromeOS (without Cros)
# Enables Linux container and installs IDE tools

set -e

echo "=== ChromeOS Linux IDE Installer ==="
echo "This script sets up a Linux environment for IDE development"
echo ""

# Check if running on ChromeOS
if ! grep -q "CHROMEOS_RELEASE" /etc/lsb-release 2>/dev/null; then
    echo "Warning: This script is designed for ChromeOS"
fi

# Update package manager
echo "Updating package lists..."
sudo apt-get update

# Install essential development tools
echo "Installing essential tools..."
sudo apt-get install -y \
    build-essential \
    curl \
    wget \
    git \
    python3 \
    python3-pip \
    nodejs \
    npm \
    vim \
    nano \
    gcc \
    g++ \
    make

# Install VSCode Server or alternative IDE
echo "Installing IDE components..."
sudo apt-get install -y \
    code \
    curl

# Install Docker (optional, for containerized development)
echo "Installing Docker..."
sudo apt-get install -y docker.io
sudo usermod -aG docker $USER

# Clone or setup IDE workspace
echo "Setting up IDE workspace..."
mkdir -p ~/ide-workspace
cd ~/ide-workspace

# Install commonly used language extensions/tools
echo "Installing language tools..."
pip3 install --user \
    pylint \
    black \
    flake8 \
    jupyter

# Configure SSH for remote access (optional)
echo "Configuring SSH..."
sudo apt-get install -y openssh-server
sudo systemctl start ssh
sudo systemctl enable ssh

echo ""
echo "=== Installation Complete ==="
echo "Your Linux IDE environment is ready!"
echo "Workspace location: ~/ide-workspace"
echo ""
echo "Next steps:"
echo "1. Open VS Code or your preferred IDE"
echo "2. Install language extensions from the marketplace"
echo "3. Start developing!"



Main() int{

std::cout << "Kool Lol" << std::endl; 

return 0; 



}


main() int{ 

std::cout << "WOAH ITS WULZY" << std::endl;


STD::cout << "WULZY IS THE BEST" << std::endl;


std::cout << "WULZY IS THE BEST" << std::endl;

std::cout << "WULZY IS THE BEST" << std::endl;

std ::cout << " hope he is doing good" << std::endl; 

std:: cout << "Ever since he retired" << std::endl;


Std::cout << "NOOO VIPRIN TOOOO!?!?!?!?!?!?!" << std::endl; 


return 0; 

}