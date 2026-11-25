# Electronic Circuit Design & Simulation Survey using Autodesk Tinkercad

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Internship: Academic Survey](https://img.shields.io/badge/Internship%20I-NMAM%20Institute%20of%20Technology-blue.svg)]()
[![Platform: Autodesk Tinkercad](https://img.shields.io/badge/Platform-Autodesk%20Tinkercad-orange.svg)]()

> Academic internship survey and hands-on simulation study evaluating Autodesk Tinkercad for modeling, testing, and instrumenting fundamental electronic circuits, Ohm's law, and microcontroller prototyping.

---

## 👤 Author & Mentor
* **Author**: **J Shreyas Aradhya** (`NNM24EC065`)
* **Mentor**: **Pradyumna G R**
* **Institution**: Department of Electronics & Communication Engineering, NMAMIT, Nitte

---

## ⚡ Experiments & Verification Findings

### 1. Series LED Circuit vs. Supply Voltage
* **Power Source**: 3.0 V (CR2032 Coin Cell Battery).
* **Load**: Two standard red LEDs connected in series.
* **Findings**: Forward voltage drop of standard red LEDs is $\approx 1.8\text{ V} - 2.0\text{ V}$. In series, total required forward drop is $\approx 3.6\text{ V} - 4.0\text{ V}$. Since the 3.0 V source is insufficient, neither LED illuminates adequately (insufficient bias).

### 2. Parallel LED Circuit
* **Power Source**: 3.0 V (CR2032 Coin Cell Battery).
* **Load**: Two standard LEDs in parallel branches with independent current-limiting resistors ($R = 150\,\Omega$).
* **Findings**: Both branches experience the full 3.0 V rail, providing sufficient current ($I = \frac{3.0\text{ V} - 2.0\text{ V}}{150\,\Omega} \approx 6.67\text{ mA}$) to brightly illuminate both LEDs.

### 3. Ohm's Law Empirical Validation
* **Power Source**: 9.0 V Alkaline Battery.
* **Resistor**: $450\,\Omega$.
* **LED Drop**: $V_F = 2.0\text{ V}$.
* **Theoretical Current**:
  $$I = \frac{V_{source} - V_F}{R} = \frac{9.0\text{ V} - 2.0\text{ V}}{450\,\Omega} = \frac{7.0\text{ V}}{450\,\Omega} \approx 15.55\text{ mA}$$
* **Tinkercad Virtual Multimeter Measurement**: $15.6\text{ mA}$ (Matching theoretical derivation with 0.3% error).

---

## 📁 Repository Structure
```
├── docs/
│   └── Tinkercad_Survey_Report.pdf     # Official 14-page Internship I report
├── circuits/
│   ├── series_circuit_analysis.md      # Voltage divider calculations and findings
│   └── parallel_circuit_analysis.md    # Current distribution and branch measurements
├── arduino/
│   └── basic_circuit_simulation.ino    # Arduino sketch for Tinkercad microcontroller tests
├── .gitignore
├── LICENSE
└── README.md
```
