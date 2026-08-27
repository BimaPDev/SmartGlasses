/* FUN_2c672a48 @ 0x2c672a48 */

undefined8 FUN_2c672a48(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_8 [8];
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 < 0) {
      param_1 = 0;
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  if (param_2 < 0) {
    iVar1 = -param_2 - (uint)(param_1 != 0);
    if (param_4 < 0) {
      uVar2 = FUN_2c672bb0(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
      return uVar2;
    }
    uVar2 = FUN_2c672bb0(-param_1,iVar1,param_3,param_4,local_8);
    return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  if (param_4 < 0) {
    uVar2 = FUN_2c672bb0(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
    return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  uVar2 = FUN_2c672bb0();
  return uVar2;
}

