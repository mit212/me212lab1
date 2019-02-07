// Peter KT Yu        - peterkty _ mit _ edu, Sept 2016
// Ryan Fish          - fishr _mit_ edu,      Sept 2016
// Jerry Ng           - jerryng _mit_ edu,    Jan 2019
#include "lab1_funcs.h"
#include "helper.h"

int openLoopController()
{
    // TODO:  Replace this with a calculated open loop motor command
    // e.g.  m1Command = desiredMV1 * some_factor;
    // refer to helper.h for variables to use for "some_factor"
    // remember the PWM limit is [-400,400]!

    // Fix this line
    //m1Command =

    return m1Command;
}

void storeOldVals()
{    
    prevTime = currentTime;

    // TODO: Store the old encoder values so you can take their derivative
    //   relevant variables:
    //   encoder1count
    //   encoder1countPrev
    

    // TODO: Store the old error values so you can take their derivative
    //   error1
    //   error1Prev
    
}

float motor1_velocity()
{

    // TODO: Use the encoder count values and dt to determine motor1 velocity
    // relevant variables:
    //   encoder1count
    //   encoder1countPrev
    //   dt

    // Fix this line and uncomment it
    //mV1 = 

    return mV1;
}

float proportional_control()
{
    // TODO: Use the desired velocity and actual velocity to calculate the velocity error
    // relevant variables:
    //   mV1
    //   desiredMV1
    //   error1

    // Fix this line and uncomment it
    //error1 = 

    //proportionalCommand1 = 
    return proportionalCommand1;
}

int closedLoopController()
{
    // TODO: Sum your various controls here 
    // e.g. proportional_control() + derivative_control() + integral_control()
    m1Command = proportional_control();
    return m1Command;
}

float derivative_control()
{
    // TODO: Use the old velocity value and the new one to determine the derivative of the error term
    // relevant variables:
    //  error1
    //  error1Prev
    //  dt
    //  Kdv1
    
    // Fix this line and uncomment it
    //derivativeCommand1 = 
    return derivativeCommand1;
}

float integral_control()
{
    //TODO: Use the previously integrated error and the current error
    //to calculate the current error integral
    //relevant variables:
    //  error1
    //  integratedError1
    //  dt
    //  Kiv1

    // Fix these lines and uncomment them
    //integratedError1 = 
    //integralCommand1 = 
    return integralCommand1;
}


float wheelProportional_control()
{
    //TODO: Use the desired wheel position and the current wheel position
    //to calculate the current error
    //relevant variables:
    //  wheelPosError1
    //  desiredWheelPos1
    //  wheelPos1
    //  Kpp1
  
    //  Fix these lines and uncomment tje,
    //wheelPosError1 =
    //wheelProportionalCommand1 = 
    return wheelProportionalCommand1;
    
}

float wheelDerivative_control()
{
    //TODO: Use the position error and the past position errorto determine the derivative command.
    //relevant variables:
    //  wheelPosError1
    //  wheelPosError1Prev
    //  dt
    //  Kdp1
    
    // Fix this line and uncomment it
    //wheelDerivativeCommand1 = 
    return wheelDerivativeCommand1;
}

float wheelIntegral_control()
{
    //TODO: Use the previously integrated error and the current error
    //to calculate the current error integral
    //relevant variables:
    //  wheelPosError1
    //  integratedWheelPosError1;
    //  dt
    //  Kip1

    // Fix these two lines and uncomment it
    //integratedWheelPosError1 = 
    return wheelIntegralCommand1;
  
}

int wheelPositionController()
{

    // TODO: Sum your various controls here 
    // e.g. wheelProportional_control() + wheelIntegral_control() + wheelDerivative_control();
    //m1Command = wheelProportional_control()
    return m1Command;
}

void storeOldVals2()
{    
    prevTime = currentTime;

    //Store the old encoder values so you can take their derivative
    //   relevant variables:
    //   encoder1count
    //   encoder1countPrev
    encoder1countPrev = encoder1count;
    wheelPos1 = encoder1count*enc2robotvel;

    // Store the old error values so you can take their derivative
    //   error1
    //   error1Prev
    error1Prev = error1;
    wheelPosError1Prev = wheelPosError1;
}
