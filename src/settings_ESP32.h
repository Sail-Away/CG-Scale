/*
  -----------------------------------------------------------
            Settings for ESP32 based MCUs
  -----------------------------------------------------------
  General settings for the CG scale.
*/

// **** Loadcell hardware settings ****

#define NUMBER_LOADCELLS                2       // if set to 2, the parameters of loadcell 3 are ignored

#define DISTANCE_X1                     25      // mm
#define DISTANCE_X2                     95      // mm
#define DISTANCE_X3                     220     // mm

#define LOADCELL1_CALIBRATION_FACTOR    960.4    // user set calibration factor
#define LOADCELL2_CALIBRATION_FACTOR    1078.7     // user set calibration factor
#define LOADCELL3_CALIBRATION_FACTOR    900     // user set calibration factor

/*
CG scale with 2 Loadcells:


<-         ||=== Loadcell 1 ========== Loadcell 2
                
            |        |                     |
            |---X1---|---------X2----------|



CG scale with 3 Loadcells:

       --   ||   Loadcell 1
       |    ||      ||
       |    ||      ||
       |    ||      ||
<-    X3    ||      ||================ Loadcell 2
       |    ||      ||
       |    ||      ||
       |    ||      ||
       --   ||   Loadcell 3 
                
            |        |                     |
            |---X1---|---------X2----------|
*/


#define PIN_LOADCELL1_DOUT            12
#define PIN_LOADCELL1_PD_SCK          13

#define PIN_LOADCELL2_DOUT            32
#define PIN_LOADCELL2_PD_SCK          33

#define PIN_LOADCELL3_DOUT            22
#define PIN_LOADCELL3_PD_SCK          23



// **** Measurement settings ****

#define STABILISINGTIME               3000     // ms

#define UPDATE_INTERVAL_OLED_MENU     500      // ms
#define UPDATE_INTERVAL_LOADCELL      100      // ms

#define SMOOTHING_LOADCELL            0.4     // IIR filter: smoothing value from 0.00-1.00

#define MINIMAL_CG_WEIGHT             10      // g     if lower, no CG is displayed (0mm)
#define MINIMAL_TOTAL_WEIGHT          1       // g     if lower, weight = 0 is displayed



// **** Calibration settings ****

#define REF_WEIGHT                    1500     // g
#define REF_CG                        100      // mm



// **** Voltage measurement settings ****

// analog input pin
#define VOLTAGE_PIN                   A0

// supply voltage
#define V_REF                         3300     // set supply voltage from 1800 to 5500mV

// voltage divider
#define RESISTOR_R1                   20000    // ohm
#define RESISTOR_R2                   10000    // ohm

/*
                  voltage input
                     |
                     |
                    | |
                    | |  R1
                    | |
                     |
  analog Pin  <------+
                     |
                    | |
                    | |  R2
                    | |
                     |
                     |
                    GND
*/

// calculate voltage to percent
#define ENABLE_PERCENTLIST            true

// Battery type
#define BAT_TYPE                      B_VOLT

// Battery cells
#define BAT_CELLS                     2



// **** Wifi settings ****

#define MAX_SSID_PW_LENGHT          32

// Station mode: connect to available network
#define SSID_STA                    ""
#define PASSWORD_STA                ""
#define TIMEOUT_CONNECT             25000   //ms

// Access point mode: create own network
#define SSID_AP                     "CG scale"
#define PASSWORD_AP                 ""
const char ip[4] =                  {10,2,1,2};    // default IP address

#define ENABLE_MDNS                 true          // enable mDNS to reach the webpage with hostname.local
#define ENABLE_OTA                  true          // enable over the air update



// **** https update settings ****

#define ENABLE_UPDATE               true
#define HTTPS_PORT                  443
#define HOST                        "github.com"
#define URL                         "/nightflyer88/CG_scale/releases/latest"



// **** Model memory settings ****

#define MAX_MODELNAME_LENGHT        32               // max chars 
#define DEFAULT_NAME                "Model"          // default model name
#define MODEL_FILE                  "/models.json"   // file to store models
#define JSONDOC_SIZE                20000            // max file size in bytes



// **** virtual weight settings ****

#define MAX_VIRTUAL_WEIGHT              10               

// *** Tare button ***

#define PIN_TARE_BUTTON            27

// **** end of settings ****
#warning ESP32 settings have been loaded
