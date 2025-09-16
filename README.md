# MystiChron - Numerology Calendar

**MystiChron** is an elegant and mystical calendar application that combines the traditional Gregorian calendar with ancient numerological wisdom. Each date displays its numerological value as a superscript, helping users understand the energetic significance of each day.

## 🌟 Features

- **Interactive Calendar Interface**: Beautiful, responsive calendar with mystical design
- **Automatic Numerology Calculations**: Each date shows its numerological value as a superscript
- **Master Number Recognition**: Special handling for master numbers (11, 22, 33)
- **Daily Guidance**: Personalized numerological insights and suggestions
- **Cross-Platform Compatibility**: Works on Windows, macOS, and Linux
- **Modern Web Interface**: Built with HTML5, CSS3, and JavaScript
- **Lightweight Launcher**: Simple C++ executable opens the calendar in your browser

## 🔢 Numerology Formula

The application uses the standard numerology calculation method:

1. **Extract all digits** from the date (day + month + year)
2. **Sum all digits** together
3. **Reduce to single digit** by repeatedly summing digits
4. **Special cases**: Master numbers 11, 22, and 33 are preserved

### Example Calculation
For **June 8, 2003**:
- Digits: 8 + 6 + 2 + 0 + 0 + 3 = 19
- Reduce: 1 + 9 = 10
- Final: 1 + 0 = **1**

So June 8th displays as **8¹** on the calendar.

## 🚀 Installation & Setup

### Prerequisites
- C++ compiler (g++, clang, or MSVC)
- A modern web browser
- Git (for cloning the repository)

### Quick Start

1. **Clone the repository:**
   ```bash
   git clone https://github.com/blacksnowmartin/Numerology-Calendar.git
   cd Numerology-Calendar
   ```

2. **Build the launcher:**
   
   **Windows (MinGW/GCC):**
   ```bash
   g++ python-gui.cpp -o mystichron.exe -mwindows
   ```
   
   **Linux/macOS:**
   ```bash
   g++ python-gui.cpp -o mystichron
   ```

3. **Run the application:**
   
   **Windows:**
   ```bash
   mystichron.exe
   ```
   
   **Linux/macOS:**
   ```bash
   ./mystichron
   ```

The application will automatically open in your default web browser.

### Alternative: Direct Browser Access
You can also open `index.html` directly in any modern web browser without building the launcher.

## 📱 Usage

### Main Interface
- **Calendar View**: Browse through months to see numerological values for each date
- **Daily Insights**: Click on any date to see its numerological significance
- **Today's Guidance**: The app shows a modal with today's numerology and personalized advice

### Understanding the Numbers
- **1**: Leadership, new beginnings, independence
- **2**: Cooperation, balance, patience
- **3**: Creativity, communication, joy
- **4**: Stability, hard work, organization
- **5**: Change, freedom, adventure
- **6**: Responsibility, care, harmony
- **7**: Spirituality, analysis, introspection
- **8**: Material success, power, achievement
- **9**: Completion, wisdom, humanitarianism
- **11**: Intuition, inspiration, spiritual insight
- **22**: Master builder, practical vision, large-scale impact
- **33**: Master teacher, healing, compassion

## 🏗️ Project Structure

```
Numerology-Calendar/
├── index.html          # Main web application
├── python-gui.cpp      # Cross-platform launcher
├── README.md           # Project documentation
├── Desc.txt            # Project requirements
└── .git/               # Git repository
```

### File Descriptions

- **`index.html`**: Complete web application with HTML, CSS, and JavaScript
  - Responsive calendar grid layout
  - Numerology calculation algorithms
  - Interactive modal system
  - Mystical styling and animations

- **`python-gui.cpp`**: Cross-platform launcher executable
  - Detects operating system
  - Opens `index.html` in default browser
  - Handles Windows, macOS, and Linux compatibility

- **`Desc.txt`**: Original project specification and requirements

## 🎨 Design Features

- **Mystical Theme**: Dark gradient background with golden accents
- **Responsive Layout**: Adapts to different screen sizes
- **Smooth Animations**: CSS transitions and keyframe animations
- **Interactive Elements**: Hover effects and modal interactions
- **Typography**: Cinzel font for an elegant, mystical appearance

## 🔧 Technical Details

### Technologies Used
- **HTML5**: Semantic markup and structure
- **CSS3**: Advanced styling, animations, and responsive design
- **JavaScript**: Calendar generation and numerology calculations
- **C++**: Cross-platform launcher application

### Browser Compatibility
- Chrome 60+
- Firefox 55+
- Safari 12+
- Edge 79+

### Performance
- Lightweight application (< 10KB total)
- Fast loading and smooth interactions
- No external dependencies (except Google Fonts)

## 🤝 Contributing

Contributions are welcome! Please feel free to submit issues, feature requests, or pull requests.

### Development Setup
1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test on multiple platforms
5. Submit a pull request

## 📄 License

This project is created by **Blacksnow Martin (Martin Kitonga)** © 2025

## 🙏 Acknowledgments

- Inspired by ancient numerological traditions
- Built with modern web technologies
- Designed for accessibility and user experience

---

**Developed with love by Blacksnow Martin (Martin Kitonga) 😊**
