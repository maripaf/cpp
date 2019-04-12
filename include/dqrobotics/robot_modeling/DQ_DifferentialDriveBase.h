/**
(C) Copyright 2019 DQ Robotics Developers

This file is part of DQ Robotics.

    DQ Robotics is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    DQ Robotics is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with DQ Robotics.  If not, see <http://www.gnu.org/licenses/>.

Contributors:
- Murilo M. Marinho (murilo@nml.t.u-tokyo.ac.jp)
*/

#ifndef DQ_ROBOTICS_ROBOT_MODELING_DQ_DIFFERENTIALDRIVEBASE
#define DQ_ROBOTICS_ROBOT_MODELING_DQ_DIFFERENTIALDRIVEBASE

#include<dqrobotics/DQ.h>
#include<dqrobotics/robot_modeling/DQ_HolonomicBase.h>

namespace DQ_robotics
{

class DQ_DifferentialDriveRobot : public DQ_HolonomicBase
{
protected:
    double wheel_radius_;
    double distance_between_wheels_;
public:
    DQ_DifferentialDriveRobot(const double& wheel_radius, const double& distance_between_wheels);

    MatrixXd constraint_jacobian(const double& phi);

    MatrixXd pose_jacobian(const VectorXd& q, const int& to_link);
};

}

#endif
