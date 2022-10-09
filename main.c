/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.1
        Device            :  PIC24FJ128GB202
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.70
        MPLAB 	          :  MPLAB X v5.50
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/

#include "mcc_generated_files/mcc.h"
#include "config_SSD1306.h"
#include "clearDisplay.h"
#include "set_Columns.h"


/*
                         Main application
 */
int main(void)
{
    SYSTEM_Initialize();
    SPI1_Initialize();
    config_SSD1306();
    
    CS = LO;              
    DC = LO;
    SPI1_Exchange8bit(0x00); // horizontal addressing mode     
    CS = HI;                
    
    CS = LO;              
    DC = LO;
    SPI1_Exchange8bit(0x1f); // lower col start address = 0      
    CS = HI; 
    clearDisplay();
    
    setPageAddress(0);
    set_Columns(0x21, 0x00,0x0f) ;
    
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x00);       // 
        CS = HI;
    
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x02);       // 
        CS = HI;
        
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x02);       //
        CS = HI;
        
        
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x7e);       //
        CS = HI;
        
        
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x02);       //
        CS = HI;
        
        
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x02);       //
        CS = HI;
        
        
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x00);       //
        CS = HI;
        
        
        CS = LO;
        DC = HI;
        SPI1_Exchange8bit(0x00);       //
        CS = HI;
        
    
    while (1)
    {
        __delay_ms(100);
        // Add your application code
    }

    return 1;
}
/**
 End of File
*/

