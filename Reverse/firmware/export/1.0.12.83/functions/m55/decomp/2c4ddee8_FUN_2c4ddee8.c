/* FUN_2c4ddee8 @ 0x2c4ddee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ddee8(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_3 == (int *)0x0) {
LAB_2c4ddef2:
    uVar4 = 1;
  }
  else {
    param_3[5] = (int)(param_1 + 0x14);
    param_1[0x23] = param_3[6];
    param_1[0x22] = param_3[7];
    param_1[0x24] = param_1[0x24] + param_3[3];
    if ((uint)param_1[0x25] < (uint)param_3[3]) {
      param_1[0x25] = param_3[3];
    }
    if ((uint)param_3[3] < (uint)param_1[0x26]) {
      param_1[0x26] = param_3[3];
    }
    if (((char)param_1[0x29] == '\0') ||
       (iVar1 = func_0x2c4e1f9c(param_1 + 0x28,param_3), iVar1 != 0)) {
      if ((param_1[6] != 0) &&
         (iVar1 = FUN_2c4df4f8((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10,0x800000), iVar1 == 0
         )) {
        (*(code *)param_1[6])(param_3[2] + *param_3,param_3[3],param_1[7]);
      }
      if (param_1[3] != 0) {
        if ((param_3[4] & 0x100U) == 0) {
          if (param_3[4] != 0 || param_3[3] != 0) {
            FUN_2c4ddcac(param_1,param_3);
            goto LAB_2c4ddfc4;
          }
        }
        else {
LAB_2c4ddfc4:
          if (param_3[3] != 0) goto LAB_2c4ddef2;
        }
        param_3[2] = 0;
        goto LAB_2c4ddef2;
      }
      if (((code *)param_1[2] == (code *)0x0) ||
         (iVar1 = (*(code *)param_1[2])(param_3,param_1[1]), iVar1 != 0)) goto LAB_2c4ddfc4;
      uVar3 = 2;
      uVar5 = 0xae;
      uVar2 = _LAB_2c4de014;
      uVar6 = _LAB_2c4de010;
    }
    else {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x9f,1);
      uVar5 = 0x9f;
      uVar3 = 0;
      uVar2 = _LAB_2c4de004;
      uVar6 = _LAB_2c4de000;
    }
    uVar4 = 0;
    FUN_2c4e0504(uVar2,uVar3,0,0,_LAB_2c4de00c,uVar5,_LAB_2c4de008,0x1300,uVar6);
  }
  return uVar4;
}

