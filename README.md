# UE4OpenVibeTCP
A blueprint library for Unreal Engine 4 that allows to send stimulations to the acquisition server (OpenVibe) to mark the EEG signal (stimulations are sent using TCP sockets).



## Quick Install & Setup ##

 1.	[Download Latest Release](https://github.com/TheGameIsFixed/UE4OpenVibeTCP/releases)
 2.	Create new or choose project.
 3.	Browse to your project folder (typically found at Documents/Unreal Project/{Your Project Root})
 4.	Copy *Plugins* folder into your Project root.
 5.	Enable the plugin via Edit->Plugins. Scroll down to Installed->OpenVibe. Click Enabled.
 6.	Restart the Editor and open your project again. Plugin is now ready to use.


## UE4OpenVibeTCP Nodes - BluePrint 

![IMG](http://imgur.com/JkGwt4v)

The Node *connect to OpenVibe (acquisition server)* takes in parameters the IP of the acquisition server (basically 127.0.0.1 if launched on the same computer) and the port (value in the window : OpenVibe Acquisition Server -> Preferences -> TCP_Tagging_Port (15361 by default)). His outputs are a Boolean « Success » (true if connection worked, false otherwise) and the Socket Reference object.
The Node *Send stimulation to OpenVibe* takes in parameters the Socket Reference object and an OpenVibe specific stimulation selectable inside a dropdownlist. It returns a Boolean (true if stimulation was sent correctly, false otherwise).
The Node *Send stimulation to OpenVibe (input number)* takes in parameters the Socket Reference object and an integer (which should correspond to an OpenVibe stimulation). It returns a Boolean (true if stimulation was sent correctly, false otherwise). THE UTILISATION OF THE PREVIOUS NODE IS RECOMMENDED AS STIMULATIONS IN THE DROPDOWNLIST CORRESPOND TO OPENVIBE STIMULATIONS. THIS NODE CAN BE USED TO SEND NEW STIMULATIONS NON PRESENT IN OPENVIBE (ADVANCED).
The Node *Close connection to OpenVibe* takes in parameter the Socket Reference object. It returns a Boolean (true if connexion was closed correctly, false otherwise).

## UE4OpenVibeTCP - Level Blueprint Example

![IMG](http://imgur.com/gL6omMZ)

## Contributor

Louis A. aka "TheGameIsFixed"
Contact : thegameisfixed@gmail.com

## License

MIT License

Copyright (c) 2017 TheGameIsFixed

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

