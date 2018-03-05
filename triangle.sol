pragma solidity ^0.4.13;

contract ThirdAngle {
  function otherAngle(int angle1, int angle2) returns (int) {
    require (angle1 > 0);
    require (angle2 > 0);
    require (angle1 + angle2 < 180);
    return 180-angle1-angle2;
  }
}
