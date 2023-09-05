# Use an official Debian as a parent image
FROM debian:buster-slim

# Set environment variables
ENV LANG=C.UTF-8

# Install necessary packages
RUN apt-get update && apt-get install -y \
    gcc \
    gdb \
    make \
    git \
    libc6-dev \
    && apt-get clean -y && apt-get autoremove -y && rm -rf /var/lib/apt/lists/*

# Set the working directory inside the container
WORKDIR /workspace

# Add current repository to the container
ADD . /workspace

# Use bash shell
SHELL ["/bin/bash", "-c"]
