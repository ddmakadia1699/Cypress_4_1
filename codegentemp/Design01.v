// ======================================================================
// Design01.v generated from TopDesign.cysch
// 12/03/2020 at 15:13
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_ES 17
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 33
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 33
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 5
`define CYDEV_CHIP_REV_EXPECT 17
`define CYDEV_CHIP_DIE_ACTUAL 5
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4X 7
`define CYDEV_CHIP_REVISION_4X_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 8
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 9
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 10
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 11
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 12
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4W 13
`define CYDEV_CHIP_REVISION_4W_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AC 14
`define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AD 15
`define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AE 16
`define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 17
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Y 18
`define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Z 19
`define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 20
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 21
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 22
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 23
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 24
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AA 25
`define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 26
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 27
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 28
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 29
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AB 30
`define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 31
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 32
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 33
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 37
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 38
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 2
`define CYDEV_CHIP_MEMBER_USED 26
`define CYDEV_CHIP_REVISION_USED 17
// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// SCB_P4_v4_0(ApplySbClockParam=false, BitWidthReplacementStringRx=uint8, BitWidthReplacementStringTx=uint8, BufNum=1, Cond=#, DBGW_SCB_IP_V0=true, DBGW_SCB_IP_V1=false, DBGW_SCB_IP_V2=false, DW_Hide_i2c=false, DW_Hide_Scbv0Feature=false, DW_Hide_Scbv2Feature=true, DW_Hide_Spi=true, DW_Hide_Uart=true, DW_Hide_UartFlowControl=true, DW_INTR_SPI_EC=, DW_INTR_SPI_EC_MASK=, DW_INTR_SPI_EC_MASKED=, DW_SPI_CTRL=, DW_SPI_STATUS=, DW_UART_CTRL=, DW_UART_FLOW_CTRL=, DW_UART_RX_CTRL=, DW_UART_TX_CTRL=, EndCond=#endif, EzI2cBitWidthReplacementString=uint16, EzI2cBusVoltage=3.3, EzI2cByteModeEnable=false, EzI2cClkFreqDes=1550, EzI2cClockFromTerm=false, EzI2cClockStretching=true, EzI2cDataRate=100, EzI2cIsPrimarySlaveAddressHex=true, EzI2cIsSecondarySlaveAddressHex=true, EzI2cMedianFilterEnable=true, EzI2cNumberOfAddresses=0, EzI2cOvsFactor=16, EzI2cPrimarySlaveAddress=8, EzI2cSecondarySlaveAddress=9, EzI2cShowTerminals=false, EzI2cSlaveAddressMask=254, EzI2cSlewRate=0, EzI2cSubAddressSize=0, EzI2cWakeEnable=false, I2cAcceptAddress=false, I2cAcceptGeneralCall=false, I2cBusVoltage=3.3, I2cBusVoltageLevel=, I2cByteModeEnable=false, I2cClkFreqDes=1550, I2cClockFromTerm=false, I2cDataRate=100, I2cExternIntrHandler=false, I2cIsSlaveAddressHex=true, I2cIsSlaveAddressMaskHex=true, I2cManualOversampleControl=false, I2cMedianFilterEnable=true, I2cMode=1, I2cOvsFactor=16, I2cOvsFactorHigh=8, I2cOvsFactorLow=8, I2cShowTerminals=false, I2cSlaveAddress=8, I2cSlaveAddressMask=254, I2cSlewRate=0, I2cSlewRateSettings=0, I2cTermsEnable=false, I2cWakeEnable=false, PinLocationP4A=true, PinName0Unconfig=uart_rx_i2c_scl_spi_mosi, PinName0UnconfigWake=uart_rx_wake_i2c_scl_spi_mosi, PinName1Unconfig=uart_tx_i2c_sda_spi_miso, PinName2Unconfig=spi_sclk, PinName3Unconfig=spi_ss0, Pn0Unconfig=RX_SCL_MOSI, Pn0UnconfigWake=RX_WAKE_SCL_MOSI, Pn1Unconfig=TX_SDA_MISO, Pn2Unconfig=SCLK, Pn3Unconfig=SS0, RemoveI2cPins=false, RemoveMisoSdaTx=true, RemoveMosiSclRx=true, RemoveMosiSclRxWake=true, RemoveScbClk=false, RemoveScbIrq=false, RemoveSpiMasterMiso=true, RemoveSpiMasterMosi=true, RemoveSpiMasterPins=true, RemoveSpiMasterSclk=true, RemoveSpiMasterSs0Pin=true, RemoveSpiMasterSs1Pin=true, RemoveSpiMasterSs2Pin=true, RemoveSpiMasterSs3Pin=true, RemoveSpiSclk=true, RemoveSpiSlaveMiso=true, RemoveSpiSlaveMosi=true, RemoveSpiSlavePins=true, RemoveSpiSs0=true, RemoveSpiSs1=true, RemoveSpiSs2=true, RemoveSpiSs3=true, RemoveUartCtsPin=true, RemoveUartRtsPin=true, RemoveUartRxPin=true, RemoveUartRxTxPin=true, RemoveUartRxWake=true, RemoveUartRxWakeupIrq=true, RemoveUartTxPin=true, RxTriggerOutputEnable=false, ScbClkFreqDes=1550, ScbClkMinusTolerance=0, ScbClkPlusTolerance=725.806451612903, ScbClockSelect=1, ScbClockTermEnable=false, ScbCustomIntrHandlerEnable=true, ScbInterruptTermEnable=false, ScbMisoSdaTxEnable=true, ScbMode=1, ScbModeHw=0, ScbMosiSclRxEnable=true, ScbRxWakeIrqEnable=false, ScbSclkEnable=false, ScbSs0Enable=false, ScbSs1Enable=false, ScbSs2Enable=false, ScbSs3Enable=false, ScbSymbolVisibility=0, SpiBitRate=1000, SpiBitsOrder=1, SpiByteModeEnable=false, SpiClkFreqDes=16000, SpiClockFromTerm=false, SpiFreeRunningSclk=false, SpiInterruptMode=0, SpiIntrMasterSpiDone=false, SpiIntrRxFull=false, SpiIntrRxNotEmpty=false, SpiIntrRxOverflow=false, SpiIntrRxTrigger=false, SpiIntrRxUnderflow=false, SpiIntrSlaveBusError=false, SpiIntrTxEmpty=false, SpiIntrTxNotFull=false, SpiIntrTxOverflow=false, SpiIntrTxTrigger=false, SpiIntrTxUnderflow=false, SpiLateMisoSampleEnable=false, SpiManualOversampleControl=true, SpiMasterMode=false, SpiMedianFilterEnable=false, SpimMisoTermEnable=false, SpimMosiTermEnable=false, SpiMode=0, SpimSclkTermEnable=false, SpimSs0TermEnable=false, SpimSs1TermEnable=false, SpimSs2TermEnable=false, SpimSs3TermEnable=false, SpiNumberOfRxDataBits=8, SpiNumberOfSelectLines=1, SpiNumberOfTxDataBits=8, SpiOvsFactor=16, SpiRemoveMiso=false, SpiRemoveMosi=false, SpiRemoveSclk=false, SpiRxBufferSize=8, SpiRxIntrMask=0, SpiRxOutputEnable=false, SpiRxTriggerLevel=7, SpiSclkMode=0, SpiSlaveMode=false, SpiSmartioEnable=false, SpisMisoTermEnable=false, SpisMosiTermEnable=false, SpiSs0Polarity=0, SpiSs1Polarity=0, SpiSs2Polarity=0, SpiSs3Polarity=0, SpisSclkTermEnable=false, SpisSsTermEnable=false, SpiSubMode=0, SpiTransferSeparation=1, SpiTxBufferSize=8, SpiTxIntrMask=0, SpiTxOutputEnable=false, SpiTxTriggerLevel=0, SpiWakeEnable=false, TriggerOutputEnable=false, TxTriggerOutputEnable=false, UartByteModeEnable=false, UartClkFreqDes=1382.4, UartClockFromTerm=false, UartCtsEnable=false, UartCtsPolarity=0, UartCtsTermEnable=false, UartDataRate=115200, UartDirection=3, UartDropOnFrameErr=false, UartDropOnParityErr=false, UartInterruptMode=0, UartIntrRxBreakDetected=false, UartIntrRxFrameErr=false, UartIntrRxFull=false, UartIntrRxNotEmpty=false, UartIntrRxOverflow=false, UartIntrRxParityErr=false, UartIntrRxTrigger=false, UartIntrRxUnderflow=false, UartIntrTxEmpty=false, UartIntrTxNotFull=false, UartIntrTxOverflow=false, UartIntrTxTrigger=false, UartIntrTxUartDone=false, UartIntrTxUartLostArb=false, UartIntrTxUartNack=false, UartIntrTxUnderflow=false, UartIrdaLowPower=false, UartIrdaPolarity=0, UartMedianFilterEnable=false, UartMpEnable=false, UartMpRxAcceptAddress=false, UartMpRxAddress=2, UartMpRxAddressMask=255, UartNumberOfDataBits=8, UartNumberOfStopBits=2, UartOvsFactor=12, UartParityType=2, UartRtsEnable=false, UartRtsPolarity=0, UartRtsTermEnable=false, UartRtsTriggerLevel=4, UartRxBreakWidth=11, UartRxBufferSize=8, UartRxEnable=false, UartRxIntrMask=0, UartRxOutputEnable=false, UartRxTermEnable=false, UartRxTriggerLevel=7, UartRxTxTermEnable=false, UartSmartioEnable=false, UartSmCardRetryOnNack=false, UartSubMode=0, UartTxBufferSize=8, UartTxEnable=false, UartTxIntrMask=0, UartTxOutputEnable=false, UartTxTermEnable=false, UartTxTriggerLevel=0, UartWakeEnable=false, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=SCB_P4_v4_0, CY_CONFIG_TITLE=I2C, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=I2C, CY_INSTANCE_SHORT_NAME=I2C, CY_MAJOR_VERSION=4, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=I2C, )
module SCB_P4_v4_0_0 (
    clock,
    cts_in,
    interrupt,
    m_miso,
    m_mosi,
    m_sclk,
    m_ss0,
    m_ss1,
    m_ss2,
    m_ss3,
    rts_out,
    rx_dma_out,
    rx_in,
    rx_tx_out,
    s_miso,
    s_mosi,
    s_sclk,
    s_ss,
    scl_b,
    sda_b,
    tx_dma_out,
    tx_out);
    input       clock;
    input       cts_in;
    output      interrupt;
    input       m_miso;
    output      m_mosi;
    output      m_sclk;
    output      m_ss0;
    output      m_ss1;
    output      m_ss2;
    output      m_ss3;
    output      rts_out;
    output      rx_dma_out;
    input       rx_in;
    output      rx_tx_out;
    output      s_miso;
    input       s_mosi;
    input       s_sclk;
    input       s_ss;
    inout       scl_b;
    inout       sda_b;
    output      tx_dma_out;
    output      tx_out;


          wire  uncfg_rx_irq;
          wire  sclk_m_wire;
          wire  Net_1264;
          wire  Net_1258;
          wire  rx_irq;
          wire [3:0] select_m_wire;
          wire  Net_1099;
          wire  Net_1090;
          wire  Net_467;
          wire  Net_1316;
          wire  Net_252;
          wire  Net_1089;
          wire  Net_1320;
          wire  Net_1257;
          wire  sclk_s_wire;
          wire  Net_1268;
          wire  Net_1297;
          wire  Net_547;
          wire  Net_1001;
          wire  mosi_s_wire;
          wire  rts_wire;
          wire  mosi_m_wire;
          wire  Net_891;
          wire  Net_1263;
          wire  miso_s_wire;
          wire  cts_wire;
          wire  Net_899;
          wire  tx_wire;
          wire  Net_1028;
          wire  rx_wire;
          wire  Net_916;
          wire  Net_1000;
          wire  miso_m_wire;
          wire  Net_1172;
          wire  Net_1170;
          wire  select_s_wire;
          wire  Net_847;


	cy_clock_v1_0
		#(.id("3dbba19d-7851-4a83-b204-a0a386fe8d68/2dc2d7a8-ce2b-43c7-af4a-821c8cd73ccf"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("645161290.322581"),
		  .is_direct(0),
		  .is_digital(0))
		SCBCLK
		 (.clock_out(Net_847));


	// select_s_VM (cy_virtualmux_v1_0)
	assign select_s_wire = s_ss;

	// rx_VM (cy_virtualmux_v1_0)
	assign rx_wire = rx_in;

	// rx_wake_VM (cy_virtualmux_v1_0)
	assign Net_1257 = uncfg_rx_irq;

	// clock_VM (cy_virtualmux_v1_0)
	assign Net_1170 = Net_847;

	// sclk_s_VM (cy_virtualmux_v1_0)
	assign sclk_s_wire = s_sclk;

	// mosi_s_VM (cy_virtualmux_v1_0)
	assign mosi_s_wire = s_mosi;

	// miso_m_VM (cy_virtualmux_v1_0)
	assign miso_m_wire = m_miso;

	wire [0:0] tmpOE__sda_net;
	wire [0:0] tmpFB_0__sda_net;
	wire [0:0] tmpINTERRUPT_0__sda_net;
	electrical [0:0] tmpSIOVREF__sda_net;

	cy_psoc3_pins_v1_10
		#(.id("3dbba19d-7851-4a83-b204-a0a386fe8d68/5382e105-1382-4a2e-b9f4-3bb2feba71e0"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		sda
		 (.oe(tmpOE__sda_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__sda_net[0:0]}),
		  .io({sda_b}),
		  .siovref(tmpSIOVREF__sda_net),
		  .interrupt({tmpINTERRUPT_0__sda_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__sda_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__scl_net;
	wire [0:0] tmpFB_0__scl_net;
	wire [0:0] tmpINTERRUPT_0__scl_net;
	electrical [0:0] tmpSIOVREF__scl_net;

	cy_psoc3_pins_v1_10
		#(.id("3dbba19d-7851-4a83-b204-a0a386fe8d68/22863ebe-a37b-476f-b252-6e49a8c00b12"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		scl
		 (.oe(tmpOE__scl_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__scl_net[0:0]}),
		  .io({scl_b}),
		  .siovref(tmpSIOVREF__scl_net),
		  .interrupt({tmpINTERRUPT_0__scl_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__scl_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_1099));


    assign Net_1258 = Net_1099 | Net_847;


	cy_isr_v1_0
		#(.int_type(2'b10))
		SCB_IRQ
		 (.int_signal(interrupt));


	// cts_VM (cy_virtualmux_v1_0)
	assign cts_wire = cts_in;

    cy_m0s8_scb_v2_0 SCB (
        .clock(Net_1170),
        .cts(cts_wire),
        .interrupt(interrupt),
        .miso_m(miso_m_wire),
        .miso_s(miso_s_wire),
        .mosi_m(mosi_m_wire),
        .mosi_s(mosi_s_wire),
        .rts(rts_wire),
        .rx(rx_wire),
        .rx_req(rx_dma_out),
        .scl(scl_b),
        .sclk_m(sclk_m_wire),
        .sclk_s(sclk_s_wire),
        .sda(sda_b),
        .select_m(select_m_wire[3:0]),
        .select_s(select_s_wire),
        .tx(tx_wire),
        .tx_req(tx_dma_out));
    defparam SCB.scb_mode = 0;

	// Device_VM4 (cy_virtualmux_v1_0)
	assign uncfg_rx_irq = Net_1028;


    assign m_mosi = mosi_m_wire;

    assign m_sclk = sclk_m_wire;

    assign m_ss0 = select_m_wire[0];

    assign m_ss1 = select_m_wire[1];

    assign m_ss2 = select_m_wire[2];

    assign m_ss3 = select_m_wire[3];

    assign rts_out = rts_wire;

    assign rx_tx_out = tx_wire;

    assign s_miso = miso_s_wire;

    assign tx_out = tx_wire;


endmodule

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// IDAC_P4_v1_10(IDACRange=0, IDACValue=120, Polarity=1, Resolution=8, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=IDAC_P4_v1_10, CY_CONFIG_TITLE=IDACMod, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CapSense_1:IDACMod, CY_INSTANCE_SHORT_NAME=IDACMod, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=true, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=CapSense_1_IDACMod, )
module IDAC_P4_v1_10_1 (
    Iout);
    inout       Iout;
    electrical  Iout;


          wire  Net_3;

    cy_psoc4_csidac_v1_0 cy_psoc4_idac (
        .en(Net_3),
        .iout(Iout));
    defparam cy_psoc4_idac.resolution = 8;

    OneTerminal OneTerminal_1 (
        .o(Net_3));



endmodule

// IDAC_P4_v1_10(IDACRange=0, IDACValue=120, Polarity=1, Resolution=7, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=IDAC_P4_v1_10, CY_CONFIG_TITLE=IDACComp, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CapSense_1:IDACComp, CY_INSTANCE_SHORT_NAME=IDACComp, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=true, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=CapSense_1_IDACComp, )
module IDAC_P4_v1_10_2 (
    Iout);
    inout       Iout;
    electrical  Iout;


          wire  Net_3;

    cy_psoc4_csidac_v1_0 cy_psoc4_idac (
        .en(Net_3),
        .iout(Iout));
    defparam cy_psoc4_idac.resolution = 7;

    OneTerminal OneTerminal_1 (
        .o(Net_3));



endmodule

// CapSense_P4_v6_0(AdcAcqTime=10, AdcAcquisitionTime=-1, AdcAmuxbInputEnable=false, AdcAnalogStartupDelayUs=5, AdcAzEnable=true, AdcAzTime=5, AdcDedicatedChannels=1, AdcEnable=false, AdcMeasureMode=0, AdcPinAlias=Ch0, AdcResolution=10, AdcSelectAmuxBusChannel=0, AdcTotalChannels=1, AdcVref=-1, BallisticMultiplierEnable=false, BaselineType=0, BlockOffAfterScanEnable=false, Centroid4PtsEnable=false, ClickEnable=false, Csd0IdacGainV1=4, Csd0IdacGainV2=2, Csd0PinAlias=Button0_Sns0,Button1_Sns0,Button2_Sns0,Button3_Sns0,Button5_Sns0,Button6_Sns0,Button4_Sns0,Button7_Sns0, Csd0PinCount=8, Csd0ShieldDelayV1=0, Csd0ShieldDelayV1Ver1=0, Csd0ShieldDelayV2=0, Csd0ShieldEnable=false, Csd0ShieldPrechargeSource=0, Csd0ShieldTankEnable=false, Csd0TotalShieldCount=1, Csd1IdacGainV1=4, Csd1IdacGainV2=2, Csd1PinAlias=, Csd1PinCount=0, Csd1ShieldDelayV1=0, Csd1ShieldDelayV1Ver1=0, Csd1ShieldDelayV2=0, Csd1ShieldEnable=false, Csd1ShieldPrechargeSource=0, Csd1ShieldTankEnable=false, Csd1TotalShieldCount=1, Csd2xEnable=false, CsdAnalogStartupDelayUs=10, CsdAutoZeroEnable=false, CsdAutoZeroTime=15, CsdCommonSenseClockEnable=false, CsdDedicatedIdacCompEnable=true, CsdDualIdacLevel=50, CsdEnable=true, CsdFineInitCycles=10, CsdGenerationVersion=1, CsdIdacAutoCalibrateEnable=true, CsdIdacCompEnable=true, CsdIdacConfig=0, CsdInactiveSensorConnection=0, CsdInitSwitchRes=1, CsdMFSDividerOffsetF1=1, CsdMFSDividerOffsetF2=2, CsdModClockFreq=12000, CsdNoiseMetricEnable=false, CsdNoiseMetricThreshold=1, CsdPrescanSettlingTime=5, CsdRawCountCalibrationLevel=85, CsdSenseClockFreq=3000, CsdSenseClockSource=1, CsdSensingMethod=0, CsdShieldSwitchRes=1, CsdSnsClockConstantR=1000, CsdTuningMode=3, CsdV2AnalogWakeupDelayUs=0, CsdVrefV2=-1, Csx0IdacGainV1=4, Csx0IdacGainV2=1, Csx0PinAliasRx=, Csx0PinCountRx=0, Csx1IdacGainV1=4, Csx1IdacGainV2=1, Csx1PinAliasRx=, Csx1PinCountRx=0, Csx2xEnable=false, CsxAnalogStartupDelayUs=10, CsxAutoZeroEnable=false, CsxAutoZeroTime=15, CsxCommonTxClockEnable=false, CsxEnable=false, CsxFineInitCycles=4, CsxIdacAutoCalibrateEnable=true, CsxIdacBitsUsedV1=8, CsxIdacBitsUsedV2=7, CsxInitShieldSwitchRes=2, CsxInitSwitchRes=1, CsxMaxFingers=1, CsxMaxLocalPeaks=5, CsxMFSDividerOffsetF1=1, CsxMFSDividerOffsetF2=2, CsxModClockFreq=12000, CsxMultiphaseTxEnable=false, CsxNoiseMetricEnable=false, CsxNoiseMetricThreshold=1, CsxPinAliasMptx=, CsxPinAliasRx=, CsxPinAliasTx=, CsxPinCountMptx=0, CsxPinCountRx=0, CsxPinCountTx=0, CsxRawCountCalibrationLevel=40, CsxScanShieldSwitchRes=0, CsxScanSwitchRes=0, CsxSkipAndOversampleNodes=false, CsxTxClockFreq=300, CsxTxClockSource=1, CustomDataStructSize=0, Dig1PinMaskText=, Dig2PinMaskText=, DoxygenMode=false, DummyStatus=1, GestureEnable=false, GestureGlobalEnable=false, ImoFreqOffsetF1=20, ImoFreqOffsetF2=20, IndSenseCount=0, IsAdcSupported=false, IsCapSenseSupported=true, IsCsdSupportedBySymbol=true, IsCSDv2=false, IsCsxSupportedBySymbol=true, IsGestureSupported=false, IsIsxSupportedBySymbol=false, Isx0IdacGainV2=1, IsxAutoZeroEnable=false, IsxAutoZeroTime=15, IsxControlFile=, IsxControlFileText=, IsxDisableRsv=true, IsxEnable=false, IsxFineInitCycles=20, IsxIdacAutoCalibrateEnable=true, IsxIdacBitsUsedV2=7, IsxInitShieldSwitchRes=2, IsxInitSwitchRes=1, IsxModClockFreq=12000, IsxNoiseMetricEnable=false, IsxNoiseMetricThreshold=1, IsxPinAliasLx1=, IsxPinAliasRx=, IsxPinCountLx1=0, IsxPinCountRx=0, IsxRawCountCalibrationLevel=30, IsxSamplePhase_Deg=30, IsxScanShieldSwitchRes=0, IsxScanSwitchRes=0, IsxSkipAndOversampleNodes=false, LowBaselineResetSize=8, MultiFreqScanEnable=false, MultiFreqScanMethod=0, NumCentroids=1, OffDebounceEnable=false, OneFingerEdgeSwipeEnable=false, OneFingerEdgeSwipeTimeoutInterval=2000, OneFingerFlickEnable=false, OneFingerRotateEnable=false, OneFingerScrollEnable=false, P2PinCo=1, Port3Pin0= , Port3Pin1= , PosIirFilterCoeff=128, ProxAlpFilterCoeff=2, ProxAlpFilterEnable=false, ProxAverageFilterEnable=false, ProxAverageFilterSampleSize=4, ProxCustomFilterEnable=false, ProxIirFilterBaselineN=1, ProxIirFilterBaselineType=2, ProxIirFilterEnable=false, ProxIirFilterRawCountN=128, ProxIirFilterRawCountType=1, ProxMedianFilterEnable=false, RadialSliderPosIirResetThr=35, RegisterMapSelfTest=false, RegularAlpFilterCoeff=2, RegularAlpFilterEnable=false, RegularAverageFilterEnable=true, RegularAverageFilterSampleSize=4, RegularCustomFilterEnable=false, RegularIirFilterBaselineN=1, RegularIirFilterBaselineType=2, RegularIirFilterEnable=true, RegularIirFilterRawCountN=128, RegularIirFilterRawCountType=1, RegularMedianFilterEnable=true, SecondFinger5x5FilterEnable=false, SelfTestAnalogStartupDelayUs=23, SelfTestBaselineDuplicationEnable=true, SelfTestBaselineRawCountRangeEnable=true, SelfTestEnable=false, SelfTestExtCapEnable=true, SelfTestFineInitCycles=10, SelfTestGlobalCrcEnable=true, SelfTestIntCapEnable=true, SelfTestShCapEnable=true, SelfTestSns2SnsEnable=true, SelfTestSnsCapEnable=true, SelfTestSnsShortEnable=true, SelfTestVddaEnable=true, SelfTestVddaVref=-1, SelfTestWidgetCrcEnable=true, SensorAutoResetEnable=false, SensorAutoResetMethod=0, SensorAutoResetSamplesCount=1000, SliderMultiplierMethod=0, ThresholdSize=16, TimestampInterval=1, TouchpadDisplaySettings=<?xml version="1.0" encoding="utf-16"?> <TouchpadDisplaySettings xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">   <NumberOfSamples>100</NumberOfSamples>   <ShowHeatMap>true</ShowHeatMap>   <ColorRangeMinValue>0</ColorRangeMinValue>   <ColorRangeMaxValue>300</ColorRangeMaxValue>   <Multicolor>false</Multicolor>   <CsxMaxXAxisPos>100</CsxMaxXAxisPos>   <CsxMaxYAxisPos>100</CsxMaxYAxisPos>   <CsdMaxXAxisPos>0</CsdMaxXAxisPos>   <CsdMaxYAxisPos>0</CsdMaxYAxisPos>   <TouchpadPositionDisplaying>DISPLAY_BOTH</TouchpadPositionDisplaying>   <CsxMaxFingers>0</CsxMaxFingers> </TouchpadDisplaySettings>, TouchpadMultiplierMethod=0, TouchProxThresholdCoeff=300, TunerLayoutPreferences=<?xml version="1.0" encoding="utf-16"?> <CyLayoutPreferences xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">   <WidgetViewSplitterDistance>550</WidgetViewSplitterDistance>   <FormLocation>     <X>106</X>     <Y>63</Y>   </FormLocation>   <FormSize>     <Width>1227</Width>     <Height>733</Height>   </FormSize>   <WindowState>Normal</WindowState> </CyLayoutPreferences>, TunerOptionsPreferences=<?xml version="1.0" encoding="utf-16"?> <Options xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">   <SNR>     <NoiseCount>500</NoiseCount>     <SignalCount>500</SignalCount>     <SpikeLimit>0</SpikeLimit>     <NoiseMethod>PeakToPeak</NoiseMethod>     <SnrPass>5</SnrPass>   </SNR>   <Graph>     <SeriesThickness>1</SeriesThickness>   </Graph>   <Logging>     <LogAppend>false</LogAppend>     <LogDuration>100000</LogDuration>     <WidgetLogProps>       <Name>Button0</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button1</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button2</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button3</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button5</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button6</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button4</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <WidgetLogProps>       <Name>Button7</Name>       <WdgtStatus>false</WdgtStatus>       <Position>false</Position>     </WidgetLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button0_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button1_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button2_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button3_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button5_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button6_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button4_Sns0</Name>     </SensorLogProps>     <SensorLogProps>       <Raw>false</Raw>       <Bsln>false</Bsln>       <Diff>false</Diff>       <SnsStatus>false</SnsStatus>       <Name>Button7_Sns0</Name>     </SensorLogProps>   </Logging> </Options>, TunerViewPreferences=<?xml version="1.0" encoding="utf-16"?> <CyViewPreferences xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">   <WidgetExplorer>     <UncheckedWidgets />     <CheckedSensors />     <CollapsedWidgets />   </WidgetExplorer>   <GraphSetup>     <DisplayTouchSignalGraph>true</DisplayTouchSignalGraph>     <ShowLegend>true</ShowLegend>     <ShowMarks>false</ShowMarks>     <SyncedRead>false</SyncedRead>     <CheckedThresholds />   </GraphSetup>   <GestureMonitor>     <DelayEnabled>true</DelayEnabled>     <DelayInterval>1000</DelayInterval>   </GestureMonitor> </CyViewPreferences>, TunerWidgetData=, TwoFingerScrollEnable=false, TwoFingerSettlingTime=3, TwoFingerZoomEnable=false, VddaValue=3.3, WidgetBaselineCoeffEnable=false, WidgetData=<?xml version="1.0" encoding="utf-16"?> <WidgetData xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">   <Widget id="Button0" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button1" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button2" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button3" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button5" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button6" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button4" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs />           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget>   <Widget id="Button7" type="Button" mode="CSD" block="CSD0" slot="0">     <Angle>0</Angle>     <FlippedX>false</FlippedX>     <FlippedY>false</FlippedY>     <Flipped2D>false</Flipped2D>     <ScaleFactor>1</ScaleFactor>     <Properties>       <FingerCap>0.16</FingerCap>       <Diplexing>false</Diplexing>       <MaxPosition>100</MaxPosition>       <MaxXPosition>100</MaxXPosition>       <MaxYPosition>100</MaxYPosition>       <PositionFilter>None</PositionFilter>       <MultiphaseTx>false</MultiphaseTx>       <SenseClockFreq>3000</SenseClockFreq>       <RowSenseClockFreq>3000</RowSenseClockFreq>       <TxClockFreq>300</TxClockFreq>       <IsxTxClockFreq>1000</IsxTxClockFreq>       <ScanResolution>_12</ScanResolution>       <NumConversions>100</NumConversions>       <IdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </IdacMod>       <RowIdacMod>         <Idac0>32</Idac0>         <Idac1>32</Idac1>         <Idac2>32</Idac2>       </RowIdacMod>       <FingerThreshold>100</FingerThreshold>       <ProxTouchThreshold>200</ProxTouchThreshold>       <NoiseThreshold>40</NoiseThreshold>       <NegNoiseThreshold>40</NegNoiseThreshold>       <LowBaselineReset>30</LowBaselineReset>       <BaselineReset>1000</BaselineReset>       <BaselineUpdateThreshold>100</BaselineUpdateThreshold>       <Hysteresis>10</Hysteresis>       <OnDebounce>3</OnDebounce>       <OffDebounce>3</OffDebounce>       <AlpOnThreshold>60</AlpOnThreshold>       <AlpOFFThreshold>20</AlpOFFThreshold>       <Velocity>2500</Velocity>       <MedianFilter>false</MedianFilter>       <IirFilter>false</IirFilter>       <IirFilterCoeff>128</IirFilterCoeff>       <AIirFilter>false</AIirFilter>       <AverageFilter>false</AverageFilter>       <JitterFilter>false</JitterFilter>       <BallisticMultiplier>false</BallisticMultiplier>       <AIirPositionMoveTh>3</AIirPositionMoveTh>       <AIirPositionSlowMoveTh>7</AIirPositionSlowMoveTh>       <AIirPositionFastMoveTh>12</AIirPositionFastMoveTh>       <AIirCoeffMaxLimit>60</AIirCoeffMaxLimit>       <AIirCoeffMinLimit>1</AIirCoeffMinLimit>       <AIirCoeffDivisor>64</AIirCoeffDivisor>       <CentroidType>Csd3x3</CentroidType>       <CrossCouplingPosTh>5</CrossCouplingPosTh>       <EdgeCorrectionEnable>true</EdgeCorrectionEnable>       <EdgeVirtualSensorTh>100</EdgeVirtualSensorTh>       <EdgePenultimateTh>100</EdgePenultimateTh>       <TwoFingerDetection>false</TwoFingerDetection>       <FastMovementMult>9</FastMovementMult>       <SlowMovementMult>2</SlowMovementMult>       <DivisorValue>4</DivisorValue>       <SpeedThresholdX>3</SpeedThresholdX>       <SpeedThresholdY>4</SpeedThresholdY>     </Properties>     <Gestures>       <Click>         <Enabled>false</Enabled>         <XMaxPosDisplacement>30</XMaxPosDisplacement>         <YMaxPosDisplacement>30</YMaxPosDisplacement>         <MaxPosDisplacement>30</MaxPosDisplacement>         <MaxRadius>20</MaxRadius>         <MaxDisplacement>20</MaxDisplacement>         <MinTouchInterval>10</MinTouchInterval>         <MaxTouchInterval>1000</MaxTouchInterval>         <OneFingerMinTouchDuration>10</OneFingerMinTouchDuration>         <OneFingerMaxTouchDuration>1000</OneFingerMaxTouchDuration>         <TwoFingerMinTouchDuration>100</TwoFingerMinTouchDuration>         <TwoFingerMaxTouchDuration>1000</TwoFingerMaxTouchDuration>       </Click>       <OneFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <F1_Scroll_PosThreshold2>20</F1_Scroll_PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>20</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>20</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </OneFingerScroll>       <TwoFingerScroll>         <Enabled>false</Enabled>         <Debounce>3</Debounce>         <XPosThreshold1>20</XPosThreshold1>         <YPosThreshold1>20</YPosThreshold1>         <PosThreshold1>20</PosThreshold1>         <ScrollStep1>3</ScrollStep1>         <XPosThreshold2>24</XPosThreshold2>         <YPosThreshold2>24</YPosThreshold2>         <PosThreshold2>24</PosThreshold2>         <ScrollStep2>5</ScrollStep2>         <XPosThreshold3>30</XPosThreshold3>         <YPosThreshold3>30</YPosThreshold3>         <PosThreshold3>30</PosThreshold3>         <ScrollStep3>7</ScrollStep3>         <XPosThreshold4>40</XPosThreshold4>         <YPosThreshold4>40</YPosThreshold4>         <PosThreshold4>40</PosThreshold4>         <ScrollStep4>9</ScrollStep4>         <XPosThreshold>50</XPosThreshold>         <YPosThreshold>50</YPosThreshold>         <PosThreshold>50</PosThreshold>         <CountLevel>Inert_Low</CountLevel>       </TwoFingerScroll>       <OneFingerFlick>         <Enabled>false</Enabled>         <XPosThreshold>20</XPosThreshold>         <YPosThreshold>20</YPosThreshold>         <PosThreshold>20</PosThreshold>         <MaxSampleInterval>80</MaxSampleInterval>       </OneFingerFlick>       <OneFingerEdgeSwipe>         <Enabled>false</Enabled>         <PosThreshold>100</PosThreshold>         <DetectionTime>100</DetectionTime>         <TimeoutInterval>2000</TimeoutInterval>         <TopAngleThreshold>45</TopAngleThreshold>         <BottomAngleThreshold>45</BottomAngleThreshold>         <DisamRegionWidth>5</DisamRegionWidth>       </OneFingerEdgeSwipe>       <TwoFingerZoom>         <Enabled>false</Enabled>         <XPosThreshold>8</XPosThreshold>         <YPosThreshold>8</YPosThreshold>         <PosThreshold>8</PosThreshold>         <Debounce>3</Debounce>         <ScrollZoomDebounce>5</ScrollZoomDebounce>       </TwoFingerZoom>       <OneFingerRotate>         <Enabled>false</Enabled>         <RotateDebounce>0</RotateDebounce>         <PosThreshold>8</PosThreshold>       </OneFingerRotate>     </Gestures>     <Sensors>       <Sensor id="Sns0">         <Properties>           <IdacComp>             <Idac0>32</Idac0>             <Idac1>32</Idac1>             <Idac2>32</Idac2>           </IdacComp>           <Idacs>             <Idac>               <Idac0>32</Idac0>               <Idac1>32</Idac1>               <Idac2>32</Idac2>             </Idac>           </Idacs>           <UseDedicatedPin>true</UseDedicatedPin>           <GangedPins />         </Properties>       </Sensor>     </Sensors>   </Widget> </WidgetData>, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=CapSense_P4_v6_0, CY_CONFIG_TITLE=CapSense, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=CapSense_P4_v6_0.pdf, CY_FITTER_NAME=CapSense_1, CY_INSTANCE_SHORT_NAME=CapSense_1, CY_MAJOR_VERSION=6, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=CapSense_1, )
module CapSense_P4_v6_0_3 ;


          wire  cap_lo_en;
          wire  cap_hi_en;
          wire  Net_1553;
          wire  csd_sense;
          wire  Net_1551;
          wire  Net_1550;
          wire  sense_in;
          wire  Net_1549;
          wire  Net_1548;
          wire  Net_1547;
          wire  Net_1546;
          wire  Net_1545;
          wire  Net_1552;
          wire  Net_1554;
          wire  Net_1555;
          wire  Net_1557;
          wire  Net_1556;
          wire [7:0] Net_1566;
          wire  Net_1564;
          wire  Net_1563;
          wire  Net_1562;
          wire  Net_1561;
          wire  Net_1560;
          wire  Net_1559;
          wire  Net_1558;
          wire  Net_1565;
    electrical [7:0] Net_1729;
          wire  Net_1707;
    electrical  Net_1702;
    electrical  Net_1704;
          wire  Net_1421;
          wire  Net_1422;
          wire  Net_1235;
    electrical  Net_1724;
    electrical  Net_1723;
    electrical  Net_1636;
    electrical  Net_1343;
    electrical  Net_1722;
    electrical  Net_1716;
    electrical  Net_1703;
          wire  Net_1700;
          wire  Net_1691;
          wire  Net_1417;
          wire  Net_1423;
          wire  Net_1420;
          wire  Net_1568;
          wire  Net_1569;
          wire  Net_1176;
          wire  Net_1127;
          wire  Net_1124;
          wire  Net_1145;
          wire  Net_1274;
          wire  Net_1684;
          wire  Net_1133;
          wire  Net_1652;
          wire  Net_1106;
    electrical  Net_1346;

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign csd_sense = Net_1568;

    assign Net_1568 = 1'h0;

    IDAC_P4_v1_10_1 IDACMod (
        .Iout(Net_1346));


	cy_isr_v1_0
		#(.int_type(2'b10))
		ISR
		 (.int_signal(Net_1417));



	cy_clock_v1_0
		#(.id("66267bb5-c529-4eb0-8fd9-8e981e4ea965/dc05f2b0-a67b-4bab-aef2-0d210293eadb"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(255),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(0))
		SnsClk
		 (.clock_out(Net_1691));



	cy_clock_v1_0
		#(.id("66267bb5-c529-4eb0-8fd9-8e981e4ea965/a8285cdc-5e81-40c0-8036-58ea5f8c1102"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(255),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(0))
		ModClk
		 (.clock_out(Net_1423));



    assign Net_1421 = Net_1420 | Net_1423;

    ZeroTerminal ZeroTerminal_6 (
        .z(Net_1420));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_1700));

    cy_psoc4_csd_v1_20 CSD (
        .amuxa(Net_1346),
        .amuxb(Net_1703),
        .clk1(Net_1691),
        .clk2(Net_1423),
        .cmod(Net_1704),
        .csh(Net_1716),
        .irq(Net_1417),
        .rx(Net_1702),
        .sample_in(Net_1700),
        .sample_out(Net_1707),
        .sense(Net_1729[7:0]),
        .sense_in(csd_sense),
        .sense_out(sense_in),
        .shield(Net_1343),
        .tx(Net_1636));
    defparam CSD.ganged_csx = 0;
    defparam CSD.is_capsense = 1;
    defparam CSD.rx_count = 1;
    defparam CSD.sense_as_shield = 0;
    defparam CSD.sensors_count = 8;
    defparam CSD.shield_as_sense = 0;
    defparam CSD.shield_count = 1;
    defparam CSD.tx_count = 1;

	wire [7:0] tmpOE__Sns_net;
	wire [7:0] tmpFB_7__Sns_net;
	wire [7:0] tmpIO_7__Sns_net;
	wire [0:0] tmpINTERRUPT_0__Sns_net;
	electrical [0:0] tmpSIOVREF__Sns_net;

	cy_psoc3_pins_v1_10
		#(.id("66267bb5-c529-4eb0-8fd9-8e981e4ea965/7452d2ad-6927-4631-ada7-f0f5be9418ba"),
		  .drive_mode(24'b000_000_000_000_000_000_000_000),
		  .ibuf_enabled(8'b0_0_0_0_0_0_0_0),
		  .init_dr_st(8'b0_1_1_1_1_1_1_1),
		  .input_clk_en(0),
		  .input_sync(8'b1_1_1_1_1_1_1_1),
		  .input_sync_mode(8'b0_0_0_0_0_0_0_0),
		  .intr_mode(16'b00_00_00_00_00_00_00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,,,,,"),
		  .layout_mode("NONCONTIGUOUS"),
		  .oe_conn(8'b0_0_0_0_0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(8'b0_0_0_0_0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(8'b0_0_0_0_0_0_0_0),
		  .output_conn(8'b0_0_0_0_0_0_0_0),
		  .output_mode(8'b0_0_0_0_0_0_0_0),
		  .output_reset(0),
		  .output_sync(8'b0_0_0_0_0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases("Button0_Sns0,Button1_Sns0,Button2_Sns0,Button3_Sns0,Button5_Sns0,Button6_Sns0,Button4_Sns0,Button7_Sns0"),
		  .pin_mode("AAAAAAAA"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(8'b1_1_1_1_1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(16'b00_00_00_00_00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(8'b0_0_0_0_0_0_0_0),
		  .spanning(1),
		  .use_annotation(8'b0_0_0_0_0_0_0_0),
		  .vtrip(16'b10_10_10_10_10_10_10_10),
		  .width(8),
		  .ovt_hyst_trim(8'b0_0_0_0_0_0_0_0),
		  .ovt_needed(8'b0_0_0_0_0_0_0_0),
		  .ovt_slew_control(16'b00_00_00_00_00_00_00_00),
		  .input_buffer_sel(16'b00_00_00_00_00_00_00_00))
		Sns
		 (.oe(tmpOE__Sns_net),
		  .y({8'b0}),
		  .fb({tmpFB_7__Sns_net[7:0]}),
		  .analog({Net_1729[7:0]}),
		  .io({tmpIO_7__Sns_net[7:0]}),
		  .siovref(tmpSIOVREF__Sns_net),
		  .interrupt({tmpINTERRUPT_0__Sns_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Sns_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{8'b11111111} : {8'b11111111};

    IDAC_P4_v1_10_2 IDACComp (
        .Iout(Net_1346));

	wire [0:0] tmpOE__Cmod_net;
	wire [0:0] tmpFB_0__Cmod_net;
	wire [0:0] tmpIO_0__Cmod_net;
	wire [0:0] tmpINTERRUPT_0__Cmod_net;
	electrical [0:0] tmpSIOVREF__Cmod_net;

	cy_psoc3_pins_v1_10
		#(.id("66267bb5-c529-4eb0-8fd9-8e981e4ea965/cc19c666-c22b-4b9b-b13d-252fdd9c4502"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Cmod
		 (.oe(tmpOE__Cmod_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Cmod_net[0:0]}),
		  .analog({Net_1704}),
		  .io({tmpIO_0__Cmod_net[0:0]}),
		  .siovref(tmpSIOVREF__Cmod_net),
		  .interrupt({tmpINTERRUPT_0__Cmod_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Cmod_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

// top
module top ;

          wire  Net_179;
          wire  Net_166;
          wire  Net_181;
          wire  Net_180;
          wire  Net_169;
          wire  Net_168;
          wire  Net_167;
          wire  Net_177;
          wire  Net_182;
          wire  Net_178;
          wire  Net_165;
          wire  Net_162;
          wire  Net_176;
          wire  Net_175;
          wire  Net_174;
          wire  Net_173;
          wire  Net_172;
          wire  Net_171;
          wire  Net_170;
          wire  Net_163;
          wire  Net_161;
          wire  Net_164;

	wire [0:0] tmpOE__L0_net;
	wire [0:0] tmpFB_0__L0_net;
	wire [0:0] tmpIO_0__L0_net;
	wire [0:0] tmpINTERRUPT_0__L0_net;
	electrical [0:0] tmpSIOVREF__L0_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L0
		 (.oe(tmpOE__L0_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L0_net[0:0]}),
		  .io({tmpIO_0__L0_net[0:0]}),
		  .siovref(tmpSIOVREF__L0_net),
		  .interrupt({tmpINTERRUPT_0__L0_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L0_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L1_net;
	wire [0:0] tmpFB_0__L1_net;
	wire [0:0] tmpIO_0__L1_net;
	wire [0:0] tmpINTERRUPT_0__L1_net;
	electrical [0:0] tmpSIOVREF__L1_net;

	cy_psoc3_pins_v1_10
		#(.id("67c57e20-e725-4fe5-8261-ffcd774a0059"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L1
		 (.oe(tmpOE__L1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L1_net[0:0]}),
		  .io({tmpIO_0__L1_net[0:0]}),
		  .siovref(tmpSIOVREF__L1_net),
		  .interrupt({tmpINTERRUPT_0__L1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L2_net;
	wire [0:0] tmpFB_0__L2_net;
	wire [0:0] tmpIO_0__L2_net;
	wire [0:0] tmpINTERRUPT_0__L2_net;
	electrical [0:0] tmpSIOVREF__L2_net;

	cy_psoc3_pins_v1_10
		#(.id("164bc50b-2780-4419-a043-7695c90dc5c0"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L2
		 (.oe(tmpOE__L2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L2_net[0:0]}),
		  .io({tmpIO_0__L2_net[0:0]}),
		  .siovref(tmpSIOVREF__L2_net),
		  .interrupt({tmpINTERRUPT_0__L2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L3_net;
	wire [0:0] tmpFB_0__L3_net;
	wire [0:0] tmpIO_0__L3_net;
	wire [0:0] tmpINTERRUPT_0__L3_net;
	electrical [0:0] tmpSIOVREF__L3_net;

	cy_psoc3_pins_v1_10
		#(.id("04ad4d73-f2b0-4f0a-b5c2-cae1f3d86d1c"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L3
		 (.oe(tmpOE__L3_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L3_net[0:0]}),
		  .io({tmpIO_0__L3_net[0:0]}),
		  .siovref(tmpSIOVREF__L3_net),
		  .interrupt({tmpINTERRUPT_0__L3_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L3_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L4_net;
	wire [0:0] tmpFB_0__L4_net;
	wire [0:0] tmpIO_0__L4_net;
	wire [0:0] tmpINTERRUPT_0__L4_net;
	electrical [0:0] tmpSIOVREF__L4_net;

	cy_psoc3_pins_v1_10
		#(.id("408dc549-9565-4fc3-abf0-379f19eacec6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L4
		 (.oe(tmpOE__L4_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L4_net[0:0]}),
		  .io({tmpIO_0__L4_net[0:0]}),
		  .siovref(tmpSIOVREF__L4_net),
		  .interrupt({tmpINTERRUPT_0__L4_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L4_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L5_net;
	wire [0:0] tmpFB_0__L5_net;
	wire [0:0] tmpIO_0__L5_net;
	wire [0:0] tmpINTERRUPT_0__L5_net;
	electrical [0:0] tmpSIOVREF__L5_net;

	cy_psoc3_pins_v1_10
		#(.id("472f3c15-cb05-4cd0-a281-c601893711a7"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L5
		 (.oe(tmpOE__L5_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L5_net[0:0]}),
		  .io({tmpIO_0__L5_net[0:0]}),
		  .siovref(tmpSIOVREF__L5_net),
		  .interrupt({tmpINTERRUPT_0__L5_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L5_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L6_net;
	wire [0:0] tmpFB_0__L6_net;
	wire [0:0] tmpIO_0__L6_net;
	wire [0:0] tmpINTERRUPT_0__L6_net;
	electrical [0:0] tmpSIOVREF__L6_net;

	cy_psoc3_pins_v1_10
		#(.id("40453c32-d75e-41c3-a868-0ff92813dd9b"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L6
		 (.oe(tmpOE__L6_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L6_net[0:0]}),
		  .io({tmpIO_0__L6_net[0:0]}),
		  .siovref(tmpSIOVREF__L6_net),
		  .interrupt({tmpINTERRUPT_0__L6_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L6_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L7_net;
	wire [0:0] tmpFB_0__L7_net;
	wire [0:0] tmpIO_0__L7_net;
	wire [0:0] tmpINTERRUPT_0__L7_net;
	electrical [0:0] tmpSIOVREF__L7_net;

	cy_psoc3_pins_v1_10
		#(.id("2527521a-5a67-40b1-b58f-f194b82c1a28"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L7
		 (.oe(tmpOE__L7_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L7_net[0:0]}),
		  .io({tmpIO_0__L7_net[0:0]}),
		  .siovref(tmpSIOVREF__L7_net),
		  .interrupt({tmpINTERRUPT_0__L7_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L7_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    SCB_P4_v4_0_0 I2C (
        .clock(1'b0),
        .cts_in(1'b0),
        .interrupt(Net_163),
        .m_miso(1'b0),
        .m_mosi(Net_171),
        .m_sclk(Net_172),
        .m_ss0(Net_173),
        .m_ss1(Net_174),
        .m_ss2(Net_175),
        .m_ss3(Net_176),
        .rts_out(Net_162),
        .rx_dma_out(Net_165),
        .rx_in(1'b0),
        .rx_tx_out(Net_182),
        .s_miso(Net_177),
        .s_mosi(1'b0),
        .s_sclk(1'b0),
        .s_ss(1'b0),
        .scl_b(Net_180),
        .sda_b(Net_181),
        .tx_dma_out(Net_166),
        .tx_out(Net_179));

	wire [0:0] tmpOE__L8_net;
	wire [0:0] tmpFB_0__L8_net;
	wire [0:0] tmpIO_0__L8_net;
	wire [0:0] tmpINTERRUPT_0__L8_net;
	electrical [0:0] tmpSIOVREF__L8_net;

	cy_psoc3_pins_v1_10
		#(.id("eeb52700-1a74-403b-b4db-ad18f6c94fd9"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L8
		 (.oe(tmpOE__L8_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L8_net[0:0]}),
		  .io({tmpIO_0__L8_net[0:0]}),
		  .siovref(tmpSIOVREF__L8_net),
		  .interrupt({tmpINTERRUPT_0__L8_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L8_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L9_net;
	wire [0:0] tmpFB_0__L9_net;
	wire [0:0] tmpIO_0__L9_net;
	wire [0:0] tmpINTERRUPT_0__L9_net;
	electrical [0:0] tmpSIOVREF__L9_net;

	cy_psoc3_pins_v1_10
		#(.id("4fdd9647-90e1-485d-9f39-be5bfdeef864"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L9
		 (.oe(tmpOE__L9_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L9_net[0:0]}),
		  .io({tmpIO_0__L9_net[0:0]}),
		  .siovref(tmpSIOVREF__L9_net),
		  .interrupt({tmpINTERRUPT_0__L9_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L9_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L10_net;
	wire [0:0] tmpFB_0__L10_net;
	wire [0:0] tmpIO_0__L10_net;
	wire [0:0] tmpINTERRUPT_0__L10_net;
	electrical [0:0] tmpSIOVREF__L10_net;

	cy_psoc3_pins_v1_10
		#(.id("339eee40-89f6-402e-815a-44168dcf87c4"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L10
		 (.oe(tmpOE__L10_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L10_net[0:0]}),
		  .io({tmpIO_0__L10_net[0:0]}),
		  .siovref(tmpSIOVREF__L10_net),
		  .interrupt({tmpINTERRUPT_0__L10_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L10_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L11_net;
	wire [0:0] tmpFB_0__L11_net;
	wire [0:0] tmpIO_0__L11_net;
	wire [0:0] tmpINTERRUPT_0__L11_net;
	electrical [0:0] tmpSIOVREF__L11_net;

	cy_psoc3_pins_v1_10
		#(.id("ada9065d-f153-46f8-893f-eac511dca7e1"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L11
		 (.oe(tmpOE__L11_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L11_net[0:0]}),
		  .io({tmpIO_0__L11_net[0:0]}),
		  .siovref(tmpSIOVREF__L11_net),
		  .interrupt({tmpINTERRUPT_0__L11_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L11_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L12_net;
	wire [0:0] tmpFB_0__L12_net;
	wire [0:0] tmpIO_0__L12_net;
	wire [0:0] tmpINTERRUPT_0__L12_net;
	electrical [0:0] tmpSIOVREF__L12_net;

	cy_psoc3_pins_v1_10
		#(.id("04d4b818-55e2-4697-831d-4f0f0bbd8103"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L12
		 (.oe(tmpOE__L12_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L12_net[0:0]}),
		  .io({tmpIO_0__L12_net[0:0]}),
		  .siovref(tmpSIOVREF__L12_net),
		  .interrupt({tmpINTERRUPT_0__L12_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L12_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L13_net;
	wire [0:0] tmpFB_0__L13_net;
	wire [0:0] tmpIO_0__L13_net;
	wire [0:0] tmpINTERRUPT_0__L13_net;
	electrical [0:0] tmpSIOVREF__L13_net;

	cy_psoc3_pins_v1_10
		#(.id("f8e27f03-8a36-4524-829f-f4a353f3de14"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L13
		 (.oe(tmpOE__L13_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L13_net[0:0]}),
		  .io({tmpIO_0__L13_net[0:0]}),
		  .siovref(tmpSIOVREF__L13_net),
		  .interrupt({tmpINTERRUPT_0__L13_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L13_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L14_net;
	wire [0:0] tmpFB_0__L14_net;
	wire [0:0] tmpIO_0__L14_net;
	wire [0:0] tmpINTERRUPT_0__L14_net;
	electrical [0:0] tmpSIOVREF__L14_net;

	cy_psoc3_pins_v1_10
		#(.id("b5c93339-ed33-4bb2-b7f8-1101fe4293d1"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L14
		 (.oe(tmpOE__L14_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L14_net[0:0]}),
		  .io({tmpIO_0__L14_net[0:0]}),
		  .siovref(tmpSIOVREF__L14_net),
		  .interrupt({tmpINTERRUPT_0__L14_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L14_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L15_net;
	wire [0:0] tmpFB_0__L15_net;
	wire [0:0] tmpIO_0__L15_net;
	wire [0:0] tmpINTERRUPT_0__L15_net;
	electrical [0:0] tmpSIOVREF__L15_net;

	cy_psoc3_pins_v1_10
		#(.id("6d1ef765-2dd1-4d8f-bac0-d3996327f151"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L15
		 (.oe(tmpOE__L15_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L15_net[0:0]}),
		  .io({tmpIO_0__L15_net[0:0]}),
		  .siovref(tmpSIOVREF__L15_net),
		  .interrupt({tmpINTERRUPT_0__L15_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L15_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L16_net;
	wire [0:0] tmpFB_0__L16_net;
	wire [0:0] tmpIO_0__L16_net;
	wire [0:0] tmpINTERRUPT_0__L16_net;
	electrical [0:0] tmpSIOVREF__L16_net;

	cy_psoc3_pins_v1_10
		#(.id("c2b14de4-3429-47b7-837c-6081d8ed8e44"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L16
		 (.oe(tmpOE__L16_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L16_net[0:0]}),
		  .io({tmpIO_0__L16_net[0:0]}),
		  .siovref(tmpSIOVREF__L16_net),
		  .interrupt({tmpINTERRUPT_0__L16_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L16_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L17_net;
	wire [0:0] tmpFB_0__L17_net;
	wire [0:0] tmpIO_0__L17_net;
	wire [0:0] tmpINTERRUPT_0__L17_net;
	electrical [0:0] tmpSIOVREF__L17_net;

	cy_psoc3_pins_v1_10
		#(.id("ec836b7e-7583-4f01-a6f7-b7270fd490ee"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L17
		 (.oe(tmpOE__L17_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L17_net[0:0]}),
		  .io({tmpIO_0__L17_net[0:0]}),
		  .siovref(tmpSIOVREF__L17_net),
		  .interrupt({tmpINTERRUPT_0__L17_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L17_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L18_net;
	wire [0:0] tmpFB_0__L18_net;
	wire [0:0] tmpIO_0__L18_net;
	wire [0:0] tmpINTERRUPT_0__L18_net;
	electrical [0:0] tmpSIOVREF__L18_net;

	cy_psoc3_pins_v1_10
		#(.id("2793c591-3694-4a8f-96e6-17ab19a83808"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L18
		 (.oe(tmpOE__L18_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L18_net[0:0]}),
		  .io({tmpIO_0__L18_net[0:0]}),
		  .siovref(tmpSIOVREF__L18_net),
		  .interrupt({tmpINTERRUPT_0__L18_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L18_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L19_net;
	wire [0:0] tmpFB_0__L19_net;
	wire [0:0] tmpIO_0__L19_net;
	wire [0:0] tmpINTERRUPT_0__L19_net;
	electrical [0:0] tmpSIOVREF__L19_net;

	cy_psoc3_pins_v1_10
		#(.id("7edecd6a-81ce-4248-aaf2-5a4e31c2c02e"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L19
		 (.oe(tmpOE__L19_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L19_net[0:0]}),
		  .io({tmpIO_0__L19_net[0:0]}),
		  .siovref(tmpSIOVREF__L19_net),
		  .interrupt({tmpINTERRUPT_0__L19_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L19_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L21_net;
	wire [0:0] tmpFB_0__L21_net;
	wire [0:0] tmpIO_0__L21_net;
	wire [0:0] tmpINTERRUPT_0__L21_net;
	electrical [0:0] tmpSIOVREF__L21_net;

	cy_psoc3_pins_v1_10
		#(.id("69cddc9d-e3ca-48e0-be64-f89082456107"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L21
		 (.oe(tmpOE__L21_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L21_net[0:0]}),
		  .io({tmpIO_0__L21_net[0:0]}),
		  .siovref(tmpSIOVREF__L21_net),
		  .interrupt({tmpINTERRUPT_0__L21_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L21_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L22_net;
	wire [0:0] tmpFB_0__L22_net;
	wire [0:0] tmpIO_0__L22_net;
	wire [0:0] tmpINTERRUPT_0__L22_net;
	electrical [0:0] tmpSIOVREF__L22_net;

	cy_psoc3_pins_v1_10
		#(.id("7063f76b-a62c-4f36-85a3-69d40c9fe0b7"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L22
		 (.oe(tmpOE__L22_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L22_net[0:0]}),
		  .io({tmpIO_0__L22_net[0:0]}),
		  .siovref(tmpSIOVREF__L22_net),
		  .interrupt({tmpINTERRUPT_0__L22_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L22_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L20_net;
	wire [0:0] tmpFB_0__L20_net;
	wire [0:0] tmpIO_0__L20_net;
	wire [0:0] tmpINTERRUPT_0__L20_net;
	electrical [0:0] tmpSIOVREF__L20_net;

	cy_psoc3_pins_v1_10
		#(.id("c08deca7-68b6-491d-8e57-c38edb817c5f"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L20
		 (.oe(tmpOE__L20_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L20_net[0:0]}),
		  .io({tmpIO_0__L20_net[0:0]}),
		  .siovref(tmpSIOVREF__L20_net),
		  .interrupt({tmpINTERRUPT_0__L20_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L20_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L23_net;
	wire [0:0] tmpFB_0__L23_net;
	wire [0:0] tmpIO_0__L23_net;
	wire [0:0] tmpINTERRUPT_0__L23_net;
	electrical [0:0] tmpSIOVREF__L23_net;

	cy_psoc3_pins_v1_10
		#(.id("d04fd4d4-7b76-4c3c-b386-af1e41bd4fa0"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L23
		 (.oe(tmpOE__L23_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L23_net[0:0]}),
		  .io({tmpIO_0__L23_net[0:0]}),
		  .siovref(tmpSIOVREF__L23_net),
		  .interrupt({tmpINTERRUPT_0__L23_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L23_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__L24_net;
	wire [0:0] tmpFB_0__L24_net;
	wire [0:0] tmpIO_0__L24_net;
	wire [0:0] tmpINTERRUPT_0__L24_net;
	electrical [0:0] tmpSIOVREF__L24_net;

	cy_psoc3_pins_v1_10
		#(.id("c8975a04-a63d-4787-8a4e-ea6a18cd4835"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		L24
		 (.oe(tmpOE__L24_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__L24_net[0:0]}),
		  .io({tmpIO_0__L24_net[0:0]}),
		  .siovref(tmpSIOVREF__L24_net),
		  .interrupt({tmpINTERRUPT_0__L24_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__L24_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CapSense_P4_v6_0_3 CapSense_1 ();



endmodule

