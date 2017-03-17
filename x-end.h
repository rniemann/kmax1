include <thing_libutils/units.scad>
include <thing_libutils/system.scad>
include <config.scad>
include <MCAD/motors.scad>
include <MCAD/stepper.scad>

motor_mount_wall_thick = xaxis_pulley[1] - xaxis_pulley[0]/2 + 4*mm;
xaxis_end_pulley_offset = 41*mm;
xaxis_end_motorsize = lookup(NemaSideSize,xaxis_motor);
xaxis_end_motor_offset=[xaxis_end_motorsize/2+zaxis_bearing_OD/2+1*mm,motor_mount_wall_thick-2*mm,0];
xaxis_end_wz = xaxis_rod_distance+xaxis_rod_d+10*mm;

xaxis_endstop_size_switch = [10.3*mm, 20*mm, 6.3*mm];
xaxis_endstop_screw_offset_switch = [-2.45*mm, 0*mm, 0*mm];

xaxis_endstop_size_SN04 = [34.15*mm, 18.15*mm, 17.8*mm];
xaxis_endstop_screw_offset_SN04 = [-27.5*mm, 0*mm, 0*mm];
xaxis_endstop_offset_SN04 = [-3*mm, 0*mm, 0*mm];

xaxis_z_bearing_mount_dir = X;

function xaxis_end_width(with_motor) = with_motor? xaxis_end_motorsize+xaxis_end_motor_offset[0] - xaxis_end_motorsize/2 : zaxis_bearing_OD/2+zaxis_nut[1];

