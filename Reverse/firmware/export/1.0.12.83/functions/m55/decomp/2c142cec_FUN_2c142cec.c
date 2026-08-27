/* FUN_2c142cec @ 0x2c142cec */

uint FUN_2c142cec(undefined4 param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0xffffffff) {
LAB_2c142cf4:
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = param_2 & 0xff;
    *(ushort *)(param_3 + 3) = (ushort)param_3[3] & 0xffdf;
    uVar2 = param_3[1];
    if (param_3[0xd] == 0) {
      uVar3 = *param_3;
      if (((param_3[4] != 0) && (param_3[4] < uVar3)) && (*(byte *)(uVar3 - 1) == uVar4)) {
        *param_3 = uVar3 - 1;
        param_3[1] = uVar2 + 1;
        return uVar4;
      }
      param_3[0xf] = uVar3;
      param_3[0x10] = uVar2;
      param_3[0xd] = (uint)(param_3 + 0x11);
      param_3[0xe] = 3;
      *(undefined1 *)((int)param_3 + 0x46) = (char)param_2;
      *param_3 = (uint)((int)param_3 + 0x46);
      uVar2 = 1;
    }
    else {
      if (((int)param_3[0xe] <= (int)uVar2) &&
         (iVar1 = func_0x2c1438e4(param_1,param_3,uVar2,param_3[0xe],param_4), iVar1 != 0))
      goto LAB_2c142cf4;
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      *(char *)(uVar2 - 1) = (char)param_2;
      uVar2 = param_3[1] + 1;
    }
    param_3[1] = uVar2;
  }
  return uVar4;
}

