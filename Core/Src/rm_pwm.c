/*
 * rm_pwm.c
 *
 *  Created on: Feb 12, 2020
 *      Author: WYT
 */

#include "rm_pwm.h"
#include "main.h"

void pwm_imu_start(){
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
}

void pwm_buzzer_start(){
	HAL_TIM_PWM_Start(&htim12, TIM_CHANNEL_1);
}

void set_pwm_imu(unsigned short int pwm){
	TIM3->CCR2 = (pwm);
}

void set_pwm_buzzer(unsigned short int pwm){
	TIM12->CCR1 = (pwm);
}
