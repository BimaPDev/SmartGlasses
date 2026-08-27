/* FUN_1400742c @ 0x1400742c */

undefined1 * FUN_1400742c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  iVar1 = DAT_1400758c;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_140074dc:
    FUN_14003cd4(0,0xfffffffc);
    return (undefined1 *)0x0;
  }
  uVar5 = param_2 + 3U & 0xfffffffc;
  if ((uVar5 != 0) && ((uint)(LZCOUNT(uVar5) + LZCOUNT(param_1)) < 0x20)) goto LAB_140074dc;
  uVar8 = uVar5 * param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar4 = 0;
    uVar9 = 0;
LAB_140074b6:
    if (*(int *)(DAT_1400758c + 0x9c) == 0) {
      puVar6 = (undefined1 *)FUN_14004518(*(undefined4 *)(DAT_1400758c + 0x80),0x24,1);
    }
    else {
      puVar6 = (undefined1 *)FUN_140072ec();
    }
    if (puVar6 == (undefined1 *)0x0) {
LAB_140074ca:
      FUN_14003cd4(0,0xfffffffb);
      return (undefined1 *)0x0;
    }
    if (uVar4 != 0) {
      uVar7 = 1;
      goto LAB_14007486;
    }
    iVar2 = FUN_14004518(*(undefined4 *)(iVar1 + 0x78),uVar8,0);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x9c) == 0) {
        FUN_1400459c(*(undefined4 *)(iVar1 + 0x80),puVar6);
      }
      else {
        FUN_140073cc();
      }
      goto LAB_140074ca;
    }
    uVar7 = 3;
  }
  else {
    puVar6 = (undefined1 *)param_3[2];
    if (puVar6 == (undefined1 *)0x0) {
      if (param_3[3] != 0) goto LAB_14007502;
    }
    else if ((((uint)puVar6 & 3) != 0) || ((uint)param_3[3] < 0x24)) {
LAB_14007502:
      FUN_14003cd4(0,0xfffffff7);
      return (undefined1 *)0x0;
    }
    uVar4 = param_3[4];
    uVar9 = *param_3;
    uVar3 = param_3[5];
    if (uVar4 != 0) {
      if (((uVar4 & 3) != 0) || (uVar3 <= uVar8 && uVar8 - uVar3 != 0)) goto LAB_140074ee;
      if (puVar6 != (undefined1 *)0x0) {
        uVar7 = 0;
        goto LAB_14007486;
      }
      goto LAB_140074b6;
    }
    if (uVar3 != 0) {
LAB_140074ee:
      FUN_14003cd4(0,0xfffffff6);
      return (undefined1 *)0x0;
    }
    if (puVar6 == (undefined1 *)0x0) {
      uVar4 = 0;
      goto LAB_140074b6;
    }
    iVar2 = FUN_14004518(*(undefined4 *)(DAT_1400758c + 0x78),uVar8,0);
    if (iVar2 == 0) goto LAB_140074ca;
    uVar7 = 2;
  }
  uVar4 = FUN_14000894(iVar2,0,uVar8);
LAB_14007486:
  *puVar6 = 0xf7;
  *(undefined4 *)(puVar6 + 8) = 0;
  puVar6[2] = uVar7;
  *(undefined4 *)(puVar6 + 4) = uVar9;
  FUN_1400728c(puVar6 + 0xc,param_1,uVar5,uVar4);
  *(undefined4 *)(iVar1 + 0x6c) = DAT_14007588;
  FUN_14003cdc(puVar6,*(undefined4 *)(puVar6 + 4));
  return puVar6;
}

