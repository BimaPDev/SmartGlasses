/* FUN_10117f04 @ 0x10117f04 */

uint FUN_10117f04(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar6 < 0xc) {
    uVar6 = 0xc;
  }
  if (((int)uVar6 < 0) || (uVar6 < param_2)) {
    *param_1 = 0xc;
  }
  else {
    FUN_1011935c();
    piVar1 = DAT_10117fb4;
    puVar3 = (uint *)*DAT_10117fb0;
    for (puVar5 = (uint *)*DAT_10117fb0; puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[1]) {
      uVar4 = *puVar5 - uVar6;
      if (-1 < (int)uVar4) {
        if (0xb < uVar4) {
          *puVar5 = uVar4;
          puVar5 = (uint *)((int)puVar5 + uVar4);
          goto LAB_10117f68;
        }
        if (puVar3 == puVar5) {
          *DAT_10117fb0 = puVar5[1];
        }
        else {
          puVar3[1] = puVar5[1];
        }
        goto LAB_10117f76;
      }
      puVar3 = puVar5;
    }
    if (*DAT_10117fb4 == 0) {
      iVar2 = FUN_101189fc(param_1,0,puVar3,0,param_4);
      *piVar1 = iVar2;
    }
    puVar3 = (uint *)FUN_101189fc(param_1,uVar6);
    if ((puVar3 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar3 + 3U & 0xfffffffc), puVar3 == puVar5 ||
        (iVar2 = FUN_101189fc(param_1,(int)puVar5 - (int)puVar3), iVar2 != -1)))) {
LAB_10117f68:
      *puVar5 = uVar6;
LAB_10117f76:
      FUN_10119368(param_1);
      uVar6 = (int)puVar5 + 0xbU & 0xfffffff8;
      iVar2 = uVar6 - (int)(puVar5 + 1);
      if (iVar2 == 0) {
        return uVar6;
      }
      *(uint *)((int)puVar5 + iVar2) = (int)(puVar5 + 1) - uVar6;
      return uVar6;
    }
    *param_1 = 0xc;
    FUN_10119368(param_1);
  }
  return 0;
}

