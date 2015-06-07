#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     30
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {25200, 900},
  {25340, 850},
  {25419, 800},
  {25506, 750},
  {25635, 700},
  {25760, 650},
  {25914, 600},
  {26111, 550},
  {26317, 500},
  {26578, 450},
  {26876, 400},
  {27236, 350},
  {27649, 300},
  {28532, 250},
  {28597, 200},
  {29303, 150},
  {29996, 100},
  {30741, 50},
  {31297, 0},
  {32646, -50},
  {33887, -100},
  {35051, -150},
  {36000, -200},
};

#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   460
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  460
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     460
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0
