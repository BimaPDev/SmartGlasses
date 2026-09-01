/* FUN_1011de72 @ 0x1011de72 */

undefined4 FUN_1011de72(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int extraout_r2;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40;
    uVar1 = 0xffffffea;
  }
  else {
    uVar2 = FUN_1011de62(param_1,param_2,param_1,param_4,param_4);
    if ((int)uVar2 == 1) {
      uVar1 = 0;
      *(int *)(extraout_r2 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      uVar1 = 0xfffffff0;
      *(uint *)(extraout_r2 + 0x88) = *(uint *)(extraout_r2 + 0x88) | 0x40;
    }
  }
  return uVar1;
}

