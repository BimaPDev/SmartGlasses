/* FUN_2c4f29f8 @ 0x2c4f29f8 */

int FUN_2c4f29f8(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5,
                uint param_6,int param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = DAT_2c4f2ab4;
  if (param_8 != 0) {
    do {
      while (*param_3 != -2) {
LAB_2c4f2a2e:
        *param_3 = -2;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x68) + 0x14);
        iVar2 = uVar3 * (param_6 / uVar3);
        param_3[1] = iVar2;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x68) + 0x14);
        uVar4 = *(uint *)(*(int *)(param_1 + 0x68) + 0x28);
        uVar3 = uVar3 * ((param_4 + -1 + uVar3 + param_6) / uVar3);
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        param_3[2] = uVar3;
        iVar2 = FUN_2c4f221c(param_1,param_2,uVar1,param_5,iVar2,param_3[3],uVar3);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      uVar3 = param_3[1];
      if ((param_3[2] + uVar3 <= param_6) || (param_6 < uVar3)) goto LAB_2c4f2a2e;
      uVar4 = (param_3[2] + uVar3) - param_6;
      iVar2 = param_6 - uVar3;
      if (param_8 <= uVar4) {
        uVar4 = param_8;
      }
      param_6 = param_6 + uVar4;
      FUN_2c674668(param_7,iVar2 + param_3[3]);
      param_7 = param_7 + uVar4;
      param_8 = param_8 - uVar4;
    } while (param_8 != 0);
  }
  return 0;
}

