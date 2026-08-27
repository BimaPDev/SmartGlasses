/* FUN_2c4f0eb4 @ 0x2c4f0eb4 */

int FUN_2c4f0eb4(int param_1,int *param_2,int *param_3,uint param_4,int param_5,uint param_6,
                int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_8 == 0) {
    return 0;
  }
  do {
    while ((param_2 != (int *)0x0 && (*param_2 == param_5))) {
      uVar4 = param_2[1];
      if (param_2[2] + uVar4 <= param_6) break;
      if (param_6 < uVar4) {
        iVar3 = *param_3;
        uVar5 = uVar4 - param_6;
        if (param_8 <= uVar4 - param_6) {
          uVar5 = param_8;
        }
        goto joined_r0x2c4f0eea;
      }
      uVar6 = (param_2[2] + uVar4) - param_6;
      iVar3 = param_2[3];
      if (param_8 <= uVar6) {
        uVar6 = param_8;
      }
LAB_2c4f0ff6:
      iVar1 = -uVar6;
      FUN_2c674668(param_7,(param_6 - uVar4) + iVar3);
LAB_2c4f0fd4:
      param_7 = param_7 + uVar6;
      param_8 = param_8 + iVar1;
      param_6 = param_6 + uVar6;
      if (param_8 == 0) {
        return 0;
      }
    }
    iVar3 = *param_3;
    uVar5 = param_8;
joined_r0x2c4f0eea:
    if (param_5 == iVar3) {
      uVar4 = param_3[1];
      if (param_6 < param_3[2] + uVar4) {
        if (uVar4 <= param_6) {
          uVar6 = (param_3[2] + uVar4) - param_6;
          iVar3 = param_3[3];
          if (uVar5 <= uVar6) {
            uVar6 = uVar5;
          }
          goto LAB_2c4f0ff6;
        }
        if (uVar4 - param_6 <= uVar5) {
          uVar5 = uVar4 - param_6;
        }
      }
    }
    if (param_4 <= param_8) {
      iVar3 = *(int *)(param_1 + 0x68);
      uVar4 = *(uint *)(iVar3 + 0x14);
      if ((param_6 == uVar4 * (param_6 / uVar4)) && (uVar4 <= param_8)) {
        iVar1 = uVar5 - uVar4 * (uVar5 / uVar4);
        uVar6 = uVar5 - iVar1;
        iVar3 = (**(code **)(iVar3 + 4))(iVar3,param_5,param_6,param_7,uVar6);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar1 = iVar1 - uVar5;
        goto LAB_2c4f0fd4;
      }
    }
    *param_3 = param_5;
    uVar4 = *(uint *)(*(int *)(param_1 + 0x68) + 0x14);
    iVar3 = param_6 - uVar4 * (param_6 / uVar4);
    iVar2 = param_6 - iVar3;
    param_3[1] = iVar2;
    iVar1 = *(int *)(param_1 + 0x68);
    uVar4 = *(uint *)(iVar1 + 0x14);
    uVar4 = uVar4 * (((param_4 - 1) + uVar4 + param_6) / uVar4);
    if (*(uint *)(iVar1 + 0x1c) < uVar4) {
      uVar4 = *(uint *)(iVar1 + 0x1c);
    }
    uVar4 = (iVar3 - param_6) + uVar4;
    if (*(uint *)(iVar1 + 0x28) <= uVar4) {
      uVar4 = *(uint *)(iVar1 + 0x28);
    }
    param_3[2] = uVar4;
    iVar3 = (**(code **)(*(int *)(param_1 + 0x68) + 4))
                      (*(int *)(param_1 + 0x68),param_5,iVar2,param_3[3],uVar4);
    if (iVar3 != 0) {
      return iVar3;
    }
  } while( true );
}

