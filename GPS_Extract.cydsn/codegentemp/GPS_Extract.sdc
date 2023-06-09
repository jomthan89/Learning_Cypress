# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Mark Hughes\Desktop\Work\WORK\WORK\Study\Cypress_Study\Study\GPS_Extract.cydsn\GPS_Extract.cyprj
# Date: Tue, 28 Mar 2023 10:26:35 GMT
#set_units -time ns
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {UART_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 313 625} -nominal_period 13020.833333333332 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {GPS_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 313 625} -nominal_period 13020.833333333332 [list [get_pins {ClockBlock/dclk_glb_1}]]


# Component constraints for C:\Users\Mark Hughes\Desktop\Work\WORK\WORK\Study\Cypress_Study\Study\GPS_Extract.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Mark Hughes\Desktop\Work\WORK\WORK\Study\Cypress_Study\Study\GPS_Extract.cydsn\GPS_Extract.cyprj
# Date: Tue, 28 Mar 2023 10:26:32 GMT
