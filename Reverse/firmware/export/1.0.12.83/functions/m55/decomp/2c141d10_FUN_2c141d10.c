/* FUN_2c141d10 @ 0x2c141d10 */

undefined1 * FUN_2c141d10(int param_1,int param_2,undefined4 *param_3)

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
  
  iVar1 = DAT_2c141e70;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_2c141dc0:
    FUN_2c13eeec(0,0xfffffffc);
    return (undefined1 *)0x0;
  }
  uVar5 = param_2 + 3U & 0xfffffffc;
  if ((uVar5 != 0) && ((uint)(LZCOUNT(uVar5) + LZCOUNT(param_1)) < 0x20)) goto LAB_2c141dc0;
  uVar8 = uVar5 * param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar4 = 0;
    uVar9 = 0;
LAB_2c141d9a:
    if (*(int *)(DAT_2c141e70 + 0x9c) == 0) {
      puVar6 = (undefined1 *)FUN_2c13f550(*(undefined4 *)(DAT_2c141e70 + 0x80),0x24,1);
    }
    else {
      puVar6 = (undefined1 *)FUN_2c141bd0();
    }
    if (puVar6 == (undefined1 *)0x0) {
LAB_2c141dae:
      FUN_2c13eeec(0,0xfffffffb);
      return (undefined1 *)0x0;
    }
    if (uVar4 != 0) {
      uVar7 = 1;
      goto LAB_2c141d6a;
    }
    iVar2 = FUN_2c13f550(*(undefined4 *)(iVar1 + 0x78),uVar8,0);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x9c) == 0) {
        FUN_2c13f5d4(*(undefined4 *)(iVar1 + 0x80),puVar6);
      }
      else {
        FUN_2c141cb0();
      }
      goto LAB_2c141dae;
    }
    uVar7 = 3;
  }
  else {
    puVar6 = (undefined1 *)param_3[2];
    if (puVar6 == (undefined1 *)0x0) {
      if (param_3[3] != 0) goto LAB_2c141de6;
    }
    else if ((((uint)puVar6 & 3) != 0) || ((uint)param_3[3] < 0x24)) {
LAB_2c141de6:
      FUN_2c13eeec(0,0xfffffff7);
      return (undefined1 *)0x0;
    }
    uVar4 = param_3[4];
    uVar9 = *param_3;
    uVar3 = param_3[5];
    if (uVar4 != 0) {
      if (((uVar4 & 3) != 0) || (uVar3 <= uVar8 && uVar8 - uVar3 != 0)) goto LAB_2c141dd2;
      if (puVar6 != (undefined1 *)0x0) {
        uVar7 = 0;
        goto LAB_2c141d6a;
      }
      goto LAB_2c141d9a;
    }
    if (uVar3 != 0) {
LAB_2c141dd2:
      FUN_2c13eeec(0,0xfffffff6);
      return (undefined1 *)0x0;
    }
    if (puVar6 == (undefined1 *)0x0) {
      uVar4 = 0;
      goto LAB_2c141d9a;
    }
    iVar2 = FUN_2c13f550(*(undefined4 *)(DAT_2c141e70 + 0x78),uVar8,0);
    if (iVar2 == 0) goto LAB_2c141dae;
    uVar7 = 2;
  }
  uVar4 = FUN_2c13e9dc(iVar2,0,uVar8);
LAB_2c141d6a:
  *puVar6 = 0xf7;
  *(undefined4 *)(puVar6 + 8) = 0;
  puVar6[2] = uVar7;
  *(undefined4 *)(puVar6 + 4) = uVar9;
  FUN_2c141b70(puVar6 + 0xc,param_1,uVar5,uVar4);
  *(undefined4 *)(iVar1 + 0x6c) = DAT_2c141e6c;
  FUN_2c13eef4(puVar6,*(undefined4 *)(puVar6 + 4));
  return puVar6;
}

