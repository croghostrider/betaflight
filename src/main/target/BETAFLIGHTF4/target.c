/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM10, CH1, PB8, TIM_USE_PWM | TIM_USE_PPM, TIMER_OUTPUT_NONE, 0),  // PPM

    // Motors
    DEF_TIM(TIM3,  CH3, PB0,  TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0),  // S1_OUT D1_ST7
    DEF_TIM(TIM3,  CH4, PB1,  TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0),  // S2_OUT D1_ST2
    DEF_TIM(TIM8,  CH4, PC9,  TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0),  // S3_OUT D1_ST6
    DEF_TIM(TIM8,  CH3, PC8,  TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0),  // S4_OUT D1_ST1

    // LED strip
    DEF_TIM(TIM4,  CH1, PB6,  TIM_USE_MOTOR | TIM_USE_LED, TIMER_OUTPUT_STANDARD, 0),  // D1_ST0

    // UART Backdoors
    DEF_TIM(TIM1,  CH2, PA9,  TIM_USE_NONE,  TIMER_OUTPUT_STANDARD, 0),  // TX1 Bidir
    DEF_TIM(TIM1,  CH3, PA10, TIM_USE_NONE,  TIMER_OUTPUT_STANDARD, 0),  // RX1 Bidir
    DEF_TIM(TIM5,  CH3, PA2,  TIM_USE_NONE,  TIMER_OUTPUT_STANDARD, 0),  // TX2 TX only
    DEF_TIM(TIM9,  CH2, PA3,  TIM_USE_NONE,  TIMER_OUTPUT_STANDARD, 0),  // RX2 RX only
    DEF_TIM(TIM2,  CH3, PB10, TIM_USE_NONE,  TIMER_OUTPUT_STANDARD, 0),  // TX3 Bidir
    DEF_TIM(TIM2,  CH4, PB11, TIM_USE_NONE,  TIMER_OUTPUT_STANDARD, 0),  // RX3 Bidir
};
