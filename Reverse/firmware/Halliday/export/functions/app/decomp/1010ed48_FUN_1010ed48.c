/* FUN_1010ed48 @ 0x1010ed48 */

void FUN_1010ed48(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s10;
  float extraout_s11;
  float extraout_s12;
  float fVar6;
  float extraout_s13;
  float local_38;
  float local_34;
  float local_30;
  
  fVar3 = DAT_1010ee78;
  iVar4 = 0;
  do {
    if (param_2[1] <= iVar4) {
      return;
    }
    for (iVar5 = 0; iVar5 < *param_2; iVar5 = iVar5 + 1) {
      FUN_1010ea5c(param_2,iVar5,iVar4);
      FUN_1010ea5c(param_1,iVar5,iVar4);
      switch(param_4) {
      case 0xb:
        local_38 = extraout_s10 * extraout_s13;
        local_34 = extraout_s11 * extraout_s13;
        fVar6 = extraout_s12;
        goto LAB_1010edba;
      case 0xc:
        local_38 = (extraout_s10 + extraout_s0) * extraout_s13;
        local_34 = (extraout_s11 + extraout_s1) * extraout_s13;
        local_30 = (extraout_s12 + extraout_s2) * extraout_s13;
        break;
      case 0xd:
        iVar1 = (uint)(extraout_s10 < extraout_s0) << 0x1f;
        iVar2 = (uint)(extraout_s11 < extraout_s1) << 0x1f;
        local_38 = extraout_s10;
        if (iVar1 < 0) {
          local_38 = extraout_s0 - extraout_s10;
        }
        if (-1 < iVar1) {
          local_38 = fVar3;
        }
        if (iVar1 < 0) {
          local_38 = local_38 * extraout_s13;
        }
        local_34 = extraout_s11;
        if (iVar2 < 0) {
          local_34 = extraout_s1 - extraout_s11;
        }
        if (-1 < iVar2) {
          local_34 = fVar3;
        }
        if (iVar2 < 0) {
          local_34 = local_34 * extraout_s13;
        }
        local_30 = fVar3;
        if ((int)((uint)(extraout_s12 < extraout_s2) << 0x1f) < 0) {
          fVar6 = extraout_s2 - extraout_s12;
          goto LAB_1010edba;
        }
        break;
      case 0xe:
        local_38 = extraout_s10 * extraout_s0 * extraout_s13;
        local_34 = extraout_s11 * extraout_s1 * extraout_s13;
        fVar6 = extraout_s12 * extraout_s2;
LAB_1010edba:
        local_30 = fVar6 * extraout_s13;
      }
      if (param_3 != 0) {
        FUN_1010ebfc(param_3,iVar5,iVar4,&local_38);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

