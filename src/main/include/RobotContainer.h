#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/button/CommandJoystick.h>
#include <frc2/command/button/CommandXboxController.h>

#include "Constants.h"
#include "subsystems/DalekDrive.h"
#include "subsystems/Vision.h"

class RobotContainer {
public:
  RobotContainer();

  frc2::CommandPtr GetAutonomousCommand();

private:
  frc2::CommandJoystick m_leftJoystick{OperatorConstants::kLeftJoystickPort};
  frc2::CommandJoystick m_rightJoystick{OperatorConstants::kRightJoystickPort};
  frc2::CommandXboxController m_driverController{
    OperatorConstants::kXboxControllerPort};
  Vision m_vision;
  DalekDrive m_drivetrain;
  

  void ConfigureBindings();
};
