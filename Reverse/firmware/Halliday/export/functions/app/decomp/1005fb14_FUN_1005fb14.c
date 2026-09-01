/* FUN_1005fb14 @ 0x1005fb14 */

bool FUN_1005fb14(uint param_1)

{
  if ((param_1 & 0x830) != 0) {
    return (bool)0x10;
  }
  if ((param_1 & 0x88) != 0) {
    return (bool)0x20;
  }
  if ((param_1 & 0x741) != 0) {
    return (bool)0x18;
  }
  if ((param_1 & 0x11000) != 0) {
    return (bool)8;
  }
  if ((param_1 & 0x122000) != 0) {
    return (bool)4;
  }
  if ((param_1 & 0x44000) != 0) {
    return (bool)2;
  }
  return (param_1 & DAT_1005fb60) != 0;
}

