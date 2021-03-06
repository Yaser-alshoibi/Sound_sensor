# Sound Sensor


In this application I am trying to use a sound sensor as a trigger. So, whenever an event happen (clapping) it will trigger a specific instructions (output). I aim to use it in serving robot or feedback robot as it will be an effective idea to communicate with the robot while keeping the social distance between the robot and the customer.

# Working Principle


This sound sensor module I used has both digital and analog output pins, in my application I used analog reading, but we can also use the digital output pin, since we can change the level of sound where the sensor gives 1 above that level or gives 0 below that level. And, the level could be changed by rotating the internal potentiometer of the sound sensor.

<br>
<p align="center">
<img src="https://user-images.githubusercontent.com/85786699/126641372-fc0ef39b-80f8-4c1e-8e11-0ddf058959e8.png" width="600">
<br>Figure 1: sound level using digital input
</p>


<br>
<p align="center">
<img src="https://user-images.githubusercontent.com/85786699/126641793-11810bc5-47c8-4163-bbab-8c669a4ab5af.png" width="600">
<br>Figure 2: czn-15e sound sensor I am using in my circuit shows all pins and internal poteniometer</p>
<br>

This sound sensor is not accurate to measure sound in decibels as we will need an SPL meter. In addition, we cannot use `map function` to convert our measured values into decibels since the relation between sound in decibels and measured values are not linear. But, our application does not need any precision readings! We only need to detect and adjust the appropriate level where the sound sensor only detect clapping and use that as a trigger for specific output.


<p align="center">
<img src="https://user-images.githubusercontent.com/85786699/126641051-75c94005-6e99-46a3-bbd4-e784d483f2ff.png">
<br>Figure 3: This image shows sound pressure level of various sources.</p>

<br>
In this example, I am using the sound sensor as an input and LED as an output so whenever I clap the LED will blink. I have constructed this circuit using Arduino, sound sensor, LED and 270 ohm resistor. 



# Cicuit Connections

I used fritzing softwere to show my circuit connections.

<p align="center">
<img src="https://user-images.githubusercontent.com/85786699/126643367-8870a34a-1178-4208-82ef-f52ba9697b5c.png">
<br>
Figure 4: Cicuit connections</p>



# Expirement Video


https://user-images.githubusercontent.com/85786699/126643691-263c3f91-1968-482f-b79f-94abb6d7d4bd.mp4

<br><br>

<p align="center">
<img src="https://user-images.githubusercontent.com/85786699/126645318-e6a28767-6401-4f91-986f-10aa6ee19578.png" width="800">
<br>Figure 5: Serial monitor readings<br></p>
<br>

I uploaded Arduino code to the repository, I hope you like my idea!
