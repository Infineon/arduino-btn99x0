/** 
 * @file        btn99x0_types.h
 * @brief       BTN99x0 types
 * @copyright   Copyright (c) 2022 Infineon Technologies AG
 * 
 * SPDX-License-Identifier: MIT
 */

#ifndef BTN99X0_TYPES_HPP_
#define BTN99X0_TYPES_HPP_

#include <stdint.h>

namespace btn99x0
{

typedef struct 
{
    uint16_t analog;
    uint16_t input;
    uint16_t inhibit;
} io_pins_t;

/** 
 * @brief Half-bridge experimental constants
 */
typedef struct 
{
    float ktis_amps_per_kelvin;             /**< Temperature coefficient for temperature sense uA/K */
    uint16_t dk;    	                    /**< Differential current sense ratio */
    double sense_current_offset_amps;       /**< Current sense offset in amperes */
} ic_experimental_const_t;

/**
 * @brief Half-bridge hardware configuration
 */
typedef struct 
{
    uint16_t sense_current_resistor_ohms;   /**< Sense current resistor in ohms */
    float adc_voltage_range_volts;          /**< Platform current sense ADC voltage range in volts */
    uint16_t adc_resolution_steps;          /**< Platform ADC resolution in steps (2^(bits) - 1) */
} hw_conf_t;

/**
 * @enum Half-bridge IC variants
 */
typedef enum
{
    IC_VARIANT_BTN9970LV = 0,                /**< BTN9970LV variant */     
    IC_VARIANT_BTN9990LV = 1                 /**< BTN9990LV variant */
} ic_variant_t;

/**
 * @enum Slew rate level
 */
typedef enum
{
    SLEW_RATE_LEVEL_0 = 0,                  /**< Slew level 0 */   
    SLEW_RATE_LEVEL_1 = 1,                  /**< Slew level 1 */
    SLEW_RATE_LEVEL_2 = 2,                  /**< Slew level 2 */
    SLEW_RATE_LEVEL_3 = 3,                  /**< Slew level 3 */
    SLEW_RATE_LEVEL_4 = 4,                  /**< Slew level 4 */
    SLEW_RATE_LEVEL_5 = 5,                  /**< Slew level 5 */
    SLEW_RATE_LEVEL_6 = 6,                  /**< Slew level 6 */
    SLEW_RATE_LEVEL_7 = 7                   /**< Slew level 7 */
} slew_rate_level_t;    

/**
 * @enum Diagnosis error codes
 */
typedef enum 
{
    NO_ERROR = 0,                           /**< No error */
    FAULT_CURRENT_ERROR = -1                /**< Fault current error */
} error_t;

}

#endif /* BTN99X0_TYPES_HPP_ */