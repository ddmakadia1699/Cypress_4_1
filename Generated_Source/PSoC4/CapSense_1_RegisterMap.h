/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 6.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v6.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2018), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (20u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCC000014u)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (24u)
#define CapSense_1_SNS_STATUS0_SIZE                         (1u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x48000018u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (25u)
#define CapSense_1_SNS_STATUS1_SIZE                         (1u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x4E000019u)

#define CapSense_1_SNS_STATUS2_VALUE                        (CapSense_1_dsRam.snsStatus[2u])
#define CapSense_1_SNS_STATUS2_OFFSET                       (26u)
#define CapSense_1_SNS_STATUS2_SIZE                         (1u)
#define CapSense_1_SNS_STATUS2_PARAM_ID                     (0x4400001Au)

#define CapSense_1_SNS_STATUS3_VALUE                        (CapSense_1_dsRam.snsStatus[3u])
#define CapSense_1_SNS_STATUS3_OFFSET                       (27u)
#define CapSense_1_SNS_STATUS3_SIZE                         (1u)
#define CapSense_1_SNS_STATUS3_PARAM_ID                     (0x4200001Bu)

#define CapSense_1_SNS_STATUS4_VALUE                        (CapSense_1_dsRam.snsStatus[4u])
#define CapSense_1_SNS_STATUS4_OFFSET                       (28u)
#define CapSense_1_SNS_STATUS4_SIZE                         (1u)
#define CapSense_1_SNS_STATUS4_PARAM_ID                     (0x4900001Cu)

#define CapSense_1_SNS_STATUS5_VALUE                        (CapSense_1_dsRam.snsStatus[5u])
#define CapSense_1_SNS_STATUS5_OFFSET                       (29u)
#define CapSense_1_SNS_STATUS5_SIZE                         (1u)
#define CapSense_1_SNS_STATUS5_PARAM_ID                     (0x4F00001Du)

#define CapSense_1_SNS_STATUS6_VALUE                        (CapSense_1_dsRam.snsStatus[6u])
#define CapSense_1_SNS_STATUS6_OFFSET                       (30u)
#define CapSense_1_SNS_STATUS6_SIZE                         (1u)
#define CapSense_1_SNS_STATUS6_PARAM_ID                     (0x4500001Eu)

#define CapSense_1_SNS_STATUS7_VALUE                        (CapSense_1_dsRam.snsStatus[7u])
#define CapSense_1_SNS_STATUS7_OFFSET                       (31u)
#define CapSense_1_SNS_STATUS7_SIZE                         (1u)
#define CapSense_1_SNS_STATUS7_PARAM_ID                     (0x4300001Fu)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (32u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xAB800020u)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (34u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x6F800022u)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (36u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0x81800024u)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (38u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0x8D800026u)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (40u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x4A800028u)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (41u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x4C800029u)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (42u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x4680002Au)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (43u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x4080002Bu)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (44u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x4B80002Cu)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (45u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x4000002Du)

#define CapSense_1_BUTTON0_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button0.snsClk)
#define CapSense_1_BUTTON0_SNS_CLK_OFFSET                   (46u)
#define CapSense_1_BUTTON0_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0x8F80002Eu)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (48u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4D800030u)

#define CapSense_1_BUTTON0_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button0.fingerCap)
#define CapSense_1_BUTTON0_FINGER_CAP_OFFSET                (50u)
#define CapSense_1_BUTTON0_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON0_FINGER_CAP_PARAM_ID              (0xAF000032u)

#define CapSense_1_BUTTON0_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button0.sigPFC)
#define CapSense_1_BUTTON0_SIGPFC_OFFSET                    (52u)
#define CapSense_1_BUTTON0_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON0_SIGPFC_PARAM_ID                  (0xA2000034u)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (54u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0x8B810036u)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (56u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0x84810038u)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (58u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x4081003Au)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (59u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x4681003Bu)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (60u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x4D81003Cu)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (61u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x4B81003Du)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (62u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x4181003Eu)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (63u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x4A01003Fu)

#define CapSense_1_BUTTON1_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button1.snsClk)
#define CapSense_1_BUTTON1_SNS_CLK_OFFSET                   (64u)
#define CapSense_1_BUTTON1_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON1_SNS_CLK_PARAM_ID                 (0x84810040u)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (66u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x40810042u)

#define CapSense_1_BUTTON1_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button1.fingerCap)
#define CapSense_1_BUTTON1_FINGER_CAP_OFFSET                (68u)
#define CapSense_1_BUTTON1_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON1_FINGER_CAP_PARAM_ID              (0xA3010044u)

#define CapSense_1_BUTTON1_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button1.sigPFC)
#define CapSense_1_BUTTON1_SIGPFC_OFFSET                    (70u)
#define CapSense_1_BUTTON1_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON1_SIGPFC_PARAM_ID                  (0xAF010046u)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (72u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0x83820048u)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (74u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0x8F82004Au)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (76u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x4A82004Cu)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (77u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x4C82004Du)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (78u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x4682004Eu)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (79u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x4082004Fu)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (80u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x4C820050u)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (81u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x47020051u)

#define CapSense_1_BUTTON2_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button2.snsClk)
#define CapSense_1_BUTTON2_SNS_CLK_OFFSET                   (82u)
#define CapSense_1_BUTTON2_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON2_SNS_CLK_PARAM_ID                 (0x88820052u)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (84u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x4D820054u)

#define CapSense_1_BUTTON2_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button2.fingerCap)
#define CapSense_1_BUTTON2_FINGER_CAP_OFFSET                (86u)
#define CapSense_1_BUTTON2_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON2_FINGER_CAP_PARAM_ID              (0xAF020056u)

#define CapSense_1_BUTTON2_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button2.sigPFC)
#define CapSense_1_BUTTON2_SIGPFC_OFFSET                    (88u)
#define CapSense_1_BUTTON2_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON2_SIGPFC_PARAM_ID                  (0xA0020058u)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (90u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0x8983005Au)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (92u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0x8483005Cu)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (94u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x4083005Eu)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (95u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x4683005Fu)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (96u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x40830060u)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (97u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x46830061u)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (98u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x4C830062u)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (99u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x47030063u)

#define CapSense_1_BUTTON3_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button3.snsClk)
#define CapSense_1_BUTTON3_SNS_CLK_OFFSET                   (100u)
#define CapSense_1_BUTTON3_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON3_SNS_CLK_PARAM_ID                 (0x89830064u)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (102u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x4D830066u)

#define CapSense_1_BUTTON3_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button3.fingerCap)
#define CapSense_1_BUTTON3_FINGER_CAP_OFFSET                (104u)
#define CapSense_1_BUTTON3_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON3_FINGER_CAP_PARAM_ID              (0xAC030068u)

#define CapSense_1_BUTTON3_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button3.sigPFC)
#define CapSense_1_BUTTON3_SIGPFC_OFFSET                    (106u)
#define CapSense_1_BUTTON3_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON3_SIGPFC_PARAM_ID                  (0xA003006Au)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (108u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0x8284006Cu)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (110u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0x8E84006Eu)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (112u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x4C840070u)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (113u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x4A840071u)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (114u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x40840072u)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (115u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x46840073u)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (116u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x4D840074u)

#define CapSense_1_BUTTON5_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_1_BUTTON5_IDAC_MOD0_OFFSET                 (117u)
#define CapSense_1_BUTTON5_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD0_PARAM_ID               (0x46040075u)

#define CapSense_1_BUTTON5_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button5.snsClk)
#define CapSense_1_BUTTON5_SNS_CLK_OFFSET                   (118u)
#define CapSense_1_BUTTON5_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON5_SNS_CLK_PARAM_ID                 (0x89840076u)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (120u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x4E840078u)

#define CapSense_1_BUTTON5_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button5.fingerCap)
#define CapSense_1_BUTTON5_FINGER_CAP_OFFSET                (122u)
#define CapSense_1_BUTTON5_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON5_FINGER_CAP_PARAM_ID              (0xAC04007Au)

#define CapSense_1_BUTTON5_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button5.sigPFC)
#define CapSense_1_BUTTON5_SIGPFC_OFFSET                    (124u)
#define CapSense_1_BUTTON5_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON5_SIGPFC_PARAM_ID                  (0xA104007Cu)

#define CapSense_1_BUTTON6_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button6.resolution)
#define CapSense_1_BUTTON6_RESOLUTION_OFFSET                (126u)
#define CapSense_1_BUTTON6_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON6_RESOLUTION_PARAM_ID              (0x8885007Eu)

#define CapSense_1_BUTTON6_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.fingerTh)
#define CapSense_1_BUTTON6_FINGER_TH_OFFSET                 (128u)
#define CapSense_1_BUTTON6_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON6_FINGER_TH_PARAM_ID               (0x86850080u)

#define CapSense_1_BUTTON6_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button6.noiseTh)
#define CapSense_1_BUTTON6_NOISE_TH_OFFSET                  (130u)
#define CapSense_1_BUTTON6_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON6_NOISE_TH_PARAM_ID                (0x42850082u)

#define CapSense_1_BUTTON6_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.nNoiseTh)
#define CapSense_1_BUTTON6_NNOISE_TH_OFFSET                 (131u)
#define CapSense_1_BUTTON6_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON6_NNOISE_TH_PARAM_ID               (0x44850083u)

#define CapSense_1_BUTTON6_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button6.hysteresis)
#define CapSense_1_BUTTON6_HYSTERESIS_OFFSET                (132u)
#define CapSense_1_BUTTON6_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON6_HYSTERESIS_PARAM_ID              (0x4F850084u)

#define CapSense_1_BUTTON6_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button6.onDebounce)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_OFFSET               (133u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_PARAM_ID             (0x49850085u)

#define CapSense_1_BUTTON6_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button6.lowBslnRst)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_OFFSET              (134u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_PARAM_ID            (0x43850086u)

#define CapSense_1_BUTTON6_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button6.idacMod[0u])
#define CapSense_1_BUTTON6_IDAC_MOD0_OFFSET                 (135u)
#define CapSense_1_BUTTON6_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON6_IDAC_MOD0_PARAM_ID               (0x48050087u)

#define CapSense_1_BUTTON6_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button6.snsClk)
#define CapSense_1_BUTTON6_SNS_CLK_OFFSET                   (136u)
#define CapSense_1_BUTTON6_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON6_SNS_CLK_PARAM_ID                 (0x84850088u)

#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button6.snsClkSource)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_OFFSET            (138u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_PARAM_ID          (0x4085008Au)

#define CapSense_1_BUTTON6_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button6.fingerCap)
#define CapSense_1_BUTTON6_FINGER_CAP_OFFSET                (140u)
#define CapSense_1_BUTTON6_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON6_FINGER_CAP_PARAM_ID              (0xA305008Cu)

#define CapSense_1_BUTTON6_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button6.sigPFC)
#define CapSense_1_BUTTON6_SIGPFC_OFFSET                    (142u)
#define CapSense_1_BUTTON6_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON6_SIGPFC_PARAM_ID                  (0xAF05008Eu)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (144u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0x86860090u)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (146u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0x8A860092u)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (148u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x4F860094u)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (149u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x49860095u)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (150u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x43860096u)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (151u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x45860097u)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (152u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x4C860098u)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (153u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x47060099u)

#define CapSense_1_BUTTON4_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button4.snsClk)
#define CapSense_1_BUTTON4_SNS_CLK_OFFSET                   (154u)
#define CapSense_1_BUTTON4_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON4_SNS_CLK_PARAM_ID                 (0x8886009Au)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (156u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x4D86009Cu)

#define CapSense_1_BUTTON4_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button4.fingerCap)
#define CapSense_1_BUTTON4_FINGER_CAP_OFFSET                (158u)
#define CapSense_1_BUTTON4_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON4_FINGER_CAP_PARAM_ID              (0xAF06009Eu)

#define CapSense_1_BUTTON4_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button4.sigPFC)
#define CapSense_1_BUTTON4_SIGPFC_OFFSET                    (160u)
#define CapSense_1_BUTTON4_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON4_SIGPFC_PARAM_ID                  (0xAF0600A0u)

#define CapSense_1_BUTTON7_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button7.resolution)
#define CapSense_1_BUTTON7_RESOLUTION_OFFSET                (162u)
#define CapSense_1_BUTTON7_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON7_RESOLUTION_PARAM_ID              (0x868700A2u)

#define CapSense_1_BUTTON7_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.fingerTh)
#define CapSense_1_BUTTON7_FINGER_TH_OFFSET                 (164u)
#define CapSense_1_BUTTON7_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON7_FINGER_TH_PARAM_ID               (0x8B8700A4u)

#define CapSense_1_BUTTON7_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button7.noiseTh)
#define CapSense_1_BUTTON7_NOISE_TH_OFFSET                  (166u)
#define CapSense_1_BUTTON7_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON7_NOISE_TH_PARAM_ID                (0x4F8700A6u)

#define CapSense_1_BUTTON7_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.nNoiseTh)
#define CapSense_1_BUTTON7_NNOISE_TH_OFFSET                 (167u)
#define CapSense_1_BUTTON7_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON7_NNOISE_TH_PARAM_ID               (0x498700A7u)

#define CapSense_1_BUTTON7_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button7.hysteresis)
#define CapSense_1_BUTTON7_HYSTERESIS_OFFSET                (168u)
#define CapSense_1_BUTTON7_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON7_HYSTERESIS_PARAM_ID              (0x408700A8u)

#define CapSense_1_BUTTON7_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button7.onDebounce)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_OFFSET               (169u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_PARAM_ID             (0x468700A9u)

#define CapSense_1_BUTTON7_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button7.lowBslnRst)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_OFFSET              (170u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_PARAM_ID            (0x4C8700AAu)

#define CapSense_1_BUTTON7_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button7.idacMod[0u])
#define CapSense_1_BUTTON7_IDAC_MOD0_OFFSET                 (171u)
#define CapSense_1_BUTTON7_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON7_IDAC_MOD0_PARAM_ID               (0x470700ABu)

#define CapSense_1_BUTTON7_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button7.snsClk)
#define CapSense_1_BUTTON7_SNS_CLK_OFFSET                   (172u)
#define CapSense_1_BUTTON7_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON7_SNS_CLK_PARAM_ID                 (0x898700ACu)

#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button7.snsClkSource)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_OFFSET            (174u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_PARAM_ID          (0x4D8700AEu)

#define CapSense_1_BUTTON7_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button7.fingerCap)
#define CapSense_1_BUTTON7_FINGER_CAP_OFFSET                (176u)
#define CapSense_1_BUTTON7_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON7_FINGER_CAP_PARAM_ID              (0xA90700B0u)

#define CapSense_1_BUTTON7_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button7.sigPFC)
#define CapSense_1_BUTTON7_SIGPFC_OFFSET                    (178u)
#define CapSense_1_BUTTON7_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON7_SIGPFC_PARAM_ID                  (0xA50700B2u)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (180u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x8A0000B4u)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (182u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x860000B6u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (184u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x410000B8u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (186u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x850000BAu)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (188u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x400000BCu)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (189u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x460000BDu)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (190u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x840000BEu)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (192u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x890000C0u)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (194u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x4D0000C2u)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (196u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x880000C4u)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (198u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4C0000C6u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (199u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x4A0000C7u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (200u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x8B0000C8u)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (202u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x870000CAu)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (204u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x420000CCu)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (206u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x860000CEu)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (208u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x440000D0u)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (209u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x420000D1u)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (210u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x800000D2u)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (212u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x8D0000D4u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (214u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x490000D6u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (216u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x8E0000D8u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (218u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4A0000DAu)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (219u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x4C0000DBu)

#define CapSense_1_BUTTON5_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_SNS0_RAW0_OFFSET                 (220u)
#define CapSense_1_BUTTON5_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW0_PARAM_ID               (0x8F0000DCu)

#define CapSense_1_BUTTON5_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN0_OFFSET                (222u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_PARAM_ID              (0x830000DEu)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_OFFSET            (224u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID          (0x4B0000E0u)

#define CapSense_1_BUTTON5_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_SNS0_DIFF_OFFSET                 (226u)
#define CapSense_1_BUTTON5_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_DIFF_PARAM_ID               (0x8F0000E2u)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (228u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4A0000E4u)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_OFFSET           (229u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID         (0x4C0000E5u)

#define CapSense_1_BUTTON6_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].raw[0u])
#define CapSense_1_BUTTON6_SNS0_RAW0_OFFSET                 (230u)
#define CapSense_1_BUTTON6_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_RAW0_PARAM_ID               (0x8E0000E6u)

#define CapSense_1_BUTTON6_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button6[0u].bsln[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN0_OFFSET                (232u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_PARAM_ID              (0x810000E8u)

#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button6[0u].bslnExt[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_OFFSET            (234u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_PARAM_ID          (0x450000EAu)

#define CapSense_1_BUTTON6_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].diff)
#define CapSense_1_BUTTON6_SNS0_DIFF_OFFSET                 (236u)
#define CapSense_1_BUTTON6_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_DIFF_PARAM_ID               (0x800000ECu)

#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button6[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (238u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x440000EEu)

#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button6[0u].idacComp[0u])
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_OFFSET           (239u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_PARAM_ID         (0x420000EFu)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (240u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x860000F0u)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (242u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x8A0000F2u)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (244u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x4F0000F4u)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (246u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x8B0000F6u)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (248u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4C0000F8u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (249u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x4A0000F9u)

#define CapSense_1_BUTTON7_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].raw[0u])
#define CapSense_1_BUTTON7_SNS0_RAW0_OFFSET                 (250u)
#define CapSense_1_BUTTON7_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_RAW0_PARAM_ID               (0x880000FAu)

#define CapSense_1_BUTTON7_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button7[0u].bsln[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN0_OFFSET                (252u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_PARAM_ID              (0x850000FCu)

#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button7[0u].bslnExt[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_OFFSET            (254u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_PARAM_ID          (0x410000FEu)

#define CapSense_1_BUTTON7_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].diff)
#define CapSense_1_BUTTON7_SNS0_DIFF_OFFSET                 (256u)
#define CapSense_1_BUTTON7_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_DIFF_PARAM_ID               (0x8C000100u)

#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button7[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (258u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x48000102u)

#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button7[0u].idacComp[0u])
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_OFFSET           (259u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_PARAM_ID         (0x4E000103u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (260u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x6E000104u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (261u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x68000105u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (262u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x81000106u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (264u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8E000108u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_1_BUTTON0_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BUTTON0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_1_BUTTON0_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_1_BUTTON0_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_1_BUTTON0_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BUTTON0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_1_BUTTON0_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BUTTON0_TYPE_OFFSET                      (26u)
#define CapSense_1_BUTTON0_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_1_BUTTON0_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BUTTON0_NUM_COLS_OFFSET                  (27u)
#define CapSense_1_BUTTON0_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_OFFSET           (28u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID         (0xD700001Cu)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (32u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xD8010020u)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (36u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xD9010024u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (40u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xDA010028u)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (44u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDB01002Cu)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (48u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDD010030u)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (52u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDC010034u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (56u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x90010038u)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (58u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x5401003Au)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (59u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x5201003Bu)

#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_OFFSET           (60u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_PARAM_ID         (0xDE01003Cu)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (64u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xDA020040u)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (68u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xDB020044u)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (72u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xD8020048u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (76u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xD902004Cu)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (80u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xDF020050u)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (84u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xDE020054u)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (88u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x92020058u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (90u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x5602005Au)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (91u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x5002005Bu)

#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_OFFSET           (92u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_PARAM_ID         (0xDC02005Cu)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (96u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xD3030060u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (100u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xD2030064u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (104u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xD1030068u)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (108u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD003006Cu)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (112u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD6030070u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (116u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD7030074u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (120u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x9B030078u)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (122u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x5F03007Au)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (123u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x5903007Bu)

#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[3].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_OFFSET           (124u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_PARAM_ID         (0xD503007Cu)

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (128u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xDE040080u)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (132u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xDF040084u)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (136u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xDC040088u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (140u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xDD04008Cu)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (144u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xDB040090u)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (148u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xDA040094u)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (152u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x96040098u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (154u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x5204009Au)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (155u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x5404009Bu)

#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[4].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_OFFSET           (156u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_PARAM_ID         (0xD804009Cu)

#define CapSense_1_BUTTON6_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_OFFSET             (160u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_PARAM_ID           (0xD70500A0u)

#define CapSense_1_BUTTON6_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON6_PTR2WD_RAM_OFFSET                (164u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_PARAM_ID              (0xD60500A4u)

#define CapSense_1_BUTTON6_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_OFFSET               (168u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_PARAM_ID             (0xD50500A8u)

#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_OFFSET          (172u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_PARAM_ID        (0xD40500ACu)

#define CapSense_1_BUTTON6_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_OFFSET              (176u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_PARAM_ID            (0xD20500B0u)

#define CapSense_1_BUTTON6_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON6_STATIC_CONFIG_OFFSET             (180u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_PARAM_ID           (0xD30500B4u)

#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_OFFSET             (184u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_PARAM_ID           (0x9F0500B8u)

#define CapSense_1_BUTTON6_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON6_TYPE_OFFSET                      (186u)
#define CapSense_1_BUTTON6_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON6_TYPE_PARAM_ID                    (0x5B0500BAu)

#define CapSense_1_BUTTON6_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON6_NUM_COLS_OFFSET                  (187u)
#define CapSense_1_BUTTON6_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON6_NUM_COLS_PARAM_ID                (0x5D0500BBu)

#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[5].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_OFFSET           (188u)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_PARAM_ID         (0xD10500BCu)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (192u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xD50600C0u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (196u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xD40600C4u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (200u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xD70600C8u)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (204u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xD60600CCu)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (208u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xD00600D0u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (212u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xD10600D4u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (216u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x9D0600D8u)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (218u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x590600DAu)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (219u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5F0600DBu)

#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[6].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_OFFSET           (220u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_PARAM_ID         (0xD30600DCu)

#define CapSense_1_BUTTON7_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsFlash)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_OFFSET             (224u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_PARAM_ID           (0xDC0700E0u)

#define CapSense_1_BUTTON7_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[7].ptr2WdgtRam)
#define CapSense_1_BUTTON7_PTR2WD_RAM_OFFSET                (228u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_PARAM_ID              (0xDD0700E4u)

#define CapSense_1_BUTTON7_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsRam)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_OFFSET               (232u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_PARAM_ID             (0xDE0700E8u)

#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[7].ptr2FltrHistory)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_OFFSET          (236u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_PARAM_ID        (0xDF0700ECu)

#define CapSense_1_BUTTON7_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[7].ptr2DebounceArr)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_OFFSET              (240u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_PARAM_ID            (0xD90700F0u)

#define CapSense_1_BUTTON7_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[7].staticConfig)
#define CapSense_1_BUTTON7_STATIC_CONFIG_OFFSET             (244u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_PARAM_ID           (0xD80700F4u)

#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[7].totalNumSns)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_OFFSET             (248u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_PARAM_ID           (0x940700F8u)

#define CapSense_1_BUTTON7_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[7].wdgtType)
#define CapSense_1_BUTTON7_TYPE_OFFSET                      (250u)
#define CapSense_1_BUTTON7_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON7_TYPE_PARAM_ID                    (0x500700FAu)

#define CapSense_1_BUTTON7_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[7].numCols)
#define CapSense_1_BUTTON7_NUM_COLS_OFFSET                  (251u)
#define CapSense_1_BUTTON7_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON7_NUM_COLS_PARAM_ID                (0x560700FBu)

#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[7].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_OFFSET           (252u)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_PARAM_ID         (0xDA0700FCu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
