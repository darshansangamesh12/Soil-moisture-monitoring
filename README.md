
# Soil Moisture Monitoring System 🌱  

This project is a **Soil Moisture Monitoring System** designed to measure and monitor the moisture levels of soil using an ESP32 microcontroller and a capacitive soil moisture sensor. It provides real-time visual feedback through LEDs and displays sensor readings in the Arduino IDE.  

## Features  
- **Moisture Level Indication**:  
  - **Red LED**: Low moisture level  
  - **Green LED**: Medium moisture level  
  - **Blue LED**: Excess moisture  
- **Real-Time Data**: Displays moisture values in the Arduino IDE serial monitor.  
- **Adjustable Thresholds**: Thresholds determined through trial and error for customizable moisture ranges.  

## Components Used  
1. **ESP32 Microcontroller**  
2. **Capacitive Soil Moisture Sensor**  
3. **LEDs** (Red, Green, Blue)  
4. **Breadboard and Jumper Wires**  
5. **Power Supply**  

## Working Principle  
The capacitive soil moisture sensor measures the moisture level of the soil and sends analog data to the ESP32. Based on the sensor readings, the system activates the appropriate LED:  
- **Low moisture**: Red LED lights up.  
- **Medium moisture**: Green LED lights up.  
- **Excess moisture**: Blue LED lights up.  

The output values from the sensor are printed on the Arduino IDE serial monitor for further analysis.  

## Threshold Values  
Threshold values for moisture levels were determined using a trial-and-error method. You can adjust these values in the Arduino code to suit different soil types.  

## Circuit Diagram 
The circuit diagram is available in the directory of this repository. 

## Code  
The Arduino code for this project is available in the **`code/`** directory of this repository.  

### Steps to Run the Code  
1. Connect the ESP32, sensor, and LEDs as per the circuit diagram.  
2. Upload the Arduino code to the ESP32 using the Arduino IDE.  
3. Open the serial monitor in the Arduino IDE to view real-time moisture levels.  
4. Observe the LEDs for visual feedback on soil moisture.  

## Future Enhancements  
- Add a buzzer or notification system for critical moisture levels.  
- Integrate with IoT platforms for remote monitoring.  
- Replace LEDs with an LCD/graphical display for detailed output.  

