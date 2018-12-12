//#include</home/sobaca/CommsForTrainLight/Reliable_Controller_For_Railworks/inc/config.h>
#include "config.h"


void i2c_init(void);
uint8_t i2c_start(uint8_t slave_address);
void i2c_stop(void);

uint8_t i2c_rep_start(uint8_t slave_address);
void i2c_start_wait(uint8_t slave_address);
uint8_t i2c_write(uint8_t data);
uint8_t i2c_read_ack(void);
uint8_t i2c_read_nack(void);