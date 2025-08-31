# Numerology-Calendar

Numerology-Calendar is an intuitive calendar application inspired by ancient alchemical and esoteric knowledge. It is designed to help users explore numerological and mystical correspondences within the context of a modern calendar.

## Features

- **Interactive Calendar UI**: View days, months, and years with numerological overlays.
- **Numerology Calculations**: Automatically calculates numerological values for dates.
- **Esoteric Information**: Displays relevant alchemical, astrological, and mystical associations for each day.
- **Cross-Platform**: Runs on Windows, macOS, and Linux (opens in your default browser).
- **Lightweight**: Simple C++ launcher opens a local HTML/JS interface.

## Installation

### Prerequisites

- C++ compiler (e.g., g++, clang, MSVC)
- [Optional] Make or CMake for build automation

### Steps

1. **Clone the repository:**
   ```bash
   git clone https://github.com/blacksnowmartin/Numerology-Calendar.git
   cd Numerology-Calendar
   ```

2. **Build the launcher:**
   - On Linux/macOS:
     ```bash
     g++ python-gui.cpp -o numerology-calendar
     ```
   - On Windows (using MinGW):
     ```bash
     g++ python-gui.cpp -o numerology-calendar.exe -mwindows
     ```

3. **Run the application:**
   - On Linux/macOS:
     ```bash
     ./numerology-calendar
     ```
   - On Windows:
     ```
     numerology-calendar.exe
     ```

This will open `index.html` in your default web browser.

## Usage

- **Browse Dates**: Click through the calendar to view numerological and esoteric information for each day.
- **Explore Associations**: See planetary, elemental, and symbolic correspondences.
- **Custom Input**: Enter custom dates to analyze their numerological significance.

## Project Structure
