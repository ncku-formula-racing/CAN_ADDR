#ifndef can_addr_def_h
#define can_addr_def_h

typedef enum {
  CA_INV_LEFT_VOLTAGE = 0x10,
  CA_INV_RIGHT_VOLTAGE = 0x11,
  CA_INV_LEFT_DATA1 = 0x12,
  CA_INV_LEFT_DATA2 = 0x13,
  CA_INV_LEFT_DATA3 = 0x14,
  CA_INV_RIGHT_DATA1 = 0x15,
  CA_INV_RIGHT_DATA2 = 0x16,
  CA_INV_RIGHT_DATA3 = 0x17,

  CA_APPS = 0x18,

  CA_IMD_Request = 0x22,
  CA_IMD_Response = 0x23,
  CA_FAULT_SIGNAL = 0x30,
  CA_IMD_Info_General = 0x37,
  CA_IMD_Info_IsolationDetail = 0x38,
  CA_IMD_Info_Voltage = 0x39,
  CA_IMD_Info_IT = 0x3A,

  CA_BMS_VoltageTemp = 0x40,
  CA_BMS_BMS_Summary = 0x41,

  CA_LVBMS_DATA1 = 0x45,
  CA_LVBMS_DATA2 = 0x46,

  CA_DASHBOARD_BTN = 0x50,
  CA_DAQ_EN = 0x70,
  CA_DAQ_DATA = 0x71,
  CA_Fusion_Vel = 0x77,
  CA_Fusion_Omega = 0x78,
  CA_GPS_Data = 0x87,
  CA_RGB_EN = 0x90,
  CA_IMU_Err = 0x01,
  CA_IMU_SampleTime = 0x05,
  CA_IMU_GroupCnt = 0x06,
  CA_IMU_Status = 0x02,
  CA_IMU_Quat = 0x21,
  CA_IMU_dv = 0x31,
  CA_IMU_RateTurn = 0x32,
  CA_IMU_dq = 0x33,
  CA_IMU_ACC = 0x34,
  CA_IMU_FreeAcc = 0x35,
} can_addr_def_e;

/* CAN data index for IMU info (big-endian) */
#define CA_IMU_Err_IDX 0
#define CA_IMU_SampleTime_IDX 0 // big-endian uint32 at offset 0..3
#define CA_IMU_GroupCnt_IDX 0
#define CA_IMU_Status_IDX 0
#define CA_IMU_Quat_0_HIGH_IDX 0
#define CA_IMU_Quat_0_LOW_IDX 1
#define CA_IMU_Quat_1_HIGH_IDX 2
#define CA_IMU_Quat_1_LOW_IDX 3
#define CA_IMU_Quat_2_HIGH_IDX 4
#define CA_IMU_Quat_2_LOW_IDX 5
#define CA_IMU_Quat_3_HIGH_IDX 6
#define CA_IMU_Quat_3_LOW_IDX 7
#define CA_IMU_dv_x_HIGH_IDX 0
#define CA_IMU_dv_x_LOW_IDX 1
#define CA_IMU_dv_y_HIGH_IDX 2
#define CA_IMU_dv_y_LOW_IDX 3
#define CA_IMU_dv_z_HIGH_IDX 4
#define CA_IMU_dv_z_LOW_IDX 5
#define CA_IMU_dv_exp_IDX 6
#define CA_IMU_RateTurn_x_HIGH_IDX 0
#define CA_IMU_RateTurn_x_LOW_IDX 1
#define CA_IMU_RateTurn_y_HIGH_IDX 2
#define CA_IMU_RateTurn_y_LOW_IDX 3
#define CA_IMU_RateTurn_z_HIGH_IDX 4
#define CA_IMU_RateTurn_z_LOW_IDX 5
#define CA_IMU_dq_0_HIGH_IDX 0
#define CA_IMU_dq_0_LOW_IDX 1
#define CA_IMU_dq_1_HIGH_IDX 2
#define CA_IMU_dq_1_LOW_IDX 3
#define CA_IMU_dq_2_HIGH_IDX 4
#define CA_IMU_dq_2_LOW_IDX 5
#define CA_IMU_dq_3_HIGH_IDX 6
#define CA_IMU_dq_3_LOW_IDX 7
#define CA_IMU_ACC_x_HIGH_IDX 0
#define CA_IMU_ACC_x_LOW_IDX 1
#define CA_IMU_ACC_y_HIGH_IDX 2
#define CA_IMU_ACC_y_LOW_IDX 3
#define CA_IMU_ACC_z_HIGH_IDX 4
#define CA_IMU_ACC_z_LOW_IDX 5
#define CA_IMU_FreeACC_x_HIGH_IDX 0
#define CA_IMU_FreeACC_x_LOW_IDX 1
#define CA_IMU_FreeACC_y_HIGH_IDX 2
#define CA_IMU_FreeACC_y_LOW_IDX 3
#define CA_IMU_FreeACC_z_HIGH_IDX 4
#define CA_IMU_FreeACC_z_LOW_IDX 5

/* CAN data index for fusion output (little-endian) */
#define CA_FUSION_VX_IDX 0 /* int16, body-frame forward velocity, cm/s */
#define CA_FUSION_VY_IDX 2 /* int16, body-frame right velocity, cm/s */
#define CA_FUSION_WX_IDX 0 /* int16, roll rate, mrad/s */
#define CA_FUSION_WY_IDX 2 /* int16, pitch rate, mrad/s */
#define CA_FUSION_WZ_IDX 4 /* int16, yaw rate, mrad/s */

/* CAN data index for GPS data (little-endian) */
#define CA_GPS_UTC_IDX 0 /* uint32, hhmmss */
#define CA_GPS_SOG_IDX 4 /* uint16, speed over ground, cm/s */
#define CA_GPS_COG_IDX 6 /* uint16, course over ground, 0.01 deg */

/* CAN data index for ADC sensors */
#define CA_APPS_L_IDX 0
#define CA_APPS_R_IDX 2
#define CA_BPPS_IDX 4
#define CA_STEER_IDX 6

/* CAN data index for Fault Signal */
#define CA_BSPD_FAULT_IDX 0
#define CA_IMD_FAULT_IDX 1
#define CA_BMS_FAULT_IDX 2
/* CAN data index for BSPD Signal */
#define CA_BOTH_FAULT 6
#define CA_APPS_FAULT 5
#define CA_BSER_FAULT 4
#define CA_BSEL_FAULT 3

/* CAN data index for Dashboard Button */
#define CA_U1_TRIG 0
#define CA_U2_TRIG 1
#define CA_U3_TRIG 2

/* CAN data index for Dashboard Info */
#define CA_U1_LED 0
#define CA_U2_LED 1
#define CA_U3_LED 2

/* CAN data index for DAQ Enable */
#define CA_DAQ_EN_IDX 7

/* CAN data index for DAQ Data */
#define CA_DAQ_PRE_TEMP 7
#define CA_DAQ_POST_TEMP 6
#define CA_DAQ_PRESSURE_H 5
#define CA_DAQ_PRESSURE_L 4
#define CA_DAQ_FLOW_RATE_H 3
#define CA_DAQ_FLOW_RATE_L 2
#define CA_DAQ_FAN_PWM 1
#define CA_DAQ_PUMP_PWM 0

/* CAN data index for RGB Enable */
#define CA_RGB_EN_IDX 7
#define CA_RGB_INTENSITY 6

#endif
