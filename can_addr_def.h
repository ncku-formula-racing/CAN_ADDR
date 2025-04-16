#ifndef can_addr_def_h
#define can_addr_def_h

typedef enum {
  CA_FAULT_SIGNAL = 0x30,
  CA_DASHBOARD_BTN = 0x50,
  CA_BSPD_SIGNAL = 0x60,
  CA_DAQ_EN = 0x70,
  CA_DAQ_DATA = 0x71,
  CA_RGB_EN = 0x90,
} can_addr_def_e;

/* CAN data index for Fault Signal */
#define CA_BMS_FAULT_IDX 7
#define CA_IMD_FAULT_IDX 6
#define CA_BSPD_FAULT_IDX 5

/* CAN data index for Dashboard Button */
#define CA_U1_TRIG 7
#define CA_U2_TRIG 6
#define CA_U3_TRIG 5

/* CAN data index for BSPD Signal */
#define CA_APPS_FAULT 7
#define CA_BSE_FAULT 6
#define CA_BOTH_FAULT 5

/* CAN data index for DAQ Enable */
#define CA_DAQ_EN 7

/* CAN data index for DAQ Data */
#define CA_DAQ_PRE_TEMP 7
#define CA_DAQ_POST_TEMP 6
#define CA_DAQ_PRESSURE_H 5
#define CA_DAQ_PRESSURE_L 4
#define CA_DAQ_FLOW_RATE_H 3
#define CA_DAQ_FLOW_RATE_L 2
#define CA_DAQ_FAN_PWM 1

/* CAN data index for RGB Enable */
#define CA_RGB_EN 7
#define CA_RGB_INTENSITY 6

#endif
